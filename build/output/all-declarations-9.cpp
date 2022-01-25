#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_autoLayoutDocumentDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                     GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_autoLayoutDocumentDeclarationAST * object = (const cPtr_autoLayoutDocumentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutDocumentDeclarationAST) ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = object ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 47)) ;
  }
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = object ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mClassName (), temp_3.readProperty_mRootEntityName () COMMA_SOURCE_FILE ("document-auto-layout.galgas", 48)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_autoLayoutDocumentDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST.mSlotID,
                                               extensionMethod_autoLayoutDocumentDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_autoLayoutDocumentDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_autoLayoutDocumentDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDocumentDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_autoLayoutDocumentDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_autoLayoutDocumentDeclarationAST * object = (const cPtr_autoLayoutDocumentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutDocumentDeclarationAST) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_autoLayoutDocumentDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST.mSlotID,
                                extensionGetter_autoLayoutDocumentDeclarationAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_autoLayoutDocumentDeclarationAST_nodeKey (defineExtensionGetter_autoLayoutDocumentDeclarationAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_autoLayoutDocumentDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_autoLayoutDocumentDeclarationAST * object = (const cPtr_autoLayoutDocumentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutDocumentDeclarationAST) ;
  GALGAS_actionMap var_actionMap_6000 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = object ;
  routine_buildActionMap (temp_0.readProperty_mActionDeclarationList (), var_actionMap_6000, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 161)) ;
  }
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = object ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GALGAS_classKind::constructor_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 164)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.galgas", 165)), var_actionMap_6000, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 162)) ;
  }
  cEnumerator_actionMap enumerator_6167 (var_actionMap_6000, kENUMERATION_UP) ;
  while (enumerator_6167.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = object ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (temp_3.readProperty_mClassName ().readProperty_string (), enumerator_6167.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 170))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 170)) ;
    enumerator_6167.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_autoLayoutDocumentDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST.mSlotID,
                                           extensionMethod_autoLayoutDocumentDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_autoLayoutDocumentDeclarationAST_firstAnalysisPhase (defineExtensionMethod_autoLayoutDocumentDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_autoLayoutDocumentDeclarationAST_fourthAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_autoLayoutDocumentDeclarationAST * object = (const cPtr_autoLayoutDocumentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutDocumentDeclarationAST) ;
  GALGAS_propertyMap var_preferencesPropertyMap_6717 ;
  GALGAS_classKind joker_6684 ; // Joker input parameter
  GALGAS_actionMap joker_6723_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_6723_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 184)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("document-auto-layout.galgas", 184))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 184)), joker_6684, var_preferencesPropertyMap_6717, joker_6723_2, joker_6723_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 183)) ;
  GALGAS_propertyMap var_documentPropertyMap_6876 ;
  GALGAS_actionMap var_documentActionMap_6903 ;
  GALGAS_propertyGenerationList var_documentPropertyGenerationList_6943 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = object ;
  GALGAS_classKind joker_6846 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("document-auto-layout.galgas", 191))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 191)), joker_6846, var_documentPropertyMap_6876, var_documentActionMap_6903, var_documentPropertyGenerationList_6943, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 190)) ;
  GALGAS_propertyMap var_rootPropertyMap_7080 ;
  GALGAS_actionMap var_rootActionMap_7110 ;
  GALGAS_propertyGenerationList var_rootPropertyGenerationList_7153 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = object ;
  GALGAS_classKind joker_7054 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_7054, var_rootPropertyMap_7080, var_rootActionMap_7110, var_rootPropertyGenerationList_7153, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 198)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_7517 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_7583 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_7655 ;
  GALGAS_decoratedOutletMap var_outletMap_7694 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_7766 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_7866 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = object ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = object ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_4 = object ;
  routine_analyzeOutlets (GALGAS_bool (false), var_rootPropertyMap_7080, var_preferencesPropertyMap_6717, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_6876, var_documentActionMap_6903, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_7517, var_multipleBindingGenerationList_7583, var_actionBindingListForGeneration_7655, var_outletMap_7694, var_tableViewBindingGenerationList_7766, var_ebViewGraphicControllerBindingGenerationList_7866, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 206)) ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_5 = object ;
  cEnumerator_arrayControllerBindingListAST enumerator_7939 (temp_5.readProperty_mArrayControllerBindingListAST (), kENUMERATION_UP) ;
  while (enumerator_7939.hasCurrentObject ()) {
    switch (enumerator_7939.current_mHiddenSelectionViewBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_8645 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_7939.current_mHiddenSelectionViewBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_8116_expression = extractPtr_8645->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_8354 ;
        GALGAS_typeKind var_type_8382 ;
        GALGAS_location var_errorLocation_8419 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_8116_expression.ptr (), GALGAS_bool (false), var_rootPropertyMap_7080, ioArgument_ioSemanticContext, var_documentPropertyMap_6876, var_hiddenExpression_8354, var_type_8382, var_errorLocation_8419, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 230)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_type_8382.getter_isBoolType (SOURCE_FILE ("document-auto-layout.galgas", 239)).operator_not (SOURCE_FILE ("document-auto-layout.galgas", 239)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_8419, GALGAS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 240)) ;
          }
        }
        var_multipleBindingGenerationList_7583.addAssign_operation (enumerator_7939.current_mControllerName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_8354  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 242)) ;
      }
      break ;
    }
    enumerator_7939.gotoNextObject () ;
  }
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_8755 = GALGAS_autoLayoutViewDeclarationMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.galgas", 249)) ;
  GALGAS_viewGenerationList var_viewGenerationList_8805 = GALGAS_viewGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 250)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_8887 = GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 251)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_8941 = GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.galgas", 252)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_8993 = GALGAS_autoLayoutOutletMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.galgas", 253)) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_8 = object ;
  cEnumerator_astViewDeclarationList enumerator_9030 (temp_8.readProperty_mViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_9030.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_8755.setter_insertKey (enumerator_9030.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 255)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_9501 ;
    const GALGAS_autoLayoutDocumentDeclarationAST temp_9 = object ;
    callExtensionMethod_check ((const cPtr_astAbstractViewDeclaration *) enumerator_9030.current_mView (HERE).ptr (), enumerator_9030.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_8755, GALGAS_bool (false), var_rootPropertyMap_7080, var_preferencesPropertyMap_6717, ioArgument_ioSemanticContext, var_documentPropertyMap_6876, var_documentActionMap_6903, temp_9.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_8887, var_configuratorMap_8941, var_autoLayoutOutletMap_8993, var_viewGeneration_9501, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 256)) ;
    var_viewGenerationList_8805.addAssign_operation (enumerator_9030.current_mViewName (HERE).readProperty_string (), var_viewGeneration_9501  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 272)) ;
    enumerator_9030.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_10 = object ;
  var_viewDeclarationMap_8755.method_searchKey (temp_10.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 274)) ;
  GALGAS_autoLayoutToolbarItemGenerationList var_autoLayoutToolbarItemGenerationList_9736 = GALGAS_autoLayoutToolbarItemGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 276)) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_11 = object ;
  cEnumerator_astAutoLayoutToolbarItemList enumerator_9753 (temp_11.readProperty_mAutoLayoutToolbarItemList (), kENUMERATION_UP) ;
  while (enumerator_9753.hasCurrentObject ()) {
    switch (enumerator_9753.current_mItem (HERE).enumValue ()) {
    case GALGAS_astAutoLayoutToolbarItem::kNotBuilt:
      break ;
    case GALGAS_astAutoLayoutToolbarItem::kEnum_space:
      {
        var_autoLayoutToolbarItemGenerationList_9736.addAssign_operation (GALGAS_autoLayoutToolbarItemGeneration::constructor_space (SOURCE_FILE ("document-auto-layout.galgas", 280))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 280)) ;
      }
      break ;
    case GALGAS_astAutoLayoutToolbarItem::kEnum_view:
      {
        const cEnumAssociatedValues_astAutoLayoutToolbarItem_view * extractPtr_10479 = (const cEnumAssociatedValues_astAutoLayoutToolbarItem_view *) (enumerator_9753.current_mItem (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_9899_title = extractPtr_10479->mAssociatedValue0 ;
        const GALGAS_astComputedViewInstruction extractedValue_9911_instruction = extractPtr_10479->mAssociatedValue1 ;
        GALGAS_abstractViewInstructionGeneration var_generatedInstruction_10361 ;
        const GALGAS_autoLayoutDocumentDeclarationAST temp_12 = object ;
        callExtensionMethod_generateCode ((const cPtr_astComputedViewInstruction *) extractedValue_9911_instruction.ptr (), var_viewDeclarationMap_8755, GALGAS_bool (false), var_rootPropertyMap_7080, var_preferencesPropertyMap_6717, ioArgument_ioSemanticContext, var_documentPropertyMap_6876, var_documentActionMap_6903, temp_12.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_8887, var_configuratorMap_8941, var_autoLayoutOutletMap_8993, var_generatedInstruction_10361, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 282)) ;
        var_autoLayoutToolbarItemGenerationList_9736.addAssign_operation (GALGAS_autoLayoutToolbarItemGeneration::constructor_view (extractedValue_9899_title.readProperty_string (), var_generatedInstruction_10361  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 297))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 297)) ;
      }
      break ;
    }
    enumerator_9753.gotoNextObject () ;
  }
  ioArgument_ioGeneration.setter_setMGenerateEBManagedAutoLayoutDocumentSwift (GALGAS_bool (true) COMMA_SOURCE_FILE ("document-auto-layout.galgas", 301)) ;
  GALGAS_autoLayoutOutletLinkerGenerationList var_outletLinkerGenerationList_10674 = GALGAS_autoLayoutOutletLinkerGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 303)) ;
  GALGAS_stringset var_linkerNameSet_10710 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-auto-layout.galgas", 304)) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_13 = object ;
  cEnumerator_astAutoLayoutOutletLinkerList enumerator_10747 (temp_13.readProperty_mOutletLinkerList (), kENUMERATION_UP) ;
  while (enumerator_10747.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_linkerNameSet_10710.getter_hasKey (enumerator_10747.current_mLinkerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.galgas", 306)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_10747.current_mLinkerName (HERE).readProperty_location (), GALGAS_string ("duplicated linker name"), fixItArray15  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 307)) ;
      }
    }
    var_linkerNameSet_10710.addAssign_operation (enumerator_10747.current_mLinkerName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 309)) ;
    GALGAS__32_stringlist var_outletNameAndTypeNameList_10976 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 310)) ;
    cEnumerator_lstringlist enumerator_11001 (enumerator_10747.current_mOutletNameList (HERE), kENUMERATION_UP) ;
    while (enumerator_11001.hasCurrentObject ()) {
      GALGAS_string var_outletTypeName_11091 ;
      var_autoLayoutOutletMap_8993.method_searchKey (enumerator_11001.current_mValue (HERE), var_outletTypeName_11091, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 312)) ;
      var_outletNameAndTypeNameList_10976.addAssign_operation (enumerator_11001.current_mValue (HERE).readProperty_string (), var_outletTypeName_11091  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 313)) ;
      enumerator_11001.gotoNextObject () ;
    }
    var_outletLinkerGenerationList_10674.addAssign_operation (enumerator_10747.current_mLinkerName (HERE).readProperty_string (), var_outletNameAndTypeNameList_10976  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 315)) ;
    enumerator_10747.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_16 = object ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_17 = object ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_18 = object ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_19 = object ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_autoLayoutDocumentFileGeneration::constructor_new (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mRootEntityName ().readProperty_string (), temp_18.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_6943, var_outletMap_7694, var_autoLayoutOutletMap_8993, var_actionBindingListForGeneration_7655, var_regularBindingsGenerationList_7517, var_multipleBindingGenerationList_7583, var_tableViewBindingGenerationList_7766, var_ebViewGraphicControllerBindingGenerationList_7866, var_viewGenerationList_8805, var_autoLayoutToolbarItemGenerationList_9736, var_implicitViewFunctionGenerationList_8887, var_configuratorMap_8941, temp_19.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_10674  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 318))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 318)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_autoLayoutDocumentDeclarationAST_fourthAnalysisPhase (void) {
  enterExtensionMethod_fourthAnalysisPhase (kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST.mSlotID,
                                            extensionMethod_autoLayoutDocumentDeclarationAST_fourthAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_autoLayoutDocumentDeclarationAST_fourthAnalysisPhase (defineExtensionMethod_autoLayoutDocumentDeclarationAST_fourthAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_autoLayoutDocumentFileGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                                           const GALGAS_string constinArgument_inOutputDirectory,
                                                                           GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_autoLayoutDocumentFileGeneration * object = (const cPtr_autoLayoutDocumentFileGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutDocumentFileGeneration) ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_0 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_1 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_2 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_3 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_4 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_5 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_6 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_7 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_8 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_9 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_10 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_11 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_12 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_13 = object ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_14 = object ;
  GALGAS_string temp_15 ;
  const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, temp_14.readProperty_mCustomSuperClassName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_string ("EBAutoLayoutManagedDocument") ;
  }else if (kBoolFalse == test_16) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_17 = object ;
    temp_15 = temp_17.readProperty_mCustomSuperClassName () ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_18 = object ;
  GALGAS_string var_s_14133 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mAutoLayoutToolbarItemGenerationList (), temp_13.readProperty_mImplicitViewFunctionGenerationList (), temp_15, temp_18.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.galgas", 382))) ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_19 = object ;
  GALGAS_string var_fileName_14858 = GALGAS_string ("document-").add_operation (temp_19.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 400)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 400)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_14858  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 401)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14858, var_s_14133, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 402)) ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_20 = object ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_15043 (temp_20.readProperty_mConfiguratorMap (), kENUMERATION_UP) ;
  while (enumerator_15043.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_21 = object ;
    GALGAS_string var_s_15082 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_21.readProperty_mDocumentName (), enumerator_15043.current_lkey (HERE).readProperty_string (), enumerator_15043.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.galgas", 408))) ;
    GALGAS_string var_header_15269 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 413)).add_operation (GALGAS_string ("\n"
      "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
      "//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 413)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 415)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 415)).add_operation (GALGAS_string ("import Cocoa\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 415)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 416)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 417)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 417)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_22 = object ;
    GALGAS_string var_fileName_15618 = GALGAS_string ("configurator-").add_operation (temp_22.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 418)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 418)).add_operation (enumerator_15043.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 418)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 418)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15618  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 419)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_15618, GALGAS_string ("//"), var_header_15269, GALGAS_string ("\n"
      "\n"), var_s_15082, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n"
      "}\n"
      "\n"
      "//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 428)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 428)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 420)) ;
    }
    enumerator_15043.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_23 = object ;
  cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_16197 (temp_23.readProperty_mOutletLinkerGenerationList (), kENUMERATION_UP) ;
  while (enumerator_16197.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_24 = object ;
    GALGAS_string var_s_16247 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_24.readProperty_mDocumentName (), enumerator_16197.current_mLinkerName (HERE), enumerator_16197.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.galgas", 433))) ;
    GALGAS_string var_header_16424 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 438)).add_operation (GALGAS_string ("\n"
      "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
      "//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 438)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 440)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 440)).add_operation (GALGAS_string ("import Cocoa\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 440)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 441)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 442)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 442)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_25 = object ;
    GALGAS_string var_fileName_16773 = GALGAS_string ("linker-").add_operation (temp_25.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 443)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 443)).add_operation (enumerator_16197.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 443)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 443)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_16773  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 444)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_16773, GALGAS_string ("//"), var_header_16424, GALGAS_string ("\n"
      "\n"), var_s_16247, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n"
      "}\n"
      "\n"
      "//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 453)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 453)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 445)) ;
    }
    enumerator_16197.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_autoLayoutDocumentFileGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration.mSlotID,
                                     extensionMethod_autoLayoutDocumentFileGeneration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_autoLayoutDocumentFileGeneration_generateCode (defineExtensionMethod_autoLayoutDocumentFileGeneration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutDocumentGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutDocumentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0,
  3,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_DOCUMENT_5F_CLASS_5F_NAME,
                                                                                               const GALGAS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                               const GALGAS_string & in_MAIN_5F_VIEW_5F_NAME,
                                                                                               const GALGAS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                               const GALGAS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP,
                                                                                               const GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                                               const GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                                               const GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                               const GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                               const GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                               const GALGAS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                               const GALGAS_autoLayoutToolbarItemGenerationList & in_TOOLBAR_5F_ITEM_5F_LIST,
                                                                                               const GALGAS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                               const GALGAS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                               const GALGAS_autoLayoutOutletLinkerGenerationList & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "@objc(" ;
  result << in_DOCUMENT_5F_CLASS_5F_NAME.stringValue () ;
  result << ") class " ;
  result << in_DOCUMENT_5F_CLASS_5F_NAME.stringValue () ;
  result << " : " ;
  result << in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME.stringValue () ;
  result << ", NSToolbarDelegate {\n"
    "\n" ;
  GALGAS_uint index_598_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_598 (in_DOCUMENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_598.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_598.current_mProperty (HERE).ptr (), GALGAS_bool (false), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)).stringValue () ;
      index_598_.increment () ;
      enumerator_598.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Outlets\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_999_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_999 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_999.hasCurrentObject ()) {
      result << "  weak final var " ;
      result << enumerator_999.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : AutoLayout" ;
      result << enumerator_999.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_999_.increment () ;
      enumerator_999.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Outlets\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_1405_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_1405 (in_OUTLET_5F_GENERATION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1405.hasCurrentObject ()) {
      result << "  @IBOutlet final var " ;
      result << enumerator_1405.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : " ;
      result << enumerator_1405.current_mOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1405_.increment () ;
      enumerator_1405.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Multiple bindings controllers\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_1855_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_1855 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1855.hasCurrentObject ()) {
      result << "//  var mController_" ;
      result << enumerator_1855.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_1855.current_mBindingName (HERE).stringValue () ;
      result << " : MultipleBindingController_" ;
      result << enumerator_1855.current_mBindingName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1855_.increment () ;
      enumerator_1855.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    displayName\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var displayName : String\? {\n"
    "    get { return super.displayName }\n"
    "    set {\n"
    "      super.displayName = newValue\n"
    "      self.documentFileName_property.observedObjectDidChange ()\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    populateExplorerWindow\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    override func populateExplorerWindow (_ y : inout CGFloat, view : NSView) {\n" ;
  GALGAS_uint index_2857_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2857 (in_DOCUMENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2857.hasCurrentObject ()) {
      result << callExtensionGetter_populateExplorerWindowCode ((const cPtr_propertyGeneration *) enumerator_2857.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 61)).stringValue () ;
      index_2857_.increment () ;
      enumerator_2857.gotoNextObject () ;
    }
  }
  result << "   //---\n"
    "      super.populateExplorerWindow (&y, view:view)\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    rootEntityClassName\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override final func rootEntityClassName () -> String {\n"
    "    return \"" ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << "\"\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    rootObject\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final var rootObject : " ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << " { return self.mRootObject as! " ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << " }\n"
    "\n" ;
  GALGAS_uint index_3757_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_3757 (in_VIEW_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3757.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    VIEW " ;
      result << enumerator_3757.current_mViewName (HERE).stringValue () ;
      result << "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n" ;
      result << callExtensionGetter_generate ((const cPtr_abstractViewGeneration *) enumerator_3757.current_mView (HERE).ptr (), enumerator_3757.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 87)).stringValue () ;
      index_3757_.increment () ;
      enumerator_3757.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4154_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_4154 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4154.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    IMPLICIT VIEW " ;
      result << index_4154_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 91)).stringValue () ;
      result << "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  fileprivate final func computeImplicitView_" ;
      result << index_4154_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 93)).stringValue () ;
      result << " () -> NSView {\n" ;
      result << callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_4154.current_mInstruction (HERE).ptr (), GALGAS_string ("view"), GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 94)).stringValue () ;
      result << "    return view\n"
        "  }\n"
        "\n" ;
      index_4154_idx.increment () ;
      enumerator_4154.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Build User Interface\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func ebBuildUserInterface () {\n"
    "  " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TOOLBAR_5F_ITEM_5F_LIST.getter_length (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 103)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//--- Build tool bar\n"
      "    let toolbar = NSToolbar (identifier: NSToolbar.Identifier (\"" ;
    result << in_DOCUMENT_5F_CLASS_5F_NAME.stringValue () ;
    result << "\"))\n"
      "    toolbar.allowsUserCustomization = false\n"
      "    toolbar.displayMode = .default\n"
      "    toolbar.delegate = self\n"
      "    self.windowForSheet\?.toolbar = toolbar\n"
      "  " ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  //--------------------------- Read documentFileName model\n"
    "    self.documentFileName_property.mReadModelFunction = { [weak self] in\n"
    "      if let r = self\?.displayName {\n"
    "        return .single (r)\n"
    "      }else{\n"
    "        return .single (\"\")\n"
    "      }\n"
    "    }\n"
    "  //--- Build window content view\n"
    "    self.configureProperties ()\n"
    "    let mainView = self." ;
  result << in_MAIN_5F_VIEW_5F_NAME.stringValue () ;
  result << "\n"
    "  //--- Call outlet linkers\n" ;
  GALGAS_uint index_5711_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_5711 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5711.hasCurrentObject ()) {
      result << "    self.linker_" ;
      result << enumerator_5711.current_mLinkerName (HERE).stringValue () ;
      result << " (" ;
      GALGAS_uint index_5820_ (0) ;
      if (enumerator_5711.current_mOutletNameAndTypeNameList (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_5820 (enumerator_5711.current_mOutletNameAndTypeNameList (HERE), kENUMERATION_UP) ;
        while (enumerator_5820.hasCurrentObject ()) {
          result << "self." ;
          result << enumerator_5820.current_mValue_30_ (HERE).stringValue () ;
          if (enumerator_5820.hasNextObject ()) {
            result << ", " ;
          }
          index_5820_.increment () ;
          enumerator_5820.gotoNextObject () ;
        }
      }
      result << ")\n" ;
      index_5711_.increment () ;
      enumerator_5711.gotoNextObject () ;
    }
  }
  result << "  //--- Assign main view to window\n"
    "/*    if let windowSize = self.windowForSheet\?.frame.size {\n"
    "      mainView.frame.size = windowSize\n"
    "    } */\n"
    "    self.windowForSheet\?.contentView = AutoLayoutWindowContentView (view: mainView)\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Toolbar\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func toolbarAllowedItemIdentifiers (_ toolbar: NSToolbar) -> [NSToolbarItem.Identifier] {\n"
    "    return self.toolbarDefaultItemIdentifiers (toolbar)\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func toolbarDefaultItemIdentifiers (_ toolbar: NSToolbar) -> [NSToolbarItem.Identifier] {\n"
    "    return [" ;
  GALGAS_uint index_6829_idx (0) ;
  if (in_TOOLBAR_5F_ITEM_5F_LIST.isValid ()) {
    cEnumerator_autoLayoutToolbarItemGenerationList enumerator_6829 (in_TOOLBAR_5F_ITEM_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6829.hasCurrentObject ()) {
      switch (enumerator_6829.current_mItem (HERE).enumValue ()) {
      case GALGAS_autoLayoutToolbarItemGeneration::kNotBuilt :
        break ;
      case GALGAS_autoLayoutToolbarItemGeneration::kEnum_space :
        {
          result << GALGAS_string (".flexibleSpace").stringValue () ;
        }
        break ;
      case GALGAS_autoLayoutToolbarItemGeneration::kEnum_view :
        {
          result << GALGAS_string ("NSToolbarItem.Identifier (\"").stringValue () ;
          result << index_6829_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 156)).stringValue () ;
          result << GALGAS_string ("\")").stringValue () ;
        }
        break ;
      }
      if (enumerator_6829.hasNextObject ()) {
        result << GALGAS_string (", ").stringValue () ;
      }
      index_6829_idx.increment () ;
      enumerator_6829.gotoNextObject () ;
    }
  }
  result << "]\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func toolbar (_ toolbar: NSToolbar,\n"
    "                      itemForItemIdentifier itemIdentifier: NSToolbarItem.Identifier,\n"
    "                      willBeInsertedIntoToolbar flag: Bool) -> NSToolbarItem\? {\n"
    "    switch itemIdentifier.rawValue {\n" ;
  GALGAS_uint index_7455_idx (0) ;
  if (in_TOOLBAR_5F_ITEM_5F_LIST.isValid ()) {
    cEnumerator_autoLayoutToolbarItemGenerationList enumerator_7455 (in_TOOLBAR_5F_ITEM_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7455.hasCurrentObject ()) {
      switch (enumerator_7455.current_mItem (HERE).enumValue ()) {
      case GALGAS_autoLayoutToolbarItemGeneration::kNotBuilt :
        break ;
      case GALGAS_autoLayoutToolbarItemGeneration::kEnum_space :
        {
          result << "    case NSToolbarItem.Identifier.flexibleSpace.rawValue :\n"
            "      return NSToolbarItem (itemIdentifier: .flexibleSpace)\n" ;
        }
        break ;
      case GALGAS_autoLayoutToolbarItemGeneration::kEnum_view :
        {
          const cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view * extractPtr_7961 = (const cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view *) (enumerator_7455.current_mItem (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_7637_title = extractPtr_7961->mAssociatedValue0 ;
          const GALGAS_abstractViewInstructionGeneration extractedValue_7649_instruction = extractPtr_7961->mAssociatedValue1 ;
          result << "    case \"" ;
          result << index_7455_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 175)).stringValue () ;
          result << "\" :\n"
            "      let itemId = NSToolbarItem.Identifier (\"" ;
          result << index_7455_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 176)).stringValue () ;
          result << "\")\n"
            "      let toolbarItem = NSToolbarItem (itemIdentifier: itemId)\n"
            "      toolbarItem.label = " ;
          result << extractedValue_7637_title.getter_utf_38_Representation (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 178)).stringValue () ;
          result << "\n"
            "      toolbarItem.isEnabled = true\n" ;
          result << callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) extractedValue_7649_instruction.ptr (), GALGAS_string ("view"), GALGAS_string ("      "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 180)).stringValue () ;
          result << "      toolbarItem.view = view\n"
            "      return toolbarItem\n" ;
        }
        break ;
      }
      index_7455_idx.increment () ;
      enumerator_7455.gotoNextObject () ;
    }
  }
  result << "    default :\n"
    "      return nil\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    configureProperties\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final private func configureProperties () {\n"
    "    let start = Date ()\n"
    "    var opIdx = 0\n" ;
  GALGAS_uint index_8499_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8499 (in_DOCUMENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8499.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_8499.current_mProperty (HERE).ptr (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 199)).stringValue () ;
      result << "    if LOG_OPERATION_DURATION {\n"
        "      Swift.print (\"  op\\(opIdx) \\(Int (Date ().timeIntervalSince (start) * 1000.0)) ms\")\n"
        "      opIdx += 1\n"
        "    }\n" ;
      index_8499_.increment () ;
      enumerator_8499.gotoNextObject () ;
    }
  }
  result << "    if LOG_OPERATION_DURATION {\n"
    "      let durationMS = Int (Date ().timeIntervalSince (start) * 1000.0)\n"
    "      Swift.print (\"Configure properties \\(durationMS) ms\")\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "/*  final private func installBindings () {\n"
    "    let start = Date ()\n"
    "  //--------------------------- Install table view bindings\n" ;
  GALGAS_uint index_9228_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_9228 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9228.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_9228.current_mTableValueBindingControllerName (HERE).stringValue () ;
      result << ".bind_tableView (self." ;
      result << enumerator_9228.current_mTableValueBindingOutletName (HERE).stringValue () ;
      result << ", file: #file, line: #line)\n" ;
      index_9228_.increment () ;
      enumerator_9228.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install ebView bindings\n" ;
  GALGAS_uint index_9534_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_9534 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9534.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_9534.current_mArrayControllerControllerName (HERE).stringValue () ;
      result << ".bind_ebView (self." ;
      result << enumerator_9534.current_mEBViewOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_9534_.increment () ;
      enumerator_9534.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install regular bindings\n" ;
  GALGAS_uint index_9796_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_regularBindingsGenerationList enumerator_9796 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9796.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_9796.current_mOutletName (HERE).stringValue () ;
      result << "\?.bind_" ;
      result << enumerator_9796.current_mBindingName (HERE).stringValue () ;
      result << " (" ;
      GALGAS_uint index_9904_ (0) ;
      if (enumerator_9796.current_mBoundObjectList (HERE).isValid ()) {
        cEnumerator_boundObjectList enumerator_9904 (enumerator_9796.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
        while (enumerator_9904.hasCurrentObject ()) {
          result << enumerator_9904.current_mBoundObjectString (HERE).stringValue () ;
          result << ", " ;
          index_9904_.increment () ;
          enumerator_9904.gotoNextObject () ;
        }
      }
      result << "file: #file, line: #line" ;
      result << enumerator_9796.current_mBindingOptionsString (HERE).stringValue () ;
      result << ")\n" ;
      index_9796_.increment () ;
      enumerator_9796.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install multiple bindings\n" ;
  GALGAS_uint index_10152_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_10152 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10152.hasCurrentObject ()) {
      result << "    do{\n"
        "      let controller = MultipleBindingController_" ;
      result << enumerator_10152.current_mBindingName (HERE).stringValue () ;
      result << " (\n"
        "        computeFunction: " ;
      result << callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_10152.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 239)).stringValue () ;
      result << "\xC3""\xB8""}\n"
        "        outlet: self." ;
      result << enumerator_10152.current_mOutletName (HERE).stringValue () ;
      result << "\n"
        "      )\n"
        "      self.mController_" ;
      result << enumerator_10152.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_10152.current_mBindingName (HERE).stringValue () ;
      result << " = controller\n"
        "    }\n" ;
      index_10152_.increment () ;
      enumerator_10152.gotoNextObject () ;
    }
  }
  result << "    if LOG_OPERATION_DURATION {\n"
    "      let durationMS = Int (Date ().timeIntervalSince (start) * 1000.0)\n"
    "      Swift.print (\"Install bindings \\(durationMS) ms\")\n"
    "    }\n"
    "  } */\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "/*  final private func setTargetsAndActions () {\n"
    "     let start = Date ()\n"
    "   //--------------------------- Set targets / actions\n" ;
  GALGAS_uint index_11084_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    cEnumerator_actionBindingListForGeneration enumerator_11084 (in_TARGET_5F_ACTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11084.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_11084.current_mOutletName (HERE).stringValue () ;
      result << "\?.target = " ;
      result << enumerator_11084.current_mTargetName (HERE).stringValue () ;
      result << "\n"
        "    self." ;
      result << enumerator_11084.current_mOutletName (HERE).stringValue () ;
      result << "\?.action = #selector (" ;
      result << enumerator_11084.current_mTargetTypeName (HERE).stringValue () ;
      result << "." ;
      result << enumerator_11084.current_mActionName (HERE).stringValue () ;
      result << " (_:))\n" ;
      index_11084_.increment () ;
      enumerator_11084.gotoNextObject () ;
    }
  }
  result << "    if LOG_OPERATION_DURATION {\n"
    "      let durationMS = Int (Date ().timeIntervalSince (start) * 1000.0)\n"
    "      Swift.print (\"Set target and actions \\(durationMS) ms\")\n"
    "    }\n"
    "  } */\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   removeUserInterface\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func removeUserInterface () {\n"
    "    super.removeUserInterface ()\n"
    "  //--------------------------- Clean up auto layout views\n" ;
  GALGAS_uint index_11865_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_11865 (in_VIEW_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11865.hasCurrentObject ()) {
      result << "    // self." ;
      result << enumerator_11865.current_mViewName (HERE).stringValue () ;
      result << ".ebCleanUp ()\n" ;
      index_11865_.increment () ;
      enumerator_11865.gotoNextObject () ;
    }
  }
  result << "    /* let toolbarItems = self.windowForSheet\?.toolbar\?.items \?\? []\n"
    "    for item in toolbarItems {\n"
    "      item.view\?.ebCleanUp ()\n"
    "    } */\n"
    "  //--------------------------- Unbind regular bindings\n" ;
  GALGAS_uint index_12219_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_regularBindingsGenerationList enumerator_12219 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12219.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_12219.current_mOutletName (HERE).stringValue () ;
      result << "\?.unbind_" ;
      result << enumerator_12219.current_mBindingName (HERE).stringValue () ;
      result << " ()\n" ;
      index_12219_.increment () ;
      enumerator_12219.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Unbind array controllers\n" ;
  GALGAS_uint index_12450_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_12450 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12450.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_12450.current_mTableValueBindingControllerName (HERE).stringValue () ;
      result << ".unbind_tableView (self." ;
      result << enumerator_12450.current_mTableValueBindingOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_12450_.increment () ;
      enumerator_12450.gotoNextObject () ;
    }
  }
  GALGAS_uint index_12673_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_12673 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12673.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_12673.current_mArrayControllerControllerName (HERE).stringValue () ;
      result << ".unbind_ebView (self." ;
      result << enumerator_12673.current_mEBViewOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_12673_.increment () ;
      enumerator_12673.gotoNextObject () ;
    }
  }
  GALGAS_uint index_12813_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_12813 (in_DOCUMENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12813.hasCurrentObject ()) {
      result << callExtensionGetter_terminationCode ((const cPtr_propertyGeneration *) enumerator_12813.current_mProperty (HERE).ptr (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 298)).stringValue () ;
      index_12813_.increment () ;
      enumerator_12813.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Remove targets / actions\n" ;
  GALGAS_uint index_12997_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    cEnumerator_actionBindingListForGeneration enumerator_12997 (in_TARGET_5F_ACTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12997.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_12997.current_mOutletName (HERE).stringValue () ;
      result << "\?.target = nil\n" ;
      index_12997_.increment () ;
      enumerator_12997.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Clean up outlets\n" ;
  GALGAS_uint index_13150_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_13150 (in_OUTLET_5F_GENERATION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_13150.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_13150.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\?.ebCleanUp ()\n" ;
      index_13150_.increment () ;
      enumerator_13150.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Detach outlets\n" ;
  GALGAS_uint index_13304_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_13304 (in_OUTLET_5F_GENERATION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_13304.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_13304.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " = nil\n" ;
      index_13304_.increment () ;
      enumerator_13304.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentOutletConfiguratorImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (C_Compiler * /* inCompiler */,
                                                                                                                 const GALGAS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                                 const GALGAS_string & in_OUTLET_5F_NAME,
                                                                                                                 const GALGAS_string & in_OUTLET_5F_TYPE_5F_NAME
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "extension " ;
  result << in_DOCUMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n"
    "  final func configure_" ;
  result << in_OUTLET_5F_NAME.stringValue () ;
  result << " (_ inOutlet : AutoLayout" ;
  result << in_OUTLET_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate outletLinkerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                   const GALGAS_string & in_LINKER_5F_NAME,
                                                                                                   const GALGAS__32_stringlist & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "extension " ;
  result << in_DOCUMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n"
    "  final func linker_" ;
  result << in_LINKER_5F_NAME.stringValue () ;
  result << " (" ;
  GALGAS_uint index_392_ (0) ;
  if (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_392 (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_392.hasCurrentObject ()) {
      result << "_ in_" ;
      result << enumerator_392.current_mValue_30_ (HERE).stringValue () ;
      result << " : AutoLayout" ;
      result << enumerator_392.current_mValue_31_ (HERE).stringValue () ;
      result << "\?" ;
      if (enumerator_392.hasNextObject ()) {
        result << ", " ;
      }
      index_392_.increment () ;
      enumerator_392.gotoNextObject () ;
    }
  }
  result << ") {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefsDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefsDeclarationAST * object = (const cPtr_prefsDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefsDeclarationAST) ;
  {
  const GALGAS_prefsDeclarationAST temp_0 = object ;
  const GALGAS_prefsDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 23)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefsDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_prefsDeclarationAST.mSlotID,
                                               extensionMethod_prefsDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefsDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_prefsDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@prefsDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_prefsDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_prefsDeclarationAST * object = (const cPtr_prefsDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefsDeclarationAST) ;
  const GALGAS_prefsDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_prefsDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_prefsDeclarationAST.mSlotID,
                                extensionGetter_prefsDeclarationAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_prefsDeclarationAST_nodeKey (defineExtensionGetter_prefsDeclarationAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'preferencesName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_preferencesName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("Preferences") ;
//---
  return result_outResult ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_preferencesName = false ;
static GALGAS_string gOnceFunctionResult_preferencesName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_preferencesName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_preferencesName) {
    gOnceFunctionResult_preferencesName = onceFunction_preferencesName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_preferencesName = true ;
  }
  return gOnceFunctionResult_preferencesName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_preferencesName (void) {
  gOnceFunctionResult_preferencesName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_preferencesName (NULL,
                                                             releaseOnceFunctionResult_preferencesName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_preferencesName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_preferencesName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_preferencesName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_preferencesName ("preferencesName",
                                                                 functionWithGenericHeader_preferencesName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_preferencesName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefsDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefsDeclarationAST * object = (const cPtr_prefsDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefsDeclarationAST) ;
  GALGAS_actionMap var_actionMap_3826 ;
  {
  const GALGAS_prefsDeclarationAST temp_0 = object ;
  routine_buildActionMap (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_3826, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 90)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 92)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 92))  COMMA_SOURCE_FILE ("preferences.galgas", 92)), GALGAS_classKind::constructor_prefs (SOURCE_FILE ("preferences.galgas", 93)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 94)), var_actionMap_3826, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 91)) ;
  }
  cEnumerator_actionMap enumerator_3968 (var_actionMap_3826, kENUMERATION_UP) ;
  while (enumerator_3968.hasCurrentObject ()) {
    const GALGAS_prefsDeclarationAST temp_1 = object ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (temp_1.readProperty_mClassName ().readProperty_string (), enumerator_3968.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("preferences.galgas", 99))  COMMA_SOURCE_FILE ("preferences.galgas", 99)) ;
    enumerator_3968.gotoNextObject () ;
  }
  const GALGAS_prefsDeclarationAST temp_2 = object ;
  ioArgument_ioGeneration.setter_setMMainXibDescriptorList (temp_2.readProperty_mDeclaration ().readProperty_mMainXibDescriptorList () COMMA_SOURCE_FILE ("preferences.galgas", 104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefsDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_prefsDeclarationAST.mSlotID,
                                           extensionMethod_prefsDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefsDeclarationAST_firstAnalysisPhase (defineExtensionMethod_prefsDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefsDeclarationAST_fourthAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefsDeclarationAST * object = (const cPtr_prefsDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefsDeclarationAST) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 116)) ;
  temp_0.addAssign_operation (GALGAS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.galgas", 116)) ;
  temp_0.addAssign_operation (GALGAS_string ("init")  COMMA_SOURCE_FILE ("preferences.galgas", 116)) ;
  GALGAS_stringset var_availableCallers_4674 = temp_0 ;
  GALGAS_externFunctionMap var_externFunctionMap_4746 = GALGAS_externFunctionMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 117)) ;
  const GALGAS_prefsDeclarationAST temp_1 = object ;
  cEnumerator_externSwiftFunctionList enumerator_4795 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), kENUMERATION_UP) ;
  while (enumerator_4795.hasCurrentObject ()) {
    {
    var_externFunctionMap_4746.setter_insertKey (enumerator_4795.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 119)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_availableCallers_4674.getter_hasKey (enumerator_4795.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.galgas", 120)).operator_not (SOURCE_FILE ("preferences.galgas", 120)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_4981 = GALGAS_string ("invalid caller; available callers:") ;
        cEnumerator_stringset enumerator_5035 (var_availableCallers_4674, kENUMERATION_UP) ;
        while (enumerator_5035.hasCurrentObject ()) {
          var_s_4981.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_5035.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 123)) ;
          enumerator_5035.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_4795.current_mCallerName (HERE).readProperty_location (), var_s_4981, fixItArray3  COMMA_SOURCE_FILE ("preferences.galgas", 125)) ;
      }
    }
    enumerator_4795.gotoNextObject () ;
  }
  GALGAS_propertyMap var_preferencesPropertyMap_5294 ;
  GALGAS_actionMap var_actionMap_5313 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_5345 ;
  GALGAS_classKind joker_5261 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 130)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("preferences.galgas", 130))  COMMA_SOURCE_FILE ("preferences.galgas", 130)), joker_5261, var_preferencesPropertyMap_5294, var_actionMap_5313, var_propertyGenerationList_5345, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 129)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_5715 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_5785 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_5857 ;
  GALGAS_decoratedOutletMap var_outletMap_5896 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_5968 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6068 ;
  {
  const GALGAS_prefsDeclarationAST temp_4 = object ;
  routine_analyzeOutlets (GALGAS_bool (true), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 139)), var_preferencesPropertyMap_5294, GALGAS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5294, var_actionMap_5313, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 146)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5715, var_multipleBindingGenerationList_5785, var_actionBindingListForGeneration_5857, var_outletMap_5896, var_tableViewBindingGenerationList_5968, var_ebViewGraphicControllerBindingGenerationList_6068, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 137)) ;
  }
  const GALGAS_prefsDeclarationAST temp_5 = object ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_preferencesForGeneration::constructor_new (var_propertyGenerationList_5345, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5715, var_multipleBindingGenerationList_5785, var_actionBindingListForGeneration_5857, var_outletMap_5896, temp_5.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_5968, var_ebViewGraphicControllerBindingGenerationList_6068  COMMA_SOURCE_FILE ("preferences.galgas", 156))  COMMA_SOURCE_FILE ("preferences.galgas", 156)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefsDeclarationAST_fourthAnalysisPhase (void) {
  enterExtensionMethod_fourthAnalysisPhase (kTypeDescriptor_GALGAS_prefsDeclarationAST.mSlotID,
                                            extensionMethod_prefsDeclarationAST_fourthAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefsDeclarationAST_fourthAnalysisPhase (defineExtensionMethod_prefsDeclarationAST_fourthAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'prefsGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_3 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_1 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_prefsGenerationTemplate,
  & gWrapperDirectory_1_prefsGenerationTemplate,
  & gWrapperDirectory_2_prefsGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_0,
  3,
  gWrapperAllDirectories_prefsGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'prefsGenerationTemplate preferences'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_prefsGenerationTemplate_preferences (C_Compiler * inCompiler,
                                                                       const GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                       const GALGAS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                       const GALGAS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                       const GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                       const GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                       const GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "var g_" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue () ;
  result << " : " ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue () ;
  result << "\? = nil\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  GALGAS_uint index_673_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_673 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_673.hasCurrentObject ()) {
      result << callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_673.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 14)).stringValue () ;
      index_673_.increment () ;
      enumerator_673.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_769_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_769 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_769.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_769.current_mProperty (HERE).ptr (), GALGAS_bool (true), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 19)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 19)).stringValue () ;
      index_769_.increment () ;
      enumerator_769.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "@objc(" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 24)).stringValue () ;
  result << ") final class " ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 24)).stringValue () ;
  result << " : EBObjcBaseObject, NSWindowDelegate {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Outlets\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_1373_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_1373 (in_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1373.hasCurrentObject ()) {
      result << "  @IBOutlet var " ;
      result << enumerator_1373.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : " ;
      result << enumerator_1373.current_mOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1373_.increment () ;
      enumerator_1373.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Multiple bindings controllers\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_1817_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_1817 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1817.hasCurrentObject ()) {
      result << "  private var mController_" ;
      result << enumerator_1817.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_1817.current_mBindingName (HERE).stringValue () ;
      result << " : MultipleBindingController_" ;
      result << enumerator_1817.current_mBindingName (HERE).stringValue () ;
      result << "\?\n" ;
      index_1817_.increment () ;
      enumerator_1817.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Undo Manager\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mUndoManager = EBUndoManager ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var ebUndoManager : EBUndoManager { return self.mUndoManager }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  // The preferences window should register this object as delegate (do it in Interface Builder)\n"
    "\n"
    "  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n"
    "    return self.ebUndoManager\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Init\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n"
    "    g_" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 66)).stringValue () ;
  result << " = self ;\n"
    "  //--- Read from preferences\n" ;
  GALGAS_uint index_3179_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_3179 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3179.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_3179.current_mProperty (HERE).ptr (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 70)).stringValue () ;
      index_3179_.increment () ;
      enumerator_3179.gotoNextObject () ;
    }
  }
  result << "  //--- Notify application will terminate\n"
    "    NotificationCenter.default.addObserver (self,\n"
    "      selector:#selector(Preferences.applicationWillTerminateAction(_:)),\n"
    "      name:NSApplication.willTerminateNotification,\n"
    "      object:nil\n"
    "    )\n"
    "  //--- Extern functions\n" ;
  GALGAS_uint index_3569_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_3569 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3569.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3569.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("init"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "    self." ;
        result << enumerator_3569.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_3569_.increment () ;
      enumerator_3569.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("preferences.swift.galgasTemplate", 88)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  @IBOutlet private var window : NSWindow\?\n"
      "  let OUTLET_WIDTH = 200.0\n"
      "  let OUTLET_HEIGHT = 22.0\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    awakeFromNib\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func awakeFromNib () {\n" ;
  result << extensionGetter_generateCode (in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST, inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 103)).stringValue () ;
  GALGAS_uint index_4348_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_4348 (in_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4348.hasCurrentObject ()) {
      result << "    checkOutletConnection (self." ;
      result << enumerator_4348.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << ", \"" ;
      result << enumerator_4348.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\", " ;
      result << enumerator_4348.current_mOutletTypeName (HERE).stringValue () ;
      result << ".self, #file, #line)\n" ;
      index_4348_.increment () ;
      enumerator_4348.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install bindings\n" ;
  GALGAS_uint index_4622_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_regularBindingsGenerationList enumerator_4622 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4622.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_4622.current_mOutletName (HERE).stringValue () ;
      result << "\?.bind_" ;
      result << enumerator_4622.current_mBindingName (HERE).stringValue () ;
      result << " (" ;
      GALGAS_uint index_4729_ (0) ;
      if (enumerator_4622.current_mBoundObjectList (HERE).isValid ()) {
        cEnumerator_boundObjectList enumerator_4729 (enumerator_4622.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
        while (enumerator_4729.hasCurrentObject ()) {
          result << enumerator_4729.current_mBoundObjectString (HERE).stringValue () ;
          if (enumerator_4729.hasNextObject ()) {
            result << ", " ;
          }
          index_4729_.increment () ;
          enumerator_4729.gotoNextObject () ;
        }
      }
      result << enumerator_4622.current_mBindingOptionsString (HERE).stringValue () ;
      result << ")\n" ;
      index_4622_.increment () ;
      enumerator_4622.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install multiple bindings\n" ;
  GALGAS_uint index_4960_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_4960 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4960.hasCurrentObject ()) {
      result << "    do{\n"
        "      let controller = MultipleBindingController_" ;
      result << enumerator_4960.current_mBindingName (HERE).stringValue () ;
      result << " (\n"
        "        computeFunction: " ;
      result << callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_4960.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 122)).stringValue () ;
      result << ",\n"
        "        outlet: self." ;
      result << enumerator_4960.current_mOutletName (HERE).stringValue () ;
      result << "\n"
        "      )\n"
        "      self.mController_" ;
      result << enumerator_4960.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_4960.current_mBindingName (HERE).stringValue () ;
      result << " = controller\n"
        "    }\n" ;
      index_4960_.increment () ;
      enumerator_4960.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Array controller\n" ;
  GALGAS_uint index_5431_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_5431 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5431.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_5431.current_mTableValueBindingControllerName (HERE).stringValue () ;
      result << ".bind_tableView (self." ;
      result << enumerator_5431.current_mTableValueBindingOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_5431_.increment () ;
      enumerator_5431.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5659_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_5659 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5659.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_5659.current_mArrayControllerControllerName (HERE).stringValue () ;
      result << ".bind_ebView (self." ;
      result << enumerator_5659.current_mEBViewOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_5659_.increment () ;
      enumerator_5659.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Set targets / actions\n" ;
  GALGAS_uint index_5898_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    cEnumerator_actionBindingListForGeneration enumerator_5898 (in_TARGET_5F_ACTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5898.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_5898.current_mOutletName (HERE).stringValue () ;
      result << "\?.target = " ;
      result << enumerator_5898.current_mTargetName (HERE).stringValue () ;
      result << "\n"
        "    self." ;
      result << enumerator_5898.current_mOutletName (HERE).stringValue () ;
      result << "\?.action = #selector (" ;
      result << enumerator_5898.current_mTargetTypeName (HERE).stringValue () ;
      result << "." ;
      result << enumerator_5898.current_mActionName (HERE).stringValue () ;
      result << " (_:))\n" ;
      index_5898_.increment () ;
      enumerator_5898.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Extern functions\n" ;
  GALGAS_uint index_6174_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_6174 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6174.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_6174.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("awakeFromNib"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    self." ;
        result << enumerator_6174.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_6174_.increment () ;
      enumerator_6174.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    applicationWillTerminateAction\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  @objc func applicationWillTerminateAction (_ : NSNotification) {\n"
    "  //--------------------------- Array controller\n" ;
  GALGAS_uint index_6810_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_6810 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6810.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_6810.current_mTableValueBindingControllerName (HERE).stringValue () ;
      result << ".unbind_tableView (self." ;
      result << enumerator_6810.current_mTableValueBindingOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_6810_.increment () ;
      enumerator_6810.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7040_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_7040 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7040.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_7040.current_mArrayControllerControllerName (HERE).stringValue () ;
      result << ".unbind_ebView (preferences_" ;
      result << enumerator_7040.current_mEBViewOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_7040_.increment () ;
      enumerator_7040.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7200_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_7200 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_7200.hasCurrentObject ()) {
      result << callExtensionGetter_terminationCode ((const cPtr_propertyGeneration *) enumerator_7200.current_mProperty (HERE).ptr (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 164)).stringValue () ;
      index_7200_.increment () ;
      enumerator_7200.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@preferencesForGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_preferencesForGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                                   const GALGAS_string constinArgument_inOutputDirectory,
                                                                   GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_preferencesForGeneration * object = (const cPtr_preferencesForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_preferencesForGeneration) ;
  const GALGAS_preferencesForGeneration temp_0 = object ;
  const GALGAS_preferencesForGeneration temp_1 = object ;
  const GALGAS_preferencesForGeneration temp_2 = object ;
  const GALGAS_preferencesForGeneration temp_3 = object ;
  const GALGAS_preferencesForGeneration temp_4 = object ;
  const GALGAS_preferencesForGeneration temp_5 = object ;
  const GALGAS_preferencesForGeneration temp_6 = object ;
  const GALGAS_preferencesForGeneration temp_7 = object ;
  const GALGAS_preferencesForGeneration temp_8 = object ;
  GALGAS_string var_s_8565 = GALGAS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList () COMMA_SOURCE_FILE ("preferences.galgas", 208))) ;
  GALGAS_string var_fileName_8966 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 219)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 219)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_8966  COMMA_SOURCE_FILE ("preferences.galgas", 220)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_8966, var_s_8565, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 221)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_preferencesForGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_preferencesForGeneration.mSlotID,
                                     extensionMethod_preferencesForGeneration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_preferencesForGeneration_generateCode (defineExtensionMethod_preferencesForGeneration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis (const GALGAS_string constinArgument_inSourceFileDirectory,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_lstringlist constinArgument_inGraphvizList,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("graphviz.galgas", 29)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_lstringlist enumerator_1215 (constinArgument_inGraphvizList, kENUMERATION_UP) ;
      while (enumerator_1215.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1215.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 31)) ;
        }
        enumerator_1215.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityAnalysis (const GALGAS_string constinArgument_inSourceFileDirectory,
                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                         const GALGAS_string constinArgument_inRootEntityName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("graphviz.galgas", 43)) ;
  temp_0.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas", 43)) ;
  GALGAS_stringset var_reachableEntityNameSet_1669 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.galgas", 44)) ;
  temp_1.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas", 44)) ;
  GALGAS_stringlist var_exploreArray_1722 = temp_1 ;
  GALGAS_stringlist var_nodeList_1771 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.galgas", 45)) ;
  GALGAS_stringlist var_arrowList_1804 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.galgas", 46)) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas", 47)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 47)).isValid ()) {
    uint32_t variant_1816 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas", 47)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 47)).uintValue () ;
    bool loop_1816 = true ;
    while (loop_1816) {
      loop_1816 = GALGAS_bool (kIsStrictSup, var_exploreArray_1722.getter_length (SOURCE_FILE ("graphviz.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_1816) {
        loop_1816 = GALGAS_bool (kIsStrictSup, var_exploreArray_1722.getter_length (SOURCE_FILE ("graphviz.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_1816 && (0 == variant_1816)) {
        loop_1816 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.galgas", 47)) ;
      }
      if (loop_1816) {
        variant_1816 -- ;
        GALGAS_string var_entityName_1945 ;
        {
        var_exploreArray_1722.setter_popLast (var_entityName_1945, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 48)) ;
        }
        GALGAS_string var_node_1959 = GALGAS_string ("  ").add_operation (var_entityName_1945, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 49)).add_operation (GALGAS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 49)).add_operation (var_entityName_1945, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 49)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 49)).add_operation (var_entityName_1945, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 49)) ;
        GALGAS_classKind var_entityKind_2107 ;
        GALGAS_propertyMap var_propertyMap_2137 ;
        GALGAS_actionMap joker_2139_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_2139_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_1945.getter_nowhere (SOURCE_FILE ("graphviz.galgas", 50)), var_entityKind_2107, var_propertyMap_2137, joker_2139_2, joker_2139_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 50)) ;
        GALGAS_string var_superEntityName_2203 ;
        GALGAS_bool joker_2205_2 ; // Joker input parameter
        GALGAS_bool joker_2205_1 ; // Joker input parameter
        var_entityKind_2107.method_entity (var_superEntityName_2203, joker_2205_2, joker_2205_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 51)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, var_superEntityName_2203.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_reachableEntityNameSet_1669.getter_hasKey (var_superEntityName_2203 COMMA_SOURCE_FILE ("graphviz.galgas", 53)).operator_not (SOURCE_FILE ("graphviz.galgas", 53)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachableEntityNameSet_1669.addAssign_operation (var_superEntityName_2203  COMMA_SOURCE_FILE ("graphviz.galgas", 54)) ;
                var_exploreArray_1722.addAssign_operation (var_superEntityName_2203  COMMA_SOURCE_FILE ("graphviz.galgas", 55)) ;
              }
            }
            var_arrowList_1804.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1945, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 57)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 57)).add_operation (var_superEntityName_2203, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 57)).add_operation (GALGAS_string (" [arrowhead=dot]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 57))  COMMA_SOURCE_FILE ("graphviz.galgas", 57)) ;
          }
        }
        cEnumerator_propertyMap enumerator_2544 (var_propertyMap_2137, kENUMERATION_UP) ;
        while (enumerator_2544.hasCurrentObject ()) {
          switch (enumerator_2544.current_mKind (HERE).enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              const cEnumAssociatedValues_propertyKind_property * extractPtr_2815 = (const cEnumAssociatedValues_propertyKind_property *) (enumerator_2544.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_typeKind extractedValue_2615_type = extractPtr_2815->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_2629_accessibility = extractPtr_2815->mAssociatedValue1 ;
              switch (extractedValue_2629_accessibility.enumValue ()) {
              case GALGAS_propertyAccessibility::kNotBuilt:
                break ;
              case GALGAS_propertyAccessibility::kEnum_stored:
                {
                  var_node_1959.plusAssign_operation(GALGAS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2615_type, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 64)).add_operation (enumerator_2544.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 64)) ;
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
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_3908 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_2544.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_2923_typeName = extractPtr_3908->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_2960_accessibility = extractPtr_3908->mAssociatedValue1 ;
              const GALGAS_toManyRelationshipOptionAST extractedValue_2973_optionKind = extractPtr_3908->mAssociatedValue3 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = extractedValue_2960_accessibility.getter_isStored (SOURCE_FILE ("graphviz.galgas", 71)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  var_node_1959.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2544.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 72)).add_operation (GALGAS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 72)).add_operation (extractedValue_2923_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 72)).add_operation (GALGAS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 72)).add_operation (enumerator_2544.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 72)) ;
                  switch (extractedValue_2973_optionKind.enumValue ()) {
                  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
                    {
                      enumGalgasBool test_5 = kBoolTrue ;
                      if (kBoolTrue == test_5) {
                        test_5 = var_reachableEntityNameSet_1669.getter_hasKey (extractedValue_2923_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas", 75)).operator_not (SOURCE_FILE ("graphviz.galgas", 75)).boolEnum () ;
                        if (kBoolTrue == test_5) {
                          var_reachableEntityNameSet_1669.addAssign_operation (extractedValue_2923_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.galgas", 76)) ;
                          var_exploreArray_1722.addAssign_operation (extractedValue_2923_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.galgas", 77)) ;
                        }
                      }
                      var_arrowList_1804.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1945, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 79)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 79)).add_operation (enumerator_2544.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 79)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 79)).add_operation (extractedValue_2923_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 80)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 80)).add_operation (extractedValue_2923_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 80)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=vee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 80))  COMMA_SOURCE_FILE ("graphviz.galgas", 79)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
                    {
                      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_3849 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (extractedValue_2973_optionKind.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_3511_oppositeName = extractPtr_3849->mAssociatedValue0 ;
                      enumGalgasBool test_6 = kBoolTrue ;
                      if (kBoolTrue == test_6) {
                        test_6 = var_reachableEntityNameSet_1669.getter_hasKey (extractedValue_2923_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas", 82)).operator_not (SOURCE_FILE ("graphviz.galgas", 82)).boolEnum () ;
                        if (kBoolTrue == test_6) {
                          var_reachableEntityNameSet_1669.addAssign_operation (extractedValue_2923_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.galgas", 83)) ;
                          var_exploreArray_1722.addAssign_operation (extractedValue_2923_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.galgas", 84)) ;
                        }
                      }
                      var_arrowList_1804.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1945, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 86)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 86)).add_operation (enumerator_2544.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 86)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 86)).add_operation (extractedValue_2923_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 87)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 87)).add_operation (extractedValue_3511_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 87)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=vee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 87))  COMMA_SOURCE_FILE ("graphviz.galgas", 86)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
                    {
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_5058 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_2544.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_3944_typeName = extractPtr_5058->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_3981_accessibility = extractPtr_5058->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_3992_opposite = extractPtr_5058->mAssociatedValue3 ;
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = extractedValue_3981_accessibility.getter_isStored (SOURCE_FILE ("graphviz.galgas", 92)).boolEnum () ;
                if (kBoolTrue == test_7) {
                  var_node_1959.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2544.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 93)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 93)).add_operation (extractedValue_3944_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 93)).add_operation (GALGAS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 93)).add_operation (enumerator_2544.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 93)) ;
                  switch (extractedValue_3992_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_8 = kBoolTrue ;
                      if (kBoolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1669.getter_hasKey (extractedValue_3944_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas", 96)).operator_not (SOURCE_FILE ("graphviz.galgas", 96)).boolEnum () ;
                        if (kBoolTrue == test_8) {
                          var_reachableEntityNameSet_1669.addAssign_operation (extractedValue_3944_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.galgas", 97)) ;
                          var_exploreArray_1722.addAssign_operation (extractedValue_3944_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.galgas", 98)) ;
                        }
                      }
                      var_arrowList_1804.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1945, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 100)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 100)).add_operation (enumerator_2544.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 100)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 100)).add_operation (extractedValue_3944_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 101)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 101)).add_operation (extractedValue_3944_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 101)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 101))  COMMA_SOURCE_FILE ("graphviz.galgas", 100)) ;
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
                    {
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
                    {
                      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_5032 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (extractedValue_3992_opposite.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_4599_oppositeName = extractPtr_5032->mAssociatedValue0 ;
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1669.getter_hasKey (extractedValue_3944_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas", 104)).operator_not (SOURCE_FILE ("graphviz.galgas", 104)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          var_reachableEntityNameSet_1669.addAssign_operation (extractedValue_3944_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.galgas", 105)) ;
                          var_exploreArray_1722.addAssign_operation (extractedValue_3944_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.galgas", 106)) ;
                        }
                      }
                      enumGalgasBool test_10 = kBoolTrue ;
                      if (kBoolTrue == test_10) {
                        test_10 = GALGAS_bool (kIsStrictSup, enumerator_2544.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_4599_oppositeName.readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_10) {
                          var_arrowList_1804.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1945, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 109)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 109)).add_operation (enumerator_2544.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 109)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 109)).add_operation (extractedValue_3944_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 110)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 110)).add_operation (extractedValue_4599_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 110)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 110))  COMMA_SOURCE_FILE ("graphviz.galgas", 109)) ;
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
          enumerator_2544.gotoNextObject () ;
        }
        var_node_1959.plusAssign_operation(GALGAS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 116)) ;
        var_nodeList_1771.addAssign_operation (var_node_1959  COMMA_SOURCE_FILE ("graphviz.galgas", 117)) ;
      }
    }
  }
  GALGAS_string var_s_5146 = GALGAS_string ("digraph G {\n") ;
  var_s_5146.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 121)) ;
  var_s_5146.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 122)) ;
  cEnumerator_stringlist enumerator_5270 (var_nodeList_1771, kENUMERATION_UP) ;
  while (enumerator_5270.hasCurrentObject ()) {
    var_s_5146.plusAssign_operation(enumerator_5270.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 124)) ;
    enumerator_5270.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_5328 (var_arrowList_1804, kENUMERATION_UP) ;
  while (enumerator_5328.hasCurrentObject ()) {
    var_s_5146.plusAssign_operation(enumerator_5328.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 127)) ;
    enumerator_5328.gotoNextObject () ;
  }
  var_s_5146.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas", 129)) ;
  GALGAS_string var_filePath_5403 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 130)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 130)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 130)) ;
  var_filePath_5403.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.galgas", 131)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 131)) ;
  GALGAS_bool joker_5581 ; // Joker input parameter
  var_s_5146.method_writeToFileWhenDifferentContents (var_filePath_5403, joker_5581, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas", 132)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutViewClassDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_autoLayoutViewClassDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                      GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_autoLayoutViewClassDeclarationAST * object = (const cPtr_autoLayoutViewClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutViewClassDeclarationAST) ;
  {
  const GALGAS_autoLayoutViewClassDeclarationAST temp_0 = object ;
  const GALGAS_autoLayoutViewClassDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 63)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_autoLayoutViewClassDeclarationAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_4 = object ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_5 = object ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 65)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_autoLayoutViewClassDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST.mSlotID,
                                               extensionMethod_autoLayoutViewClassDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_autoLayoutViewClassDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_autoLayoutViewClassDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutViewClassDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_autoLayoutViewClassDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_autoLayoutViewClassDeclarationAST * object = (const cPtr_autoLayoutViewClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutViewClassDeclarationAST) ;
  const GALGAS_autoLayoutViewClassDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_autoLayoutViewClassDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST.mSlotID,
                                extensionGetter_autoLayoutViewClassDeclarationAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_autoLayoutViewClassDeclarationAST_nodeKey (defineExtensionGetter_autoLayoutViewClassDeclarationAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutViewClassDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_autoLayoutViewClassDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_autoLayoutViewClassDeclarationAST * object = (const cPtr_autoLayoutViewClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutViewClassDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_autoLayoutViewClassDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_2 = object ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_3 = object ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_4 = object ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_5 = object ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_6 = object ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_7 = object ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_8 = object ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_9 = object ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_10 = object ;
      ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.galgas", 238)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), temp_9.readProperty_mParameterList (), temp_10.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 236)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_hasRunAction_8789 ;
    GALGAS_bool var_handlesTableValueBinding_8825 ;
    GALGAS_bool var_hasEnabled_8847 ;
    GALGAS_bool var_hasHidden_8868 ;
    GALGAS_bool var_handlesGraphicControllerBinding_8911 ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_11 = object ;
    GALGAS_lstring joker_8764 ; // Joker input parameter
    GALGAS_bool joker_8919_3 ; // Joker input parameter
    GALGAS_autoLayoutClassParameterList joker_8919_2 ; // Joker input parameter
    GALGAS_astAutoLayoutViewFunctionMap joker_8919_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8764, var_hasRunAction_8789, var_handlesTableValueBinding_8825, var_hasEnabled_8847, var_hasHidden_8868, var_handlesGraphicControllerBinding_8911, joker_8919_3, joker_8919_2, joker_8919_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 249)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_13 = object ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8789 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 259)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 260)) ;
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_17 = object ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8825 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 262)).boolEnum () ;
      if (kBoolTrue == test_16) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_18 = object ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 263)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_21 = object ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8847 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 265)).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_22 = object ;
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 266)) ;
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_25 = object ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8868 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 268)).boolEnum () ;
      if (kBoolTrue == test_24) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_26 = object ;
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 269)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_29 = object ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8911 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 271)).boolEnum () ;
      if (kBoolTrue == test_28) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_30 = object ;
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_30.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$graphicController binding already defined in superclass"), fixItArray31  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 272)) ;
      }
    }
    {
    const GALGAS_autoLayoutViewClassDeclarationAST temp_32 = object ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_33 = object ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_34 = object ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_35 = object ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_36 = object ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_37 = object ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_38 = object ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_39 = object ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_40 = object ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_41 = object ;
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8789 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 278)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8825 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 279)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8847 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 280)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8868 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 281)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8911 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 282)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 275)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_autoLayoutViewClassDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST.mSlotID,
                                           extensionMethod_autoLayoutViewClassDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_autoLayoutViewClassDeclarationAST_firstAnalysisPhase (defineExtensionMethod_autoLayoutViewClassDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                     const GALGAS_autoLayoutViewClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3825 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_3825.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3943 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 97)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4003 (enumerator_3825.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4003.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4003.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_3943.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 101)), GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 101))  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 101)), enumerator_4003.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 100)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_4374 ;
        GALGAS_propertyMap joker_4376_3 ; // Joker input parameter
        GALGAS_actionMap joker_4376_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4376_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4003.current_mModelTypeName (HERE), var_classKind_4374, joker_4376_3, joker_4376_2, joker_4376_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 104)) ;
        GALGAS_typeKind var_typeKind_4410 ;
        switch (var_classKind_4374.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4003.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 108)) ;
            var_typeKind_4410.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_4600 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4374.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_4571_kind = extractPtr_4600->mAssociatedValue0 ;
            var_typeKind_4410 = extractedValue_4571_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4003.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 112)) ;
            var_typeKind_4410.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4003.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 114)) ;
            var_typeKind_4410.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_3943.addAssign_operation (var_typeKind_4410, enumerator_4003.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 116)) ;
      }
      enumerator_4003.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5015 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 119)) ;
    cEnumerator_controllerBindingOptionList enumerator_5057 (enumerator_3825.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5057.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_5171 ;
      GALGAS_propertyMap joker_5173_3 ; // Joker input parameter
      GALGAS_actionMap joker_5173_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5173_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5057.current_mOptionTypeName (HERE), var_classKind_5171, joker_5173_3, joker_5173_2, joker_5173_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 121)) ;
      GALGAS_typeKind var_typeKind_5205 ;
      switch (var_classKind_5171.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5057.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 125)) ;
          var_typeKind_5205.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_5386 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5171.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_5359_kind = extractPtr_5386->mAssociatedValue0 ;
          var_typeKind_5205 = extractedValue_5359_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5057.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 129)) ;
          var_typeKind_5205.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5057.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 131)) ;
          var_typeKind_5205.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5015.addAssign_operation (var_typeKind_5205, enumerator_5057.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 133)) ;
      enumerator_5057.gotoNextObject () ;
    }
    GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_5767 ;
    GALGAS_lstring var_outletSuperClassName_5805 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3825.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 138)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3825.current_mOutletClassName (HERE), var_outletSuperClassName_5805, var_bindingMap_5767, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 139)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_5767 = GALGAS_autoLayoutViewBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 141)) ;
      GALGAS_bool joker_6161_8 ; // Joker input parameter
      GALGAS_bool joker_6161_7 ; // Joker input parameter
      GALGAS_bool joker_6161_6 ; // Joker input parameter
      GALGAS_bool joker_6161_5 ; // Joker input parameter
      GALGAS_bool joker_6161_4 ; // Joker input parameter
      GALGAS_bool joker_6161_3 ; // Joker input parameter
      GALGAS_autoLayoutClassParameterList joker_6161_2 ; // Joker input parameter
      GALGAS_astAutoLayoutViewFunctionMap joker_6161_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3825.current_mOutletClassName (HERE), var_outletSuperClassName_5805, joker_6161_8, joker_6161_7, joker_6161_6, joker_6161_5, joker_6161_4, joker_6161_3, joker_6161_2, joker_6161_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 142)) ;
    }
    {
    var_bindingMap_5767.setter_insertKey (enumerator_3825.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3943, var_controllerBindingOptionDecoratedList_5015, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 144)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3825.current_mOutletClassName (HERE), var_outletSuperClassName_5805, var_bindingMap_5767, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 149)) ;
    }
    enumerator_3825.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astHorizontalStackViewDeclaration check'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astHorizontalStackViewDeclaration_check (const cPtr_astAbstractViewDeclaration * inObject,
                                                                     const GALGAS_string /* constinArgument_inViewName */,
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
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astHorizontalStackViewDeclaration * object = (const cPtr_astHorizontalStackViewDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astHorizontalStackViewDeclaration) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_30008 ;
  const GALGAS_astHorizontalStackViewDeclaration temp_0 = object ;
  extensionMethod_check (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_30008, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 703)) ;
  outArgument_outGeneration = GALGAS_newHorizontalStackViewGeneration::constructor_new (var_funcCallList_30008  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 719)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astHorizontalStackViewDeclaration_check (void) {
  enterExtensionMethod_check (kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration.mSlotID,
                              extensionMethod_astHorizontalStackViewDeclaration_check) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astHorizontalStackViewDeclaration_check (defineExtensionMethod_astHorizontalStackViewDeclaration_check, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astVerticalStackViewDeclaration check'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astVerticalStackViewDeclaration_check (const cPtr_astAbstractViewDeclaration * inObject,
                                                                   const GALGAS_string /* constinArgument_inViewName */,
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
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astVerticalStackViewDeclaration * object = (const cPtr_astVerticalStackViewDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astVerticalStackViewDeclaration) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_31754 ;
  const GALGAS_astVerticalStackViewDeclaration temp_0 = object ;
  extensionMethod_check (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_31754, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 738)) ;
  outArgument_outGeneration = GALGAS_newVerticalStackViewGeneration::constructor_new (var_funcCallList_31754  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 754)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astVerticalStackViewDeclaration_check (void) {
  enterExtensionMethod_check (kTypeDescriptor_GALGAS_astVerticalStackViewDeclaration.mSlotID,
                              extensionMethod_astVerticalStackViewDeclaration_check) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astVerticalStackViewDeclaration_check (defineExtensionMethod_astVerticalStackViewDeclaration_check, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedHorizontalViewDeclaration check'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astComputedHorizontalViewDeclaration_check (const cPtr_astAbstractViewDeclaration * inObject,
                                                                        const GALGAS_string /* constinArgument_inViewName */,
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
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astComputedHorizontalViewDeclaration * object = (const cPtr_astComputedHorizontalViewDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astComputedHorizontalViewDeclaration) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_33537 ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_0 = object ;
  extensionMethod_check (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_33537, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 774)) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_33604 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 790)) ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_1 = object ;
  cEnumerator_astViewInstructionList enumerator_33628 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_33628.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_34050 ;
    callExtensionMethod_generateCode ((const cPtr_astAbstractViewInstructionDeclaration *) enumerator_33628.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_34050, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 792)) ;
    var_instructionList_33604.addAssign_operation (var_generatedInstruction_34050  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 807)) ;
    enumerator_33628.gotoNextObject () ;
  }
  outArgument_outGeneration = GALGAS_computedHorizontalViewGeneration::constructor_new (var_funcCallList_33537, var_instructionList_33604  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 809)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astComputedHorizontalViewDeclaration_check (void) {
  enterExtensionMethod_check (kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration.mSlotID,
                              extensionMethod_astComputedHorizontalViewDeclaration_check) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astComputedHorizontalViewDeclaration_check (defineExtensionMethod_astComputedHorizontalViewDeclaration_check, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedVerticalViewDeclaration check'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astComputedVerticalViewDeclaration_check (const cPtr_astAbstractViewDeclaration * inObject,
                                                                      const GALGAS_string /* constinArgument_inViewName */,
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
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astComputedVerticalViewDeclaration * object = (const cPtr_astComputedVerticalViewDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astComputedVerticalViewDeclaration) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_35456 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 828)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_35937 ;
  const GALGAS_astComputedVerticalViewDeclaration temp_0 = object ;
  extensionMethod_check (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_35937, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 829)) ;
  const GALGAS_astComputedVerticalViewDeclaration temp_1 = object ;
  cEnumerator_astViewInstructionList enumerator_35960 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_35960.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_36381 ;
    callExtensionMethod_generateCode ((const cPtr_astAbstractViewInstructionDeclaration *) enumerator_35960.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_36381, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 846)) ;
    var_instructionList_35456.addAssign_operation (var_generatedInstruction_36381  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 861)) ;
    enumerator_35960.gotoNextObject () ;
  }
  outArgument_outGeneration = GALGAS_computedVerticalViewGeneration::constructor_new (var_funcCallList_35937, var_instructionList_35456  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 863)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astComputedVerticalViewDeclaration_check (void) {
  enterExtensionMethod_check (kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration.mSlotID,
                              extensionMethod_astComputedVerticalViewDeclaration_check) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astComputedVerticalViewDeclaration_check (defineExtensionMethod_astComputedVerticalViewDeclaration_check, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astSpaceViewInstruction generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astSpaceViewInstruction_generateCode (const cPtr_astAbstractViewInstructionDeclaration * /* inObject */,
                                                                  const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
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
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstruction = GALGAS_autoLayoutSpaceViewInstructionGeneration::constructor_new (SOURCE_FILE ("auto-layout-view.galgas", 899)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astSpaceViewInstruction_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_astSpaceViewInstruction.mSlotID,
                                     extensionMethod_astSpaceViewInstruction_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astSpaceViewInstruction_generateCode (defineExtensionMethod_astSpaceViewInstruction_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astSeparatorInstructionDeclaration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astSeparatorInstructionDeclaration_generateCode (const cPtr_astAbstractViewInstructionDeclaration * inObject,
                                                                             const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
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
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astSeparatorInstructionDeclaration * object = (const cPtr_astSeparatorInstructionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astSeparatorInstructionDeclaration) ;
  const GALGAS_astSeparatorInstructionDeclaration temp_0 = object ;
  outArgument_outInstruction = GALGAS_autoLayoutSeparatorInstructionGeneration::constructor_new (temp_0.readProperty_horizontal ()  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 918)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astSeparatorInstructionDeclaration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration.mSlotID,
                                     extensionMethod_astSeparatorInstructionDeclaration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astSeparatorInstructionDeclaration_generateCode (defineExtensionMethod_astSeparatorInstructionDeclaration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astLocalViewInstruction generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astLocalViewInstruction_generateCode (const cPtr_astAbstractViewInstructionDeclaration * inObject,
                                                                  const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
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
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astLocalViewInstruction * object = (const cPtr_astLocalViewInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_astLocalViewInstruction) ;
  const GALGAS_astLocalViewInstruction temp_0 = object ;
  constinArgument_inViewDeclarationMap.method_searchKey (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 938)) ;
  const GALGAS_astLocalViewInstruction temp_1 = object ;
  outArgument_outInstruction = GALGAS_autoLayoutLocalViewInstructionGeneration::constructor_new (temp_1.readProperty_mLocalView ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 939)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astLocalViewInstruction_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_astLocalViewInstruction.mSlotID,
                                     extensionMethod_astLocalViewInstruction_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astLocalViewInstruction_generateCode (defineExtensionMethod_astLocalViewInstruction_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedViewInstruction generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astComputedViewInstruction_generateCode (const cPtr_astAbstractViewInstructionDeclaration * inObject,
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
                                                                     GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astComputedViewInstruction * object = (const cPtr_astComputedViewInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_astComputedViewInstruction) ;
  GALGAS_autoLayoutClassParameterList var_formalParameterList_42964 ;
  GALGAS_astAutoLayoutViewFunctionMap var_functionMap_42986 ;
  const GALGAS_astComputedViewInstruction temp_0 = object ;
  GALGAS_lstring joker_42932_7 ; // Joker input parameter
  GALGAS_bool joker_42932_6 ; // Joker input parameter
  GALGAS_bool joker_42932_5 ; // Joker input parameter
  GALGAS_bool joker_42932_4 ; // Joker input parameter
  GALGAS_bool joker_42932_3 ; // Joker input parameter
  GALGAS_bool joker_42932_2 ; // Joker input parameter
  GALGAS_bool joker_42932_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_42932_7, joker_42932_6, joker_42932_5, joker_42932_4, joker_42932_3, joker_42932_2, joker_42932_1, var_formalParameterList_42964, var_functionMap_42986, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 958)) ;
  GALGAS_autoLayoutViewInstructionGenerationParameterList var_parameterList_43060 = GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 963)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_astComputedViewInstruction temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, var_formalParameterList_42964.getter_length (SOURCE_FILE ("auto-layout-view.galgas", 964)).objectCompare (temp_2.readProperty_mParameterList ().getter_length (SOURCE_FILE ("auto-layout-view.galgas", 964)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_astComputedViewInstruction temp_3 = object ;
      const GALGAS_astComputedViewInstruction temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_42964.getter_length (SOURCE_FILE ("auto-layout-view.galgas", 966)).getter_string (SOURCE_FILE ("auto-layout-view.galgas", 966)).add_operation (GALGAS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 966)).add_operation (temp_4.readProperty_mParameterList ().getter_length (SOURCE_FILE ("auto-layout-view.galgas", 966)).getter_string (SOURCE_FILE ("auto-layout-view.galgas", 966)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 966)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 966)), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 965)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_astComputedViewInstruction temp_6 = object ;
    cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_43327 (temp_6.readProperty_mParameterList (), kENUMERATION_UP) ;
    cEnumerator_autoLayoutClassParameterList enumerator_43375 (var_formalParameterList_42964, kENUMERATION_UP) ;
    while (enumerator_43327.hasCurrentObject () && enumerator_43375.hasCurrentObject ()) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        GALGAS_lstring var_enumTypeName_43460 ;
        const bool optionalResult43436 = enumerator_43375.current_mParameterType (HERE).optional_typeEnum (var_enumTypeName_43460) ;
        if (!optionalResult43436) {
          test_7 = kBoolFalse ;
        }
        if (kBoolTrue == test_7) {
          GALGAS_lstring var_constantName_43505 ;
          const bool optionalResult43481 = enumerator_43327.current_mParameterType (HERE).optional_typeEnum (var_constantName_43505) ;
          if (!optionalResult43481) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            GALGAS_classKind var_typeKind_43569 ;
            GALGAS_propertyMap joker_43571_3 ; // Joker input parameter
            GALGAS_actionMap joker_43571_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_43571_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_enumTypeName_43460, var_typeKind_43569, joker_43571_3, joker_43571_2, joker_43571_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 970)) ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              GALGAS_typeKind var_classKind_43627 ;
              const bool optionalResult43606 = var_typeKind_43569.optional_atomic (var_classKind_43627) ;
              if (!optionalResult43606) {
                test_8 = kBoolFalse ;
              }
              if (kBoolTrue == test_8) {
                GALGAS_string var_unused_0_43657 ;
                GALGAS_enumConstantMap var_constantMap_43687 ;
                GALGAS_enumFuncMap var_unused_0_43691 ;
                const bool optionalResult43653 = var_classKind_43627.optional_enumType (var_unused_0_43657, var_constantMap_43687, var_unused_0_43691) ;
                if (!optionalResult43653) {
                  test_8 = kBoolFalse ;
                }
                if (kBoolTrue == test_8) {
                  GALGAS_uint joker_43746 ; // Joker input parameter
                  var_constantMap_43687.method_searchKey (var_constantName_43505, joker_43746, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 972)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_enumTypeName_43460.readProperty_location (), GALGAS_string ("this type name is not an enum"), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 974)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_7) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsNotEqual, enumerator_43327.current_mParameterType (HERE).objectCompare (enumerator_43375.current_mParameterType (HERE))).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_43327.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_43375.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 977)).add_operation (GALGAS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 977)).add_operation (extensionGetter_string (enumerator_43327.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 977)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 977)) ;
          }
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, enumerator_43327.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_43375.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_43327.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the parameter name should be '").add_operation (enumerator_43375.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 980)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 980)), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 980)) ;
        }
      }
      switch (enumerator_43327.current_mParameter (HERE).enumValue ()) {
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kNotBuilt:
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_viewFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * extractPtr_44875 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) (enumerator_43327.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_astAbstractViewInstructionDeclaration extractedValue_44167_instruction = extractPtr_44875->mAssociatedValue0 ;
          GALGAS_abstractViewInstructionGeneration var_viewInstruction_44678 ;
          callExtensionMethod_generateCode ((const cPtr_astAbstractViewInstructionDeclaration *) extractedValue_44167_instruction.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_44678, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 984)) ;
          var_parameterList_43060.addAssign_operation (enumerator_43327.current_mParameterName (HERE).readProperty_string (), GALGAS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_length (SOURCE_FILE ("auto-layout-view.galgas", 999)).getter_string (SOURCE_FILE ("auto-layout-view.galgas", 999)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 999)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 999))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 999)) ;
          ioArgument_ioImplicitViewFunctionGenerationList.addAssign_operation (var_viewInstruction_44678  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1000)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_entity:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * extractPtr_45140 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) (enumerator_43327.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_44905_entityName = extractPtr_45140->mAssociatedValue0 ;
          GALGAS_classKind var_classKind_44965 ;
          GALGAS_propertyMap joker_44967_3 ; // Joker input parameter
          GALGAS_actionMap joker_44967_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_44967_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_44905_entityName, var_classKind_44965, joker_44967_3, joker_44967_2, joker_44967_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1002)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_classKind_44965.getter_isEntity (SOURCE_FILE ("auto-layout-view.galgas", 1003)).operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1003)).boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_44905_entityName.readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1004)) ;
            }
          }
          var_parameterList_43060.addAssign_operation (enumerator_43327.current_mParameterName (HERE).readProperty_string (), extractedValue_44905_entityName.readProperty_string ().add_operation (GALGAS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1006))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1006)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_string:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * extractPtr_45218 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) (enumerator_43327.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_45171_stringValue = extractPtr_45218->mAssociatedValue0 ;
          var_parameterList_43060.addAssign_operation (enumerator_43327.current_mParameterName (HERE).readProperty_string (), extractedValue_45171_stringValue  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1008)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_menuItem:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * extractPtr_46573 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) (enumerator_43327.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_45245_title = extractPtr_46573->mAssociatedValue0 ;
          const GALGAS_runActionDescriptor extractedValue_45249_run = extractPtr_46573->mAssociatedValue1 ;
          const GALGAS_multipleBindingDescriptor extractedValue_45264_enabledBinding = extractPtr_46573->mAssociatedValue2 ;
          GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_45572 ;
          {
          routine_analyzeAutoLayoutRunBinding (extractedValue_45249_run, GALGAS_bool (true), constinArgument_inPreferences, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas", 1014)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_runBindingGeneration_45572, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1010)) ;
          }
          GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_45856 ;
          {
          routine_analyzeAutoLayoutEnableBinding (extractedValue_45264_enabledBinding, GALGAS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_enabledBindingGeneration_45856, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1020)) ;
          }
          GALGAS_string var_s_45880 = GALGAS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_45245_title.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.galgas", 1029)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1029)) ;
          switch (var_runBindingGeneration_45572.enumValue ()) {
          case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
            {
              var_s_45880.plusAssign_operation(GALGAS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1032)) ;
            }
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
            {
              const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_46226 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (var_runBindingGeneration_45572.unsafePointer ()) ;
              const GALGAS_string extractedValue_46083_targetName = extractPtr_46226->mAssociatedValue0 ;
              const GALGAS_string extractedValue_46094_actionName = extractPtr_46226->mAssociatedValue1 ;
              const GALGAS_string extractedValue_46108_runTargetName = extractPtr_46226->mAssociatedValue2 ;
              var_s_45880.plusAssign_operation(GALGAS_string (", target: ").add_operation (extractedValue_46083_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1034)).add_operation (GALGAS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1034)).add_operation (extractedValue_46108_runTargetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1034)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1034)).add_operation (extractedValue_46094_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1034)).add_operation (GALGAS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1034)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1034)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_45856.enumValue ()) {
          case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
            {
              var_s_45880.plusAssign_operation(GALGAS_string (", enableBinding: .empty"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1038)) ;
            }
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
            {
              const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_46510 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_45856.unsafePointer ()) ;
              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_46443_binding = extractPtr_46510->mAssociatedValue0 ;
              var_s_45880.plusAssign_operation(GALGAS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_46443_binding.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1041)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1041)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1041)) ;
            }
            break ;
          }
          var_s_45880.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1043)) ;
          var_parameterList_43060.addAssign_operation (enumerator_43327.current_mParameterName (HERE).readProperty_string (), var_s_45880  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1044)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_enumFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * extractPtr_47181 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) (enumerator_43327.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_46607_enumTypeName = extractPtr_47181->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_46616_funcName = extractPtr_47181->mAssociatedValue1 ;
          GALGAS_classKind var_type_46690 ;
          GALGAS_propertyMap joker_46692_3 ; // Joker input parameter
          GALGAS_actionMap joker_46692_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_46692_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_46607_enumTypeName, var_type_46690, joker_46692_3, joker_46692_2, joker_46692_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1046)) ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = var_type_46690.getter_isAtomic (SOURCE_FILE ("auto-layout-view.galgas", 1047)).operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1047)).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (extractedValue_46607_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1048)) ;
            }
          }
          if (kBoolFalse == test_16) {
            GALGAS_typeKind var_typeKind_46852 ;
            var_type_46690.method_atomic (var_typeKind_46852, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1050)) ;
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = var_typeKind_46852.getter_isEnumType (SOURCE_FILE ("auto-layout-view.galgas", 1051)).boolEnum () ;
              if (kBoolTrue == test_18) {
                GALGAS_enumFuncMap var_funcMap_46949 ;
                GALGAS_string joker_46926_2 ; // Joker input parameter
                GALGAS_enumConstantMap joker_46926_1 ; // Joker input parameter
                var_typeKind_46852.method_enumType (joker_46926_2, joker_46926_1, var_funcMap_46949, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1052)) ;
                GALGAS_enumFunAssociationSortedList joker_46993 ; // Joker input parameter
                var_funcMap_46949.method_searchKey (extractedValue_46616_funcName, joker_46993, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1053)) ;
              }
            }
            if (kBoolFalse == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_46607_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1055)) ;
            }
          }
          var_parameterList_43060.addAssign_operation (enumerator_43327.current_mParameterName (HERE).readProperty_string (), extractedValue_46607_enumTypeName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1058)).add_operation (extractedValue_46616_funcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1058)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1058))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1058)) ;
        }
        break ;
      }
      enumerator_43327.gotoNextObject () ;
      enumerator_43375.gotoNextObject () ;
    }
  }
  GALGAS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_47742 ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_47822 ;
  GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_47887 ;
  GALGAS_string var_inTableViewBindingGeneration_47933 ;
  GALGAS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_48033 ;
  {
  const GALGAS_astComputedViewInstruction temp_20 = object ;
  const GALGAS_astComputedViewInstruction temp_21 = object ;
  const GALGAS_astComputedViewInstruction temp_22 = object ;
  const GALGAS_astComputedViewInstruction temp_23 = object ;
  const GALGAS_astComputedViewInstruction temp_24 = object ;
  const GALGAS_astComputedViewInstruction temp_25 = object ;
  const GALGAS_astComputedViewInstruction temp_26 = object ;
  routine_analyzeAutoLayoutBinding (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_20.readProperty_mAutoLayoutViewClassName (), temp_21.readProperty_mTableValueBinding (), temp_22.readProperty_mRunActionDescriptor (), temp_23.readProperty_mEnabledBindingDescriptor (), temp_24.readProperty_mHiddenBindingDescriptor (), temp_25.readProperty_mGraphicController (), temp_26.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_47742, var_multipleBindingGenerationList_47822, var_runBindingGeneration_47887, var_inTableViewBindingGeneration_47933, var_ebViewGraphicControllerBindingGeneration_48033, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1063)) ;
  }
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_48478 ;
  const GALGAS_astComputedViewInstruction temp_27 = object ;
  extensionMethod_check (temp_27.readProperty_mFunctionCallList (), var_functionMap_42986, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_48478, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1087)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_astComputedViewInstruction temp_29 = object ;
    test_28 = GALGAS_bool (kIsNotEqual, temp_29.readProperty_mOutletName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_28) {
      {
      const GALGAS_astComputedViewInstruction temp_30 = object ;
      const GALGAS_astComputedViewInstruction temp_31 = object ;
      ioArgument_ioOutletMap.setter_insertKey (temp_30.readProperty_mOutletName (), temp_31.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1105)) ;
      }
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    const GALGAS_astComputedViewInstruction temp_33 = object ;
    test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_32) {
      {
      const GALGAS_astComputedViewInstruction temp_34 = object ;
      const GALGAS_astComputedViewInstruction temp_35 = object ;
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_34.readProperty_mConfiguratorName (), temp_35.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1109)) ;
      }
    }
  }
  const GALGAS_astComputedViewInstruction temp_36 = object ;
  const GALGAS_astComputedViewInstruction temp_37 = object ;
  const GALGAS_astComputedViewInstruction temp_38 = object ;
  outArgument_outInstruction = GALGAS_autoLayoutComputedViewInstructionGeneration::constructor_new (temp_36.readProperty_mAutoLayoutViewClassName (), var_parameterList_43060, var_funcCallList_48478, var_regularBindingsGenerationList_47742, var_multipleBindingGenerationList_47822, var_runBindingGeneration_47887, var_inTableViewBindingGeneration_47933, var_ebViewGraphicControllerBindingGeneration_48033, temp_37.readProperty_mConfiguratorName ().readProperty_string (), temp_38.readProperty_mOutletName ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1112)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astComputedViewInstruction_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_astComputedViewInstruction.mSlotID,
                                     extensionMethod_astComputedViewInstruction_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astComputedViewInstruction_generateCode (defineExtensionMethod_astComputedViewInstruction_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding (const GALGAS_bool constinArgument_inPreferences,
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
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outRegularBindingsGenerationList = GALGAS_autoLayoutRegularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1152)) ;
  outArgument_outMultipleBindingGenerationList = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1153)) ;
  outArgument_outTableViewBindingGeneration = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_handlesRunAction_50571 ;
  GALGAS_bool var_handlesTableViewBinding_50610 ;
  GALGAS_bool var_handlesEnabledBinding_50647 ;
  GALGAS_bool var_handlesHiddenBinding_50683 ;
  GALGAS_bool var_handleGraphicControllerBinding_50729 ;
  GALGAS_lstring joker_50538 ; // Joker input parameter
  GALGAS_bool joker_50735_3 ; // Joker input parameter
  GALGAS_autoLayoutClassParameterList joker_50735_2 ; // Joker input parameter
  GALGAS_astAutoLayoutViewFunctionMap joker_50735_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_50538, var_handlesRunAction_50571, var_handlesTableViewBinding_50610, var_handlesEnabledBinding_50647, var_handlesHiddenBinding_50683, var_handleGraphicControllerBinding_50729, joker_50735_3, joker_50735_2, joker_50735_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1155)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.galgas", 1166)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GALGAS_graphicController::kNotBuilt:
    break ;
  case GALGAS_graphicController::kEnum_none:
    {
    }
    break ;
  case GALGAS_graphicController::kEnum_defined:
    {
      const cEnumAssociatedValues_graphicController_defined * extractPtr_53008 = (const cEnumAssociatedValues_graphicController_defined *) (constinArgument_inGraphicController.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_50902_controllerName = extractPtr_53008->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_50924_propertyName = extractPtr_53008->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_handleGraphicControllerBinding_50729.operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1170)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1171)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1171)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1171)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_propertyKind var_kind_51184 ;
        GALGAS_actionMap joker_51194_2 ; // Joker input parameter
        GALGAS_bool joker_51194_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_50902_controllerName, var_kind_51184, joker_51194_2, joker_51194_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1173)) ;
        switch (var_kind_51184.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1180)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1182)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1184)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_52757 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_51184.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_51575_entityName = extractPtr_52757->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_51583_graphic = extractPtr_52757->mAssociatedValue1 ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, extractedValue_50924_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = extractedValue_51583_graphic.operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1187)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    TC_Array <C_FixItDescription> fixItArray7 ;
                    inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_51575_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1188)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1188)), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1188)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_5) {
              GALGAS_propertyMap var_observablePropertyMap_51919 ;
              GALGAS_classKind joker_51879 ; // Joker input parameter
              GALGAS_actionMap joker_51933_2 ; // Joker input parameter
              GALGAS_propertyGenerationList joker_51933_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_51575_entityName, joker_51879, var_observablePropertyMap_51919, joker_51933_2, joker_51933_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1191)) ;
              GALGAS_propertyKind var_propertyKind_52022 ;
              GALGAS_actionMap joker_52024_2 ; // Joker input parameter
              GALGAS_bool joker_52024_1 ; // Joker input parameter
              var_observablePropertyMap_51919.method_searchKey (extractedValue_50924_propertyName, var_propertyKind_52022, joker_52024_2, joker_52024_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1197)) ;
              switch (var_propertyKind_52022.enumValue ()) {
              case GALGAS_propertyKind::kNotBuilt:
                break ;
              case GALGAS_propertyKind::kEnum_property:
                {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1200)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_toMany:
                {
                  const cEnumAssociatedValues_propertyKind_toMany * extractPtr_52382 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_52022.unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_52205_kEntityName = extractPtr_52382->mAssociatedValue0 ;
                  const GALGAS_bool extractedValue_52217_isGraphic = extractPtr_52382->mAssociatedValue2 ;
                  enumGalgasBool test_9 = kBoolTrue ;
                  if (kBoolTrue == test_9) {
                    test_9 = extractedValue_52217_isGraphic.operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1202)).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      TC_Array <C_FixItDescription> fixItArray10 ;
                      inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_52205_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1203)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1203)), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1203)) ;
                    }
                  }
                }
                break ;
              case GALGAS_propertyKind::kEnum_toOne:
                {
                  TC_Array <C_FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1206)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_arrayController:
                {
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1208)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_selectionController:
                {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1210)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_50902_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1214)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_binding (extractedValue_50902_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1216)) ;
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
      const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_53610 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (constinArgument_inTableValueBinding.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_53138_controllerName = extractPtr_53610->mAssociatedValue0 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_handlesTableViewBinding_50610.operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1223)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1224)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1224)), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1224)) ;
        }
      }
      if (kBoolFalse == test_15) {
        GALGAS_propertyKind var_kind_53390 ;
        GALGAS_actionMap joker_53400_2 ; // Joker input parameter
        GALGAS_bool joker_53400_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_53138_controllerName, var_kind_53390, joker_53400_2, joker_53400_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1226)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_kind_53390.getter_isArrayController (SOURCE_FILE ("auto-layout-view.galgas", 1231)).operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1231)).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (extractedValue_53138_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1232)) ;
          }
        }
        outArgument_outTableViewBindingGeneration = extractedValue_53138_controllerName.readProperty_string () ;
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding (constinArgument_inRunActionDescriptor, var_handlesRunAction_50571, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1238)) ;
  }
  GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_54136 ;
  {
  routine_analyzeAutoLayoutEnableBinding (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_50647, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_enabledBindingGeneration_54136, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1249)) ;
  }
  switch (var_enabledBindingGeneration_54136.enumValue ()) {
  case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
    {
      const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_54275 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_54136.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_54212_binding = extractPtr_54275->mAssociatedValue0 ;
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("enabled"), extractedValue_54212_binding  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1261)) ;
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
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_55033 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inHiddenBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_54419_expression = extractPtr_55033->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_54669 ;
      GALGAS_typeKind var_type_54695 ;
      GALGAS_location var_errorLocation_54730 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_54419_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_54669, var_type_54695, var_errorLocation_54730, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1267)) ;
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_type_54695.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas", 1276)).operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1276)).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (var_errorLocation_54730, GALGAS_string ("expression is not boolean"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1277)) ;
        }
      }
      enumGalgasBool test_21 = kBoolTrue ;
      if (kBoolTrue == test_21) {
        test_21 = var_handlesHiddenBinding_50683.operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1279)).boolEnum () ;
        if (kBoolTrue == test_21) {
          TC_Array <C_FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (var_errorLocation_54730, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1280)) ;
        }
      }
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_54669  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1282)) ;
    }
    break ;
  }
  {
  GALGAS_string temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_string ("self.") ;
  }
  routine_analyzeAutoLayoutRegularBinding (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_23, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1287)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding (const GALGAS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                             const GALGAS_bool constinArgument_inHandlesEnabledBinding,
                                             const GALGAS_bool constinArgument_inPreferences,
                                             const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                             const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                             GALGAS_autolayoutEnabledBindingForGeneration & outArgument_outEnabledBindingGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnabledBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inEnabledBindingDescriptor.enumValue ()) {
  case GALGAS_multipleBindingDescriptor::kNotBuilt:
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
    {
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.galgas", 1312)) ;
    }
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_binding:
    {
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_56679 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inEnabledBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_56069_expression = extractPtr_56679->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_56319 ;
      GALGAS_typeKind var_type_56345 ;
      GALGAS_location var_errorLocation_56380 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_56069_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_enableExpression_56319, var_type_56345, var_errorLocation_56380, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1314)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1323)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_56380, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1324)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_56345.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas", 1326)).operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1326)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_56380, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1327)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::constructor_enabled (var_enableExpression_56319  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1329)) ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding (const GALGAS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                          const GALGAS_bool constinArgument_inHandlesRunAction,
                                          const GALGAS_bool constinArgument_inPreferences,
                                          const GALGAS_lstring constinArgument_inTypeName,
                                          const GALGAS_actionMap constinArgument_inActionMap,
                                          const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                          const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                          GALGAS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inRunActionDescriptor.enumValue ()) {
  case GALGAS_runActionDescriptor::kNotBuilt:
    break ;
  case GALGAS_runActionDescriptor::kEnum_noAction:
    {
      outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.galgas", 1347)) ;
    }
    break ;
  case GALGAS_runActionDescriptor::kEnum_action:
    {
      const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_58153 = (const cEnumAssociatedValues_runActionDescriptor_action *) (constinArgument_inRunActionDescriptor.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_57290_target = extractPtr_58153->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_57306_action = extractPtr_58153->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1349)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1350)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1350)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1350)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, extractedValue_57290_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_57306_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1352)) ;
            outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (GALGAS_string ("self"), extractedValue_57306_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1353)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_actionMap var_controllerActionMap_57832 ;
          GALGAS_propertyKind joker_57787 ; // Joker input parameter
          GALGAS_bool joker_57842 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_57290_target, joker_57787, var_controllerActionMap_57832, joker_57842, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1359)) ;
          var_controllerActionMap_57832.method_searchKey (extractedValue_57306_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1365)) ;
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string ("preferences_") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (temp_3.add_operation (extractedValue_57290_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1367)), extractedValue_57306_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1369)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1369)).add_operation (extractedValue_57290_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1369))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1366)) ;
        }
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRegularBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRegularBinding (const GALGAS_propertyMap constinArgument_inRootPropertyMap,
                                              const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              const GALGAS_propertyMap constinArgument_inBoundModelPropertyMap,
                                              const GALGAS_lstring constinArgument_inOutletTypeName,
                                              const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                              const GALGAS_string constinArgument_inSelfSwiftName,
                                              GALGAS_autoLayoutRegularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_58744 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_58744.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_58844 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1389)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_58902 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1390)) ;
    cEnumerator_observablePropertyList enumerator_58936 (enumerator_58744.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_58936.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_59135 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_59207 ;
      extensionMethod_analyzeObservableProperty (enumerator_58936.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_59135, var_swiftTypeStringForTransientFunctionArgument_59207, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1392)) ;
      switch (var_kind_59135.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_58936.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1402)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1402)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_58936.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1404)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1404)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_58936.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1406)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1406)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_58936.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1408)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1408)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_58902.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_58936.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1410)), var_kind_59135  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1410)) ;
      var_boundModelTypeList_58844.addAssign_operation (var_kind_59135, extensionGetter_location (enumerator_58936.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1411))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1411)) ;
      enumerator_58936.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_60012 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1414)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_60100 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1415)) ;
    GALGAS_lstring var_outletTypeName_60128 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_60165 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.galgas", 1418)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1418)).isValid ()) {
      uint32_t variant_60181 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.galgas", 1418)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1418)).uintValue () ;
      bool loop_60181 = true ;
      while (loop_60181) {
        loop_60181 = GALGAS_bool (kIsNotEqual, var_outletTypeName_60128.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_60165 COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1418)).isValid () ;
        if (loop_60181) {
          loop_60181 = GALGAS_bool (kIsNotEqual, var_outletTypeName_60128.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_60165 COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1418)).boolValue () ;
        }
        if (loop_60181 && (0 == variant_60181)) {
          loop_60181 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.galgas", 1418)) ;
        }
        if (loop_60181) {
          variant_60181 -- ;
          var_continues_60165 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_60441 ;
          GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_60465 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_60128, var_superOutletClassName_60441, var_bindingMap_60465, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1420)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_bindingMap_60465.getter_hasKey (enumerator_58744.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1425)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_bindingMap_60465.method_searchKey (enumerator_58744.current_mBindingName (HERE), var_outletBindingSpecificationModelList_60012, var_controllerBindingOptionDecoratedList_60100, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1426)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_continues_60165 = GALGAS_bool (true) ;
            var_outletTypeName_60128 = var_superOutletClassName_60441 ;
          }
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_continues_60165.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_58744.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1437)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_58844.getter_length (SOURCE_FILE ("auto-layout-view.galgas", 1438)).objectCompare (var_outletBindingSpecificationModelList_60012.getter_length (SOURCE_FILE ("auto-layout-view.galgas", 1438)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_58744.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_60012.getter_length (SOURCE_FILE ("auto-layout-view.galgas", 1440)).getter_string (SOURCE_FILE ("auto-layout-view.galgas", 1440)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1440)).add_operation (var_boundModelTypeList_58844.getter_length (SOURCE_FILE ("auto-layout-view.galgas", 1442)).getter_string (SOURCE_FILE ("auto-layout-view.galgas", 1441)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1441)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1442)), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1439)) ;
        }
      }
      if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_61225 (var_outletBindingSpecificationModelList_60012, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_61300 (var_boundModelTypeList_58844, kENUMERATION_UP) ;
        while (enumerator_61225.hasCurrentObject () && enumerator_61300.hasCurrentObject ()) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            GALGAS_bool test_10 = enumerator_61225.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_isTransient (enumerator_61300.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1445)) ;
            }
            test_9 = test_10.boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_61300.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1446)) ;
            }
          }
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            GALGAS_bool test_13 = enumerator_61225.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.galgas", 1448)) ;
            if (kBoolTrue == test_13.boolEnum ()) {
              test_13 = extensionGetter_isEnumType (enumerator_61300.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1448)) ;
            }
            test_12 = test_13.boolEnum () ;
            if (kBoolTrue == test_12) {
            }
          }
          if (kBoolFalse == test_12) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_61225.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1449)).objectCompare (extensionGetter_swiftTypeName (enumerator_61300.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1449)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_61300.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_61225.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1450)), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1450)) ;
              }
            }
          }
          enumerator_61225.gotoNextObject () ;
          enumerator_61300.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_61882 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_60100.getter_length (SOURCE_FILE ("auto-layout-view.galgas", 1456)).objectCompare (enumerator_58744.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("auto-layout-view.galgas", 1456)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_s_61996 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_60100.getter_length (SOURCE_FILE ("auto-layout-view.galgas", 1458)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_s_61996 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_17) {
          var_s_61996 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_62210 (var_controllerBindingOptionDecoratedList_60100, kENUMERATION_UP) ;
          while (enumerator_62210.hasCurrentObject ()) {
            var_s_61996.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_62210.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1463)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1463)).add_operation (extensionGetter_swiftTypeName (enumerator_62210.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1463)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1463)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1463)) ;
            enumerator_62210.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_58744.current_mBindingName (HERE).readProperty_location (), var_s_61996, fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1466)) ;
      }
    }
    if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_62447 (var_controllerBindingOptionDecoratedList_60100, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_62531 (enumerator_58744.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_62447.hasCurrentObject () && enumerator_62531.hasCurrentObject ()) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsNotEqual, enumerator_62447.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_62531.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_62531.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_62447.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1470)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1470)), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1470)) ;
          }
        }
        GALGAS_string var_optionValueAsString_62915 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1473)) ;
        temp_21.addAssign_operation (enumerator_62447.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1473)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_62531.current_mOptionValue (HERE).ptr (), temp_21, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_62915, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1472)) ;
        var_bindingOptionString_61882.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_62447.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1477)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1477)).add_operation (var_optionValueAsString_62915, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1477)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1477)) ;
        enumerator_62447.gotoNextObject () ;
        enumerator_62531.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (enumerator_58744.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_58902, var_bindingOptionString_61882  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1481)) ;
    enumerator_58744.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astHStackViewInstructionDeclaration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astHStackViewInstructionDeclaration_generateCode (const cPtr_astAbstractViewInstructionDeclaration * inObject,
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
                                                                              GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astHStackViewInstructionDeclaration * object = (const cPtr_astHStackViewInstructionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astHStackViewInstructionDeclaration) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_64316 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1504)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_64797 ;
  const GALGAS_astHStackViewInstructionDeclaration temp_0 = object ;
  extensionMethod_check (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_64797, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1505)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_64878 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1521)) ;
  const GALGAS_astHStackViewInstructionDeclaration temp_1 = object ;
  switch (temp_1.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_65485 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_64980_hiddenBindingExpression = extractPtr_65485->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_65243 ;
      GALGAS_typeKind var_type_65269 ;
      GALGAS_location var_errorLocation_65304 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_64980_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_65243, var_type_65269, var_errorLocation_65304, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1525)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_65269.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas", 1534)).operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1534)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_65304, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1535)) ;
        }
      }
      var_multipleBindingGenerationList_64878.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_65243  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1537)) ;
    }
    break ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_4 = object ;
  cEnumerator_astViewInstructionList enumerator_65510 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_65510.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_65931 ;
    callExtensionMethod_generateCode ((const cPtr_astAbstractViewInstructionDeclaration *) enumerator_65510.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_65931, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1542)) ;
    var_instructionList_64316.addAssign_operation (var_generatedInstruction_65931  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1557)) ;
    enumerator_65510.gotoNextObject () ;
  }
  outArgument_outInstruction = GALGAS_hStackViewInstructionGeneration::constructor_new (var_funcCallList_64797, var_instructionList_64316, var_multipleBindingGenerationList_64878  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1559)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astHStackViewInstructionDeclaration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration.mSlotID,
                                     extensionMethod_astHStackViewInstructionDeclaration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astHStackViewInstructionDeclaration_generateCode (defineExtensionMethod_astHStackViewInstructionDeclaration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astHSplitViewInstructionDeclaration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astHSplitViewInstructionDeclaration_generateCode (const cPtr_astAbstractViewInstructionDeclaration * inObject,
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
                                                                              GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astHSplitViewInstructionDeclaration * object = (const cPtr_astHSplitViewInstructionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astHSplitViewInstructionDeclaration) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_67227 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1578)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_67713 ;
  const GALGAS_astHSplitViewInstructionDeclaration temp_0 = object ;
  extensionMethod_check (temp_0.readProperty_mFunctionCallList (), GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view.galgas", 1580)), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_67713, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1579)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_67794 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1595)) ;
  const GALGAS_astHSplitViewInstructionDeclaration temp_1 = object ;
  switch (temp_1.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_68401 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_67896_hiddenBindingExpression = extractPtr_68401->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_68159 ;
      GALGAS_typeKind var_type_68185 ;
      GALGAS_location var_errorLocation_68220 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_67896_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_68159, var_type_68185, var_errorLocation_68220, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1599)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_68185.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas", 1608)).operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1608)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_68220, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1609)) ;
        }
      }
      var_multipleBindingGenerationList_67794.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_68159  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1611)) ;
    }
    break ;
  }
  const GALGAS_astHSplitViewInstructionDeclaration temp_4 = object ;
  cEnumerator_astViewInstructionList enumerator_68426 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_68426.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_68847 ;
    callExtensionMethod_generateCode ((const cPtr_astAbstractViewInstructionDeclaration *) enumerator_68426.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_68847, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1616)) ;
    var_instructionList_67227.addAssign_operation (var_generatedInstruction_68847  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1631)) ;
    enumerator_68426.gotoNextObject () ;
  }
  outArgument_outInstruction = GALGAS_hSplitViewInstructionGeneration::constructor_new (var_funcCallList_67713, var_instructionList_67227, var_multipleBindingGenerationList_67794  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1633)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astHSplitViewInstructionDeclaration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_astHSplitViewInstructionDeclaration.mSlotID,
                                     extensionMethod_astHSplitViewInstructionDeclaration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astHSplitViewInstructionDeclaration_generateCode (defineExtensionMethod_astHSplitViewInstructionDeclaration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astVSplitViewInstructionDeclaration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astVSplitViewInstructionDeclaration_generateCode (const cPtr_astAbstractViewInstructionDeclaration * inObject,
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
                                                                              GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astVSplitViewInstructionDeclaration * object = (const cPtr_astVSplitViewInstructionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astVSplitViewInstructionDeclaration) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_70143 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1652)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_70580 ;
  const GALGAS_astVSplitViewInstructionDeclaration temp_0 = object ;
  extensionMethod_check (temp_0.readProperty_mFunctionCallList (), GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view.galgas", 1654)), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_70580, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1653)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_70661 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1669)) ;
  const GALGAS_astVSplitViewInstructionDeclaration temp_1 = object ;
  switch (temp_1.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_71268 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_70763_hiddenBindingExpression = extractPtr_71268->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_71026 ;
      GALGAS_typeKind var_type_71052 ;
      GALGAS_location var_errorLocation_71087 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_70763_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_71026, var_type_71052, var_errorLocation_71087, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1673)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_71052.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas", 1682)).operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1682)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_71087, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1683)) ;
        }
      }
      var_multipleBindingGenerationList_70661.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_71026  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1685)) ;
    }
    break ;
  }
  const GALGAS_astVSplitViewInstructionDeclaration temp_4 = object ;
  cEnumerator_astViewInstructionList enumerator_71293 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_71293.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_71714 ;
    callExtensionMethod_generateCode ((const cPtr_astAbstractViewInstructionDeclaration *) enumerator_71293.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_71714, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1690)) ;
    var_instructionList_70143.addAssign_operation (var_generatedInstruction_71714  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1705)) ;
    enumerator_71293.gotoNextObject () ;
  }
  outArgument_outInstruction = GALGAS_vSplitViewInstructionGeneration::constructor_new (var_funcCallList_70580, var_instructionList_70143, var_multipleBindingGenerationList_70661  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1707)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astVSplitViewInstructionDeclaration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_astVSplitViewInstructionDeclaration.mSlotID,
                                     extensionMethod_astVSplitViewInstructionDeclaration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astVSplitViewInstructionDeclaration_generateCode (defineExtensionMethod_astVSplitViewInstructionDeclaration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astVStackViewInstructionDeclaration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astVStackViewInstructionDeclaration_generateCode (const cPtr_astAbstractViewInstructionDeclaration * inObject,
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
                                                                              GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astVStackViewInstructionDeclaration * object = (const cPtr_astVStackViewInstructionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astVStackViewInstructionDeclaration) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_73010 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1726)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_73491 ;
  const GALGAS_astVStackViewInstructionDeclaration temp_0 = object ;
  extensionMethod_check (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_73491, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1727)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_73572 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 1743)) ;
  const GALGAS_astVStackViewInstructionDeclaration temp_1 = object ;
  switch (temp_1.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_74179 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_73674_hiddenBindingExpression = extractPtr_74179->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_73937 ;
      GALGAS_typeKind var_type_73963 ;
      GALGAS_location var_errorLocation_73998 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_73674_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_73937, var_type_73963, var_errorLocation_73998, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1747)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_73963.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas", 1756)).operator_not (SOURCE_FILE ("auto-layout-view.galgas", 1756)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_73998, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1757)) ;
        }
      }
      var_multipleBindingGenerationList_73572.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_73937  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1759)) ;
    }
    break ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_4 = object ;
  cEnumerator_astViewInstructionList enumerator_74204 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_74204.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_74625 ;
    callExtensionMethod_generateCode ((const cPtr_astAbstractViewInstructionDeclaration *) enumerator_74204.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_74625, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1764)) ;
    var_instructionList_73010.addAssign_operation (var_generatedInstruction_74625  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1779)) ;
    enumerator_74204.gotoNextObject () ;
  }
  outArgument_outInstruction = GALGAS_vStackViewInstructionGeneration::constructor_new (var_funcCallList_73491, var_instructionList_73010, var_multipleBindingGenerationList_73572  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1781)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astVStackViewInstructionDeclaration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration.mSlotID,
                                     extensionMethod_astVStackViewInstructionDeclaration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astVStackViewInstructionDeclaration_generateCode (defineExtensionMethod_astVStackViewInstructionDeclaration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astStackViewReferenceInstructionDeclaration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_astStackViewReferenceInstructionDeclaration_generateCode (const cPtr_astAbstractViewInstructionDeclaration * inObject,
                                                                                      const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
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
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_astStackViewReferenceInstructionDeclaration * object = (const cPtr_astStackViewReferenceInstructionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_astStackViewReferenceInstructionDeclaration) ;
  const GALGAS_astStackViewReferenceInstructionDeclaration temp_0 = object ;
  outArgument_outInstruction = GALGAS_stackViewReferenceInstructionGeneration::constructor_new (temp_0.readProperty_mStackViewName ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1800)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_astStackViewReferenceInstructionDeclaration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_astStackViewReferenceInstructionDeclaration.mSlotID,
                                     extensionMethod_astStackViewReferenceInstructionDeclaration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astStackViewReferenceInstructionDeclaration_generateCode (defineExtensionMethod_astStackViewReferenceInstructionDeclaration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@newHorizontalStackViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_newHorizontalStackViewGeneration_generate (const cPtr_abstractViewGeneration * inObject,
                                                                                const GALGAS_string constinArgument_inViewName,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_newHorizontalStackViewGeneration * object = (const cPtr_newHorizontalStackViewGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_newHorizontalStackViewGeneration) ;
  result_result = GALGAS_string ("  let ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1994)).add_operation (GALGAS_string (" : AutoLayoutBase_NSStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1994)) ;
  const GALGAS_newHorizontalStackViewGeneration temp_0 = object ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1995)) ;
  result_result.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 1996)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_newHorizontalStackViewGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration.mSlotID,
                                 extensionGetter_newHorizontalStackViewGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_newHorizontalStackViewGeneration_generate (defineExtensionGetter_newHorizontalStackViewGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@newVerticalStackViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_newVerticalStackViewGeneration_generate (const cPtr_abstractViewGeneration * inObject,
                                                                              const GALGAS_string constinArgument_inViewName,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_newVerticalStackViewGeneration * object = (const cPtr_newVerticalStackViewGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_newVerticalStackViewGeneration) ;
  result_result = GALGAS_string ("  let ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2002)).add_operation (GALGAS_string (" : AutoLayoutBase_NSStackView = AutoLayoutVerticalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2002)) ;
  const GALGAS_newVerticalStackViewGeneration temp_0 = object ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2003)) ;
  result_result.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2004)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_newVerticalStackViewGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_newVerticalStackViewGeneration.mSlotID,
                                 extensionGetter_newVerticalStackViewGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_newVerticalStackViewGeneration_generate (defineExtensionGetter_newVerticalStackViewGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedHorizontalViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_computedHorizontalViewGeneration_generate (const cPtr_abstractViewGeneration * inObject,
                                                                                const GALGAS_string constinArgument_inViewName,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_computedHorizontalViewGeneration * object = (const cPtr_computedHorizontalViewGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_computedHorizontalViewGeneration) ;
  result_result = GALGAS_string ("  lazy var ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2010)).add_operation (GALGAS_string (" : AutoLayoutHorizontalStackView = {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2010)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2011)) ;
  const GALGAS_computedHorizontalViewGeneration temp_0 = object ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2012)) ;
  const GALGAS_computedHorizontalViewGeneration temp_1 = object ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_85820 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_85807 ((uint32_t) 0) ;
  while (enumerator_85820.hasCurrentObject ()) {
    GALGAS_string var_name_85870 = GALGAS_string ("view_").add_operation (index_85807.getter_string (SOURCE_FILE ("auto-layout-view.galgas", 2014)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2014)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_85820.current_mInstruction (HERE).ptr (), var_name_85870, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2015)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2015)) ;
    result_result.plusAssign_operation(GALGAS_string ("    hStackView.appendView (").add_operation (var_name_85870, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2016)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2016)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2016)) ;
    enumerator_85820.gotoNextObject () ;
    index_85807.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2013)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2018)) ;
  result_result.plusAssign_operation(GALGAS_string ("  } ()\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2019)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_computedHorizontalViewGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_computedHorizontalViewGeneration.mSlotID,
                                 extensionGetter_computedHorizontalViewGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_computedHorizontalViewGeneration_generate (defineExtensionGetter_computedHorizontalViewGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedVerticalViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_computedVerticalViewGeneration_generate (const cPtr_abstractViewGeneration * inObject,
                                                                              const GALGAS_string constinArgument_inViewName,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_computedVerticalViewGeneration * object = (const cPtr_computedVerticalViewGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_computedVerticalViewGeneration) ;
  result_result = GALGAS_string ("  lazy var ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2025)).add_operation (GALGAS_string (" : AutoLayoutVerticalStackView = {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2025)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let vStackView = AutoLayoutVerticalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2026)) ;
  const GALGAS_computedVerticalViewGeneration temp_0 = object ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2027)) ;
  const GALGAS_computedVerticalViewGeneration temp_1 = object ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_86501 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_86488 ((uint32_t) 0) ;
  while (enumerator_86501.hasCurrentObject ()) {
    GALGAS_string var_name_86551 = GALGAS_string ("view_").add_operation (index_86488.getter_string (SOURCE_FILE ("auto-layout-view.galgas", 2029)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2029)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_86501.current_mInstruction (HERE).ptr (), var_name_86551, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2030)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2030)) ;
    result_result.plusAssign_operation(GALGAS_string ("    vStackView.appendView (").add_operation (var_name_86551, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2031)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2031)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2031)) ;
    enumerator_86501.gotoNextObject () ;
    index_86488.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2028)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2033)) ;
  result_result.plusAssign_operation(GALGAS_string ("  } ()\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2034)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_computedVerticalViewGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_computedVerticalViewGeneration.mSlotID,
                                 extensionGetter_computedVerticalViewGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_computedVerticalViewGeneration_generate (defineExtensionGetter_computedVerticalViewGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_autoLayoutSpaceViewInstructionGeneration_generate (const cPtr_abstractViewInstructionGeneration * /* inObject */,
                                                                                        const GALGAS_string constinArgument_inName,
                                                                                        const GALGAS_string constinArgument_inIndentation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2044)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2044)).add_operation (GALGAS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2044)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_autoLayoutSpaceViewInstructionGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration.mSlotID,
                                 extensionGetter_autoLayoutSpaceViewInstructionGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_autoLayoutSpaceViewInstructionGeneration_generate (defineExtensionGetter_autoLayoutSpaceViewInstructionGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_autoLayoutSeparatorInstructionGeneration_generate (const cPtr_abstractViewInstructionGeneration * inObject,
                                                                                        const GALGAS_string constinArgument_inName,
                                                                                        const GALGAS_string constinArgument_inIndentation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_autoLayoutSeparatorInstructionGeneration * object = (const cPtr_autoLayoutSeparatorInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutSeparatorInstructionGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_autoLayoutSeparatorInstructionGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2052)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2052)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2052)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2054)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2054)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2054)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_autoLayoutSeparatorInstructionGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration.mSlotID,
                                 extensionGetter_autoLayoutSeparatorInstructionGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_autoLayoutSeparatorInstructionGeneration_generate (defineExtensionGetter_autoLayoutSeparatorInstructionGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_autoLayoutLocalViewInstructionGeneration_generate (const cPtr_abstractViewInstructionGeneration * inObject,
                                                                                        const GALGAS_string constinArgument_inName,
                                                                                        const GALGAS_string constinArgument_inIndentation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_autoLayoutLocalViewInstructionGeneration * object = (const cPtr_autoLayoutLocalViewInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutLocalViewInstructionGeneration) ;
  const GALGAS_autoLayoutLocalViewInstructionGeneration temp_0 = object ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2061)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2061)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2061)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2061)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2061)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_autoLayoutLocalViewInstructionGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration.mSlotID,
                                 extensionGetter_autoLayoutLocalViewInstructionGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_autoLayoutLocalViewInstructionGeneration_generate (defineExtensionGetter_autoLayoutLocalViewInstructionGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_autoLayoutComputedViewInstructionGeneration_generate (const cPtr_abstractViewInstructionGeneration * inObject,
                                                                                           const GALGAS_string constinArgument_inName,
                                                                                           const GALGAS_string constinArgument_inIndentation,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_autoLayoutComputedViewInstructionGeneration * object = (const cPtr_autoLayoutComputedViewInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_autoLayoutComputedViewInstructionGeneration) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_0 = object ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2067)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2067)).add_operation (GALGAS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2067)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2067)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2067)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_1 = object ;
  cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_88578 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_88578.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_88578.current (HERE).readProperty_mParameterName ().add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2070)).add_operation (enumerator_88578.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2070)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2070)) ;
    if (enumerator_88578.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2072)) ;
    }
    enumerator_88578.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2074)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_2 = object ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2075)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_3 = object ;
  cEnumerator_autoLayoutRegularBindingsGenerationList enumerator_88822 (temp_3.readProperty_mRegularBindingsGenerationList (), kENUMERATION_UP) ;
  while (enumerator_88822.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2077)).add_operation (enumerator_88822.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2077)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2077)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2077)) ;
    cEnumerator_boundObjectList enumerator_88956 (enumerator_88822.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_88956.hasCurrentObject ()) {
      result_result.plusAssign_operation(enumerator_88956.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2079)) ;
      if (enumerator_88956.hasNextObject ()) {
        result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2080)) ;
      }
      enumerator_88956.gotoNextObject () ;
    }
    result_result.plusAssign_operation(enumerator_88822.current_mBindingOptionsString (HERE).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2082)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2082)) ;
    enumerator_88822.gotoNextObject () ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_4 = object ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_89122 (temp_4.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_89122.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2085)).add_operation (enumerator_89122.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2085)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2085)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_89122.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2085)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2085)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2085)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2085)) ;
    enumerator_89122.gotoNextObject () ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_5 = object ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
    break ;
  case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
    {
      const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_89632 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (temp_5.readProperty_mRunBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_89344_targetName = extractPtr_89632->mAssociatedValue0 ;
      const GALGAS_string extractedValue_89355_actionName = extractPtr_89632->mAssociatedValue1 ;
      const GALGAS_string extractedValue_89370_targetTypeName = extractPtr_89632->mAssociatedValue2 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2090)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2090)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2091)).add_operation (extractedValue_89344_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2091)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2091)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2091)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2092)).add_operation (extractedValue_89370_targetTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2092)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2092)).add_operation (extractedValue_89355_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2092)).add_operation (GALGAS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2092)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2092)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2093)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2093)) ;
    }
    break ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_6 = object ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GALGAS_autoLayoutViewGraphicControllerBindingGeneration::kNotBuilt:
    break ;
  case GALGAS_autoLayoutViewGraphicControllerBindingGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autoLayoutViewGraphicControllerBindingGeneration::kEnum_binding:
    {
      const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding * extractPtr_89833 = (const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *) (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_89739_controllerName = extractPtr_89833->mAssociatedValue0 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2098)).add_operation (extractedValue_89739_controllerName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2098)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2098)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2098)) ;
    }
    break ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_9 = object ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2101)).add_operation (temp_9.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2101)).add_operation (GALGAS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2101)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2101)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2101)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2101)) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_11 = object ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mOutletName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_12 = object ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2104)).add_operation (temp_12.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2104)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2104)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2104)).add_operation (GALGAS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2104)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2104)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_14 = object ;
    test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mConfiguratorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_15 = object ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2107)).add_operation (temp_15.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2107)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2107)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2107)).add_operation (GALGAS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2107)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2107)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_autoLayoutComputedViewInstructionGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration.mSlotID,
                                 extensionGetter_autoLayoutComputedViewInstructionGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_autoLayoutComputedViewInstructionGeneration_generate (defineExtensionGetter_autoLayoutComputedViewInstructionGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_hStackViewInstructionGeneration_generate (const cPtr_abstractViewInstructionGeneration * inObject,
                                                                               const GALGAS_string constinArgument_inName,
                                                                               const GALGAS_string constinArgument_inIndentation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_hStackViewInstructionGeneration * object = (const cPtr_hStackViewInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_hStackViewInstructionGeneration) ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2114)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2114)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2114)) ;
  const GALGAS_hStackViewInstructionGeneration temp_0 = object ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2115)) ;
  const GALGAS_hStackViewInstructionGeneration temp_1 = object ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_90705 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_90705.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2117)).add_operation (enumerator_90705.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2117)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2117)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_90705.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2117)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2117)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2117)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2117)) ;
    enumerator_90705.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2119)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2119)) ;
  GALGAS_string var_indentation_90908 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2120)) ;
  const GALGAS_hStackViewInstructionGeneration temp_2 = object ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_90950 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_90937 ((uint32_t) 0) ;
  while (enumerator_90950.hasCurrentObject ()) {
    GALGAS_string var_name_91001 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2122)).add_operation (index_90937.getter_string (SOURCE_FILE ("auto-layout-view.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2122)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_90950.current_mInstruction (HERE).ptr (), var_name_91001, var_indentation_90908, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2123)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2123)) ;
    result_result.plusAssign_operation(var_indentation_90908.add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2124)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2124)).add_operation (var_name_91001, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2124)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2124)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2124)) ;
    enumerator_90950.gotoNextObject () ;
    index_90937.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2121)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2126)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2126)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_hStackViewInstructionGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_hStackViewInstructionGeneration.mSlotID,
                                 extensionGetter_hStackViewInstructionGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_hStackViewInstructionGeneration_generate (defineExtensionGetter_hStackViewInstructionGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hSplitViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_hSplitViewInstructionGeneration_generate (const cPtr_abstractViewInstructionGeneration * inObject,
                                                                               const GALGAS_string constinArgument_inName,
                                                                               const GALGAS_string constinArgument_inIndentation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_hSplitViewInstructionGeneration * object = (const cPtr_hSplitViewInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_hSplitViewInstructionGeneration) ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2132)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2132)).add_operation (GALGAS_string (" = AutoLayoutHorizontalSplitView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2132)) ;
  const GALGAS_hSplitViewInstructionGeneration temp_0 = object ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2133)) ;
  const GALGAS_hSplitViewInstructionGeneration temp_1 = object ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_91601 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_91601.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2135)).add_operation (enumerator_91601.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2135)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2135)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_91601.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2135)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2135)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2135)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2135)) ;
    enumerator_91601.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2137)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2137)) ;
  GALGAS_string var_indentation_91804 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2138)) ;
  const GALGAS_hSplitViewInstructionGeneration temp_2 = object ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_91846 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_91833 ((uint32_t) 0) ;
  while (enumerator_91846.hasCurrentObject ()) {
    GALGAS_string var_name_91897 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2140)).add_operation (index_91833.getter_string (SOURCE_FILE ("auto-layout-view.galgas", 2140)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2140)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_91846.current_mInstruction (HERE).ptr (), var_name_91897, var_indentation_91804, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2141)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2141)) ;
    result_result.plusAssign_operation(var_indentation_91804.add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2142)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2142)).add_operation (var_name_91897, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2142)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2142)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2142)) ;
    enumerator_91846.gotoNextObject () ;
    index_91833.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2139)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2144)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2144)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_hSplitViewInstructionGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_hSplitViewInstructionGeneration.mSlotID,
                                 extensionGetter_hSplitViewInstructionGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_hSplitViewInstructionGeneration_generate (defineExtensionGetter_hSplitViewInstructionGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vSplitViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_vSplitViewInstructionGeneration_generate (const cPtr_abstractViewInstructionGeneration * inObject,
                                                                               const GALGAS_string constinArgument_inName,
                                                                               const GALGAS_string constinArgument_inIndentation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_vSplitViewInstructionGeneration * object = (const cPtr_vSplitViewInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_vSplitViewInstructionGeneration) ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2150)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2150)).add_operation (GALGAS_string (" = AutoLayoutVerticalSplitView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2150)) ;
  const GALGAS_vSplitViewInstructionGeneration temp_0 = object ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2151)) ;
  const GALGAS_vSplitViewInstructionGeneration temp_1 = object ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_92495 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_92495.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2153)).add_operation (enumerator_92495.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2153)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2153)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_92495.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2153)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2153)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2153)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2153)) ;
    enumerator_92495.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2155)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2155)) ;
  GALGAS_string var_indentation_92698 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2156)) ;
  const GALGAS_vSplitViewInstructionGeneration temp_2 = object ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_92740 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_92727 ((uint32_t) 0) ;
  while (enumerator_92740.hasCurrentObject ()) {
    GALGAS_string var_name_92791 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2158)).add_operation (index_92727.getter_string (SOURCE_FILE ("auto-layout-view.galgas", 2158)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2158)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_92740.current_mInstruction (HERE).ptr (), var_name_92791, var_indentation_92698, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2159)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2159)) ;
    result_result.plusAssign_operation(var_indentation_92698.add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2160)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2160)).add_operation (var_name_92791, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2160)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2160)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2160)) ;
    enumerator_92740.gotoNextObject () ;
    index_92727.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2157)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2162)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2162)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_vSplitViewInstructionGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_vSplitViewInstructionGeneration.mSlotID,
                                 extensionGetter_vSplitViewInstructionGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_vSplitViewInstructionGeneration_generate (defineExtensionGetter_vSplitViewInstructionGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_vStackViewInstructionGeneration_generate (const cPtr_abstractViewInstructionGeneration * inObject,
                                                                               const GALGAS_string constinArgument_inName,
                                                                               const GALGAS_string constinArgument_inIndentation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_vStackViewInstructionGeneration * object = (const cPtr_vStackViewInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_vStackViewInstructionGeneration) ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2168)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2168)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2168)) ;
  const GALGAS_vStackViewInstructionGeneration temp_0 = object ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2169)) ;
  const GALGAS_vStackViewInstructionGeneration temp_1 = object ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_93389 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_93389.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2171)).add_operation (enumerator_93389.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2171)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2171)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_93389.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2171)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2171)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2171)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2171)) ;
    enumerator_93389.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2173)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2173)) ;
  GALGAS_string var_indentation_93592 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2174)) ;
  const GALGAS_vStackViewInstructionGeneration temp_2 = object ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_93634 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_93621 ((uint32_t) 0) ;
  while (enumerator_93634.hasCurrentObject ()) {
    GALGAS_string var_name_93685 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2176)).add_operation (index_93621.getter_string (SOURCE_FILE ("auto-layout-view.galgas", 2176)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2176)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_93634.current_mInstruction (HERE).ptr (), var_name_93685, var_indentation_93592, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2177)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2177)) ;
    result_result.plusAssign_operation(var_indentation_93592.add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2178)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2178)).add_operation (var_name_93685, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2178)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2178)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2178)) ;
    enumerator_93634.gotoNextObject () ;
    index_93621.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2175)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2180)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2180)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_vStackViewInstructionGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_vStackViewInstructionGeneration.mSlotID,
                                 extensionGetter_vStackViewInstructionGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_vStackViewInstructionGeneration_generate (defineExtensionGetter_vStackViewInstructionGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stackViewReferenceInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_stackViewReferenceInstructionGeneration_generate (const cPtr_abstractViewInstructionGeneration * inObject,
                                                                                       const GALGAS_string constinArgument_inName,
                                                                                       const GALGAS_string constinArgument_inIndentation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_stackViewReferenceInstructionGeneration * object = (const cPtr_stackViewReferenceInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_stackViewReferenceInstructionGeneration) ;
  const GALGAS_stackViewReferenceInstructionGeneration temp_0 = object ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2186)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2186)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2186)).add_operation (temp_0.readProperty_mStackViewName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2186)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 2186)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_stackViewReferenceInstructionGeneration_generate (void) {
  enterExtensionGetter_generate (kTypeDescriptor_GALGAS_stackViewReferenceInstructionGeneration.mSlotID,
                                 extensionGetter_stackViewReferenceInstructionGeneration_generate) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_stackViewReferenceInstructionGeneration_generate (defineExtensionGetter_stackViewReferenceInstructionGeneration_generate, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outletClassDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outletClassDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outletClassDeclarationAST * object = (const cPtr_outletClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_outletClassDeclarationAST) ;
  {
  const GALGAS_outletClassDeclarationAST temp_0 = object ;
  const GALGAS_outletClassDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 18)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_outletClassDeclarationAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_outletClassDeclarationAST temp_4 = object ;
      const GALGAS_outletClassDeclarationAST temp_5 = object ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("outlet-class.galgas", 20)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outletClassDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_outletClassDeclarationAST.mSlotID,
                                               extensionMethod_outletClassDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outletClassDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_outletClassDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outletClassDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_outletClassDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_outletClassDeclarationAST * object = (const cPtr_outletClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_outletClassDeclarationAST) ;
  const GALGAS_outletClassDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_outletClassDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_outletClassDeclarationAST.mSlotID,
                                extensionGetter_outletClassDeclarationAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_outletClassDeclarationAST_nodeKey (defineExtensionGetter_outletClassDeclarationAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outletClassDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outletClassDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outletClassDeclarationAST * object = (const cPtr_outletClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_outletClassDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_outletClassDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_outletClassDeclarationAST temp_2 = object ;
      const GALGAS_outletClassDeclarationAST temp_3 = object ;
      const GALGAS_outletClassDeclarationAST temp_4 = object ;
      const GALGAS_outletClassDeclarationAST temp_5 = object ;
      const GALGAS_outletClassDeclarationAST temp_6 = object ;
      const GALGAS_outletClassDeclarationAST temp_7 = object ;
      const GALGAS_outletClassDeclarationAST temp_8 = object ;
      ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("outlet-class.galgas", 106)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 104)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_hasRunAction_3837 ;
    GALGAS_bool var_handlesTableValueBinding_3873 ;
    GALGAS_bool var_hasEnabled_3895 ;
    GALGAS_bool var_hasHidden_3916 ;
    GALGAS_bool var_handlesGraphicControllerBinding_3959 ;
    const GALGAS_outletClassDeclarationAST temp_9 = object ;
    GALGAS_lstring joker_3812 ; // Joker input parameter
    GALGAS_bool joker_3967 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3812, var_hasRunAction_3837, var_handlesTableValueBinding_3873, var_hasEnabled_3895, var_hasHidden_3916, var_handlesGraphicControllerBinding_3959, joker_3967, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 115)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_outletClassDeclarationAST temp_11 = object ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3837 COMMA_SOURCE_FILE ("outlet-class.galgas", 125)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_outletClassDeclarationAST temp_12 = object ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.galgas", 126)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_outletClassDeclarationAST temp_15 = object ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3873 COMMA_SOURCE_FILE ("outlet-class.galgas", 128)).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_outletClassDeclarationAST temp_16 = object ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.galgas", 129)) ;
      }
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GALGAS_outletClassDeclarationAST temp_19 = object ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3895 COMMA_SOURCE_FILE ("outlet-class.galgas", 131)).boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_outletClassDeclarationAST temp_20 = object ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.galgas", 132)) ;
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      const GALGAS_outletClassDeclarationAST temp_23 = object ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3916 COMMA_SOURCE_FILE ("outlet-class.galgas", 134)).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_outletClassDeclarationAST temp_24 = object ;
        TC_Array <C_FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.galgas", 135)) ;
      }
    }
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      const GALGAS_outletClassDeclarationAST temp_27 = object ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3959 COMMA_SOURCE_FILE ("outlet-class.galgas", 137)).boolEnum () ;
      if (kBoolTrue == test_26) {
        const GALGAS_outletClassDeclarationAST temp_28 = object ;
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$graphicController binding already defined in superclass"), fixItArray29  COMMA_SOURCE_FILE ("outlet-class.galgas", 138)) ;
      }
    }
    {
    const GALGAS_outletClassDeclarationAST temp_30 = object ;
    const GALGAS_outletClassDeclarationAST temp_31 = object ;
    const GALGAS_outletClassDeclarationAST temp_32 = object ;
    const GALGAS_outletClassDeclarationAST temp_33 = object ;
    const GALGAS_outletClassDeclarationAST temp_34 = object ;
    const GALGAS_outletClassDeclarationAST temp_35 = object ;
    const GALGAS_outletClassDeclarationAST temp_36 = object ;
    const GALGAS_outletClassDeclarationAST temp_37 = object ;
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3837 COMMA_SOURCE_FILE ("outlet-class.galgas", 143)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3873 COMMA_SOURCE_FILE ("outlet-class.galgas", 144)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3895 COMMA_SOURCE_FILE ("outlet-class.galgas", 145)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3916 COMMA_SOURCE_FILE ("outlet-class.galgas", 146)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3959 COMMA_SOURCE_FILE ("outlet-class.galgas", 147)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 140)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outletClassDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_outletClassDeclarationAST.mSlotID,
                                           extensionMethod_outletClassDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outletClassDeclarationAST_firstAnalysisPhase (defineExtensionMethod_outletClassDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                           const GALGAS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_outletClassBindingSpecificationList enumerator_4770 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_4770.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4888 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.galgas", 129)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4948 (enumerator_4770.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4948.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4948.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_4888.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.galgas", 133)), GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.galgas", 133))  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 133)), enumerator_4948.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 132)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_5319 ;
        GALGAS_propertyMap joker_5321_3 ; // Joker input parameter
        GALGAS_actionMap joker_5321_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5321_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4948.current_mModelTypeName (HERE), var_classKind_5319, joker_5321_3, joker_5321_2, joker_5321_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 136)) ;
        GALGAS_typeKind var_typeKind_5355 ;
        switch (var_classKind_5319.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4948.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 140)) ;
            var_typeKind_5355.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_5545 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5319.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5516_kind = extractPtr_5545->mAssociatedValue0 ;
            var_typeKind_5355 = extractedValue_5516_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4948.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 144)) ;
            var_typeKind_5355.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4948.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 146)) ;
            var_typeKind_5355.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_4888.addAssign_operation (var_typeKind_5355, enumerator_4948.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 148)) ;
      }
      enumerator_4948.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5960 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.galgas", 151)) ;
    cEnumerator_controllerBindingOptionList enumerator_6002 (enumerator_4770.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6002.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_6116 ;
      GALGAS_propertyMap joker_6118_3 ; // Joker input parameter
      GALGAS_actionMap joker_6118_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6118_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_6002.current_mOptionTypeName (HERE), var_classKind_6116, joker_6118_3, joker_6118_2, joker_6118_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 153)) ;
      GALGAS_typeKind var_typeKind_6150 ;
      switch (var_classKind_6116.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_6002.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 157)) ;
          var_typeKind_6150.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_6331 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6116.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_6304_kind = extractPtr_6331->mAssociatedValue0 ;
          var_typeKind_6150 = extractedValue_6304_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_6002.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 161)) ;
          var_typeKind_6150.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_6002.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 163)) ;
          var_typeKind_6150.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5960.addAssign_operation (var_typeKind_6150, enumerator_6002.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 165)) ;
      enumerator_6002.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_6704 ;
    GALGAS_lstring var_outletSuperClassName_6742 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4770.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 170)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4770.current_mOutletClassName (HERE), var_outletSuperClassName_6742, var_bindingMap_6704, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 171)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_6704 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.galgas", 173)) ;
      GALGAS_bool joker_7070_6 ; // Joker input parameter
      GALGAS_bool joker_7070_5 ; // Joker input parameter
      GALGAS_bool joker_7070_4 ; // Joker input parameter
      GALGAS_bool joker_7070_3 ; // Joker input parameter
      GALGAS_bool joker_7070_2 ; // Joker input parameter
      GALGAS_bool joker_7070_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4770.current_mOutletClassName (HERE), var_outletSuperClassName_6742, joker_7070_6, joker_7070_5, joker_7070_4, joker_7070_3, joker_7070_2, joker_7070_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 174)) ;
    }
    {
    var_bindingMap_6704.setter_insertKey (enumerator_4770.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4888, var_controllerBindingOptionDecoratedList_5960, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 176)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4770.current_mOutletClassName (HERE), var_outletSuperClassName_6742, var_bindingMap_6704, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 181)) ;
    }
    enumerator_4770.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOutlets'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOutlets (const GALGAS_bool constinArgument_inPreferences,
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
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outTargetActionList.drop () ; // Release 'out' argument
  outArgument_outletMap.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outRegularBindingsGenerationList = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 201)) ;
  outArgument_outTargetActionList = GALGAS_actionBindingListForGeneration::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 202)) ;
  outArgument_outMultipleBindingGenerationList = GALGAS_multipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 203)) ;
  outArgument_outletMap = GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("outlet-declaration.galgas", 204)) ;
  outArgument_outTableViewBindingGenerationList = GALGAS_tableViewBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 205)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 206)) ;
  cEnumerator_outletDeclarationList enumerator_8310 (constinArgument_inOutletDeclarationList, kENUMERATION_UP) ;
  while (enumerator_8310.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8310.current_mOutletName (HERE), enumerator_8310.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 208)) ;
    }
    GALGAS_bool var_handlesRunAction_8542 ;
    GALGAS_bool var_handlesTableViewBinding_8583 ;
    GALGAS_bool var_handlesEnabledBinding_8622 ;
    GALGAS_bool var_handlesHiddenBinding_8660 ;
    GALGAS_bool var_handleGraphicControllerBinding_8708 ;
    GALGAS_bool var_outletClassIsUserDefined_8750 ;
    GALGAS_lstring joker_8507 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8310.current_mOutletTypeName (HERE), joker_8507, var_handlesRunAction_8542, var_handlesTableViewBinding_8583, var_handlesEnabledBinding_8622, var_handlesHiddenBinding_8660, var_handleGraphicControllerBinding_8708, var_outletClassIsUserDefined_8750, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 209)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_outletClassIsUserDefined_8750.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_8310.current_mOutletTypeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 220)) ;
      }
    }
    switch (enumerator_8310.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_11216 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_8310.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_9000_controllerName = extractPtr_11216->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_9022_propertyName = extractPtr_11216->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_handleGraphicControllerBinding_8708.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 226)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_8310.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8310.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 227)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 227)), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 227)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_propertyKind var_kind_9318 ;
          GALGAS_actionMap joker_9330_2 ; // Joker input parameter
          GALGAS_bool joker_9330_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_9000_controllerName, var_kind_9318, joker_9330_2, joker_9330_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 229)) ;
          switch (var_kind_9318.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 236)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 238)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 240)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_10965 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_9318.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_9729_entityName = extractPtr_10965->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_9737_graphic = extractPtr_10965->mAssociatedValue1 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsEqual, extractedValue_9022_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = extractedValue_9737_graphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 243)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_9729_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                GALGAS_propertyMap var_observablePropertyMap_10091 ;
                GALGAS_classKind joker_10049 ; // Joker input parameter
                GALGAS_actionMap joker_10107_2 ; // Joker input parameter
                GALGAS_propertyGenerationList joker_10107_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9729_entityName, joker_10049, var_observablePropertyMap_10091, joker_10107_2, joker_10107_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 247)) ;
                GALGAS_propertyKind var_propertyKind_10200 ;
                GALGAS_actionMap joker_10202_2 ; // Joker input parameter
                GALGAS_bool joker_10202_1 ; // Joker input parameter
                var_observablePropertyMap_10091.method_searchKey (extractedValue_9022_propertyName, var_propertyKind_10200, joker_10202_2, joker_10202_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 253)) ;
                switch (var_propertyKind_10200.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <C_FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 256)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10574 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_10200.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_10391_kEntityName = extractPtr_10574->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_10403_isGraphic = extractPtr_10574->mAssociatedValue2 ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = extractedValue_10403_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 258)).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        TC_Array <C_FixItDescription> fixItArray11 ;
                        inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_10391_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 259)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 259)), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 259)) ;
                      }
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 262)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 264)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 266)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_9000_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 270)) ;
            }
            break ;
          }
          outArgument_outEBViewGraphicControllerBindingGenerationList.addAssign_operation (enumerator_8310.current_mOutletName (HERE).readProperty_string (), extractedValue_9000_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 272)) ;
        }
      }
      break ;
    }
    switch (enumerator_8310.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_11927 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_8310.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_11372_controllerName = extractPtr_11927->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_handlesTableViewBinding_8583.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 279)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_8310.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8310.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 280)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 280)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 280)) ;
          }
        }
        if (kBoolFalse == test_16) {
          GALGAS_propertyKind var_kind_11660 ;
          GALGAS_actionMap joker_11672_2 ; // Joker input parameter
          GALGAS_bool joker_11672_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11372_controllerName, var_kind_11660, joker_11672_2, joker_11672_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 282)) ;
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_kind_11660.getter_isArrayController (SOURCE_FILE ("outlet-declaration.galgas", 287)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 287)).boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_11372_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 288)) ;
            }
          }
          outArgument_outTableViewBindingGenerationList.addAssign_operation (enumerator_8310.current_mOutletName (HERE).readProperty_string (), extractedValue_11372_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 290)) ;
        }
      }
      break ;
    }
    switch (enumerator_8310.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_12892 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_8310.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_12033_target = extractPtr_12892->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_12049_action = extractPtr_12892->mAssociatedValue1 ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_handlesRunAction_8542.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 297)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_8310.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8310.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 298)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 298)), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 298)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, extractedValue_12033_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12049_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 300)) ;
              outArgument_outTargetActionList.addAssign_operation (enumerator_8310.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("self"), extractedValue_12049_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 301)) ;
            }
          }
          if (kBoolFalse == test_22) {
            GALGAS_actionMap var_controllerActionMap_12576 ;
            GALGAS_propertyKind joker_12529 ; // Joker input parameter
            GALGAS_bool joker_12588 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_12033_target, joker_12529, var_controllerActionMap_12576, joker_12588, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 307)) ;
            var_controllerActionMap_12576.method_searchKey (extractedValue_12049_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 313)) ;
            GALGAS_string temp_23 ;
            const enumGalgasBool test_24 = constinArgument_inPreferences.boolEnum () ;
            if (kBoolTrue == test_24) {
              temp_23 = GALGAS_string ("preferences_") ;
            }else if (kBoolFalse == test_24) {
              temp_23 = GALGAS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.addAssign_operation (enumerator_8310.current_mOutletName (HERE).readProperty_string (), temp_23.add_operation (extractedValue_12033_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 316)), extractedValue_12049_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 318)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 318)).add_operation (extractedValue_12033_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 318))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 314)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8310.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_13742 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8310.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13054_expression = extractPtr_13742->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13316 ;
        GALGAS_typeKind var_type_13344 ;
        GALGAS_location var_errorLocation_13381 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13054_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_enableExpression_13316, var_type_13344, var_errorLocation_13381, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 325)) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_handlesEnabledBinding_8622.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 334)).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (var_errorLocation_13381, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 335)) ;
          }
        }
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          test_27 = var_type_13344.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 337)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 337)).boolEnum () ;
          if (kBoolTrue == test_27) {
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (var_errorLocation_13381, GALGAS_string ("expression is not boolean"), fixItArray28  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 338)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8310.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("enabled"), var_enableExpression_13316  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 340)) ;
      }
      break ;
    }
    switch (enumerator_8310.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_14587 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8310.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13902_expression = extractPtr_14587->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14164 ;
        GALGAS_typeKind var_type_14192 ;
        GALGAS_location var_errorLocation_14229 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13902_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_14164, var_type_14192, var_errorLocation_14229, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 349)) ;
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = var_type_14192.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 358)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 358)).boolEnum () ;
          if (kBoolTrue == test_29) {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (var_errorLocation_14229, GALGAS_string ("expression is not boolean"), fixItArray30  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 359)) ;
          }
        }
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesHiddenBinding_8660.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 361)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_14229, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 362)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8310.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_14164  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 364)) ;
      }
      break ;
    }
    {
    GALGAS_string temp_33 ;
    const enumGalgasBool test_34 = constinArgument_inPreferences.boolEnum () ;
    if (kBoolTrue == test_34) {
      temp_33 = GALGAS_string ("preferences_") ;
    }else if (kBoolFalse == test_34) {
      temp_33 = GALGAS_string ("self.") ;
    }
    routine_analyzeRegularBinding (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8310.current_mOutletTypeName (HERE), enumerator_8310.current_mOutletName (HERE).readProperty_string (), enumerator_8310.current_mRegularBindingList (HERE), temp_33, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 370)) ;
    }
    enumerator_8310.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRegularBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding (const GALGAS_propertyMap constinArgument_inRootPropertyMap,
                                    const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                    const GALGAS_propertyMap constinArgument_inBoundModelPropertyMap,
                                    const GALGAS_lstring constinArgument_inOutletTypeName,
                                    const GALGAS_string constinArgument_inOutletName,
                                    const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                    const GALGAS_string constinArgument_inSelfSwiftName,
                                    GALGAS_regularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_15605 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_15605.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_15705 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 399)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_15763 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 400)) ;
    cEnumerator_observablePropertyList enumerator_15797 (enumerator_15605.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_15797.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_15996 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_16068 ;
      extensionMethod_analyzeObservableProperty (enumerator_15797.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_15996, var_swiftTypeStringForTransientFunctionArgument_16068, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 402)) ;
      switch (var_kind_15996.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15797.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 412)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 412)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15797.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 414)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 414)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15797.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 416)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 416)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15797.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 418)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 418)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_15763.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_15797.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 420)), var_kind_15996  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 420)) ;
      var_boundModelTypeList_15705.addAssign_operation (var_kind_15996, extensionGetter_location (enumerator_15797.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 421))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 421)) ;
      enumerator_15797.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_16873 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 424)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_16961 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 425)) ;
    GALGAS_lstring var_outletTypeName_16989 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_17026 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.galgas", 428)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 428)).isValid ()) {
      uint32_t variant_17042 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.galgas", 428)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 428)).uintValue () ;
      bool loop_17042 = true ;
      while (loop_17042) {
        loop_17042 = GALGAS_bool (kIsNotEqual, var_outletTypeName_16989.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17026 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 428)).isValid () ;
        if (loop_17042) {
          loop_17042 = GALGAS_bool (kIsNotEqual, var_outletTypeName_16989.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17026 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 428)).boolValue () ;
        }
        if (loop_17042 && (0 == variant_17042)) {
          loop_17042 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.galgas", 428)) ;
        }
        if (loop_17042) {
          variant_17042 -- ;
          var_continues_17026 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_17292 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_17347 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_16989, var_superOutletClassName_17292, var_bindingMap_17347, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 430)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_bindingMap_17347.getter_hasKey (enumerator_15605.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.galgas", 435)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_bindingMap_17347.method_searchKey (enumerator_15605.current_mBindingName (HERE), var_outletBindingSpecificationModelList_16873, var_controllerBindingOptionDecoratedList_16961, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 436)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_continues_17026 = GALGAS_bool (true) ;
            var_outletTypeName_16989 = var_superOutletClassName_17292 ;
          }
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_continues_17026.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_15605.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 447)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_15705.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 448)).objectCompare (var_outletBindingSpecificationModelList_16873.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 448)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_15605.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_16873.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 450)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 450)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 450)).add_operation (var_boundModelTypeList_15705.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 452)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 451)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 452)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 449)) ;
        }
      }
      if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_18107 (var_outletBindingSpecificationModelList_16873, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_18182 (var_boundModelTypeList_15705, kENUMERATION_UP) ;
        while (enumerator_18107.hasCurrentObject () && enumerator_18182.hasCurrentObject ()) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            GALGAS_bool test_10 = enumerator_18107.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_isTransient (enumerator_18182.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 455)) ;
            }
            test_9 = test_10.boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_18182.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 456)) ;
            }
          }
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            GALGAS_bool test_13 = enumerator_18107.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.galgas", 458)) ;
            if (kBoolTrue == test_13.boolEnum ()) {
              test_13 = extensionGetter_isEnumType (enumerator_18182.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 458)) ;
            }
            test_12 = test_13.boolEnum () ;
            if (kBoolTrue == test_12) {
            }
          }
          if (kBoolFalse == test_12) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_18107.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 459)).objectCompare (extensionGetter_swiftTypeName (enumerator_18182.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 459)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_18182.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18107.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)) ;
              }
            }
          }
          enumerator_18107.gotoNextObject () ;
          enumerator_18182.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_18764 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_16961.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 466)).objectCompare (enumerator_15605.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("outlet-declaration.galgas", 466)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_s_18878 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_16961.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 468)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_s_18878 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_17) {
          var_s_18878 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_19092 (var_controllerBindingOptionDecoratedList_16961, kENUMERATION_UP) ;
          while (enumerator_19092.hasCurrentObject ()) {
            var_s_18878.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_19092.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)).add_operation (extensionGetter_swiftTypeName (enumerator_19092.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)) ;
            enumerator_19092.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_15605.current_mBindingName (HERE).readProperty_location (), var_s_18878, fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 476)) ;
      }
    }
    if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_19329 (var_controllerBindingOptionDecoratedList_16961, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_19413 (enumerator_15605.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_19329.hasCurrentObject () && enumerator_19413.hasCurrentObject ()) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsNotEqual, enumerator_19329.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19413.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_19413.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_19329.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 480)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 480)), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 480)) ;
          }
        }
        GALGAS_string var_optionValueAsString_19797 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 483)) ;
        temp_21.addAssign_operation (enumerator_19329.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 483)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_19413.current_mOptionValue (HERE).ptr (), temp_21, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_19797, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 482)) ;
        var_bindingOptionString_18764.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_19329.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 487)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 487)).add_operation (var_optionValueAsString_19797, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 487)) ;
        enumerator_19329.gotoNextObject () ;
        enumerator_19413.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_15605.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_15763, var_bindingOptionString_18764  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 491)) ;
    enumerator_15605.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_computedPropertyDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_computedPropertyDeclarationAST * object = (const cPtr_computedPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_computedPropertyDeclarationAST) ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = object ;
  const GALGAS_computedPropertyDeclarationAST temp_1 = object ;
  const GALGAS_computedPropertyDeclarationAST temp_2 = object ;
  GALGAS_lstring var_node_774 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 16)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 16)), temp_2.readProperty_mComputedPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 16)) ;
  {
  const GALGAS_computedPropertyDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_774, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 17)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_774, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("computed-property.galgas", 18)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_774, temp_5.readProperty_mComputedPropertyTypeName () COMMA_SOURCE_FILE ("computed-property.galgas", 19)) ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_6 = object ;
  cEnumerator_observablePropertyList enumerator_1067 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1067.hasCurrentObject ()) {
    switch (enumerator_1067.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1324 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1148_propertyName = extractPtr_1324->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_computedPropertyDeclarationAST temp_8 = object ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_9 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 24)).add_operation (extractedValue_1148_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 24)), extractedValue_1148_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 24)) COMMA_SOURCE_FILE ("computed-property.galgas", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1548 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1370_propertyName = extractPtr_1548->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_computedPropertyDeclarationAST temp_11 = object ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_12 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 28)).add_operation (extractedValue_1370_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 28)), extractedValue_1370_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 28)) COMMA_SOURCE_FILE ("computed-property.galgas", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1786 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1600_relationshipName = extractPtr_1786->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_computedPropertyDeclarationAST temp_14 = object ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_15 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 32)).add_operation (extractedValue_1600_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 32)), extractedValue_1600_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 32)) COMMA_SOURCE_FILE ("computed-property.galgas", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_2014 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1830_relationshipName = extractPtr_2014->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_computedPropertyDeclarationAST temp_17 = object ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_18 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 36)).add_operation (extractedValue_1830_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 36)), extractedValue_1830_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 36)) COMMA_SOURCE_FILE ("computed-property.galgas", 36)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2196 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2085_propertyName = extractPtr_2196->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_19 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 40)).add_operation (extractedValue_2085_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 40)), extractedValue_2085_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 40)) COMMA_SOURCE_FILE ("computed-property.galgas", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2364 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2251_propertyName = extractPtr_2364->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_20 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 42)).add_operation (extractedValue_2251_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 42)), extractedValue_2251_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 42)) COMMA_SOURCE_FILE ("computed-property.galgas", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2527 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2414_propertyName = extractPtr_2527->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_21 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 44)).add_operation (extractedValue_2414_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 44)), extractedValue_2414_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 44)) COMMA_SOURCE_FILE ("computed-property.galgas", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2691 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2578_propertyName = extractPtr_2691->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_22 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 46)).add_operation (extractedValue_2578_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 46)), extractedValue_2578_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 46)) COMMA_SOURCE_FILE ("computed-property.galgas", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2851 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2740_propertyName = extractPtr_2851->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_23 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 48)).add_operation (extractedValue_2740_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 48)), extractedValue_2740_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 48)) COMMA_SOURCE_FILE ("computed-property.galgas", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_3004 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2897_propertyName = extractPtr_3004->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 50)).add_operation (extractedValue_2897_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 50)), extractedValue_2897_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 50)) COMMA_SOURCE_FILE ("computed-property.galgas", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3169 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3060_propertyName = extractPtr_3169->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 52)).add_operation (extractedValue_3060_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 52)), extractedValue_3060_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 52)) COMMA_SOURCE_FILE ("computed-property.galgas", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3362 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3226_controllerName = extractPtr_3362->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3246_propertyName = extractPtr_3362->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_24 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 54)).add_operation (extractedValue_3226_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 54)), extractedValue_3226_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 54)) COMMA_SOURCE_FILE ("computed-property.galgas", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3593 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3428_controllerName = extractPtr_3593->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3448_propertyName = extractPtr_3593->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3477_secondaryPropertyName = extractPtr_3593->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_25 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 56)).add_operation (extractedValue_3428_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 56)), extractedValue_3428_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 56)) COMMA_SOURCE_FILE ("computed-property.galgas", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3820 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3655_controllerName = extractPtr_3820->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3675_propertyName = extractPtr_3820->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3704_secondaryPropertyName = extractPtr_3820->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_26 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 58)).add_operation (extractedValue_3655_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 58)), extractedValue_3655_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 58)) COMMA_SOURCE_FILE ("computed-property.galgas", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_4016 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3880_controllerName = extractPtr_4016->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3900_propertyName = extractPtr_4016->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_27 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 60)).add_operation (extractedValue_3880_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 60)), extractedValue_3880_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 60)) COMMA_SOURCE_FILE ("computed-property.galgas", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4305 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1067.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4172_superEntityName = extractPtr_4305->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4194_propertyName = extractPtr_4305->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_774, GALGAS_lstring::constructor_new (extractedValue_4172_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 65)).add_operation (extractedValue_4194_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 65)), extractedValue_4194_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 65)) COMMA_SOURCE_FILE ("computed-property.galgas", 65)) ;
        }
      }
      break ;
    }
    enumerator_1067.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_computedPropertyDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_computedPropertyDeclarationAST.mSlotID,
                                               extensionMethod_computedPropertyDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_computedPropertyDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_computedPropertyDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_computedPropertyDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_computedPropertyDeclarationAST * object = (const cPtr_computedPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_computedPropertyDeclarationAST) ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = object ;
  const GALGAS_computedPropertyDeclarationAST temp_1 = object ;
  const GALGAS_computedPropertyDeclarationAST temp_2 = object ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 73)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 73)), temp_2.readProperty_mComputedPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.galgas", 73)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_computedPropertyDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_computedPropertyDeclarationAST.mSlotID,
                                extensionGetter_computedPropertyDeclarationAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_computedPropertyDeclarationAST_nodeKey (defineExtensionGetter_computedPropertyDeclarationAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_computedPropertyDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_computedPropertyDeclarationAST * object = (const cPtr_computedPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_computedPropertyDeclarationAST) ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = object ;
  cMapElement_classMap * objectArray_7036 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.galgas", 149)) ;
  if (NULL != objectArray_7036) {
    macroValidSharedObject (objectArray_7036, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7209 ;
    const GALGAS_computedPropertyDeclarationAST temp_1 = object ;
    GALGAS_propertyMap joker_7211_3 ; // Joker input parameter
    GALGAS_actionMap joker_7211_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7211_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_7209, joker_7211_3, joker_7211_2, joker_7211_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 152)) ;
    switch (var_classKind_7209.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_computedPropertyDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("computed-property.galgas", 155)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7519 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7209.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_7354_kind = extractPtr_7519->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_4 = object ;
        objectArray_7036->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GALGAS_propertyKind::constructor_property (extractedValue_7354_kind, GALGAS_propertyAccessibility::constructor_computed (SOURCE_FILE ("computed-property.galgas", 159))  COMMA_SOURCE_FILE ("computed-property.galgas", 159)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("computed-property.galgas", 160)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 157)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_computedPropertyDeclarationAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.galgas", 164)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_computedPropertyDeclarationAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("computed-property.galgas", 166)) ;
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_computedPropertyDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_computedPropertyDeclarationAST.mSlotID,
                                           extensionMethod_computedPropertyDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_computedPropertyDeclarationAST_firstAnalysisPhase (defineExtensionMethod_computedPropertyDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_computedPropertyDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_computedPropertyDeclarationAST * object = (const cPtr_computedPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_computedPropertyDeclarationAST) ;
  GALGAS_classKind var_classKind_8272 ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = object ;
  GALGAS_propertyMap joker_8274_3 ; // Joker input parameter
  GALGAS_actionMap joker_8274_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8274_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_8272, joker_8274_3, joker_8274_2, joker_8274_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 180)) ;
  GALGAS_typeKind var_typeKind_8318 ;
  switch (var_classKind_8272.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_computedPropertyDeclarationAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.galgas", 185)) ;
      var_typeKind_8318.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8493 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8272.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8470_kind = extractPtr_8493->mAssociatedValue0 ;
      var_typeKind_8318 = extractedValue_8470_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_computedPropertyDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.galgas", 189)) ;
      var_typeKind_8318.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_computedPropertyDeclarationAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.galgas", 191)) ;
      var_typeKind_8318.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8773 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8773 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("computed-property.galgas", 196)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_9 = object ;
    GALGAS_classKind joker_8915 ; // Joker input parameter
    GALGAS_actionMap joker_8934_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8934_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_8915, var_rootProperties_8773, joker_8934_2, joker_8934_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 198)) ;
  }
  GALGAS_classKind var_currentClassKind_9053 ;
  GALGAS_propertyMap var_properties_9069 ;
  const GALGAS_computedPropertyDeclarationAST temp_10 = object ;
  GALGAS_actionMap joker_9071_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_9071_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_9053, var_properties_9069, joker_9071_2, joker_9071_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 201)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_9162 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("computed-property.galgas", 203)) ;
  const GALGAS_computedPropertyDeclarationAST temp_11 = object ;
  cEnumerator_observablePropertyList enumerator_9194 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_9194.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9378 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9441 ;
    extensionMethod_analyzeObservableProperty (enumerator_9194.current_mObservableProperty (HERE), var_rootProperties_8773, ioArgument_ioSemanticContext, var_properties_9069, var_dependencyKind_9378, var_swiftTypeStringForTransientFunctionArgument_9441, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 205)) ;
    switch (var_dependencyKind_9378.enumValue ()) {
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
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9194.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 217)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("computed-property.galgas", 217)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9194.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 219)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("computed-property.galgas", 219)) ;
      }
      break ;
    }
    var_dependencies_9162.addAssign_operation (enumerator_9194.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9194.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 223)), var_swiftTypeStringForTransientFunctionArgument_9441  COMMA_SOURCE_FILE ("computed-property.galgas", 221)) ;
    enumerator_9194.gotoNextObject () ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_14 = object ;
  const GALGAS_computedPropertyDeclarationAST temp_15 = object ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_8318, GALGAS_string ("computed"), var_dependencies_9162  COMMA_SOURCE_FILE ("computed-property.galgas", 226))  COMMA_SOURCE_FILE ("computed-property.galgas", 226)) ;
  const GALGAS_computedPropertyDeclarationAST temp_16 = object ;
  const GALGAS_computedPropertyDeclarationAST temp_17 = object ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_computeRoutineGeneration::constructor_new (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_8318, var_dependencies_9162  COMMA_SOURCE_FILE ("computed-property.galgas", 233))  COMMA_SOURCE_FILE ("computed-property.galgas", 233)) ;
  const GALGAS_computedPropertyDeclarationAST temp_18 = object ;
  cMapElement_classMap * objectArray_10313 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_18.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.galgas", 239)) ;
  if (NULL != objectArray_10313) {
    macroValidSharedObject (objectArray_10313, cMapElement_classMap) ;
    GALGAS_bool var_generate_10419 ;
    switch (var_currentClassKind_9053.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10419 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10419 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10419 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10808 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_9053.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10603_graphic = extractPtr_10808->mAssociatedValue1 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extractedValue_10603_graphic.boolEnum () ;
          if (kBoolTrue == test_19) {
            const GALGAS_computedPropertyDeclarationAST temp_20 = object ;
            const GALGAS_computedPropertyDeclarationAST temp_21 = object ;
            var_generate_10419 = GALGAS_bool (kIsNotEqual, temp_20.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_21.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.galgas", 252)) ;
          }
        }
        if (kBoolFalse == test_19) {
          var_generate_10419 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_computedPropertyDeclarationAST temp_22 = object ;
    const GALGAS_computedPropertyDeclarationAST temp_23 = object ;
    objectArray_10313->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_computedPropertyGeneration::constructor_new (temp_22.readProperty_mComputedPropertyName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), var_typeKind_8318, var_dependencies_9162, var_generate_10419  COMMA_SOURCE_FILE ("computed-property.galgas", 257))  COMMA_SOURCE_FILE ("computed-property.galgas", 257)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_computedPropertyDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_computedPropertyDeclarationAST.mSlotID,
                                           extensionMethod_computedPropertyDeclarationAST_thirdAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_computedPropertyDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_computedPropertyDeclarationAST_thirdAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_computedPropertyGeneration_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_computedPropertyGeneration * object = (const cPtr_computedPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_computedPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 287)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 287)) ;
  const GALGAS_computedPropertyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 288)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 289)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 289)) ;
  const GALGAS_computedPropertyGeneration temp_1 = object ;
  const GALGAS_computedPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 290)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 290)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 290)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 290)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_computedPropertyGeneration_declarationInSelectionControllerCode (void) {
  enterExtensionGetter_declarationInSelectionControllerCode (kTypeDescriptor_GALGAS_computedPropertyGeneration.mSlotID,
                                                             extensionGetter_computedPropertyGeneration_declarationInSelectionControllerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_computedPropertyGeneration_declarationInSelectionControllerCode (defineExtensionGetter_computedPropertyGeneration_declarationInSelectionControllerCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_computedPropertyGeneration_initCode (const cPtr_propertyGeneration * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_computedPropertyGeneration_initCode (void) {
  enterExtensionGetter_initCode (kTypeDescriptor_GALGAS_computedPropertyGeneration.mSlotID,
                                 extensionGetter_computedPropertyGeneration_initCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_computedPropertyGeneration_initCode (defineExtensionGetter_computedPropertyGeneration_initCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_computedPropertyGeneration_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_computedPropertyGeneration * object = (const cPtr_computedPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_computedPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 302)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 302)) ;
  const GALGAS_computedPropertyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 303)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 303)) ;
  const GALGAS_computedPropertyGeneration temp_1 = object ;
  const GALGAS_computedPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 304)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 304)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 304)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 304)) ;
  const GALGAS_computedPropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 305)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 305)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 306)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 310)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 312)) ;
  const GALGAS_computedPropertyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 313)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 315)) ;
  const GALGAS_computedPropertyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 316)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 316)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 319)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 320)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 321)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 322)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 333)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 335)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 336)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 337)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 338)) ;
  const GALGAS_computedPropertyGeneration temp_6 = object ;
  const GALGAS_computedPropertyGeneration temp_7 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 340)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 341)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 342)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 343)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 344)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 345)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 346)) ;
  const GALGAS_computedPropertyGeneration temp_8 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 347)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 347)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 348)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 349)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 350)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 351)) ;
  const GALGAS_computedPropertyGeneration temp_9 = object ;
  const GALGAS_computedPropertyGeneration temp_10 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)).add_operation (GALGAS_string ("_property.mValidateAndWriteModelFunction = { [weak self] (candidateValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)).add_operation (extensionGetter_swiftTypeName (temp_10.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)).add_operation (GALGAS_string (", windowForSheet : NSWindow\?) in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 352)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 353)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 354)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 355)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 356)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 357)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 358)) ;
  const GALGAS_computedPropertyGeneration temp_11 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            let result = object.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 359)).add_operation (GALGAS_string ("_property.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 359)) ;
  result_result.plusAssign_operation(GALGAS_string ("            if !result {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 360)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 361)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 362)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 363)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return true\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 364)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 365)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 366)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 367)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 368)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 369)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 370)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_computedPropertyGeneration_bindPropertyInSelectionController (void) {
  enterExtensionGetter_bindPropertyInSelectionController (kTypeDescriptor_GALGAS_computedPropertyGeneration.mSlotID,
                                                          extensionGetter_computedPropertyGeneration_bindPropertyInSelectionController) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_computedPropertyGeneration_bindPropertyInSelectionController (defineExtensionGetter_computedPropertyGeneration_bindPropertyInSelectionController, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_computedPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                         const GALGAS_bool constinArgument_inPreferences,
                                                                                         const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_computedPropertyGeneration * object = (const cPtr_computedPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_computedPropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_computedPropertyGeneration temp_1 = object ;
    const GALGAS_computedPropertyGeneration temp_2 = object ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.galgas", 380)).operator_not (SOURCE_FILE ("computed-property.galgas", 380)) COMMA_SOURCE_FILE ("computed-property.galgas", 380)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 382)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 382)) ;
          const GALGAS_computedPropertyGeneration temp_4 = object ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 383)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 384)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 384)) ;
          const GALGAS_computedPropertyGeneration temp_5 = object ;
          const GALGAS_computedPropertyGeneration temp_6 = object ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)).add_operation (GALGAS_string (" ()\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 385)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 386)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 386)) ;
          const GALGAS_computedPropertyGeneration temp_7 = object ;
          const GALGAS_computedPropertyGeneration temp_8 = object ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 387)) ;
          const GALGAS_computedPropertyGeneration temp_9 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    switch preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 388)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 388)) ;
          result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 389)) ;
          result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 390)) ;
          result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 391)) ;
          result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 392)) ;
          result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 393)) ;
          result_result.plusAssign_operation(GALGAS_string ("  }\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 394)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 396)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 396)) ;
        const GALGAS_computedPropertyGeneration temp_10 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 397)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 397)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 398)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 398)) ;
        const GALGAS_computedPropertyGeneration temp_11 = object ;
        const GALGAS_computedPropertyGeneration temp_12 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)).add_operation (GALGAS_string (" ()\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 399)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 400)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 400)) ;
        const GALGAS_computedPropertyGeneration temp_13 = object ;
        const GALGAS_computedPropertyGeneration temp_14 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)).add_operation (extensionGetter_swiftTypeName (temp_14.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 401)) ;
        const GALGAS_computedPropertyGeneration temp_15 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    switch self.").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 402)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 402)) ;
        result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 403)) ;
        result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 404)) ;
        result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 405)) ;
        result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 406)) ;
        result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 407)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 408)) ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_computedPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_computedPropertyGeneration.mSlotID,
                                                extensionGetter_computedPropertyGeneration_propertyDeclarationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_computedPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_computedPropertyGeneration_propertyDeclarationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_computedPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                   const GALGAS_bool constinArgument_inPreferences,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_computedPropertyGeneration * object = (const cPtr_computedPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_computedPropertyGeneration) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_18624 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_computedPropertyGeneration temp_3 = object ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("computed-property.galgas", 418)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_computedPropertyGeneration temp_4 = object ;
      GALGAS_bool var_needs_5F_unwSelf_18761 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 419)) ;
      const GALGAS_computedPropertyGeneration temp_5 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 420)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 420)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_18761.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_computedPropertyGeneration temp_7 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_18624, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 422)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 422)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 422)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 423)) ;
          const GALGAS_computedPropertyGeneration temp_8 = object ;
          const GALGAS_computedPropertyGeneration temp_9 = object ;
          const GALGAS_computedPropertyGeneration temp_10 = object ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 424)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 425)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 426)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 427)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_computedPropertyGeneration temp_11 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_18624, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 429)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 429)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 429)) ;
        const GALGAS_computedPropertyGeneration temp_12 = object ;
        const GALGAS_computedPropertyGeneration temp_13 = object ;
        const GALGAS_computedPropertyGeneration temp_14 = object ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 430)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 432)) ;
      const GALGAS_computedPropertyGeneration temp_15 = object ;
      const GALGAS_computedPropertyGeneration temp_16 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_18624, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)).add_operation (GALGAS_string ("_property.mStoreFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)).add_operation (GALGAS_string ("_property ($0, $1) \?\? false }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 433)) ;
      const GALGAS_computedPropertyGeneration temp_17 = object ;
      cEnumerator_transientDependencyListForGeneration enumerator_19766 (temp_17.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_19766.hasCurrentObject ()) {
        GALGAS_string var_s_19806 = extensionGetter_generateAddObserverCall (enumerator_19766.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 435)) ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsNotEqual, var_s_19806.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_computedPropertyGeneration temp_19 = object ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_19806, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)).add_operation (var_prefix_18624, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 437)) ;
          }
        }
        enumerator_19766.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_computedPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_computedPropertyGeneration.mSlotID,
                                          extensionGetter_computedPropertyGeneration_configurationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_computedPropertyGeneration_configurationCode (defineExtensionGetter_computedPropertyGeneration_configurationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_computedPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                 const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_computedPropertyGeneration * object = (const cPtr_computedPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_computedPropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_computedPropertyGeneration temp_0 = object ;
  cEnumerator_transientDependencyListForGeneration enumerator_20257 (temp_0.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_20257.hasCurrentObject ()) {
    GALGAS_string var_s_20295 = extensionGetter_generateRemoveObserverCall (enumerator_20257.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 448)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_s_20295.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_computedPropertyGeneration temp_2 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    // ").add_operation (var_s_20295, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 450)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 450)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 450)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 450)) ;
      }
    }
    enumerator_20257.gotoNextObject () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_computedPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_computedPropertyGeneration.mSlotID,
                                        extensionGetter_computedPropertyGeneration_terminationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_computedPropertyGeneration_terminationCode (defineExtensionGetter_computedPropertyGeneration_terminationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computeRoutineGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_computeRoutineGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                                   const GALGAS_string constinArgument_inOutputDirectory,
                                                                   GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_computeRoutineGeneration * object = (const cPtr_computeRoutineGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_computeRoutineGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_computeRoutineGeneration temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("computed-property.galgas", 472)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_computeRoutineGeneration temp_2 = object ;
      const GALGAS_computeRoutineGeneration temp_3 = object ;
      const GALGAS_computeRoutineGeneration temp_4 = object ;
      GALGAS_string var_s_21282 = GALGAS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.galgas", 473))) ;
      const GALGAS_computeRoutineGeneration temp_5 = object ;
      const GALGAS_computeRoutineGeneration temp_6 = object ;
      GALGAS_string var_fileName_21453 = GALGAS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 478)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 478)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 478)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 478)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_21453  COMMA_SOURCE_FILE ("computed-property.galgas", 479)) ;
      GALGAS_string var_header_21574 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("computed-property.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 480)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 480)) ;
      var_header_21574.plusAssign_operation(GALGAS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 481)) ;
      var_header_21574.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("computed-property.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 482)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 482)) ;
      var_header_21574.plusAssign_operation(GALGAS_string ("import Cocoa\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 483)) ;
      var_header_21574.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("computed-property.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 484)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 484)) ;
      GALGAS_string var_generatedZone_33__21957 = GALGAS_string ("  }\n"
        "\n") ;
      var_generatedZone_33__21957.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 486)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 486)) ;
      var_generatedZone_33__21957.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 487)) ;
      var_generatedZone_33__21957.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("computed-property.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 488)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 488)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_21453, GALGAS_string ("//"), var_header_21574, GALGAS_string ("\n"
        "\n"), var_s_21282, GALGAS_string ("\n"), var_generatedZone_33__21957, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 489)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_computeRoutineGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_computeRoutineGeneration.mSlotID,
                                     extensionMethod_computeRoutineGeneration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_computeRoutineGeneration_generateCode (defineExtensionMethod_computeRoutineGeneration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_3 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_1 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_0 [4] = {
  & gWrapperDirectory_3_computedPropertyManager,
  & gWrapperDirectory_1_computedPropertyManager,
  & gWrapperDirectory_2_computedPropertyManager,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager (
  "",
  0,
  gWrapperAllFiles_computedPropertyManager_0,
  3,
  gWrapperAllDirectories_computedPropertyManager_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'computedPropertyManager computedComputationFunctionFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_OWNER_5F_NAME,
                                                                                           const GALGAS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                           const GALGAS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "extension " ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << " {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func compute_" ;
  result << in_COMPUTED_5F_PROPERTY_5F_NAME.stringValue () ;
  result << "_property (_ inCandidateValue : " ;
  result << extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("compute-property-function.swift.galgasTemplate", 8)).stringValue () ;
  result << ", _ inWindow : NSWindow\?) -> Bool {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_transientDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  const GALGAS_transientDeclarationAST temp_0 = object ;
  const GALGAS_transientDeclarationAST temp_1 = object ;
  const GALGAS_transientDeclarationAST temp_2 = object ;
  GALGAS_lstring var_node_756 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 16)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 16)), temp_2.readProperty_mTransientName ().readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 16)) ;
  {
  const GALGAS_transientDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_756, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 17)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_756, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("transient-property.galgas", 18)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_756, temp_5.readProperty_mTransientTypeName () COMMA_SOURCE_FILE ("transient-property.galgas", 19)) ;
  }
  const GALGAS_transientDeclarationAST temp_6 = object ;
  cEnumerator_observablePropertyList enumerator_1028 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1028.hasCurrentObject ()) {
    switch (enumerator_1028.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1285 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1109_propertyName = extractPtr_1285->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_transientDeclarationAST temp_8 = object ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_transientDeclarationAST temp_9 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 24)).add_operation (extractedValue_1109_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 24)), extractedValue_1109_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 24)) COMMA_SOURCE_FILE ("transient-property.galgas", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1509 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1331_propertyName = extractPtr_1509->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_transientDeclarationAST temp_11 = object ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_transientDeclarationAST temp_12 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 28)).add_operation (extractedValue_1331_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 28)), extractedValue_1331_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 28)) COMMA_SOURCE_FILE ("transient-property.galgas", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1747 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1561_relationshipName = extractPtr_1747->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_transientDeclarationAST temp_14 = object ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_transientDeclarationAST temp_15 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 32)).add_operation (extractedValue_1561_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 32)), extractedValue_1561_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 32)) COMMA_SOURCE_FILE ("transient-property.galgas", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1975 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1791_relationshipName = extractPtr_1975->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_transientDeclarationAST temp_17 = object ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_transientDeclarationAST temp_18 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 36)).add_operation (extractedValue_1791_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 36)), extractedValue_1791_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 36)) COMMA_SOURCE_FILE ("transient-property.galgas", 36)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2157 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2046_propertyName = extractPtr_2157->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_19 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 40)).add_operation (extractedValue_2046_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 40)), extractedValue_2046_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 40)) COMMA_SOURCE_FILE ("transient-property.galgas", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2325 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2212_propertyName = extractPtr_2325->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_20 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 42)).add_operation (extractedValue_2212_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 42)), extractedValue_2212_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 42)) COMMA_SOURCE_FILE ("transient-property.galgas", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2488 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2375_propertyName = extractPtr_2488->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_21 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 44)).add_operation (extractedValue_2375_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 44)), extractedValue_2375_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 44)) COMMA_SOURCE_FILE ("transient-property.galgas", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2652 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2539_propertyName = extractPtr_2652->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_22 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 46)).add_operation (extractedValue_2539_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 46)), extractedValue_2539_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 46)) COMMA_SOURCE_FILE ("transient-property.galgas", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2812 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2701_propertyName = extractPtr_2812->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_23 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 48)).add_operation (extractedValue_2701_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 48)), extractedValue_2701_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 48)) COMMA_SOURCE_FILE ("transient-property.galgas", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2965 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2858_propertyName = extractPtr_2965->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 50)).add_operation (extractedValue_2858_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 50)), extractedValue_2858_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 50)) COMMA_SOURCE_FILE ("transient-property.galgas", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3130 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3021_propertyName = extractPtr_3130->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 52)).add_operation (extractedValue_3021_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 52)), extractedValue_3021_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 52)) COMMA_SOURCE_FILE ("transient-property.galgas", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3323 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3187_controllerName = extractPtr_3323->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3207_propertyName = extractPtr_3323->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_24 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 54)).add_operation (extractedValue_3187_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 54)), extractedValue_3187_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 54)) COMMA_SOURCE_FILE ("transient-property.galgas", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3554 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3389_controllerName = extractPtr_3554->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3409_propertyName = extractPtr_3554->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3438_secondaryPropertyName = extractPtr_3554->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_25 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 56)).add_operation (extractedValue_3389_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 56)), extractedValue_3389_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 56)) COMMA_SOURCE_FILE ("transient-property.galgas", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3781 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3616_controllerName = extractPtr_3781->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3636_propertyName = extractPtr_3781->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3665_secondaryPropertyName = extractPtr_3781->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_26 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 58)).add_operation (extractedValue_3616_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 58)), extractedValue_3616_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 58)) COMMA_SOURCE_FILE ("transient-property.galgas", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3977 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3841_controllerName = extractPtr_3977->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3861_propertyName = extractPtr_3977->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_27 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 60)).add_operation (extractedValue_3841_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 60)), extractedValue_3841_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 60)) COMMA_SOURCE_FILE ("transient-property.galgas", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4266 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1028.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4133_superEntityName = extractPtr_4266->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4155_propertyName = extractPtr_4266->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_756, GALGAS_lstring::constructor_new (extractedValue_4133_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 65)).add_operation (extractedValue_4155_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 65)), extractedValue_4155_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 65)) COMMA_SOURCE_FILE ("transient-property.galgas", 65)) ;
        }
      }
      break ;
    }
    enumerator_1028.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_transientDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                               extensionMethod_transientDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_transientDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_transientDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_transientDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  const GALGAS_transientDeclarationAST temp_0 = object ;
  const GALGAS_transientDeclarationAST temp_1 = object ;
  const GALGAS_transientDeclarationAST temp_2 = object ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 73)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 73)), temp_2.readProperty_mTransientName ().readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.galgas", 73)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_transientDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                extensionGetter_transientDeclarationAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_transientDeclarationAST_nodeKey (defineExtensionGetter_transientDeclarationAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_transientDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  const GALGAS_transientDeclarationAST temp_0 = object ;
  cMapElement_classMap * objectArray_6943 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 149)) ;
  if (NULL != objectArray_6943) {
    macroValidSharedObject (objectArray_6943, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7109 ;
    const GALGAS_transientDeclarationAST temp_1 = object ;
    GALGAS_propertyMap joker_7111_3 ; // Joker input parameter
    GALGAS_actionMap joker_7111_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7111_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7109, joker_7111_3, joker_7111_2, joker_7111_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 152)) ;
    switch (var_classKind_7109.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_transientDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.galgas", 155)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7468 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7109.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_7247_kind = extractPtr_7468->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_4 = object ;
        const GALGAS_transientDeclarationAST temp_5 = object ;
        const GALGAS_transientDeclarationAST temp_6 = object ;
        objectArray_6943->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GALGAS_propertyKind::constructor_property (extractedValue_7247_kind, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (kIsEqual, temp_5.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.galgas", 159)).objectCompare (GALGAS_uint ((uint32_t) 0U)))  COMMA_SOURCE_FILE ("transient-property.galgas", 159))  COMMA_SOURCE_FILE ("transient-property.galgas", 159)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 160)), temp_6.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 157)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_transientDeclarationAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("transient-property.galgas", 164)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_transientDeclarationAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("transient-property.galgas", 166)) ;
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_transientDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                           extensionMethod_transientDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_transientDeclarationAST_firstAnalysisPhase (defineExtensionMethod_transientDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_transientDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  GALGAS_classKind var_classKind_8193 ;
  const GALGAS_transientDeclarationAST temp_0 = object ;
  GALGAS_propertyMap joker_8195_3 ; // Joker input parameter
  GALGAS_actionMap joker_8195_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8195_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8193, joker_8195_3, joker_8195_2, joker_8195_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 180)) ;
  GALGAS_typeKind var_typeKind_8239 ;
  switch (var_classKind_8193.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_transientDeclarationAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 185)) ;
      var_typeKind_8239.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8407 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8193.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8384_kind = extractPtr_8407->mAssociatedValue0 ;
      var_typeKind_8239 = extractedValue_8384_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_transientDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.galgas", 189)) ;
      var_typeKind_8239.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_transientDeclarationAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.galgas", 191)) ;
      var_typeKind_8239.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8673 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_transientDeclarationAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8673 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 196)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_transientDeclarationAST temp_9 = object ;
    GALGAS_classKind joker_8815 ; // Joker input parameter
    GALGAS_actionMap joker_8834_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8834_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_8815, var_rootProperties_8673, joker_8834_2, joker_8834_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 198)) ;
  }
  GALGAS_classKind var_currentClassKind_8953 ;
  GALGAS_propertyMap var_properties_8969 ;
  const GALGAS_transientDeclarationAST temp_10 = object ;
  GALGAS_actionMap joker_8971_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8971_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_8953, var_properties_8969, joker_8971_2, joker_8971_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 201)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_9062 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 203)) ;
  const GALGAS_transientDeclarationAST temp_11 = object ;
  cEnumerator_observablePropertyList enumerator_9094 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_9094.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9278 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9341 ;
    extensionMethod_analyzeObservableProperty (enumerator_9094.current_mObservableProperty (HERE), var_rootProperties_8673, ioArgument_ioSemanticContext, var_properties_8969, var_dependencyKind_9278, var_swiftTypeStringForTransientFunctionArgument_9341, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 205)) ;
    switch (var_dependencyKind_9278.enumValue ()) {
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
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9094.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 217)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("transient-property.galgas", 217)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9094.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 219)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("transient-property.galgas", 219)) ;
      }
      break ;
    }
    var_dependencies_9062.addAssign_operation (enumerator_9094.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9094.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 223)), var_swiftTypeStringForTransientFunctionArgument_9341  COMMA_SOURCE_FILE ("transient-property.galgas", 221)) ;
    enumerator_9094.gotoNextObject () ;
  }
  const GALGAS_transientDeclarationAST temp_14 = object ;
  const GALGAS_transientDeclarationAST temp_15 = object ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mTransientName ().readProperty_string (), var_typeKind_8239, GALGAS_string ("transient"), var_dependencies_9062  COMMA_SOURCE_FILE ("transient-property.galgas", 226))  COMMA_SOURCE_FILE ("transient-property.galgas", 226)) ;
  const GALGAS_transientDeclarationAST temp_16 = object ;
  cMapElement_classMap * objectArray_10040 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_16.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 233)) ;
  if (NULL != objectArray_10040) {
    macroValidSharedObject (objectArray_10040, cMapElement_classMap) ;
    GALGAS_bool var_generate_10146 ;
    switch (var_currentClassKind_8953.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10146 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10146 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10146 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10521 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_8953.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10330_graphic = extractPtr_10521->mAssociatedValue1 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = extractedValue_10330_graphic.boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_transientDeclarationAST temp_18 = object ;
            const GALGAS_transientDeclarationAST temp_19 = object ;
            var_generate_10146 = GALGAS_bool (kIsNotEqual, temp_18.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_19.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.galgas", 246)) ;
          }
        }
        if (kBoolFalse == test_17) {
          var_generate_10146 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_transientDeclarationAST temp_20 = object ;
    const GALGAS_transientDeclarationAST temp_21 = object ;
    objectArray_10040->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_transientPropertyGeneration::constructor_new (temp_20.readProperty_mTransientName ().readProperty_string (), temp_21.readProperty_mClassName ().readProperty_string (), var_typeKind_8239, var_dependencies_9062, var_generate_10146  COMMA_SOURCE_FILE ("transient-property.galgas", 251))  COMMA_SOURCE_FILE ("transient-property.galgas", 251)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_transientDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                           extensionMethod_transientDeclarationAST_thirdAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_transientDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_transientDeclarationAST_thirdAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_transientPropertyGeneration_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)) ;
  const GALGAS_transientPropertyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 282)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 282)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 283)) ;
  const GALGAS_transientPropertyGeneration temp_1 = object ;
  const GALGAS_transientPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 284)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_transientPropertyGeneration_declarationInSelectionControllerCode (void) {
  enterExtensionGetter_declarationInSelectionControllerCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                                             extensionGetter_transientPropertyGeneration_declarationInSelectionControllerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_transientPropertyGeneration_declarationInSelectionControllerCode (defineExtensionGetter_transientPropertyGeneration_declarationInSelectionControllerCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_transientPropertyGeneration_initCode (const cPtr_propertyGeneration * /* inObject */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_transientPropertyGeneration_initCode (void) {
  enterExtensionGetter_initCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                 extensionGetter_transientPropertyGeneration_initCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_transientPropertyGeneration_initCode (defineExtensionGetter_transientPropertyGeneration_initCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_transientPropertyGeneration_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 296)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 296)) ;
  const GALGAS_transientPropertyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 297)) ;
  const GALGAS_transientPropertyGeneration temp_1 = object ;
  const GALGAS_transientPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 298)) ;
  const GALGAS_transientPropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 299)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 300)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 301)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 302)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 303)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 304)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 305)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 306)) ;
  const GALGAS_transientPropertyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 309)) ;
  const GALGAS_transientPropertyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 310)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 310)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 312)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 315)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 316)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 319)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 320)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 321)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 322)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 333)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_transientPropertyGeneration_bindPropertyInSelectionController (void) {
  enterExtensionGetter_bindPropertyInSelectionController (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                                          extensionGetter_transientPropertyGeneration_bindPropertyInSelectionController) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_transientPropertyGeneration_bindPropertyInSelectionController (defineExtensionGetter_transientPropertyGeneration_bindPropertyInSelectionController, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_transientPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                          const GALGAS_bool constinArgument_inPreferences,
                                                                                          const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_transientPropertyGeneration temp_1 = object ;
    const GALGAS_transientPropertyGeneration temp_2 = object ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("transient-property.galgas", 343)).operator_not (SOURCE_FILE ("transient-property.galgas", 343)) COMMA_SOURCE_FILE ("transient-property.galgas", 343)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 345)) ;
          const GALGAS_transientPropertyGeneration temp_4 = object ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 346)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 346)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 347)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 347)) ;
          const GALGAS_transientPropertyGeneration temp_5 = object ;
          const GALGAS_transientPropertyGeneration temp_6 = object ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)).add_operation (GALGAS_string (" ()\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 348)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 349)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 349)) ;
          const GALGAS_transientPropertyGeneration temp_7 = object ;
          const GALGAS_transientPropertyGeneration temp_8 = object ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 350)) ;
          const GALGAS_transientPropertyGeneration temp_9 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    switch preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 351)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 351)) ;
          result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 352)) ;
          result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 353)) ;
          result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 354)) ;
          result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 355)) ;
          result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 356)) ;
          result_result.plusAssign_operation(GALGAS_string ("  }\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 357)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 359)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 359)) ;
        const GALGAS_transientPropertyGeneration temp_10 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 360)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 360)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 361)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 361)) ;
        const GALGAS_transientPropertyGeneration temp_11 = object ;
        const GALGAS_transientPropertyGeneration temp_12 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)).add_operation (GALGAS_string (" ()\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 362)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 363)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 363)) ;
        const GALGAS_transientPropertyGeneration temp_13 = object ;
        const GALGAS_transientPropertyGeneration temp_14 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)).add_operation (extensionGetter_swiftTypeName (temp_14.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 364)) ;
        const GALGAS_transientPropertyGeneration temp_15 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    switch self.").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 365)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 365)) ;
        result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 366)) ;
        result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 367)) ;
        result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 368)) ;
        result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 369)) ;
        result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 370)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 371)) ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_transientPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                                extensionGetter_transientPropertyGeneration_propertyDeclarationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_transientPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_transientPropertyGeneration_propertyDeclarationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_transientPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                    const GALGAS_bool constinArgument_inPreferences,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_16755 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_transientPropertyGeneration temp_3 = object ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.galgas", 381)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_transientPropertyGeneration temp_4 = object ;
      GALGAS_bool var_needs_5F_unwSelf_16892 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 382)) ;
      const GALGAS_transientPropertyGeneration temp_5 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 383)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16892.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_transientPropertyGeneration temp_7 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16755, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 385)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 385)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 385)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 386)) ;
          const GALGAS_transientPropertyGeneration temp_8 = object ;
          const GALGAS_transientPropertyGeneration temp_9 = object ;
          const GALGAS_transientPropertyGeneration temp_10 = object ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 387)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 388)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 389)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 390)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_transientPropertyGeneration temp_11 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16755, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 392)) ;
        const GALGAS_transientPropertyGeneration temp_12 = object ;
        const GALGAS_transientPropertyGeneration temp_13 = object ;
        const GALGAS_transientPropertyGeneration temp_14 = object ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 393)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 395)) ;
      const GALGAS_transientPropertyGeneration temp_15 = object ;
      cEnumerator_transientDependencyListForGeneration enumerator_17726 (temp_15.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_17726.hasCurrentObject ()) {
        GALGAS_string var_s_17766 = extensionGetter_generateAddObserverCall (enumerator_17726.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 397)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, var_s_17766.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_transientPropertyGeneration temp_17 = object ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_17766, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)).add_operation (var_prefix_16755, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 399)) ;
          }
        }
        enumerator_17726.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_transientPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                          extensionGetter_transientPropertyGeneration_configurationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_transientPropertyGeneration_configurationCode (defineExtensionGetter_transientPropertyGeneration_configurationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_transientPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                  const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_transientPropertyGeneration temp_0 = object ;
  cEnumerator_transientDependencyListForGeneration enumerator_18218 (temp_0.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_18218.hasCurrentObject ()) {
    GALGAS_string var_s_18256 = extensionGetter_generateRemoveObserverCall (enumerator_18218.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 410)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_s_18256.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_transientPropertyGeneration temp_2 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    // ").add_operation (var_s_18256, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 412)) ;
      }
    }
    enumerator_18218.gotoNextObject () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_transientPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                        extensionGetter_transientPropertyGeneration_terminationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_transientPropertyGeneration_terminationCode (defineExtensionGetter_transientPropertyGeneration_terminationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientRoutineGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_transientRoutineGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                                     const GALGAS_string constinArgument_inOutputDirectory,
                                                                     GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientRoutineGeneration * object = (const cPtr_transientRoutineGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientRoutineGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_transientRoutineGeneration temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.galgas", 604)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_transientRoutineGeneration temp_2 = object ;
      const GALGAS_transientRoutineGeneration temp_3 = object ;
      const GALGAS_transientRoutineGeneration temp_4 = object ;
      const GALGAS_transientRoutineGeneration temp_5 = object ;
      const GALGAS_transientRoutineGeneration temp_6 = object ;
      GALGAS_string var_s_28015 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mDependencyList (), temp_5.readProperty_mTransientType (), temp_6.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.galgas", 605))) ;
      GALGAS_string var_header_28247 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("transient-property.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 612)).add_operation (GALGAS_string ("\n"
        "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
        "//"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 612)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("transient-property.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 614)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 614)).add_operation (GALGAS_string ("import Cocoa\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 614)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 615)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("transient-property.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 616)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 616)) ;
      const GALGAS_transientRoutineGeneration temp_7 = object ;
      const GALGAS_transientRoutineGeneration temp_8 = object ;
      const GALGAS_transientRoutineGeneration temp_9 = object ;
      GALGAS_string var_fileName_28595 = temp_7.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (temp_8.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (temp_9.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_28595  COMMA_SOURCE_FILE ("transient-property.galgas", 618)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_28595, GALGAS_string ("//"), var_header_28247, GALGAS_string ("\n"
        "\n"), var_s_28015, GALGAS_string ("\n"), GALGAS_string ("}\n"
        "\n"
        "//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("transient-property.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 627)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 627)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 619)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_transientRoutineGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_transientRoutineGeneration.mSlotID,
                                     extensionMethod_transientRoutineGeneration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_transientRoutineGeneration_generateCode (defineExtensionMethod_transientRoutineGeneration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'transientManager'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_3 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_1 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_0 [4] = {
  & gWrapperDirectory_3_transientManager,
  & gWrapperDirectory_1_transientManager,
  & gWrapperDirectory_2_transientManager,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_transientManager (
  "",
  0,
  gWrapperAllFiles_transientManager_0,
  3,
  gWrapperAllDirectories_transientManager_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'transientManager transientComputationFunctionFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & in_OWNER_5F_NAME,
                                                                                     const GALGAS_string & in_TRANSIENT_5F_NAME,
                                                                                     const GALGAS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                     const GALGAS_typeKind & in_TRANSIENT_5F_TYPE,
                                                                                     const GALGAS_string & in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "func " ;
  result << in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX.stringValue () ;
  result << "_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_TRANSIENT_5F_NAME.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_287_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    cEnumerator_transientDependencyListForGeneration enumerator_287 (in_DEPENDENCY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_287.hasCurrentObject ()) {
      result << "\n"
        "       _ " ;
      result << enumerator_287.current_mFunctionArgumentName (HERE).stringValue () ;
      result << " : " ;
      result << enumerator_287.current_mFunctionArgumentTypeString (HERE).stringValue () ;
      if (enumerator_287.hasNextObject ()) {
        result << "," ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_287_.increment () ;
      enumerator_287.gotoNextObject () ;
    }
  }
  result << "\n"
    ") -> " ;
  result << extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("transient-computation-function.swift.galgasTemplate", 10)).stringValue () ;
  result << " {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_proxyDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_proxyDeclarationAST * object = (const cPtr_proxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_proxyDeclarationAST) ;
  const GALGAS_proxyDeclarationAST temp_0 = object ;
  const GALGAS_proxyDeclarationAST temp_1 = object ;
  const GALGAS_proxyDeclarationAST temp_2 = object ;
  GALGAS_lstring var_node_912 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 23)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 23)), temp_2.readProperty_mProxyName ().readProperty_location ()  COMMA_SOURCE_FILE ("proxy.galgas", 23)) ;
  {
  const GALGAS_proxyDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_912, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 24)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_912, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("proxy.galgas", 25)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_912, temp_5.readProperty_mProxyTypeName () COMMA_SOURCE_FILE ("proxy.galgas", 26)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_proxyDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_proxyDeclarationAST.mSlotID,
                                               extensionMethod_proxyDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_proxyDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_proxyDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@proxyDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_proxyDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_proxyDeclarationAST * object = (const cPtr_proxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_proxyDeclarationAST) ;
  const GALGAS_proxyDeclarationAST temp_0 = object ;
  const GALGAS_proxyDeclarationAST temp_1 = object ;
  const GALGAS_proxyDeclarationAST temp_2 = object ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 32)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 32)), temp_2.readProperty_mProxyName ().readProperty_location ()  COMMA_SOURCE_FILE ("proxy.galgas", 32)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_proxyDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_proxyDeclarationAST.mSlotID,
                                extensionGetter_proxyDeclarationAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_proxyDeclarationAST_nodeKey (defineExtensionGetter_proxyDeclarationAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_proxyDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_proxyDeclarationAST * object = (const cPtr_proxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_proxyDeclarationAST) ;
  const GALGAS_proxyDeclarationAST temp_0 = object ;
  cMapElement_classMap * objectArray_3312 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.galgas", 88)) ;
  if (NULL != objectArray_3312) {
    macroValidSharedObject (objectArray_3312, cMapElement_classMap) ;
    GALGAS_classKind var_proxyKind_3474 ;
    const GALGAS_proxyDeclarationAST temp_1 = object ;
    GALGAS_propertyMap joker_3476_3 ; // Joker input parameter
    GALGAS_actionMap joker_3476_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3476_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mProxyTypeName (), var_proxyKind_3474, joker_3476_3, joker_3476_2, joker_3476_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 91)) ;
    switch (var_proxyKind_3474.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_proxyDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("an atomic type is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.galgas", 94)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_4020 = (const cEnumAssociatedValues_classKind_entity *) (var_proxyKind_3474.unsafePointer ()) ;
        const GALGAS_bool extractedValue_3620_isGraphic = extractPtr_4020->mAssociatedValue1 ;
        const GALGAS_proxyDeclarationAST temp_4 = object ;
        switch (temp_4.readProperty_mProxyKind ().enumValue ()) {
        case GALGAS_proxyKind::kNotBuilt:
          break ;
        case GALGAS_proxyKind::kEnum_toManyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_5 = object ;
            GALGAS_propertyKind var_k_3692 = GALGAS_propertyKind::constructor_toMany (temp_5.readProperty_mProxyTypeName (), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("proxy.galgas", 100)), extractedValue_3620_isGraphic, GALGAS_toManyRelationshipOptionAST::constructor_none (SOURCE_FILE ("proxy.galgas", 102))  COMMA_SOURCE_FILE ("proxy.galgas", 98)) ;
            {
            const GALGAS_proxyDeclarationAST temp_6 = object ;
            objectArray_3312->mProperty_mPropertyMap.setter_insertKey (temp_6.readProperty_mProxyName (), var_k_3692, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.galgas", 104)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 104)) ;
            }
          }
          break ;
        case GALGAS_proxyKind::kEnum_propertyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_7 = object ;
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (temp_7.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("this type should be an entity"), fixItArray8  COMMA_SOURCE_FILE ("proxy.galgas", 106)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_proxyDeclarationAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("an atomic type is required here"), fixItArray10  COMMA_SOURCE_FILE ("proxy.galgas", 109)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_4247 = (const cEnumAssociatedValues_classKind_atomic *) (var_proxyKind_3474.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_4134_type = extractPtr_4247->mAssociatedValue0 ;
        {
        const GALGAS_proxyDeclarationAST temp_11 = object ;
        objectArray_3312->mProperty_mPropertyMap.setter_insertKey (temp_11.readProperty_mProxyName (), GALGAS_propertyKind::constructor_property (extractedValue_4134_type, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("proxy.galgas", 111))  COMMA_SOURCE_FILE ("proxy.galgas", 111)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.galgas", 111)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 111)) ;
        }
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_proxyDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_proxyDeclarationAST.mSlotID,
                                           extensionMethod_proxyDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_proxyDeclarationAST_firstAnalysisPhase (defineExtensionMethod_proxyDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST secondAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_proxyDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_proxyDeclarationAST * object = (const cPtr_proxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_proxyDeclarationAST) ;
  const GALGAS_proxyDeclarationAST temp_0 = object ;
  cMapElement_classMap * objectArray_4543 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.galgas", 122)) ;
  if (NULL != objectArray_4543) {
    macroValidSharedObject (objectArray_4543, cMapElement_classMap) ;
    GALGAS_propertyKind var_relationshipKind_4705 ;
    const GALGAS_proxyDeclarationAST temp_1 = object ;
    GALGAS_actionMap joker_4707_2 ; // Joker input parameter
    GALGAS_bool joker_4707_1 ; // Joker input parameter
    objectArray_4543->mProperty_mPropertyMap.method_searchKey (temp_1.readProperty_mToOneRelationshipName (), var_relationshipKind_4705, joker_4707_2, joker_4707_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 125)) ;
    switch (var_relationshipKind_4705.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const GALGAS_proxyDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.galgas", 128)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        const GALGAS_proxyDeclarationAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.galgas", 130)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        const GALGAS_proxyDeclarationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.galgas", 132)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const GALGAS_proxyDeclarationAST temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.galgas", 134)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        const cEnumAssociatedValues_propertyKind_toOne * extractPtr_7141 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_relationshipKind_4705.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_5211_toOneTypeName = extractPtr_7141->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_5297 ;
        GALGAS_classKind joker_5279 ; // Joker input parameter
        GALGAS_actionMap joker_5299_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5299_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5211_toOneTypeName, joker_5279, var_propertyMap_5297, joker_5299_2, joker_5299_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 136)) ;
        GALGAS_propertyKind var_propertyKind_5369 ;
        const GALGAS_proxyDeclarationAST temp_10 = object ;
        GALGAS_actionMap joker_5371_2 ; // Joker input parameter
        GALGAS_bool joker_5371_1 ; // Joker input parameter
        var_propertyMap_5297.method_searchKey (temp_10.readProperty_mPropertyName (), var_propertyKind_5369, joker_5371_2, joker_5371_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 137)) ;
        switch (var_propertyKind_5369.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            const cEnumAssociatedValues_propertyKind_property * extractPtr_5812 = (const cEnumAssociatedValues_propertyKind_property *) (var_propertyKind_5369.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5434_propertyType = extractPtr_5812->mAssociatedValue0 ;
            const GALGAS_proxyDeclarationAST temp_11 = object ;
            const GALGAS_proxyDeclarationAST temp_12 = object ;
            const GALGAS_proxyDeclarationAST temp_13 = object ;
            const GALGAS_proxyDeclarationAST temp_14 = object ;
            objectArray_4543->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicProxyGeneration::constructor_new (temp_11.readProperty_mProxyName ().readProperty_string (), temp_12.readProperty_mProxyKind (), extractedValue_5434_propertyType, temp_13.readProperty_mToOneRelationshipName ().readProperty_string (), temp_14.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("proxy.galgas", 140))  COMMA_SOURCE_FILE ("proxy.galgas", 140)) ;
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GALGAS_proxyDeclarationAST temp_16 = object ;
              test_15 = GALGAS_bool (kIsNotEqual, temp_16.readProperty_mProxyKind ().objectCompare (GALGAS_proxyKind::constructor_propertyProxy (SOURCE_FILE ("proxy.galgas", 147)))).boolEnum () ;
              if (kBoolTrue == test_15) {
                const GALGAS_proxyDeclarationAST temp_17 = object ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("this property is not atomic"), fixItArray18  COMMA_SOURCE_FILE ("proxy.galgas", 148)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6292 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_5369.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_5846_toManyTypeName = extractPtr_6292->mAssociatedValue0 ;
            GALGAS_classKind joker_5917_4 ; // Joker input parameter
            GALGAS_propertyMap joker_5917_3 ; // Joker input parameter
            GALGAS_actionMap joker_5917_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_5917_1 ; // Joker input parameter
            ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5846_toManyTypeName, joker_5917_4, joker_5917_3, joker_5917_2, joker_5917_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 151)) ;
            const GALGAS_proxyDeclarationAST temp_19 = object ;
            const GALGAS_proxyDeclarationAST temp_20 = object ;
            const GALGAS_proxyDeclarationAST temp_21 = object ;
            const GALGAS_proxyDeclarationAST temp_22 = object ;
            objectArray_4543->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyProxyGeneration::constructor_new (temp_19.readProperty_mProxyName ().readProperty_string (), temp_20.readProperty_mProxyKind (), extractedValue_5846_toManyTypeName.readProperty_string (), temp_21.readProperty_mToOneRelationshipName ().readProperty_string (), temp_22.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("proxy.galgas", 152))  COMMA_SOURCE_FILE ("proxy.galgas", 152)) ;
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              const GALGAS_proxyDeclarationAST temp_24 = object ;
              test_23 = GALGAS_bool (kIsNotEqual, temp_24.readProperty_mProxyKind ().objectCompare (GALGAS_proxyKind::constructor_toManyProxy (SOURCE_FILE ("proxy.galgas", 159)))).boolEnum () ;
              if (kBoolTrue == test_23) {
                const GALGAS_proxyDeclarationAST temp_25 = object ;
                TC_Array <C_FixItDescription> fixItArray26 ;
                inCompiler->emitSemanticError (temp_25.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("this property is not atomic"), fixItArray26  COMMA_SOURCE_FILE ("proxy.galgas", 160)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const GALGAS_proxyDeclarationAST temp_27 = object ;
            switch (temp_27.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_28 = object ;
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_28.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray29  COMMA_SOURCE_FILE ("proxy.galgas", 165)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_30 = object ;
                TC_Array <C_FixItDescription> fixItArray31 ;
                inCompiler->emitSemanticError (temp_30.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray31  COMMA_SOURCE_FILE ("proxy.galgas", 167)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const GALGAS_proxyDeclarationAST temp_32 = object ;
            switch (temp_32.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_33 = object ;
                TC_Array <C_FixItDescription> fixItArray34 ;
                inCompiler->emitSemanticError (temp_33.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray34  COMMA_SOURCE_FILE ("proxy.galgas", 172)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_35 = object ;
                TC_Array <C_FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (temp_35.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray36  COMMA_SOURCE_FILE ("proxy.galgas", 174)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            const GALGAS_proxyDeclarationAST temp_37 = object ;
            switch (temp_37.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_38 = object ;
                TC_Array <C_FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray39  COMMA_SOURCE_FILE ("proxy.galgas", 179)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_40 = object ;
                TC_Array <C_FixItDescription> fixItArray41 ;
                inCompiler->emitSemanticError (temp_40.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray41  COMMA_SOURCE_FILE ("proxy.galgas", 181)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_proxyDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_proxyDeclarationAST.mSlotID,
                                            extensionMethod_proxyDeclarationAST_secondAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_proxyDeclarationAST_secondAnalysisPhase (defineExtensionMethod_proxyDeclarationAST_secondAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyProxyGeneration_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyProxyGeneration * object = (const cPtr_toManyProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyProxyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 208)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 208)) ;
  const GALGAS_toManyProxyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 210)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 210)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  const GALGAS_toManyProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 211)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 211)).add_operation (temp_2.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 211)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 211)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyProxyGeneration_declarationInSelectionControllerCode (void) {
  enterExtensionGetter_declarationInSelectionControllerCode (kTypeDescriptor_GALGAS_toManyProxyGeneration.mSlotID,
                                                             extensionGetter_toManyProxyGeneration_declarationInSelectionControllerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyProxyGeneration_declarationInSelectionControllerCode (defineExtensionGetter_toManyProxyGeneration_declarationInSelectionControllerCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyProxyGeneration_initCode (const cPtr_propertyGeneration * /* inObject */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyProxyGeneration_initCode (void) {
  enterExtensionGetter_initCode (kTypeDescriptor_GALGAS_toManyProxyGeneration.mSlotID,
                                 extensionGetter_toManyProxyGeneration_initCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyProxyGeneration_initCode (defineExtensionGetter_toManyProxyGeneration_initCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyProxyGeneration_bindPropertyInSelectionController (const cPtr_propertyGeneration * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyProxyGeneration_bindPropertyInSelectionController (void) {
  enterExtensionGetter_bindPropertyInSelectionController (kTypeDescriptor_GALGAS_toManyProxyGeneration.mSlotID,
                                                          extensionGetter_toManyProxyGeneration_bindPropertyInSelectionController) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyProxyGeneration_bindPropertyInSelectionController (defineExtensionGetter_toManyProxyGeneration_bindPropertyInSelectionController, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyProxyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                    const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                    const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyProxyGeneration * object = (const cPtr_toManyProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyProxyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 232)) ;
  const GALGAS_toManyProxyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 233)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 233)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 234)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 234)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 235)).add_operation (GALGAS_string ("_modelDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 235)) ;
  const GALGAS_toManyProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  // var ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 236)).add_operation (GALGAS_string ("_boundObjectDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 236)) ;
  const GALGAS_toManyProxyGeneration temp_3 = object ;
  const GALGAS_toManyProxyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 237)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 237)).add_operation (temp_4.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 237)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 237)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 238)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 238)) ;
  const GALGAS_toManyProxyGeneration temp_5 = object ;
  const GALGAS_toManyProxyGeneration temp_6 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 239)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 239)).add_operation (temp_6.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 239)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 239)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 240)) ;
  const GALGAS_toManyProxyGeneration temp_7 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      switch self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 241)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 242)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return EBReferenceArray ()\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return EBReferenceArray (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 245)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 246)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 247)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 248)) ;
  const GALGAS_toManyProxyGeneration temp_8 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 249)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 249)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 250)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 251)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyProxyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_toManyProxyGeneration.mSlotID,
                                                extensionGetter_toManyProxyGeneration_propertyDeclarationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyProxyGeneration_propertyDeclarationCode (defineExtensionGetter_toManyProxyGeneration_propertyDeclarationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyProxyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                              const GALGAS_bool /* constinArgument_inPreferences */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyProxyGeneration * object = (const cPtr_toManyProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyProxyGeneration) ;
  const GALGAS_toManyProxyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 257)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 258)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let controller = EBObservablePropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 259)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("        observedObjects: [self.").add_operation (temp_1.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 260)).add_operation (GALGAS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 260)) ;
  result_result.plusAssign_operation(GALGAS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 261)) ;
  const GALGAS_toManyProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("          if let me = self, let model = me.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 262)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 262)) ;
  const GALGAS_toManyProxyGeneration temp_3 = object ;
  const GALGAS_toManyProxyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            me.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 263)).add_operation (GALGAS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 263)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 263)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 263)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 264)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 265)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 266)) ;
  const GALGAS_toManyProxyGeneration temp_5 = object ;
  const GALGAS_toManyProxyGeneration temp_6 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_5.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 267)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 267)).add_operation (temp_6.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 267)).add_operation (GALGAS_string (" (controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 267)) ;
  const GALGAS_toManyProxyGeneration temp_7 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 268)).add_operation (GALGAS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 268)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 269)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyProxyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_toManyProxyGeneration.mSlotID,
                                          extensionGetter_toManyProxyGeneration_configurationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyProxyGeneration_configurationCode (defineExtensionGetter_toManyProxyGeneration_configurationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyProxyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                            const GALGAS_bool /* constinArgument_inPreferences */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyProxyGeneration * object = (const cPtr_toManyProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyProxyGeneration) ;
  const GALGAS_toManyProxyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 275)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 275)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 276)).add_operation (GALGAS_string ("_property.setModel (nil)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 276)) ;
  const GALGAS_toManyProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 277)).add_operation (GALGAS_string ("_modelDidChangeController\?.unregister ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 277)) ;
  const GALGAS_toManyProxyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 278)).add_operation (GALGAS_string ("_modelDidChangeController = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 278)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyProxyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_toManyProxyGeneration.mSlotID,
                                        extensionGetter_toManyProxyGeneration_terminationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyProxyGeneration_terminationCode (defineExtensionGetter_toManyProxyGeneration_terminationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyProxyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyProxyGeneration * object = (const cPtr_toManyProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyProxyGeneration) ;
  const GALGAS_toManyProxyGeneration temp_0 = object ;
  result_result = GALGAS_string ("    //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 284)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 284)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 285)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 285)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyProxyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_toManyProxyGeneration.mSlotID,
                                                extensionGetter_toManyProxyGeneration_clearObjectExplorerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyProxyGeneration_clearObjectExplorerCode (defineExtensionGetter_toManyProxyGeneration_clearObjectExplorerCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicProxyGeneration_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicProxyGeneration * object = (const cPtr_atomicProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicProxyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 308)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 308)) ;
  const GALGAS_atomicProxyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 309)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 310)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 310)) ;
  const GALGAS_atomicProxyGeneration temp_1 = object ;
  const GALGAS_atomicProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 311)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 311)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 311)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 311)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicProxyGeneration_declarationInSelectionControllerCode (void) {
  enterExtensionGetter_declarationInSelectionControllerCode (kTypeDescriptor_GALGAS_atomicProxyGeneration.mSlotID,
                                                             extensionGetter_atomicProxyGeneration_declarationInSelectionControllerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicProxyGeneration_declarationInSelectionControllerCode (defineExtensionGetter_atomicProxyGeneration_declarationInSelectionControllerCode, NULL) ;

