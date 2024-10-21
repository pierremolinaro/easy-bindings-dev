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
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 33)) ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mClassName (), temp_3.readProperty_mRootEntityName () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 34)) ;
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
  GGS_actionMap var_actionMap_4805 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_4805, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 134)) ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  GGS_propertyMap temp_3 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 138)) ;
  GGS_propertyGenerationList temp_4 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 140)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GGS_classKind::class_func_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 137)), temp_3, var_actionMap_4805, temp_4, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 135)) ;
  }
  cEnumerator_actionMap enumerator_4977 (var_actionMap_4805, EnumerationOrder::up) ;
  while (enumerator_4977.hasCurrentObject ()) {
    {
    const GGS_autoLayoutDocumentDeclarationAST temp_5 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_5.readProperty_mClassName ().readProperty_string (), enumerator_4977.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 143)) ;
    }
    enumerator_4977.gotoNextObject () ;
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
  GGS_propertyMap var_preferencesPropertyMap_5497 ;
  GGS_classKind joker_5484 ; // Joker input parameter
  GGS_actionMap joker_5525_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5525_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 158)), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 158)), inCompiler COMMA_HERE), joker_5484, var_preferencesPropertyMap_5497, joker_5525_2, joker_5525_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 157)) ;
  GGS_propertyMap var_documentPropertyMap_5662 ;
  GGS_actionMap var_documentActionMap_5692 ;
  GGS_propertyGenerationList var_documentPropertyGenerationList_5720 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  GGS_classKind joker_5649 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 165)), inCompiler COMMA_HERE), joker_5649, var_documentPropertyMap_5662, var_documentActionMap_5692, var_documentPropertyGenerationList_5720, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 164)) ;
  GGS_propertyMap var_rootPropertyMap_5873 ;
  GGS_actionMap var_rootActionMap_5906 ;
  GGS_propertyGenerationList var_rootPropertyGenerationList_5937 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  GGS_classKind joker_5860 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_5860, var_rootPropertyMap_5873, var_rootActionMap_5906, var_rootPropertyGenerationList_5937, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 172)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_6299 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_6366 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_6438 ;
  GGS_decoratedOutletMap var_outletMap_6499 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6551 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6638 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (false), var_rootPropertyMap_5873, var_preferencesPropertyMap_5497, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_5662, var_documentActionMap_5692, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_6299, var_multipleBindingGenerationList_6366, var_actionBindingListForGeneration_6438, var_outletMap_6499, var_tableViewBindingGenerationList_6551, var_ebViewGraphicControllerBindingGenerationList_6638, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 180)) ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_5 = this ;
  cEnumerator_arrayControllerBindingListAST enumerator_6743 (temp_5.readProperty_mArrayControllerBindingListAST (), EnumerationOrder::up) ;
  while (enumerator_6743.hasCurrentObject ()) {
    switch (enumerator_6743.current_mHiddenSelectionViewBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_6923_expression_0 ;
        enumerator_6743.current_mHiddenSelectionViewBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_6923_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_7195 ;
        GGS_typeKind var_type_7236 ;
        GGS_location var_errorLocation_7265 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_6923_expression_0.ptr (), GGS_bool (false), var_rootPropertyMap_5873, ioArgument_ioSemanticContext, var_documentPropertyMap_5662, var_preferencesPropertyMap_5497, var_hiddenExpression_7195, var_type_7236, var_errorLocation_7265, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 204)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_type_7236.getter_isBoolType (SOURCE_FILE ("document-auto-layout.ggs", 214)).operator_not (SOURCE_FILE ("document-auto-layout.ggs", 214)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_7265, GGS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 215)) ;
          }
        }
        {
        var_multipleBindingGenerationList_6366.setter_append (enumerator_6743.current_mControllerName (HERE).readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_7195, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 217)) ;
        }
      }
      break ;
    }
    enumerator_6743.gotoNextObject () ;
  }
  GGS_autoLayoutViewDeclarationMap temp_8 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 225)) ;
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_7612 = temp_8 ;
  GGS_viewGenerationList temp_9 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 226)) ;
  GGS_viewGenerationList var_viewGenerationList_7662 = temp_9 ;
  GGS_implicitViewFunctionGenerationList temp_10 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 227)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_7728 = temp_10 ;
  GGS_autoLayoutConfiguratorMap temp_11 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 228)) ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_7801 = temp_11 ;
  GGS_autoLayoutOutletMap temp_12 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 229)) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_7849 = temp_12 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_13 = this ;
  cEnumerator_astViewDeclarationList enumerator_7891 (temp_13.readProperty_mViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_7891.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_7612.setter_insertKey (enumerator_7891.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 231)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_8377 ;
    const GGS_autoLayoutDocumentDeclarationAST temp_14 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_7891.current_mView (HERE).ptr (), enumerator_7891.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_7612, GGS_bool (false), var_rootPropertyMap_5873, var_preferencesPropertyMap_5497, ioArgument_ioSemanticContext, var_documentPropertyMap_5662, var_documentActionMap_5692, temp_14.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_7728, var_configuratorMap_7801, var_autoLayoutOutletMap_7849, var_viewGeneration_8377, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 232)) ;
    {
    var_viewGenerationList_7662.setter_append (enumerator_7891.current_mViewName (HERE).readProperty_string (), var_viewGeneration_8377, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 248)) ;
    }
    enumerator_7891.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_15 = this ;
  var_viewDeclarationMap_7612.method_searchKey (temp_15.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 250)) ;
  ioArgument_ioGeneration.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GGS_bool (true) ;
  GGS_autoLayoutOutletLinkerGenerationList temp_16 = GGS_autoLayoutOutletLinkerGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 254)) ;
  GGS_autoLayoutOutletLinkerGenerationList var_outletLinkerGenerationList_8669 = temp_16 ;
  GGS_stringset temp_17 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 255)) ;
  GGS_stringset var_linkerNameSet_8718 = temp_17 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_18 = this ;
  cEnumerator_astAutoLayoutOutletLinkerList enumerator_8756 (temp_18.readProperty_mOutletLinkerList (), EnumerationOrder::up) ;
  while (enumerator_8756.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = var_linkerNameSet_8718.getter_hasKey (enumerator_8756.current_mLinkerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 257)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_8756.current_mLinkerName (HERE).readProperty_location (), GGS_string ("duplicated linker name"), fixItArray20  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 258)) ;
      }
    }
    {
    var_linkerNameSet_8718.setter_insert (enumerator_8756.current_mLinkerName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 260)) ;
    }
    GGS__32_stringlist temp_21 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 261)) ;
    GGS__32_stringlist var_outletNameAndTypeNameList_8979 = temp_21 ;
    cEnumerator_lstringlist enumerator_9019 (enumerator_8756.current_mOutletNameList (HERE), EnumerationOrder::up) ;
    while (enumerator_9019.hasCurrentObject ()) {
      GGS_string var_outletTypeName_9105 ;
      GGS_bool var_outletIsArray_9133 ;
      var_autoLayoutOutletMap_7849.method_searchKey (enumerator_9019.current_mValue (HERE), var_outletTypeName_9105, var_outletIsArray_9133, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 263)) ;
      {
      var_outletNameAndTypeNameList_8979.setter_append (enumerator_9019.current_mValue (HERE).readProperty_string (), var_outletTypeName_9105, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 264)) ;
      }
      enumerator_9019.gotoNextObject () ;
    }
    {
    var_outletLinkerGenerationList_8669.setter_append (enumerator_8756.current_mLinkerName (HERE).readProperty_string (), var_outletNameAndTypeNameList_8979, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 266)) ;
    }
    enumerator_8756.gotoNextObject () ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_22 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_23 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_24 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_25 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutDocumentFileGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (temp_22.readProperty_mClassName ().readProperty_string (), temp_23.readProperty_mRootEntityName ().readProperty_string (), temp_24.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_5720, var_outletMap_6499, var_autoLayoutOutletMap_7849, var_actionBindingListForGeneration_6438, var_regularBindingsGenerationList_6299, var_multipleBindingGenerationList_6366, var_tableViewBindingGenerationList_6551, var_ebViewGraphicControllerBindingGenerationList_6638, var_viewGenerationList_7662, var_implicitViewFunctionGenerationList_7728, var_configuratorMap_7801, temp_25.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_8669, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 269)) ;
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
  GGS_string var_s_11677 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 320))) ;
  const GGS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GGS_string var_fileName_12348 = GGS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 337)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 337)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12348, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 338)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12348, var_s_11677, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 339)) ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_19 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_12535 (temp_19.readProperty_mConfiguratorMap (), EnumerationOrder::up) ;
  while (enumerator_12535.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GGS_string var_s_12587 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_12535.current_lkey (HERE).readProperty_string (), enumerator_12535.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 345))) ;
    GGS_string var_header_12769 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 350)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 350)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 350)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 352)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 352)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 352)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 352)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 353)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 354)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 354)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 354)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GGS_string var_fileName_13111 = GGS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 355)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 355)).add_operation (enumerator_12535.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 355)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 355)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_13111, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 356)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_13111, GGS_string ("//"), var_header_12769, GGS_string ("\n\n"), var_s_12587, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 357)) ;
    }
    enumerator_12535.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_22 = this ;
  cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_13688 (temp_22.readProperty_mOutletLinkerGenerationList (), EnumerationOrder::up) ;
  while (enumerator_13688.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GGS_string var_s_13762 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_13688.current_mLinkerName (HERE), enumerator_13688.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 370))) ;
    GGS_string var_header_13934 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 375)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 375)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 375)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 378)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GGS_string var_fileName_14276 = GGS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 380)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 380)).add_operation (enumerator_13688.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 380)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 380)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14276, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 381)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_14276, GGS_string ("//"), var_header_13934, GGS_string ("\n\n"), var_s_13762, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 382)) ;
    }
    enumerator_13688.gotoNextObject () ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\n@objc(") ;
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
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
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
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
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
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
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
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    displayName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootEntityClassName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final func rootEntityClassName () -> String {\n    return \"") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootObject\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var rootObject : ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mRootObject as! ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n") ;
  GGS_uint index_3064_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_3064 (in_VIEW_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3064.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_3064.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3064.current_mView (HERE).ptr (), GGS_bool (false), enumerator_3064.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 78)).stringValue ()) ;
      index_3064_.increment () ;
      enumerator_3064.gotoNextObject () ;
    }
  }
  GGS_uint index_3440_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_3440 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3440.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeImplicitView_") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3440.current_mInstruction (HERE).ptr (), GGS_bool (false), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      index_3440_idx.increment () ;
      enumerator_3440.gotoNextObject () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Build User Interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self.") ;
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
  result.appendString ("  //--- Assign main view to window\n    self.windowForSheet\?.setContentView (mainView)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    configureProperties\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func configureProperties () {\n") ;
  GGS_uint index_5224_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5224 (in_DOCUMENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5224.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5224.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 125)).stringValue ()) ;
      result.appendString ("\n") ;
      index_5224_.increment () ;
      enumerator_5224.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
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
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
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
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
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
  GGS_actionMap var_actionMap_3954 ;
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_3954, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 94)) ;
  }
  {
  GGS_propertyMap temp_1 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 98)) ;
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 100)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 96)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 96)), inCompiler COMMA_HERE), GGS_classKind::class_func_prefs (SOURCE_FILE ("preferences.ggs", 97)), temp_1, var_actionMap_3954, temp_2, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 95)) ;
  }
  cEnumerator_actionMap enumerator_4101 (var_actionMap_3954, EnumerationOrder::up) ;
  while (enumerator_4101.hasCurrentObject ()) {
    {
    const GGS_prefsDeclarationAST temp_3 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_3.readProperty_mClassName ().readProperty_string (), enumerator_4101.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 103)) ;
    }
    enumerator_4101.gotoNextObject () ;
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
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  temp_0.enterElement (GGS_string ("awakeFromNib"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  temp_0.enterElement (GGS_string ("init"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  GGS_stringset var_availableCallers_4760 = temp_0 ;
  GGS_externFunctionMap temp_1 = GGS_externFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 122)) ;
  GGS_externFunctionMap var_externFunctionMap_4829 = temp_1 ;
  const GGS_prefsDeclarationAST temp_2 = this ;
  cEnumerator_externSwiftFunctionList enumerator_4885 (temp_2.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), EnumerationOrder::up) ;
  while (enumerator_4885.hasCurrentObject ()) {
    {
    var_externFunctionMap_4829.setter_insertKey (enumerator_4885.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 124)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_availableCallers_4760.getter_hasKey (enumerator_4885.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.ggs", 125)).operator_not (SOURCE_FILE ("preferences.ggs", 125)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string var_s_5079 = GGS_string ("invalid caller; available callers:") ;
        cEnumerator_stringset enumerator_5131 (var_availableCallers_4760, EnumerationOrder::up) ;
        while (enumerator_5131.hasCurrentObject ()) {
          var_s_5079.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_5131.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 128)) ;
          enumerator_5131.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_4885.current_mCallerName (HERE).readProperty_location (), var_s_5079, fixItArray4  COMMA_SOURCE_FILE ("preferences.ggs", 130)) ;
      }
    }
    enumerator_4885.gotoNextObject () ;
  }
  GGS_propertyMap var_preferencesPropertyMap_5373 ;
  GGS_actionMap var_actionMap_5406 ;
  GGS_propertyGenerationList var_propertyGenerationList_5426 ;
  GGS_classKind joker_5360 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 135)), GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 135)), inCompiler COMMA_HERE), joker_5360, var_preferencesPropertyMap_5373, var_actionMap_5406, var_propertyGenerationList_5426, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 134)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_5790 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_5861 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_5933 ;
  GGS_decoratedOutletMap var_outletMap_5994 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6046 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6133 ;
  {
  GGS_propertyMap temp_5 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 144)) ;
  const GGS_prefsDeclarationAST temp_6 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (true), temp_5, var_preferencesPropertyMap_5373, GGS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_6.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5373, var_actionMap_5406, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5790, var_multipleBindingGenerationList_5861, var_actionBindingListForGeneration_5933, var_outletMap_5994, var_tableViewBindingGenerationList_6046, var_ebViewGraphicControllerBindingGenerationList_6133, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 142)) ;
  }
  GGS_autoLayoutViewDeclarationMap temp_7 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 161)) ;
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6259 = temp_7 ;
  GGS_viewGenerationList temp_8 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 162)) ;
  GGS_viewGenerationList var_viewGenerationList_6309 = temp_8 ;
  GGS_implicitViewFunctionGenerationList temp_9 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 163)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6375 = temp_9 ;
  GGS_autoLayoutConfiguratorMap temp_10 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 164)) ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_6448 = temp_10 ;
  GGS_autoLayoutOutletMap temp_11 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 165)) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_6496 = temp_11 ;
  const GGS_prefsDeclarationAST temp_12 = this ;
  cEnumerator_astViewDeclarationList enumerator_6538 (temp_12.readProperty_mDeclaration ().readProperty_mViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_6538.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6259.setter_insertKey (enumerator_6538.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 167)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_7041 ;
    GGS_propertyMap temp_13 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 172)) ;
    GGS_propertyMap temp_14 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 175)) ;
    const GGS_prefsDeclarationAST temp_15 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6538.current_mView (HERE).ptr (), enumerator_6538.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6259, GGS_bool (true), temp_13, var_preferencesPropertyMap_5373, ioArgument_ioSemanticContext, temp_14, var_actionMap_5406, temp_15.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6375, var_configuratorMap_6448, var_autoLayoutOutletMap_6496, var_viewGeneration_7041, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 168)) ;
    {
    var_viewGenerationList_6309.setter_append (enumerator_6538.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7041, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 184)) ;
    }
    enumerator_6538.gotoNextObject () ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_viewDeclarationMap_6259.getter_hasKey (GGS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.ggs", 186)).operator_not (SOURCE_FILE ("preferences.ggs", 186)).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 187)), GGS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray17  COMMA_SOURCE_FILE ("preferences.ggs", 187)) ;
    }
  }
  {
  const GGS_prefsDeclarationAST temp_18 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_preferencesForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_propertyGenerationList_5426, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5790, var_multipleBindingGenerationList_5861, var_actionBindingListForGeneration_5933, var_outletMap_5994, temp_18.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6046, var_ebViewGraphicControllerBindingGenerationList_6133, var_viewGenerationList_6309, var_implicitViewFunctionGenerationList_6375, var_configuratorMap_6448, var_autoLayoutOutletMap_6496, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 190)) ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\n@MainActor var g") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString ("\? = nil\n\n//--------------------------------------------------------------------------------------------------\n\nclass ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_SuperClass, NSWindowDelegate {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mWindow : CanariWindow\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Show Preferences window\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @IBAction func showPreferencesWindowAction (_ inSender : Any\?) {\n    let window : CanariWindow\n    if let w = self.mWindow {\n      window = w\n    }else{\n      window = CanariWindow (\n        contentRect: .zero,\n        styleMask: [.closable, .resizable, .titled],\n        backing: .buffered,\n        defer: false\n      )\n      self.mWindow = window\n      window.setFrameAutosaveName (\"PrefsWindowSettings\")\n      window.title = \"Preferences\"\n      window.isReleasedWhenClosed = false\n      window.setContentView (self.mPrefsMainView ())\n    //--- Contrôler le comportement en plein écran\n      window.collectionBehavior = [.fullScreenAuxiliary, .fullScreenNone]\n      let zoomButton = window.standardWindowButton (.zoomButton)\n      zoomButton\?.isEnabled = false\n    }\n    window.makeKeyAndOrderFront (nil)\n  }\n\n") ;
  GGS_uint index_1888_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_1888 (in_VIEW_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1888.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_1888.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_1888.current_mView (HERE).ptr (), GGS_bool (true), enumerator_1888.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 52)).stringValue ()) ;
      index_1888_.increment () ;
      enumerator_1888.gotoNextObject () ;
    }
  }
  GGS_uint index_2263_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_2263 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2263.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_2263_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  fileprivate final func computeImplicitView_") ;
      result.appendString (index_2263_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 58)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_2263.current_mInstruction (HERE).ptr (), GGS_bool (true), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      index_2263_idx.increment () ;
      enumerator_2263.gotoNextObject () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3009_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_3009 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_3009.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_3009.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_3009.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_3009.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_3009.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_3009.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      default :
        break ;
      }
      index_3009_.increment () ;
      enumerator_3009.gotoNextObject () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3505_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_3505 (in_OUTLET_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_3505.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet var ") ;
      result.appendString (enumerator_3505.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_3505.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      index_3505_.increment () ;
      enumerator_3505.gotoNextObject () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3909_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_3909 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3909.hasCurrentObject ()) {
      result.appendString ("  private var mController_") ;
      result.appendString (enumerator_3909.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3909.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_3909.current_mBindingName (HERE).stringValue ()) ;
      result.appendString ("\?\n") ;
      index_3909_.increment () ;
      enumerator_3909.gotoNextObject () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo Manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mUndoManager = UndoManager ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var undoManager : UndoManager { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // The preferences window should register this object as delegate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n    return self.undoManager\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n    g") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 117)).stringValue ()) ;
  result.appendString (" = self\n  //--- Read from preferences\n") ;
  GGS_uint index_5212_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5212 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, EnumerationOrder::up) ;
    while (enumerator_5212.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5212.current_mProperty (HERE).ptr (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 121)).stringValue ()) ;
      index_5212_.increment () ;
      enumerator_5212.gotoNextObject () ;
    }
  }
  result.appendString ("    //--- Extern functions\n") ;
  GGS_uint index_5363_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_5363 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5363.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_5363.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("init"))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_5363.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_5363_.increment () ;
      enumerator_5363.gotoNextObject () ;
    }
  }
  result.appendString ("//    }\n  }\n\n") ;
  const enumGalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("preferences.swift.galgasTemplate", 134)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @IBOutlet private final var window : NSWindow\?\n  let OUTLET_WIDTH = 200.0\n  let OUTLET_HEIGHT = 22.0\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    awakeFromNib\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func awakeFromNib () {\n    DispatchQueue.main.async {\n") ;
  result.appendString (extensionGetter_generateCode (in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST, inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 150)).stringValue ()) ;
  GGS_uint index_6128_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_6128 (in_OUTLET_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_6128.hasCurrentObject ()) {
      result.appendString ("      checkOutletConnection (self.") ;
      result.appendString (enumerator_6128.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", \"") ;
      result.appendString (enumerator_6128.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\", ") ;
      result.appendString (enumerator_6128.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString (".self, #file, #line)\n") ;
      index_6128_.increment () ;
      enumerator_6128.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Install bindings\n") ;
  GGS_uint index_6406_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_regularBindingsGenerationList enumerator_6406 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6406.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_6406.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.bind_") ;
      result.appendString (enumerator_6406.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_6520_ (0) ;
      if (enumerator_6406.current_mBoundObjectList (HERE).isValid ()) {
        cEnumerator_boundObjectList enumerator_6520 (enumerator_6406.current_mBoundObjectList (HERE), EnumerationOrder::up) ;
        while (enumerator_6520.hasCurrentObject ()) {
          result.appendString (enumerator_6520.current_mBoundObjectString (HERE).stringValue ()) ;
          if (enumerator_6520.hasNextObject ()) {
            result.appendString (", ") ;
          }
          index_6520_.increment () ;
          enumerator_6520.gotoNextObject () ;
        }
      }
      result.appendString (enumerator_6406.current_mBindingOptionsString (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      index_6406_.increment () ;
      enumerator_6406.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Install multiple bindings\n") ;
  GGS_uint index_6753_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_6753 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6753.hasCurrentObject ()) {
      result.appendString ("      do{\n        let controller = MultipleBindingController_") ;
      result.appendString (enumerator_6753.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (\n          computeFunction: ") ;
      result.appendString (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_6753.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (",\n          outlet: self.") ;
      result.appendString (enumerator_6753.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\n        )\n        self.mController_") ;
      result.appendString (enumerator_6753.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_6753.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" = controller\n      }\n") ;
      index_6753_.increment () ;
      enumerator_6753.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Array controller\n") ;
  GGS_uint index_7240_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_7240 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7240.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7240.current_mTableValueBindingControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_tableView (self.") ;
      result.appendString (enumerator_7240.current_mTableValueBindingOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      index_7240_.increment () ;
      enumerator_7240.gotoNextObject () ;
    }
  }
  GGS_uint index_7470_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_7470 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7470.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7470.current_mArrayControllerControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_ebView (self.") ;
      result.appendString (enumerator_7470.current_mEBViewOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      index_7470_.increment () ;
      enumerator_7470.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Set targets / actions\n") ;
  GGS_uint index_7713_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    cEnumerator_actionBindingListForGeneration enumerator_7713 (in_TARGET_5F_ACTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7713.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_7713.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.target = ") ;
      result.appendString (enumerator_7713.current_mTargetName (HERE).stringValue ()) ;
      result.appendString ("\n      self.") ;
      result.appendString (enumerator_7713.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.action = #selector (") ;
      result.appendString (enumerator_7713.current_mTargetTypeName (HERE).stringValue ()) ;
      result.appendString (".") ;
      result.appendString (enumerator_7713.current_mActionName (HERE).stringValue ()) ;
      result.appendString (" (_:))\n") ;
      index_7713_.increment () ;
      enumerator_7713.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Extern functions\n") ;
  GGS_uint index_7995_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_7995 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7995.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_7995.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("awakeFromNib"))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_7995.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_7995_.increment () ;
      enumerator_7995.gotoNextObject () ;
    }
  }
  result.appendString ("    }\n    super.awakeFromNib ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_8414_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8414 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, EnumerationOrder::up) ;
    while (enumerator_8414.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_8414.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 206)).stringValue ()) ;
      index_8414_.increment () ;
      enumerator_8414.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  GGS_uint index_8510_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8510 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, EnumerationOrder::up) ;
    while (enumerator_8510.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_8510.current_mProperty (HERE).ptr (), GGS_bool (true), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 211)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 211)).stringValue ()) ;
      index_8510_.increment () ;
      enumerator_8510.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
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
  GGS_string var_s_10299 = GGS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.ggs", 256))) ;
  GGS_string var_fileName_10800 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 270)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 270)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_10800, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 271)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_10800, var_s_10299, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 272)) ;
  }
  const GGS_preferencesForGeneration temp_12 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_10992 (temp_12.readProperty_mConfiguratorMap (), EnumerationOrder::up) ;
  while (enumerator_10992.hasCurrentObject ()) {
    GGS_string var_s_11044 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GGS_string ("Preferences"), enumerator_10992.current_lkey (HERE).readProperty_string (), enumerator_10992.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.ggs", 279))) ;
    GGS_string var_header_11221 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 284)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 284)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 284)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 286)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 288)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 288)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 288)) ;
    GGS_string var_fileName_11563 = GGS_string ("configurator-Preferences-").add_operation (enumerator_10992.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 289)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 289)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11563, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 290)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11563, GGS_string ("//"), var_header_11221, GGS_string ("\n\n"), var_s_11044, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 299)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 299)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 299)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 291)) ;
    }
    enumerator_10992.gotoNextObject () ;
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
      cEnumerator_lstringlist enumerator_1084 (constinArgument_inGraphvizList, EnumerationOrder::up) ;
      while (enumerator_1084.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1084.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 31)) ;
        }
        {
        routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1084.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 32)) ;
        }
        enumerator_1084.gotoNextObject () ;
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
  GGS_stringset var_reachableEntityNameSet_1689 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  temp_1.enterElement (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  GGS_stringlist var_exploreArray_1751 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 44)) ;
  GGS_stringlist var_nodeList_1811 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 45)) ;
  GGS_stringlist var_arrowList_1843 = temp_3 ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).isValid ()) {
    uint32_t variant_1860 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).uintValue () ;
    bool loop_1860 = true ;
    while (loop_1860) {
      loop_1860 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1751.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_1860) {
        loop_1860 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1751.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_1860 && (0 == variant_1860)) {
        loop_1860 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 46)) ;
      }
      if (loop_1860) {
        variant_1860 -- ;
        GGS_string var_entityName_1978 ;
        {
        var_exploreArray_1751.setter_popLast (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)) ;
        }
        GGS_string var_node_1998 = GGS_string ("  ").add_operation (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GGS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)) ;
        GGS_classKind var_entityKind_2139 ;
        GGS_propertyMap var_propertyMap_2169 ;
        GGS_actionMap joker_2182_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_2182_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_1978.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 49)), var_entityKind_2139, var_propertyMap_2169, joker_2182_2, joker_2182_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)) ;
        GGS_string var_superEntityName_2239 ;
        GGS_bool joker_2256_3 ; // Joker input parameter
        GGS_bool joker_2256_2 ; // Joker input parameter
        GGS_bool joker_2256_1 ; // Joker input parameter
        var_entityKind_2139.method_extractEntity (var_superEntityName_2239, joker_2256_3, joker_2256_2, joker_2256_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 50)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_2239.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_1689.getter_hasKey (var_superEntityName_2239 COMMA_SOURCE_FILE ("graphviz.ggs", 52)).operator_not (SOURCE_FILE ("graphviz.ggs", 52)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                var_reachableEntityNameSet_1689.setter_insert (var_superEntityName_2239, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 53)) ;
                }
                {
                var_exploreArray_1751.setter_append (var_superEntityName_2239, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 54)) ;
                }
              }
            }
            {
            var_arrowList_1843.setter_append (GGS_string ("  ").add_operation (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (var_superEntityName_2239, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GGS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)) ;
            }
          }
        }
        cEnumerator_propertyMap enumerator_2643 (var_propertyMap_2169, EnumerationOrder::up) ;
        while (enumerator_2643.hasCurrentObject ()) {
          switch (enumerator_2643.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_2711_type_0 ;
              GGS_propertyAccessibility extractedValue_2717_accessibility_1 ;
              enumerator_2643.current_mKind (HERE).getAssociatedValuesFor_property (extractedValue_2711_type_0, extractedValue_2717_accessibility_1) ;
              switch (extractedValue_2717_accessibility_1.enumValue ()) {
              case GGS_propertyAccessibility::Enumeration::invalid:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_stored:
                {
                  var_node_1998.plusAssign_operation(GGS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2711_type_0, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 63)) ;
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
              GGS_lstring extractedValue_3014_typeName_0 ;
              GGS_propertyAccessibility extractedValue_3047_accessibility_1 ;
              GGS_bool extractedValue_3062__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_3065_optionKind_3 ;
              enumerator_2643.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_3014_typeName_0, extractedValue_3047_accessibility_1, extractedValue_3062__2, extractedValue_3065_optionKind_3) ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = extractedValue_3047_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 70)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  var_node_1998.plusAssign_operation(GGS_string ("|<").add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GGS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GGS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 71)) ;
                  switch (extractedValue_3065_optionKind_3.enumValue ()) {
                  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
                    {
                      enumGalgasBool test_7 = kBoolTrue ;
                      if (kBoolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_3014_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 74)).operator_not (SOURCE_FILE ("graphviz.ggs", 74)).boolEnum () ;
                        if (kBoolTrue == test_7) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 75)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 76)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1843.setter_append (GGS_string ("  ").add_operation (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
                    {
                      GGS_lstring extractedValue_3604_oppositeName_0 ;
                      extractedValue_3065_optionKind_3.getAssociatedValuesFor_hasOpposite (extractedValue_3604_oppositeName_0) ;
                      enumGalgasBool test_8 = kBoolTrue ;
                      if (kBoolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_3014_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 81)).operator_not (SOURCE_FILE ("graphviz.ggs", 81)).boolEnum () ;
                        if (kBoolTrue == test_8) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 82)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 83)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1843.setter_append (GGS_string ("  ").add_operation (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (extractedValue_3604_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
                    {
                      GGS_lstring extractedValue_4007__0 ;
                      extractedValue_3065_optionKind_3.getAssociatedValuesFor_hasDependance (extractedValue_4007__0) ;
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_3014_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 88)).operator_not (SOURCE_FILE ("graphviz.ggs", 88)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 89)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 90)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1843.setter_append (GGS_string ("  ").add_operation (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (extractedValue_3014_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)) ;
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
              GGS_lstring extractedValue_4398_typeName_0 ;
              GGS_propertyAccessibility extractedValue_4431_accessibility_1 ;
              GGS_bool extractedValue_4446__2 ;
              GGS_toOneOppositeRelationship extractedValue_4449_opposite_3 ;
              GGS_bool extractedValue_4459__4 ;
              enumerator_2643.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_4398_typeName_0, extractedValue_4431_accessibility_1, extractedValue_4446__2, extractedValue_4449_opposite_3, extractedValue_4459__4) ;
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                test_10 = extractedValue_4431_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 97)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_node_1998.plusAssign_operation(GGS_string ("|<").add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (extractedValue_4398_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GGS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 98)) ;
                  switch (extractedValue_4449_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_4398_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 101)).operator_not (SOURCE_FILE ("graphviz.ggs", 101)).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_4398_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 102)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_4398_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 103)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1843.setter_append (GGS_string ("  ").add_operation (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (extractedValue_4398_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (extractedValue_4398_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)) ;
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_5073_oppositeName_0 ;
                      extractedValue_4449_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_5073_oppositeName_0) ;
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_4398_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 109)).operator_not (SOURCE_FILE ("graphviz.ggs", 109)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_4398_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 110)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_4398_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 111)) ;
                          }
                        }
                      }
                      enumGalgasBool test_13 = kBoolTrue ;
                      if (kBoolTrue == test_13) {
                        test_13 = GGS_bool (ComparisonKind::greaterThan, enumerator_2643.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5073_oppositeName_0.readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_13) {
                          {
                          var_arrowList_1843.setter_append (GGS_string ("  ").add_operation (var_entityName_1978, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (enumerator_2643.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (extractedValue_4398_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (extractedValue_5073_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)) ;
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
          enumerator_2643.gotoNextObject () ;
        }
        var_node_1998.plusAssign_operation(GGS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 121)) ;
        {
        var_nodeList_1811.setter_append (var_node_1998, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 122)) ;
        }
      }
    }
  }
  GGS_string var_s_5658 = GGS_string ("digraph G {\n") ;
  var_s_5658.plusAssign_operation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 126)) ;
  var_s_5658.plusAssign_operation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 127)) ;
  cEnumerator_stringlist enumerator_5779 (var_nodeList_1811, EnumerationOrder::up) ;
  while (enumerator_5779.hasCurrentObject ()) {
    var_s_5658.plusAssign_operation(enumerator_5779.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 129)) ;
    enumerator_5779.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_5836 (var_arrowList_1843, EnumerationOrder::up) ;
  while (enumerator_5836.hasCurrentObject ()) {
    var_s_5658.plusAssign_operation(enumerator_5836.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 132)) ;
    enumerator_5836.gotoNextObject () ;
  }
  var_s_5658.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 134)) ;
  GGS_string var_filePath_5908 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)) ;
  GGS_string var_temp_5994 = var_filePath_5908.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 136)) ;
  var_temp_5994.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 136)) ;
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
  GGS_stringset var_reachableEntityNameSet_6737 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  temp_1.enterElement (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  GGS_stringlist var_exploreArray_6799 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 153)) ;
  GGS_stringlist var_nodeList_6859 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 154)) ;
  GGS_stringlist var_arrowList_6891 = temp_3 ;
  GGS_entityStrongReferenceGraph var_entityStrongReferenceGraph_6940 = GGS_entityStrongReferenceGraph::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).isValid ()) {
    uint32_t variant_6977 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).uintValue () ;
    bool loop_6977 = true ;
    while (loop_6977) {
      loop_6977 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6799.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_6977) {
        loop_6977 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6799.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_6977 && (0 == variant_6977)) {
        loop_6977 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 156)) ;
      }
      if (loop_6977) {
        variant_6977 -- ;
        GGS_string var_entityName_7095 ;
        {
        var_exploreArray_6799.setter_popLast (var_entityName_7095, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 157)) ;
        }
        {
        var_nodeList_6859.setter_append (var_entityName_7095, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 158)) ;
        }
        {
        var_entityStrongReferenceGraph_6940.setter_addNode (GGS_lstring::init_21__21_ (var_entityName_7095, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 159)), inCompiler COMMA_HERE), var_entityName_7095, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 159)) ;
        }
        GGS_classKind var_entityKind_7295 ;
        GGS_propertyMap var_propertyMap_7325 ;
        GGS_actionMap joker_7338_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_7338_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7095.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 160)), var_entityKind_7295, var_propertyMap_7325, joker_7338_2, joker_7338_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 160)) ;
        GGS_string var_superEntityName_7395 ;
        GGS_bool joker_7412_3 ; // Joker input parameter
        GGS_bool joker_7412_2 ; // Joker input parameter
        GGS_bool joker_7412_1 ; // Joker input parameter
        var_entityKind_7295.method_extractEntity (var_superEntityName_7395, joker_7412_3, joker_7412_2, joker_7412_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 161)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_7395.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_6737.getter_hasKey (var_superEntityName_7395 COMMA_SOURCE_FILE ("graphviz.ggs", 163)).operator_not (SOURCE_FILE ("graphviz.ggs", 163)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                var_reachableEntityNameSet_6737.setter_insert (var_superEntityName_7395, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 164)) ;
                }
                {
                var_exploreArray_6799.setter_append (var_superEntityName_7395, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 165)) ;
                }
              }
            }
            {
            var_arrowList_6891.setter_append (var_superEntityName_7395.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (var_entityName_7095, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (GGS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)) ;
            }
            {
            var_entityStrongReferenceGraph_6940.setter_addEdge (GGS_lstring::init_21__21_ (var_superEntityName_7395, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (var_entityName_7095, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 168)) ;
            }
          }
        }
        cEnumerator_propertyMap enumerator_7881 (var_propertyMap_7325, EnumerationOrder::up) ;
        while (enumerator_7881.hasCurrentObject ()) {
          switch (enumerator_7881.current_mKind (HERE).enumValue ()) {
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
              GGS_lstring extractedValue_8055_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8088_accessibility_1 ;
              GGS_bool extractedValue_8104__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_8104__3 ;
              enumerator_7881.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_8055_typeName_0, extractedValue_8088_accessibility_1, extractedValue_8104__2, extractedValue_8104__3) ;
              {
              var_arrowList_6891.setter_append (var_entityName_7095.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (extractedValue_8055_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)) ;
              }
              {
              var_entityStrongReferenceGraph_6940.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7095, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8055_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 177)) ;
              }
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = extractedValue_8088_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 178)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = var_reachableEntityNameSet_6737.getter_hasKey (extractedValue_8055_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 179)).operator_not (SOURCE_FILE ("graphviz.ggs", 179)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      {
                      var_reachableEntityNameSet_6737.setter_insert (extractedValue_8055_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 180)) ;
                      }
                      {
                      var_exploreArray_6799.setter_append (extractedValue_8055_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 181)) ;
                      }
                    }
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_8579_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8612_accessibility_1 ;
              GGS_bool extractedValue_8627__2 ;
              GGS_toOneOppositeRelationship extractedValue_8630_opposite_3 ;
              GGS_bool extractedValue_8640_isWeak_4 ;
              enumerator_7881.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_8579_typeName_0, extractedValue_8612_accessibility_1, extractedValue_8627__2, extractedValue_8630_opposite_3, extractedValue_8640_isWeak_4) ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = extractedValue_8640_isWeak_4.operator_not (SOURCE_FILE ("graphviz.ggs", 185)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  {
                  var_arrowList_6891.setter_append (var_entityName_7095.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (extractedValue_8579_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)) ;
                  }
                  {
                  var_entityStrongReferenceGraph_6940.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7095, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8579_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 187)) ;
                  }
                }
              }
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = extractedValue_8612_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 189)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  switch (extractedValue_8630_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      enumGalgasBool test_10 = kBoolTrue ;
                      if (kBoolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_6737.getter_hasKey (extractedValue_8579_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 192)).operator_not (SOURCE_FILE ("graphviz.ggs", 192)).boolEnum () ;
                        if (kBoolTrue == test_10) {
                          {
                          var_reachableEntityNameSet_6737.setter_insert (extractedValue_8579_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 193)) ;
                          }
                          {
                          var_exploreArray_6799.setter_append (extractedValue_8579_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 194)) ;
                          }
                        }
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_9264__0 ;
                      extractedValue_8630_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_9264__0) ;
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_6737.getter_hasKey (extractedValue_8579_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 198)).operator_not (SOURCE_FILE ("graphviz.ggs", 198)).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_6737.setter_insert (extractedValue_8579_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 199)) ;
                          }
                          {
                          var_exploreArray_6799.setter_append (extractedValue_8579_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 200)) ;
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
          enumerator_7881.gotoNextObject () ;
        }
      }
    }
  }
  GGS_string var_s_9526 = GGS_string ("digraph G {\n") ;
  var_s_9526.plusAssign_operation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 209)) ;
  var_s_9526.plusAssign_operation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 210)) ;
  cEnumerator_stringlist enumerator_9647 (var_nodeList_6859, EnumerationOrder::up) ;
  while (enumerator_9647.hasCurrentObject ()) {
    var_s_9526.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_9647.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 212)) ;
    enumerator_9647.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_9711 (var_arrowList_6891, EnumerationOrder::up) ;
  while (enumerator_9711.hasCurrentObject ()) {
    var_s_9526.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_9711.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 215)) ;
    enumerator_9711.gotoNextObject () ;
  }
  var_s_9526.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 217)) ;
  GGS_string var_filePath_9790 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)) ;
  GGS_string var_temp_9877 = var_filePath_9790.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 219)) ;
  var_temp_9877.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 219)) ;
  GGS_bool joker_9999 ; // Joker input parameter
  var_s_9526.method_writeToFileWhenDifferentContents (var_filePath_9790, joker_9999, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 220)) ;
  var_filePath_9790 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)) ;
  GGS_string var_temp_32__10113 = var_entityStrongReferenceGraph_6940.getter_graphviz (SOURCE_FILE ("graphviz.ggs", 223)) ;
  GGS_bool joker_10209 ; // Joker input parameter
  var_temp_32__10113.method_writeToFileWhenDifferentContents (var_filePath_9790, joker_10209, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 223)) ;
  GGS_stringlist var_undefinedNodeList_10251 = var_entityStrongReferenceGraph_6940.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.ggs", 225)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_10251.getter_count (SOURCE_FILE ("graphviz.ggs", 226)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GGS_string var_s_10365 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)).add_operation (GGS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)) ;
      cEnumerator_stringlist enumerator_10456 (var_undefinedNodeList_10251, EnumerationOrder::up) ;
      while (enumerator_10456.hasCurrentObject ()) {
        var_s_10365.plusAssign_operation(GGS_string ("\n -- ").add_operation (enumerator_10456.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 229)) ;
        enumerator_10456.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 231)), var_s_10365, fixItArray13  COMMA_SOURCE_FILE ("graphviz.ggs", 231)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10251.getter_count (SOURCE_FILE ("graphviz.ggs", 234)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      GGS_lstringlist temp_15 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      temp_15.enterElement (GGS_lstringlist_2E_element::init_21_ (GGS_lstring::init_21__21_ (constinArgument_inRootEntityName, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 236)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GGS_stringset temp_16 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GGS_lstringlist var_accessibleNodeList_10622 = var_entityStrongReferenceGraph_6940.getter_accessibleNodesFrom (temp_15, temp_16, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 235)) ;
      GGS_stringset var_accessibleNodeSet_10755 = GGS_stringset::class_func_setWithLStringList (var_accessibleNodeList_10622  COMMA_SOURCE_FILE ("graphviz.ggs", 237)) ;
      cEnumerator_stringlist enumerator_10835 (var_nodeList_6859, EnumerationOrder::up) ;
      while (enumerator_10835.hasCurrentObject ()) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_accessibleNodeSet_10755.getter_hasKey (enumerator_10835.current_mValue (HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 239)).operator_not (SOURCE_FILE ("graphviz.ggs", 239)).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 240)), enumerator_10835.current_mValue (HERE).add_operation (GGS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)), fixItArray18  COMMA_SOURCE_FILE ("graphviz.ggs", 240)) ;
          }
        }
        enumerator_10835.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10251.getter_count (SOURCE_FILE ("graphviz.ggs", 245)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GGS_lstringlist var_unsortedNodeList_11171 ;
      GGS_stringlist joker_11149 ; // Joker input parameter
      var_entityStrongReferenceGraph_6940.method_circularities (joker_11149, var_unsortedNodeList_11171 COMMA_SOURCE_FILE ("graphviz.ggs", 246)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::greaterThan, var_unsortedNodeList_11171.getter_count (SOURCE_FILE ("graphviz.ggs", 247)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_20) {
          GGS_string var_s_11238 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (GGS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (var_unsortedNodeList_11171.getter_count (SOURCE_FILE ("graphviz.ggs", 248)).getter_string (SOURCE_FILE ("graphviz.ggs", 248)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)) ;
          var_s_11238.plusAssign_operation(GGS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 249)) ;
          cEnumerator_lstringlist enumerator_11381 (var_unsortedNodeList_11171, EnumerationOrder::up) ;
          while (enumerator_11381.hasCurrentObject ()) {
            var_s_11238.plusAssign_operation(GGS_string ("\n -- ").add_operation (enumerator_11381.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 251)) ;
            enumerator_11381.gotoNextObject () ;
          }
          TC_Array <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 253)), var_s_11238, fixItArray21  COMMA_SOURCE_FILE ("graphviz.ggs", 253)) ;
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
    GGS_bool var_hasRunAction_8566 ;
    GGS_bool var_handlesTableValueBinding_8591 ;
    GGS_bool var_hasEnabled_8628 ;
    GGS_bool var_hasHidden_8651 ;
    GGS_bool var_handlesGraphicControllerBinding_8673 ;
    const GGS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GGS_lstring joker_8551 ; // Joker input parameter
    GGS_bool joker_8712_3 ; // Joker input parameter
    GGS_autoLayoutClassParameterList joker_8712_2 ; // Joker input parameter
    GGS_astAutoLayoutViewFunctionMap joker_8712_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8551, var_hasRunAction_8566, var_handlesTableValueBinding_8591, var_hasEnabled_8628, var_hasHidden_8651, var_handlesGraphicControllerBinding_8673, joker_8712_3, joker_8712_2, joker_8712_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 250)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GGS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8566 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 260)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GGS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 261)) ;
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      const GGS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8591 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 263)).boolEnum () ;
      if (kBoolTrue == test_16) {
        const GGS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 264)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GGS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8628 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 266)).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GGS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 267)) ;
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      const GGS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8651 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 269)).boolEnum () ;
      if (kBoolTrue == test_24) {
        const GGS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        TC_Array <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 270)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      const GGS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8673 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 272)).boolEnum () ;
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
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8566 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 279)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8591 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 280)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8628 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 281)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8651 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 282)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8673 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 283)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 276)) ;
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
  cEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3670 (constinArgument_inBindingSpecificationListMap, EnumerationOrder::up) ;
  while (enumerator_3670.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 98)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3771 = temp_0 ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_3837 (enumerator_3670.current_mOutletClassBindingSpecificationModelList (HERE), EnumerationOrder::up) ;
    while (enumerator_3837.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_3837.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GGS_enumConstantMap temp_2 = GGS_enumConstantMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)) ;
          GGS_enumFuncMap temp_3 = GGS_enumFuncMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)) ;
          var_outletBindingSpecificationModelList_3771.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), temp_2, temp_3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)), enumerator_3837.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        GGS_classKind var_classKind_4250 ;
        GGS_propertyMap joker_4261_3 ; // Joker input parameter
        GGS_actionMap joker_4261_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_4261_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_3837.current_mModelTypeName (HERE), var_classKind_4250, joker_4261_3, joker_4261_2, joker_4261_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 106)) ;
        GGS_typeKind var_typeKind_4288 ;
        switch (var_classKind_4250.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3837.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 110)) ;
            var_typeKind_4288.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_4459_kind_0 ;
            var_classKind_4250.getAssociatedValuesFor_atomic (extractedValue_4459_kind_0) ;
            var_typeKind_4288 = extractedValue_4459_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_4516__0 ;
            var_classKind_4250.getAssociatedValuesFor_document (extractedValue_4516__0) ;
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_3837.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 114)) ;
            var_typeKind_4288.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_4628__0 ;
            GGS_bool extractedValue_4628__1 ;
            GGS_bool extractedValue_4628__2 ;
            GGS_bool extractedValue_4628__3 ;
            var_classKind_4250.getAssociatedValuesFor_entity (extractedValue_4628__0, extractedValue_4628__1, extractedValue_4628__2, extractedValue_4628__3) ;
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_3837.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 116)) ;
            var_typeKind_4288.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_3771.setter_append (var_typeKind_4288, enumerator_3837.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 118)) ;
        }
      }
      enumerator_3837.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_7 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 121)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_4890 = temp_7 ;
    cEnumerator_controllerBindingOptionList enumerator_4954 (enumerator_3670.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
    while (enumerator_4954.hasCurrentObject ()) {
      GGS_classKind var_classKind_5074 ;
      GGS_propertyMap joker_5085_3 ; // Joker input parameter
      GGS_actionMap joker_5085_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5085_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4954.current_mOptionTypeName (HERE), var_classKind_5074, joker_5085_3, joker_5085_2, joker_5085_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 123)) ;
      GGS_typeKind var_typeKind_5110 ;
      switch (var_classKind_5074.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_4954.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 127)) ;
          var_typeKind_5110.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_5274_kind_0 ;
          var_classKind_5074.getAssociatedValuesFor_atomic (extractedValue_5274_kind_0) ;
          var_typeKind_5110 = extractedValue_5274_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_5327__0 ;
          var_classKind_5074.getAssociatedValuesFor_document (extractedValue_5327__0) ;
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_4954.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 131)) ;
          var_typeKind_5110.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_5436__0 ;
          GGS_bool extractedValue_5436__1 ;
          GGS_bool extractedValue_5436__2 ;
          GGS_bool extractedValue_5436__3 ;
          var_classKind_5074.getAssociatedValuesFor_entity (extractedValue_5436__0, extractedValue_5436__1, extractedValue_5436__2, extractedValue_5436__3) ;
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_4954.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 133)) ;
          var_typeKind_5110.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_4890.setter_append (var_typeKind_5110, enumerator_4954.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 135)) ;
      }
      enumerator_4954.gotoNextObject () ;
    }
    GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_5695 ;
    GGS_lstring var_outletSuperClassName_5723 ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3670.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 140)).boolEnum () ;
      if (kBoolTrue == test_11) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3670.current_mOutletClassName (HERE), var_outletSuperClassName_5723, var_bindingMap_5695, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 141)) ;
        }
      }
    }
    if (kBoolFalse == test_11) {
      GGS_autoLayoutViewBindingSpecificationMap temp_12 = GGS_autoLayoutViewBindingSpecificationMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 143)) ;
      var_bindingMap_5695 = temp_12 ;
      GGS_bool joker_6099_8 ; // Joker input parameter
      GGS_bool joker_6099_7 ; // Joker input parameter
      GGS_bool joker_6099_6 ; // Joker input parameter
      GGS_bool joker_6099_5 ; // Joker input parameter
      GGS_bool joker_6099_4 ; // Joker input parameter
      GGS_bool joker_6099_3 ; // Joker input parameter
      GGS_autoLayoutClassParameterList joker_6099_2 ; // Joker input parameter
      GGS_astAutoLayoutViewFunctionMap joker_6099_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3670.current_mOutletClassName (HERE), var_outletSuperClassName_5723, joker_6099_8, joker_6099_7, joker_6099_6, joker_6099_5, joker_6099_4, joker_6099_3, joker_6099_2, joker_6099_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 144)) ;
    }
    {
    var_bindingMap_5695.setter_insertKey (enumerator_3670.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3771, var_controllerBindingOptionDecoratedList_4890, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 146)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3670.current_mOutletClassName (HERE), var_outletSuperClassName_5723, var_bindingMap_5695, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 151)) ;
    }
    enumerator_3670.gotoNextObject () ;
  }
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
//Overriding extension method '@astGutterInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astGutterInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
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
  const GGS_astGutterInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutGutterInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
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
  GGS_actionMap var_preferencesActionMap_32223 ;
  GGS_classKind joker_32213_2 ; // Joker input parameter
  GGS_propertyMap joker_32213_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_32245 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 786)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 786)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 786)), joker_32213_2, joker_32213_1, var_preferencesActionMap_32223, joker_32245, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 786)) ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_32762 ;
  const GGS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_32223, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_32762, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 787)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_1 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 804)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_32826 = temp_1 ;
  const GGS_astComputedHorizontalViewDeclaration temp_2 = this ;
  cEnumerator_astViewInstructionList enumerator_32854 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_32854.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_33282 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_32854.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_33282, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 806)) ;
    {
    var_instructionList_32826.setter_append (var_generatedInstruction_33282, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 821)) ;
    }
    enumerator_32854.gotoNextObject () ;
  }
  const GGS_astComputedHorizontalViewDeclaration temp_3 = this ;
  outArgument_outGeneration = GGS_computedHorizontalViewGeneration::init_21__21__21_ (var_funcCallList_32762, var_instructionList_32826, temp_3.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
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
  GGS_actionMap var_preferencesActionMap_34782 ;
  GGS_classKind joker_34772_2 ; // Joker input parameter
  GGS_propertyMap joker_34772_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_34804 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 843)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 843)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 843)), joker_34772_2, joker_34772_1, var_preferencesActionMap_34782, joker_34804, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 843)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 844)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_34855 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_35389 ;
  const GGS_astComputedVerticalViewDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_34782, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_35389, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 845)) ;
  const GGS_astComputedVerticalViewDeclaration temp_2 = this ;
  cEnumerator_astViewInstructionList enumerator_35413 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_35413.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_35840 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_35413.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_35840, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 863)) ;
    {
    var_instructionList_34855.setter_append (var_generatedInstruction_35840, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 878)) ;
    }
    enumerator_35413.gotoNextObject () ;
  }
  const GGS_astComputedVerticalViewDeclaration temp_3 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_4 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_5 = this ;
  outArgument_outGeneration = GGS_computedVerticalViewGeneration::init_21__21__21__21__21_ (temp_3.readProperty_mHasVerticalScroller (), temp_4.readProperty_mConfiguratorName (), var_funcCallList_35389, var_instructionList_34855, temp_5.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
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
  GGS_autoLayoutClassParameterList var_formalParameterList_42448 ;
  GGS_astAutoLayoutViewFunctionMap var_functionMap_42479 ;
  const GGS_astComputedViewInstruction temp_0 = this ;
  GGS_lstring joker_42433_7 ; // Joker input parameter
  GGS_bool joker_42433_6 ; // Joker input parameter
  GGS_bool joker_42433_5 ; // Joker input parameter
  GGS_bool joker_42433_4 ; // Joker input parameter
  GGS_bool joker_42433_3 ; // Joker input parameter
  GGS_bool joker_42433_2 ; // Joker input parameter
  GGS_bool joker_42433_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_42433_7, joker_42433_6, joker_42433_5, joker_42433_4, joker_42433_3, joker_42433_2, joker_42433_1, var_formalParameterList_42448, var_functionMap_42479, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 979)) ;
  GGS_actionMap var_preferencesActionMap_42567 ;
  GGS_classKind joker_42557_2 ; // Joker input parameter
  GGS_propertyMap joker_42557_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_42589 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 985)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 985)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 985)), joker_42557_2, joker_42557_1, var_preferencesActionMap_42567, joker_42589, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 985)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList temp_1 = GGS_autoLayoutViewInstructionGenerationParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 986)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList var_parameterList_42649 = temp_1 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_astComputedViewInstruction temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, var_formalParameterList_42448.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 987)).objectCompare (temp_3.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 987)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_astComputedViewInstruction temp_4 = this ;
      const GGS_astComputedViewInstruction temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_42448.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 989)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 989)).add_operation (GGS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 989)).add_operation (temp_5.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 989)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 989)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 989)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 989)), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 988)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GGS_astComputedViewInstruction temp_7 = this ;
    cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_42913 (temp_7.readProperty_mParameterList (), EnumerationOrder::up) ;
    cEnumerator_autoLayoutClassParameterList enumerator_42957 (var_formalParameterList_42448, EnumerationOrder::up) ;
    while (enumerator_42913.hasCurrentObject () && enumerator_42957.hasCurrentObject ()) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_43008 = enumerator_42957.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 992)).unwrappedValue () ;
        if (!enumerator_42957.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 992)).isValuated ()) {
          test_8 = kBoolFalse ;
        }
        if (kBoolTrue == test_8) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_43053 = enumerator_42913.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 992)).unwrappedValue () ;
          if (!enumerator_42913.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 992)).isValuated ()) {
            test_8 = kBoolFalse ;
          }
          if (kBoolTrue == test_8) {
            GGS_classKind var_typeKind_43148 ;
            GGS_propertyMap joker_43158_3 ; // Joker input parameter
            GGS_actionMap joker_43158_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_43158_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_formalTypeEnum_43008.readProperty_name (), var_typeKind_43148, joker_43158_3, joker_43158_2, joker_43158_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 993)) ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              const GGS_classKind_2E_atomic var_atomicTypeKind_43178 = var_typeKind_43148.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 994)).unwrappedValue () ;
              if (!var_typeKind_43148.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 994)).isValuated ()) {
                test_9 = kBoolFalse ;
              }
              if (kBoolTrue == test_9) {
                const GGS_typeKind_2E_enumType var_enumKind_43219 = var_atomicTypeKind_43178.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 994)).unwrappedValue () ;
                if (!var_atomicTypeKind_43178.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 994)).isValuated ()) {
                  test_9 = kBoolFalse ;
                }
                if (kBoolTrue == test_9) {
                  GGS_uint joker_43330 ; // Joker input parameter
                  var_enumKind_43219.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_43053.readProperty_name (), joker_43330, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 995)) ;
                }
              }
            }
            if (kBoolFalse == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (var_formalTypeEnum_43008.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 997)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_8) {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_42913.current_mParameterType (HERE).objectCompare (enumerator_42957.current_mParameterType (HERE))).boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_42913.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_42957.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)).add_operation (extensionGetter_string (enumerator_42913.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)) ;
          }
        }
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_42913.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_42957.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_42913.current_mParameterName (HERE).readProperty_location (), GGS_string ("the parameter name should be '").add_operation (enumerator_42957.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1003)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1003)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1003)) ;
        }
      }
      switch (enumerator_42913.current_mParameter (HERE).enumValue ()) {
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::invalid:
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_viewFunc:
        {
          GGS_astAbstractViewInstructionDeclaration extractedValue_43748_instruction_0 ;
          enumerator_42913.current_mParameter (HERE).getAssociatedValuesFor_viewFunc (extractedValue_43748_instruction_0) ;
          GGS_abstractViewInstructionGeneration var_viewInstruction_44270 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_43748_instruction_0.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_44270, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1007)) ;
          {
          var_parameterList_42649.setter_append (enumerator_42913.current_mParameterName (HERE).readProperty_string (), GGS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1022)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1022)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1022)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1022)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1022)) ;
          }
          {
          ioArgument_ioImplicitViewFunctionGenerationList.setter_append (var_viewInstruction_44270, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1023)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_entity:
        {
          GGS_lstring extractedValue_44513_entityName_0 ;
          enumerator_42913.current_mParameter (HERE).getAssociatedValuesFor_entity (extractedValue_44513_entityName_0) ;
          GGS_classKind var_classKind_44574 ;
          GGS_propertyMap joker_44585_3 ; // Joker input parameter
          GGS_actionMap joker_44585_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_44585_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_44513_entityName_0, var_classKind_44574, joker_44585_3, joker_44585_2, joker_44585_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1025)) ;
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            test_15 = var_classKind_44574.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 1026)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1026)).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_44513_entityName_0.readProperty_location (), GGS_string ("an entity is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1027)) ;
            }
          }
          {
          var_parameterList_42649.setter_append (enumerator_42913.current_mParameterName (HERE).readProperty_string (), extractedValue_44513_entityName_0.readProperty_string ().add_operation (GGS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1029)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1029)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_string:
        {
          GGS_string extractedValue_44784_stringValue_0 ;
          enumerator_42913.current_mParameter (HERE).getAssociatedValuesFor_string (extractedValue_44784_stringValue_0) ;
          {
          var_parameterList_42649.setter_append (enumerator_42913.current_mParameterName (HERE).readProperty_string (), extractedValue_44784_stringValue_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1031)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_menuItem:
        {
          GGS_string extractedValue_44871_title_0 ;
          GGS_runActionDescriptor extractedValue_44878_run_1 ;
          GGS_multipleBindingDescriptor extractedValue_44883_enabledBinding_2 ;
          enumerator_42913.current_mParameter (HERE).getAssociatedValuesFor_menuItem (extractedValue_44871_title_0, extractedValue_44878_run_1, extractedValue_44883_enabledBinding_2) ;
          GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_45217 ;
          {
          routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (extractedValue_44878_run_1, GGS_bool (true), constinArgument_inPreferences, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1037)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_preferencesActionMap_42567, var_runBindingGeneration_45217, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1033)) ;
          }
          GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_45553 ;
          {
          routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (extractedValue_44883_enabledBinding_2, GGS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_45553, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1044)) ;
          }
          GGS_string var_s_45600 = GGS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_44871_title_0.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 1054)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1054)) ;
          switch (var_runBindingGeneration_45217.enumValue ()) {
          case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45600.plusAssign_operation(GGS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1057)) ;
            }
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
            {
              GGS_string extractedValue_45792_targetName_0 ;
              GGS_string extractedValue_45804_actionName_1 ;
              GGS_string extractedValue_45816_runTargetName_2 ;
              var_runBindingGeneration_45217.getAssociatedValuesFor_run (extractedValue_45792_targetName_0, extractedValue_45804_actionName_1, extractedValue_45816_runTargetName_2) ;
              var_s_45600.plusAssign_operation(GGS_string (", target: ").add_operation (extractedValue_45792_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (GGS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (extractedValue_45816_runTargetName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (extractedValue_45804_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)).add_operation (GGS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_45553.enumValue ()) {
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45600.plusAssign_operation(GGS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1063)) ;
            }
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
            {
              GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_46089_binding_0 ;
              var_enabledBindingGeneration_45553.getAssociatedValuesFor_enabled (extractedValue_46089_binding_0) ;
              var_s_45600.plusAssign_operation(GGS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_46089_binding_0.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1065)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1065)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1065)) ;
            }
            break ;
          }
          var_s_45600.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1067)) ;
          {
          var_parameterList_42649.setter_append (enumerator_42913.current_mParameterName (HERE).readProperty_string (), var_s_45600, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1068)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_enumFunc:
        {
          GGS_lstring extractedValue_46253_enumTypeName_0 ;
          GGS_lstring extractedValue_46267_funcName_1 ;
          enumerator_42913.current_mParameter (HERE).getAssociatedValuesFor_enumFunc (extractedValue_46253_enumTypeName_0, extractedValue_46267_funcName_1) ;
          GGS_classKind var_type_46345 ;
          GGS_propertyMap joker_46351_3 ; // Joker input parameter
          GGS_actionMap joker_46351_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_46351_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_46253_enumTypeName_0, var_type_46345, joker_46351_3, joker_46351_2, joker_46351_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1070)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = var_type_46345.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 1071)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1071)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_46253_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1072)) ;
            }
          }
          if (kBoolFalse == test_17) {
            GGS_typeKind var_typeKind_46509 ;
            var_type_46345.method_extractAtomic (var_typeKind_46509, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1074)) ;
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = var_typeKind_46509.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1075)).boolEnum () ;
              if (kBoolTrue == test_19) {
                GGS_enumFuncMap var_funcMap_46613 ;
                GGS_string joker_46595_2 ; // Joker input parameter
                GGS_enumConstantMap joker_46595_1 ; // Joker input parameter
                var_typeKind_46509.method_extractEnumType (joker_46595_2, joker_46595_1, var_funcMap_46613, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1076)) ;
                GGS_enumFunAssociationSortedList joker_46663 ; // Joker input parameter
                var_funcMap_46613.method_searchKey (extractedValue_46267_funcName_1, joker_46663, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1077)) ;
              }
            }
            if (kBoolFalse == test_19) {
              TC_Array <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_46253_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1079)) ;
            }
          }
          {
          var_parameterList_42649.setter_append (enumerator_42913.current_mParameterName (HERE).readProperty_string (), extractedValue_46253_enumTypeName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1082)).add_operation (extractedValue_46267_funcName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1082)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1082)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1082)) ;
          }
        }
        break ;
      }
      enumerator_42913.gotoNextObject () ;
      enumerator_42957.gotoNextObject () ;
    }
  }
  GGS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_47417 ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_47498 ;
  GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_47573 ;
  GGS_string var_inTableViewBindingGeneration_47612 ;
  GGS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_47701 ;
  {
  const GGS_astComputedViewInstruction temp_21 = this ;
  const GGS_astComputedViewInstruction temp_22 = this ;
  const GGS_astComputedViewInstruction temp_23 = this ;
  const GGS_astComputedViewInstruction temp_24 = this ;
  const GGS_astComputedViewInstruction temp_25 = this ;
  const GGS_astComputedViewInstruction temp_26 = this ;
  const GGS_astComputedViewInstruction temp_27 = this ;
  routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_preferencesActionMap_42567, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_21.readProperty_mAutoLayoutViewClassName (), temp_22.readProperty_mTableValueBinding (), temp_23.readProperty_mRunActionDescriptor (), temp_24.readProperty_mEnabledBindingDescriptor (), temp_25.readProperty_mHiddenBindingDescriptor (), temp_26.readProperty_mGraphicController (), temp_27.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_47417, var_multipleBindingGenerationList_47498, var_runBindingGeneration_47573, var_inTableViewBindingGeneration_47612, var_ebViewGraphicControllerBindingGeneration_47701, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1087)) ;
  }
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_48224 ;
  const GGS_astComputedViewInstruction temp_28 = this ;
  extensionMethod_checkViewFunctionCallList (temp_28.readProperty_mFunctionCallList (), var_functionMap_42479, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_42567, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_48224, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1112)) ;
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    const GGS_astComputedViewInstruction temp_30 = this ;
    test_29 = GGS_bool (ComparisonKind::notEqual, temp_30.readProperty_mOutletName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_29) {
      {
      const GGS_astComputedViewInstruction temp_31 = this ;
      const GGS_astComputedViewInstruction temp_32 = this ;
      const GGS_astComputedViewInstruction temp_33 = this ;
      ioArgument_ioOutletMap.setter_insertKey (temp_31.readProperty_mOutletName (), temp_32.readProperty_mAutoLayoutViewClassName ().readProperty_string (), temp_33.readProperty_mOutletIsArray (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1131)) ;
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
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_36.readProperty_mConfiguratorName (), temp_37.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1135)) ;
      }
    }
  }
  const GGS_astComputedViewInstruction temp_38 = this ;
  const GGS_astComputedViewInstruction temp_39 = this ;
  const GGS_astComputedViewInstruction temp_40 = this ;
  const GGS_astComputedViewInstruction temp_41 = this ;
  outArgument_outInstruction = GGS_autoLayoutComputedViewInstructionGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_38.readProperty_mAutoLayoutViewClassName (), var_parameterList_42649, var_funcCallList_48224, var_regularBindingsGenerationList_47417, var_multipleBindingGenerationList_47498, var_runBindingGeneration_47573, var_inTableViewBindingGeneration_47612, var_ebViewGraphicControllerBindingGeneration_47701, temp_39.readProperty_mConfiguratorName ().readProperty_string (), temp_40.readProperty_mOutletName ().readProperty_string (), temp_41.readProperty_mOutletIsArray (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding???????????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_bool constinArgument_inPreferences,
                                                                                                                       const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                       const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                                       const GGS_actionMap constinArgument_inPreferencesActionMap,
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
  GGS_autoLayoutRegularBindingsGenerationList temp_0 = GGS_autoLayoutRegularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1178)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_autoLayoutMultipleBindingGenerationList temp_1 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1179)) ;
  outArgument_outMultipleBindingGenerationList = temp_1 ;
  outArgument_outTableViewBindingGeneration = GGS_string::makeEmptyString () ;
  GGS_bool var_handlesRunAction_50628 ;
  GGS_bool var_handlesTableViewBinding_50661 ;
  GGS_bool var_handlesEnabledBinding_50701 ;
  GGS_bool var_handlesHiddenBinding_50739 ;
  GGS_bool var_handleGraphicControllerBinding_50776 ;
  GGS_lstring joker_50609 ; // Joker input parameter
  GGS_bool joker_50812_3 ; // Joker input parameter
  GGS_autoLayoutClassParameterList joker_50812_2 ; // Joker input parameter
  GGS_astAutoLayoutViewFunctionMap joker_50812_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_50609, var_handlesRunAction_50628, var_handlesTableViewBinding_50661, var_handlesEnabledBinding_50701, var_handlesHiddenBinding_50739, var_handleGraphicControllerBinding_50776, joker_50812_3, joker_50812_2, joker_50812_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1181)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1192)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GGS_graphicController::Enumeration::invalid:
    break ;
  case GGS_graphicController::Enumeration::enum_none:
    break ;
  case GGS_graphicController::Enumeration::enum_defined:
    {
      GGS_lstring extractedValue_50966_controllerName_0 ;
      GGS_lstring extractedValue_50991_propertyName_1 ;
      constinArgument_inGraphicController.getAssociatedValuesFor_defined (extractedValue_50966_controllerName_0, extractedValue_50991_propertyName_1) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_handleGraphicControllerBinding_50776.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1196)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1197)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1197)), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1197)) ;
        }
      }
      if (kBoolFalse == test_2) {
        GGS_propertyKind var_kind_51259 ;
        GGS_actionMap joker_51273_2 ; // Joker input parameter
        GGS_bool joker_51273_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_50966_controllerName_0, var_kind_51259, joker_51273_2, joker_51273_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1199)) ;
        switch (var_kind_51259.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_51326__0 ;
            GGS_propertyAccessibility extractedValue_51326__1 ;
            var_kind_51259.getAssociatedValuesFor_property (extractedValue_51326__0, extractedValue_51326__1) ;
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1206)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_51430__0 ;
            GGS_propertyAccessibility extractedValue_51430__1 ;
            GGS_bool extractedValue_51430__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_51430__3 ;
            var_kind_51259.getAssociatedValuesFor_toMany (extractedValue_51430__0, extractedValue_51430__1, extractedValue_51430__2, extractedValue_51430__3) ;
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1208)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_51533__0 ;
            GGS_propertyAccessibility extractedValue_51533__1 ;
            GGS_bool extractedValue_51533__2 ;
            GGS_toOneOppositeRelationship extractedValue_51533__3 ;
            GGS_bool extractedValue_51533__4 ;
            var_kind_51259.getAssociatedValuesFor_toOne (extractedValue_51533__0, extractedValue_51533__1, extractedValue_51533__2, extractedValue_51533__3, extractedValue_51533__4) ;
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1210)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_51645_entityName_0 ;
            GGS_bool extractedValue_51657_graphic_1 ;
            var_kind_51259.getAssociatedValuesFor_arrayController (extractedValue_51645_entityName_0, extractedValue_51657_graphic_1) ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, extractedValue_50991_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = extractedValue_51657_graphic_1.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1213)).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    TC_Array <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_51645_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1214)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1214)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1214)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_7) {
              GGS_propertyMap var_observablePropertyMap_51980 ;
              GGS_classKind joker_51959 ; // Joker input parameter
              GGS_actionMap joker_52015_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_52015_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_51645_entityName_0, joker_51959, var_observablePropertyMap_51980, joker_52015_2, joker_52015_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1217)) ;
              GGS_propertyKind var_propertyKind_52093 ;
              GGS_actionMap joker_52107_2 ; // Joker input parameter
              GGS_bool joker_52107_1 ; // Joker input parameter
              var_observablePropertyMap_51980.method_searchKey (extractedValue_50991_propertyName_1, var_propertyKind_52093, joker_52107_2, joker_52107_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1223)) ;
              switch (var_propertyKind_52093.enumValue ()) {
              case GGS_propertyKind::Enumeration::invalid:
                break ;
              case GGS_propertyKind::Enumeration::enum_property:
                {
                  GGS_typeKind extractedValue_52169__0 ;
                  GGS_propertyAccessibility extractedValue_52169__1 ;
                  var_propertyKind_52093.getAssociatedValuesFor_property (extractedValue_52169__0, extractedValue_52169__1) ;
                  TC_Array <FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1226)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toMany:
                {
                  GGS_lstring extractedValue_52278_kEntityName_0 ;
                  GGS_propertyAccessibility extractedValue_52291__1 ;
                  GGS_bool extractedValue_52294_isGraphic_2 ;
                  GGS_toManyRelationshipOptionAST extractedValue_52305__3 ;
                  var_propertyKind_52093.getAssociatedValuesFor_toMany (extractedValue_52278_kEntityName_0, extractedValue_52291__1, extractedValue_52294_isGraphic_2, extractedValue_52305__3) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = extractedValue_52294_isGraphic_2.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1228)).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      TC_Array <FixItDescription> fixItArray12 ;
                      inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_52278_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1229)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1229)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1229)) ;
                    }
                  }
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toOne:
                {
                  GGS_lstring extractedValue_52493__0 ;
                  GGS_propertyAccessibility extractedValue_52493__1 ;
                  GGS_bool extractedValue_52493__2 ;
                  GGS_toOneOppositeRelationship extractedValue_52493__3 ;
                  GGS_bool extractedValue_52493__4 ;
                  var_propertyKind_52093.getAssociatedValuesFor_toOne (extractedValue_52493__0, extractedValue_52493__1, extractedValue_52493__2, extractedValue_52493__3, extractedValue_52493__4) ;
                  TC_Array <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1232)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_arrayController:
                {
                  GGS_lstring extractedValue_52612__0 ;
                  GGS_bool extractedValue_52612__1 ;
                  var_propertyKind_52093.getAssociatedValuesFor_arrayController (extractedValue_52612__0, extractedValue_52612__1) ;
                  TC_Array <FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1234)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_selectionController:
                {
                  GGS_string extractedValue_52734__0 ;
                  var_propertyKind_52093.getAssociatedValuesFor_selectionController (extractedValue_52734__0) ;
                  TC_Array <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1236)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_52877__0 ;
            var_kind_51259.getAssociatedValuesFor_selectionController (extractedValue_52877__0) ;
            TC_Array <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_50966_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1240)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_binding (extractedValue_50966_controllerName_0.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1242)) ;
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
      GGS_lstring extractedValue_53211_controllerName_0 ;
      constinArgument_inTableValueBinding.getAssociatedValuesFor_tableValueBinding (extractedValue_53211_controllerName_0) ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_handlesTableViewBinding_50661.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1249)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1250)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1250)), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1250)) ;
        }
      }
      if (kBoolFalse == test_17) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_19) {
            GGS_propertyKind var_kind_53487 ;
            GGS_actionMap joker_53501_2 ; // Joker input parameter
            GGS_bool joker_53501_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_53211_controllerName_0, var_kind_53487, joker_53501_2, joker_53501_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1252)) ;
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = var_kind_53487.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1257)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1257)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_53211_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1258)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_53211_controllerName_0.readProperty_string () ;
          }
        }
        if (kBoolFalse == test_19) {
          GGS_propertyKind var_kind_53804 ;
          GGS_actionMap joker_53818_2 ; // Joker input parameter
          GGS_bool joker_53818_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_53211_controllerName_0, var_kind_53804, joker_53818_2, joker_53818_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1262)) ;
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = var_kind_53804.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1267)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1267)).boolEnum () ;
            if (kBoolTrue == test_22) {
              TC_Array <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (extractedValue_53211_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1268)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_53211_controllerName_0.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (constinArgument_inRunActionDescriptor, var_handlesRunAction_50628, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inPreferencesActionMap, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1274)) ;
  }
  GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_54608 ;
  {
  routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_50701, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_54608, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1286)) ;
  }
  switch (var_enabledBindingGeneration_54608.enumValue ()) {
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
    {
      GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_54701_binding_0 ;
      var_enabledBindingGeneration_54608.getAssociatedValuesFor_enabled (extractedValue_54701_binding_0) ;
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("enabled"), extractedValue_54701_binding_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1299)) ;
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
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_54912_expression_0 ;
      constinArgument_inHiddenBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_54912_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_55196 ;
      GGS_typeKind var_type_55235 ;
      GGS_location var_errorLocation_55262 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_54912_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_55196, var_type_55235, var_errorLocation_55262, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1305)) ;
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_type_55235.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1315)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1315)).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_55262, GGS_string ("expression is not boolean"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1316)) ;
        }
      }
      enumGalgasBool test_26 = kBoolTrue ;
      if (kBoolTrue == test_26) {
        test_26 = var_handlesHiddenBinding_50739.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1318)).boolEnum () ;
        if (kBoolTrue == test_26) {
          TC_Array <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (var_errorLocation_55262, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1319)) ;
        }
      }
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("hidden"), var_hiddenExpression_55196, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1321)) ;
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
  routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_28, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1327)) ;
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
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1354)) ;
    }
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_56689_expression_0 ;
      constinArgument_inEnabledBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_56689_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_56973 ;
      GGS_typeKind var_type_57012 ;
      GGS_location var_errorLocation_57039 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_56689_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_56973, var_type_57012, var_errorLocation_57039, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1356)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1366)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_57039, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1367)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_57012.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1369)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1369)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_57039, GGS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1370)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_enabled (var_enableExpression_56973  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1372)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding??handlesRunAction??????!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (const GGS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                              const GGS_bool constinArgument_inHandlesRunAction,
                                                                                              const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_lstring constinArgument_inTypeName,
                                                                                              const GGS_actionMap constinArgument_inActionMap,
                                                                                              const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                              const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                              const GGS_actionMap constinArgument_inPreferencesActionMap,
                                                                                              GGS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inRunActionDescriptor.enumValue ()) {
  case GGS_runActionDescriptor::Enumeration::invalid:
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_noAction:
    {
      outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1389)) ;
    }
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_action:
    {
      GGS_lstring extractedValue_58230_target_0 ;
      GGS_lstring extractedValue_58247_action_1 ;
      constinArgument_inRunActionDescriptor.getAssociatedValuesFor_action (extractedValue_58230_target_0, extractedValue_58247_action_1) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1391)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1392)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1392)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1392)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, extractedValue_58230_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_58247_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)) ;
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("self"), extractedValue_58247_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1396)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, extractedValue_58230_target_0.readProperty_string ().objectCompare (GGS_string ("prefs"))).boolEnum () ;
            if (kBoolTrue == test_3) {
              constinArgument_inPreferencesActionMap.method_searchKey (extractedValue_58247_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)) ;
              outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("g").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1404)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1404)).add_operation (GGS_string ("!"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1404)), extractedValue_58247_action_1.readProperty_string (), function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1406))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1403)) ;
            }
          }
          if (kBoolFalse == test_3) {
            GGS_actionMap var_controllerActionMap_59042 ;
            GGS_propertyKind joker_59014 ; // Joker input parameter
            GGS_bool joker_59071 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_58230_target_0, joker_59014, var_controllerActionMap_59042, joker_59071, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)) ;
            var_controllerActionMap_59042.method_searchKey (extractedValue_58247_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1415)) ;
            GGS_string temp_4 ;
            const enumGalgasBool test_5 = constinArgument_inPreferences.boolEnum () ;
            if (kBoolTrue == test_5) {
              temp_4 = GGS_string ("preferences_") ;
            }else if (kBoolFalse == test_5) {
              temp_4 = GGS_string::makeEmptyString () ;
            }
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (temp_4.add_operation (extractedValue_58230_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1417)), extractedValue_58247_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1419)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1419)).add_operation (extractedValue_58230_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1419))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1416)) ;
          }
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
  cEnumerator_regularBindingList enumerator_59974 (constinArgument_inRegularBindingList, EnumerationOrder::up) ;
  while (enumerator_59974.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1440)) ;
    GGS_outletBindingModelList var_boundModelTypeList_60074 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1441)) ;
    GGS_boundObjectList var_boundModelListForGeneration_60123 = temp_1 ;
    cEnumerator_observablePropertyList enumerator_60165 (enumerator_59974.current_mObservablePropertyList (HERE), EnumerationOrder::up) ;
    while (enumerator_60165.hasCurrentObject ()) {
      GGS_propertyKind var_kind_60439 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_60473 ;
      GGS_string var_defaultValueAsString_60546 ;
      GGS_propertyMap temp_2 ;
      const enumGalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = constinArgument_inPreferencesPropertyMap ;
      }else if (kBoolFalse == test_3) {
        temp_2 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_60165.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_2, var_kind_60439, var_swiftTypeStringForTransientFunctionArgument_60473, var_defaultValueAsString_60546, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1443)) ;
      switch (var_kind_60439.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_60645__0 ;
          GGS_propertyAccessibility extractedValue_60645__1 ;
          GGS_bool extractedValue_60645__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_60645__3 ;
          var_kind_60439.getAssociatedValuesFor_toMany (extractedValue_60645__0, extractedValue_60645__1, extractedValue_60645__2, extractedValue_60645__3) ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60165.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1454)), GGS_string ("a toMany property cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1454)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_60749__0 ;
          GGS_propertyAccessibility extractedValue_60749__1 ;
          GGS_bool extractedValue_60749__2 ;
          GGS_toOneOppositeRelationship extractedValue_60749__3 ;
          GGS_bool extractedValue_60749__4 ;
          var_kind_60439.getAssociatedValuesFor_toOne (extractedValue_60749__0, extractedValue_60749__1, extractedValue_60749__2, extractedValue_60749__3, extractedValue_60749__4) ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60165.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1456)), GGS_string ("a toOne property cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1456)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_60862__0 ;
          GGS_bool extractedValue_60862__1 ;
          var_kind_60439.getAssociatedValuesFor_arrayController (extractedValue_60862__0, extractedValue_60862__1) ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60165.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1458)), GGS_string ("an array controller cannot be bound"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1458)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_60981__0 ;
          var_kind_60439.getAssociatedValuesFor_selectionController (extractedValue_60981__0) ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60165.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1460)), GGS_string ("a selection controller cannot be bound"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1460)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_60123.setter_append (extensionGetter_modelStringForSelf (enumerator_60165.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1462)), var_kind_60439, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1462)) ;
      }
      {
      var_boundModelTypeList_60074.setter_append (var_kind_60439, extensionGetter_location (enumerator_60165.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1463)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1463)) ;
      }
      enumerator_60165.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_8 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1466)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_61344 = temp_8 ;
    GGS_controllerBindingOptionDecoratedList temp_9 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1467)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_61431 = temp_9 ;
    GGS_lstring var_outletTypeName_61481 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_61523 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1470)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1470)).isValid ()) {
      uint32_t variant_61544 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1470)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1470)).uintValue () ;
      bool loop_61544 = true ;
      while (loop_61544) {
        loop_61544 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61481.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61523 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1470)).isValid () ;
        if (loop_61544) {
          loop_61544 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61481.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61523 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1470)).boolValue () ;
        }
        if (loop_61544 && (0 == variant_61544)) {
          loop_61544 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.ggs", 1470)) ;
        }
        if (loop_61544) {
          variant_61544 -- ;
          var_continues_61523 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_61786 ;
          GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_61821 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_61481, var_superOutletClassName_61786, var_bindingMap_61821, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1472)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = var_bindingMap_61821.getter_hasKey (enumerator_59974.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1477)).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_bindingMap_61821.method_searchKey (enumerator_59974.current_mBindingName (HERE), var_outletBindingSpecificationModelList_61344, var_controllerBindingOptionDecoratedList_61431, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1478)) ;
            }
          }
          if (kBoolFalse == test_10) {
            var_continues_61523 = GGS_bool (true) ;
            var_outletTypeName_61481 = var_superOutletClassName_61786 ;
          }
        }
      }
    }
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_continues_61523.boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_59974.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1489)) ;
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_60074.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1490)).objectCompare (var_outletBindingSpecificationModelList_61344.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1490)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_59974.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_61344.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1492)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1492)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1492)).add_operation (var_boundModelTypeList_60074.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1494)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1493)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1493)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1494)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1491)) ;
        }
      }
      if (kBoolFalse == test_13) {
        cEnumerator_outletBindingSpecificationModelList enumerator_62540 (var_outletBindingSpecificationModelList_61344, EnumerationOrder::up) ;
        cEnumerator_outletBindingModelList enumerator_62635 (var_boundModelTypeList_60074, EnumerationOrder::up) ;
        while (enumerator_62540.hasCurrentObject () && enumerator_62635.hasCurrentObject ()) {
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            GGS_bool test_16 = enumerator_62540.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_16.boolEnum ()) {
              test_16 = extensionGetter_isTransient (enumerator_62635.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1497)) ;
            }
            test_15 = test_16.boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_62635.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1498)) ;
            }
          }
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            GGS_bool test_19 = enumerator_62540.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1500)) ;
            if (kBoolTrue == test_19.boolEnum ()) {
              test_19 = extensionGetter_isEnumType (enumerator_62635.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1500)) ;
            }
            test_18 = test_19.boolEnum () ;
            if (kBoolTrue == test_18) {
            }
          }
          if (kBoolFalse == test_18) {
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_62540.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1501)).objectCompare (extensionGetter_swiftTypeName (enumerator_62635.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1501)))).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_62635.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_62540.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1502)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1502)), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1502)) ;
              }
            }
          }
          enumerator_62540.gotoNextObject () ;
          enumerator_62635.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_63206 = GGS_string::makeEmptyString () ;
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_61431.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1508)).objectCompare (enumerator_59974.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1508)))).boolEnum () ;
      if (kBoolTrue == test_22) {
        GGS_string var_s_63332 ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_61431.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1510)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_23) {
            var_s_63332 = GGS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_23) {
          var_s_63332 = GGS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_63534 (var_controllerBindingOptionDecoratedList_61431, EnumerationOrder::up) ;
          while (enumerator_63534.hasCurrentObject ()) {
            var_s_63332.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_63534.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1515)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1515)).add_operation (extensionGetter_swiftTypeName (enumerator_63534.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1515)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1515)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1515)) ;
            enumerator_63534.gotoNextObject () ;
          }
        }
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_59974.current_mBindingName (HERE).readProperty_location (), var_s_63332, fixItArray24  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1518)) ;
      }
    }
    if (kBoolFalse == test_22) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_63759 (var_controllerBindingOptionDecoratedList_61431, EnumerationOrder::up) ;
      cEnumerator_bindingOptionList enumerator_63846 (enumerator_59974.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
      while (enumerator_63759.hasCurrentObject () && enumerator_63846.hasCurrentObject ()) {
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_63759.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_63846.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_63846.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_63759.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1522)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1522)), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1522)) ;
          }
        }
        GGS_string var_optionValueAsString_64238 ;
        GGS_typeKindList temp_27 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1525)) ;
        temp_27.enterElement (GGS_typeKindList_2E_element::init_21_ (enumerator_63759.current_mOptionType (HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1525)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_63846.current_mOptionValue (HERE).ptr (), temp_27, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_64238, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1524)) ;
        var_bindingOptionString_63206.plusAssign_operation(GGS_string (", ").add_operation (enumerator_63759.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1529)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1529)).add_operation (var_optionValueAsString_64238, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1529)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1529)) ;
        enumerator_63759.gotoNextObject () ;
        enumerator_63846.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (enumerator_59974.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_60123, var_bindingOptionString_63206, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1533)) ;
    }
    enumerator_59974.gotoNextObject () ;
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
  GGS_actionMap var_preferencesActionMap_65677 ;
  GGS_classKind joker_65667_2 ; // Joker input parameter
  GGS_propertyMap joker_65667_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_65699 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1557)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1557)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1557)), joker_65667_2, joker_65667_1, var_preferencesActionMap_65677, joker_65699, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1557)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1558)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_65750 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_66285 ;
  const GGS_astHStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_65677, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_66285, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1559)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1576)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_66349 = temp_2 ;
  const GGS_astHStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_66457_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_66457_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66767 ;
      GGS_typeKind var_type_66806 ;
      GGS_location var_errorLocation_66833 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_66457_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66767, var_type_66806, var_errorLocation_66833, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1580)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_type_66806.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1590)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1590)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_66833, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1591)) ;
        }
      }
      {
      var_multipleBindingGenerationList_66349.setter_append (GGS_string ("hidden"), var_hiddenExpression_66767, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1593)) ;
      }
    }
    break ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_6 = this ;
  cEnumerator_astViewInstructionList enumerator_67054 (temp_6.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_67054.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_67481 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_67054.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_67481, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1599)) ;
    {
    var_instructionList_65750.setter_append (var_generatedInstruction_67481, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1614)) ;
    }
    enumerator_67054.gotoNextObject () ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_7 = this ;
  outArgument_outInstruction = GGS_hStackViewInstructionGeneration::init_21__21__21__21_ (var_funcCallList_66285, var_instructionList_65750, var_multipleBindingGenerationList_66349, temp_7.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
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
  GGS_actionMap var_preferencesActionMap_68860 ;
  GGS_classKind joker_68850_2 ; // Joker input parameter
  GGS_propertyMap joker_68850_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_68882 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1640)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1640)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1640)), joker_68850_2, joker_68850_1, var_preferencesActionMap_68860, joker_68882, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1640)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1641)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_68933 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_69468 ;
  const GGS_astVStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_68860, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_69468, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1642)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1659)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_69532 = temp_2 ;
  const GGS_astVStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_69640_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_69640_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_69950 ;
      GGS_typeKind var_type_69989 ;
      GGS_location var_errorLocation_70016 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_69640_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_69950, var_type_69989, var_errorLocation_70016, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1663)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_type_69989.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1673)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1673)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_70016, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1674)) ;
        }
      }
      {
      var_multipleBindingGenerationList_69532.setter_append (GGS_string ("hidden"), var_hiddenExpression_69950, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1676)) ;
      }
    }
    break ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_6 = this ;
  cEnumerator_astViewInstructionList enumerator_70217 (temp_6.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_70217.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_70645 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_70217.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_70645, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1679)) ;
    {
    var_instructionList_68933.setter_append (var_generatedInstruction_70645, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1694)) ;
    }
    enumerator_70217.gotoNextObject () ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_7 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_8 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_9 = this ;
  outArgument_outInstruction = GGS_vStackViewInstructionGeneration::init_21__21__21__21__21__21_ (temp_7.readProperty_mHasVerticalScroller (), temp_8.readProperty_mConfiguratorName (), var_funcCallList_69468, var_instructionList_68933, var_multipleBindingGenerationList_69532, temp_9.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
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
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1786)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1786)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1786)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1788)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1788)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1788)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1795)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1795)).add_operation (GGS_string (".appendSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1795)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutGutterInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                       const GGS_string constinArgument_inName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_autoLayoutGutterInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1810)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1810)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1810)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1812)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1812)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1812)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutGutterInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                             const GGS_string constinArgument_inReceiverViewName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1819)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1819)).add_operation (GGS_string (".appendGutter ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1819)) ;
//---
  return result_result ;
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
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1930)).add_operation (GGS_string (" () -> AutoLayoutHorizontalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1930)) ;
  result_result.plusAssign_operation(GGS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1931)) ;
  const GGS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1932)) ;
  const GGS_computedHorizontalViewGeneration temp_1 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_81090 (temp_1.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_81090.hasCurrentObject ()) {
    result_result.plusAssign_operation(GGS_string ("    let ").add_operation (enumerator_81090.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1934)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1934)).add_operation (enumerator_81090.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1934)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1934)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1934)) ;
    enumerator_81090.gotoNextObject () ;
  }
  const GGS_computedHorizontalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_81215 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_81215.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_81215.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("hStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1937)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1937)) ;
    enumerator_81215.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GGS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1939)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1940)) ;
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
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1947)).add_operation (GGS_string (" () -> AutoLayoutVerticalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1947)) ;
  result_result.plusAssign_operation(GGS_string ("    let vStackView = "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1948)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_computedVerticalViewGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1950)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result.plusAssign_operation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1952)) ;
  }
  result_result.plusAssign_operation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1954)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_computedVerticalViewGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_computedVerticalViewGeneration temp_4 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.configure_").add_operation (temp_4.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1956)).add_operation (GGS_string (" (vStackView)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1956)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1956)) ;
    }
  }
  const GGS_computedVerticalViewGeneration temp_5 = this ;
  extensionMethod_generate (temp_5.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1958)) ;
  const GGS_computedVerticalViewGeneration temp_6 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_82246 (temp_6.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_82246.hasCurrentObject ()) {
    result_result.plusAssign_operation(GGS_string ("    let ").add_operation (enumerator_82246.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1960)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1960)).add_operation (enumerator_82246.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1960)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1960)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1960)) ;
    enumerator_82246.gotoNextObject () ;
  }
  const GGS_computedVerticalViewGeneration temp_7 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_82371 (temp_7.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_82371.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_82371.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("vStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1963)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1963)) ;
    enumerator_82371.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GGS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1965)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1966)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1975)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1975)).add_operation (GGS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1975)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1984)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1984)).add_operation (GGS_string (".appendFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1984)) ;
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
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1994)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1994)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1994)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1996)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1996)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1996)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                              const GGS_string constinArgument_inReceiverViewName,
                                                                                              const GGS_string constinArgument_inIndentation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2003)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2003)).add_operation (GGS_string (".appendDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2003)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2012)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2012)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2012)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2012)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2012)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2018)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2018)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2018)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2018)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2018)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2027)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2027)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2027)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2027)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2027)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_85946 (temp_1.readProperty_mParameterList (), EnumerationOrder::up) ;
  while (enumerator_85946.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_85946.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2030)).add_operation (enumerator_85946.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2030)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2030)) ;
    if (enumerator_85946.hasNextObject ()) {
      result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2032)) ;
    }
    enumerator_85946.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2034)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2035)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutRegularBindingsGenerationList enumerator_86190 (temp_3.readProperty_mRegularBindingsGenerationList (), EnumerationOrder::up) ;
  while (enumerator_86190.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2037)).add_operation (enumerator_86190.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2037)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2037)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2037)) ;
    cEnumerator_boundObjectList enumerator_86340 (enumerator_86190.current_mBoundObjectList (HERE), EnumerationOrder::up) ;
    while (enumerator_86340.hasCurrentObject ()) {
      result_result.plusAssign_operation(enumerator_86340.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2039)) ;
      if (enumerator_86340.hasNextObject ()) {
        result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2040)) ;
      }
      enumerator_86340.gotoNextObject () ;
    }
    result_result.plusAssign_operation(enumerator_86190.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2042)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2042)) ;
    enumerator_86190.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_86501 (temp_4.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_86501.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2045)).add_operation (enumerator_86501.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2045)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2045)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_86501.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2045)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2045)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2045)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2045)) ;
    enumerator_86501.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_86718_targetName_0 ;
      GGS_string extractedValue_86730_actionName_1 ;
      GGS_string extractedValue_86742_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_86718_targetName_0, extractedValue_86730_actionName_1, extractedValue_86742_targetTypeName_2) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2050)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2050)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2051)).add_operation (extractedValue_86718_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2051)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2051)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2051)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)).add_operation (extractedValue_86742_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)).add_operation (extractedValue_86730_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2052)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2053)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2053)) ;
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
      GGS_string extractedValue_87111_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_87111_controllerName_0) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2058)).add_operation (extractedValue_87111_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2058)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2058)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2058)) ;
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
      GGS_string var_prefix_87283 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (var_prefix_87283, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)) ;
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
          result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)) ;
        }
      }
      if (kBoolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2068)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2068)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2068)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2068)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2068)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2068)) ;
      }
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                                   const GGS_string constinArgument_inReceiverViewName,
                                                                                                   const GGS_string constinArgument_inIndentation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2081)) ;
  GGS_string var_indentation_88352 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2082)) ;
  GGS_string var_name_88393 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2083)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)).add_operation (var_name_88393, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_88557 (temp_1.readProperty_mParameterList (), EnumerationOrder::up) ;
  while (enumerator_88557.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_88557.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2087)).add_operation (enumerator_88557.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2087)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2087)) ;
    if (enumerator_88557.hasNextObject ()) {
      result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2089)) ;
    }
    enumerator_88557.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2091)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), var_indentation_88352, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2092)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutRegularBindingsGenerationList enumerator_88799 (temp_3.readProperty_mRegularBindingsGenerationList (), EnumerationOrder::up) ;
  while (enumerator_88799.hasCurrentObject ()) {
    result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2094)).add_operation (enumerator_88799.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2094)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2094)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2094)) ;
    cEnumerator_boundObjectList enumerator_88947 (enumerator_88799.current_mBoundObjectList (HERE), EnumerationOrder::up) ;
    while (enumerator_88947.hasCurrentObject ()) {
      result_result.plusAssign_operation(enumerator_88947.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2096)) ;
      if (enumerator_88947.hasNextObject ()) {
        result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2097)) ;
      }
      enumerator_88947.gotoNextObject () ;
    }
    result_result.plusAssign_operation(enumerator_88799.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2099)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2099)) ;
    enumerator_88799.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_89108 (temp_4.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_89108.hasCurrentObject ()) {
    result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2102)).add_operation (enumerator_89108.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2102)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2102)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_89108.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2102)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2102)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2102)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2102)) ;
    enumerator_89108.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_89323_targetName_0 ;
      GGS_string extractedValue_89335_actionName_1 ;
      GGS_string extractedValue_89347_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_89323_targetName_0, extractedValue_89335_actionName_1, extractedValue_89347_targetTypeName_2) ;
      result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2107)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2107)) ;
      result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2108)).add_operation (extractedValue_89323_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2108)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2108)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2108)) ;
      result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)).add_operation (extractedValue_89347_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)).add_operation (extractedValue_89335_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2109)) ;
      result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2110)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2110)) ;
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
      GGS_string extractedValue_89708_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_89708_controllerName_0) ;
      result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2115)).add_operation (extractedValue_89708_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2115)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2115)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2115)) ;
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
      GGS_string var_prefix_89878 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssign_operation(var_indentation_88352.add_operation (var_prefix_89878, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)).add_operation (var_name_88393, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)) ;
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
          result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)).add_operation (var_name_88393, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)) ;
        }
      }
      if (kBoolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)).add_operation (var_name_88393, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)) ;
      }
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)).add_operation (var_name_88393, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)) ;
    }
  }
  result_result.plusAssign_operation(var_indentation_88352.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2131)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2131)).add_operation (GGS_string (" .appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2131)).add_operation (var_name_88393, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2131)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2131)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2131)) ;
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2132)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2132)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2141)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2141)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2141)) ;
  const GGS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2142)) ;
  const GGS_hStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_91115 (temp_1.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_91115.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2144)).add_operation (enumerator_91115.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2144)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2144)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_91115.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2144)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2144)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2144)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2144)) ;
    enumerator_91115.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_91287 (temp_2.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_91287.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2147)).add_operation (enumerator_91287.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2147)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2147)).add_operation (enumerator_91287.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2147)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2147)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2147)) ;
    enumerator_91287.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_91424 (temp_3.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_91424.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_91424.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, constinArgument_inName, constinArgument_inIndentation, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2150)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2150)) ;
    enumerator_91424.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_hStackViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_string constinArgument_inReceiverViewName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2159)) ;
  GGS_string var_indentation_92022 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2160)) ;
  GGS_string var_name_92063 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2161)) ;
  result_result.plusAssign_operation(var_indentation_92022.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2162)).add_operation (var_name_92063, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2162)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2162)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2162)) ;
  const GGS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), var_indentation_92022, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2163)) ;
  const GGS_hStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_92255 (temp_1.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_92255.hasCurrentObject ()) {
    result_result.plusAssign_operation(var_indentation_92022.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2165)).add_operation (enumerator_92255.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2165)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2165)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_92255.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2165)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2165)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2165)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2165)) ;
    enumerator_92255.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_92425 (temp_2.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_92425.hasCurrentObject ()) {
    result_result.plusAssign_operation(var_indentation_92022.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2168)).add_operation (enumerator_92425.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2168)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2168)).add_operation (enumerator_92425.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2168)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2168)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2168)) ;
    enumerator_92425.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_92560 (temp_3.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_92560.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_92560.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_92063, var_indentation_92022, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2171)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2171)) ;
    enumerator_92560.gotoNextObject () ;
  }
  result_result.plusAssign_operation(var_indentation_92022.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2173)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2173)).add_operation (GGS_string (" .appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2173)).add_operation (var_name_92063, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2173)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2173)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2173)) ;
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2183)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2183)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2183)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_vStackViewInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2185)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result.plusAssign_operation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2187)) ;
  }
  result_result.plusAssign_operation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2189)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_vStackViewInstructionGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_vStackViewInstructionGeneration temp_4 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.configure_").add_operation (temp_4.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2191)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2191)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2191)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2191)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2191)) ;
    }
  }
  const GGS_vStackViewInstructionGeneration temp_5 = this ;
  extensionMethod_generate (temp_5.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2193)) ;
  const GGS_vStackViewInstructionGeneration temp_6 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_93622 (temp_6.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_93622.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)).add_operation (enumerator_93622.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_93622.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)) ;
    enumerator_93622.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_7 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_93794 (temp_7.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_93794.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2198)).add_operation (enumerator_93794.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2198)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2198)).add_operation (enumerator_93794.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2198)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2198)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2198)) ;
    enumerator_93794.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_8 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_93931 (temp_8.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_93931.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_93931.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, constinArgument_inName, constinArgument_inIndentation, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2201)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2201)) ;
    enumerator_93931.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_vStackViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_string constinArgument_inReceiverViewName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2210)) ;
  GGS_string var_indentation_94529 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2211)) ;
  GGS_string var_name_94570 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2212)) ;
  result_result.plusAssign_operation(var_indentation_94529.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2213)).add_operation (var_name_94570, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2213)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2213)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2213)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_vStackViewInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2215)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result.plusAssign_operation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2217)) ;
  }
  result_result.plusAssign_operation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2219)) ;
  const GGS_vStackViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFuncCallList (), var_indentation_94529, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2220)) ;
  const GGS_vStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_94898 (temp_3.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_94898.hasCurrentObject ()) {
    result_result.plusAssign_operation(var_indentation_94529.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2222)).add_operation (enumerator_94898.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2222)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2222)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_94898.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2222)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2222)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2222)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2222)) ;
    enumerator_94898.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_4 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_95068 (temp_4.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_95068.hasCurrentObject ()) {
    result_result.plusAssign_operation(var_indentation_94529.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2225)).add_operation (enumerator_95068.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2225)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2225)).add_operation (enumerator_95068.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2225)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2225)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2225)) ;
    enumerator_95068.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_5 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_95203 (temp_5.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_95203.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_95203.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_94570, var_indentation_94529, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2228)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2228)) ;
    enumerator_95203.gotoNextObject () ;
  }
  result_result.plusAssign_operation(var_indentation_94529.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2230)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2230)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2230)).add_operation (var_name_94570, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2230)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2230)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2230)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_vStackViewInstructionGeneration temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_vStackViewInstructionGeneration temp_8 = this ;
      result_result.plusAssign_operation(var_indentation_94529.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)).add_operation (temp_8.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)).add_operation (var_name_94570, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)) ;
    }
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)) ;
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
    GGS_bool var_hasRunAction_3617 ;
    GGS_bool var_handlesTableValueBinding_3642 ;
    GGS_bool var_hasEnabled_3679 ;
    GGS_bool var_hasHidden_3702 ;
    GGS_bool var_handlesGraphicControllerBinding_3724 ;
    const GGS_outletClassDeclarationAST temp_9 = this ;
    GGS_lstring joker_3602 ; // Joker input parameter
    GGS_bool joker_3763 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3602, var_hasRunAction_3617, var_handlesTableValueBinding_3642, var_hasEnabled_3679, var_hasHidden_3702, var_handlesGraphicControllerBinding_3724, joker_3763, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 116)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GGS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3617 COMMA_SOURCE_FILE ("outlet-class.ggs", 126)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GGS_outletClassDeclarationAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.ggs", 127)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GGS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3642 COMMA_SOURCE_FILE ("outlet-class.ggs", 129)).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GGS_outletClassDeclarationAST temp_16 = this ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.ggs", 130)) ;
      }
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GGS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3679 COMMA_SOURCE_FILE ("outlet-class.ggs", 132)).boolEnum () ;
      if (kBoolTrue == test_18) {
        const GGS_outletClassDeclarationAST temp_20 = this ;
        TC_Array <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.ggs", 133)) ;
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      const GGS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3702 COMMA_SOURCE_FILE ("outlet-class.ggs", 135)).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GGS_outletClassDeclarationAST temp_24 = this ;
        TC_Array <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.ggs", 136)) ;
      }
    }
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      const GGS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3724 COMMA_SOURCE_FILE ("outlet-class.ggs", 138)).boolEnum () ;
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
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3617 COMMA_SOURCE_FILE ("outlet-class.ggs", 144)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3642 COMMA_SOURCE_FILE ("outlet-class.ggs", 145)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3679 COMMA_SOURCE_FILE ("outlet-class.ggs", 146)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3702 COMMA_SOURCE_FILE ("outlet-class.ggs", 147)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3724 COMMA_SOURCE_FILE ("outlet-class.ggs", 148)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 141)) ;
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
  cEnumerator_outletClassBindingSpecificationList enumerator_4530 (constinArgument_inBindingSpecificationListMap, EnumerationOrder::up) ;
  while (enumerator_4530.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 130)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4631 = temp_0 ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4697 (enumerator_4530.current_mOutletClassBindingSpecificationModelList (HERE), EnumerationOrder::up) ;
    while (enumerator_4697.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_4697.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GGS_enumConstantMap temp_2 = GGS_enumConstantMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)) ;
          GGS_enumFuncMap temp_3 = GGS_enumFuncMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)) ;
          var_outletBindingSpecificationModelList_4631.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), temp_2, temp_3  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)), enumerator_4697.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 133)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        GGS_classKind var_classKind_5110 ;
        GGS_propertyMap joker_5121_3 ; // Joker input parameter
        GGS_actionMap joker_5121_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_5121_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4697.current_mModelTypeName (HERE), var_classKind_5110, joker_5121_3, joker_5121_2, joker_5121_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 138)) ;
        GGS_typeKind var_typeKind_5148 ;
        switch (var_classKind_5110.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_4697.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 142)) ;
            var_typeKind_5148.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_5319_kind_0 ;
            var_classKind_5110.getAssociatedValuesFor_atomic (extractedValue_5319_kind_0) ;
            var_typeKind_5148 = extractedValue_5319_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_5376__0 ;
            var_classKind_5110.getAssociatedValuesFor_document (extractedValue_5376__0) ;
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_4697.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 146)) ;
            var_typeKind_5148.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_5488__0 ;
            GGS_bool extractedValue_5488__1 ;
            GGS_bool extractedValue_5488__2 ;
            GGS_bool extractedValue_5488__3 ;
            var_classKind_5110.getAssociatedValuesFor_entity (extractedValue_5488__0, extractedValue_5488__1, extractedValue_5488__2, extractedValue_5488__3) ;
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_4697.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 148)) ;
            var_typeKind_5148.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_4631.setter_append (var_typeKind_5148, enumerator_4697.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 150)) ;
        }
      }
      enumerator_4697.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_7 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 153)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5750 = temp_7 ;
    cEnumerator_controllerBindingOptionList enumerator_5814 (enumerator_4530.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
    while (enumerator_5814.hasCurrentObject ()) {
      GGS_classKind var_classKind_5934 ;
      GGS_propertyMap joker_5945_3 ; // Joker input parameter
      GGS_actionMap joker_5945_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5945_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5814.current_mOptionTypeName (HERE), var_classKind_5934, joker_5945_3, joker_5945_2, joker_5945_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 155)) ;
      GGS_typeKind var_typeKind_5970 ;
      switch (var_classKind_5934.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_5814.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 159)) ;
          var_typeKind_5970.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_6134_kind_0 ;
          var_classKind_5934.getAssociatedValuesFor_atomic (extractedValue_6134_kind_0) ;
          var_typeKind_5970 = extractedValue_6134_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_6187__0 ;
          var_classKind_5934.getAssociatedValuesFor_document (extractedValue_6187__0) ;
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5814.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 163)) ;
          var_typeKind_5970.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_6296__0 ;
          GGS_bool extractedValue_6296__1 ;
          GGS_bool extractedValue_6296__2 ;
          GGS_bool extractedValue_6296__3 ;
          var_classKind_5934.getAssociatedValuesFor_entity (extractedValue_6296__0, extractedValue_6296__1, extractedValue_6296__2, extractedValue_6296__3) ;
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_5814.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 165)) ;
          var_typeKind_5970.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_5750.setter_append (var_typeKind_5970, enumerator_5814.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 167)) ;
      }
      enumerator_5814.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationMap var_bindingMap_6547 ;
    GGS_lstring var_outletSuperClassName_6575 ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4530.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 172)).boolEnum () ;
      if (kBoolTrue == test_11) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4530.current_mOutletClassName (HERE), var_outletSuperClassName_6575, var_bindingMap_6547, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 173)) ;
        }
      }
    }
    if (kBoolFalse == test_11) {
      GGS_outletBindingSpecificationMap temp_12 = GGS_outletBindingSpecificationMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 175)) ;
      var_bindingMap_6547 = temp_12 ;
      GGS_bool joker_6923_6 ; // Joker input parameter
      GGS_bool joker_6923_5 ; // Joker input parameter
      GGS_bool joker_6923_4 ; // Joker input parameter
      GGS_bool joker_6923_3 ; // Joker input parameter
      GGS_bool joker_6923_2 ; // Joker input parameter
      GGS_bool joker_6923_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4530.current_mOutletClassName (HERE), var_outletSuperClassName_6575, joker_6923_6, joker_6923_5, joker_6923_4, joker_6923_3, joker_6923_2, joker_6923_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 176)) ;
    }
    {
    var_bindingMap_6547.setter_insertKey (enumerator_4530.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4631, var_controllerBindingOptionDecoratedList_5750, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 178)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4530.current_mOutletClassName (HERE), var_outletSuperClassName_6575, var_bindingMap_6547, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 183)) ;
    }
    enumerator_4530.gotoNextObject () ;
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
  GGS_regularBindingsGenerationList temp_0 = GGS_regularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 207)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_actionBindingListForGeneration temp_1 = GGS_actionBindingListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 208)) ;
  outArgument_outTargetActionList = temp_1 ;
  GGS_multipleBindingGenerationList temp_2 = GGS_multipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 209)) ;
  outArgument_outMultipleBindingGenerationList = temp_2 ;
  GGS_decoratedOutletMap temp_3 = GGS_decoratedOutletMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 210)) ;
  outArgument_outletMap = temp_3 ;
  GGS_tableViewBindingGenerationList temp_4 = GGS_tableViewBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 211)) ;
  outArgument_outTableViewBindingGenerationList = temp_4 ;
  GGS_ebViewGraphicControllerBindingGenerationList temp_5 = GGS_ebViewGraphicControllerBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 212)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = temp_5 ;
  cEnumerator_outletDeclarationList enumerator_8149 (constinArgument_inOutletDeclarationList, EnumerationOrder::up) ;
  while (enumerator_8149.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8149.current_mOutletName (HERE), enumerator_8149.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 214)) ;
    }
    GGS_bool var_handlesRunAction_8390 ;
    GGS_bool var_handlesTableViewBinding_8425 ;
    GGS_bool var_handlesEnabledBinding_8467 ;
    GGS_bool var_handlesHiddenBinding_8507 ;
    GGS_bool var_handleGraphicControllerBinding_8546 ;
    GGS_bool var_outletClassIsUserDefined_8595 ;
    GGS_lstring joker_8369 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8149.current_mOutletTypeName (HERE), joker_8369, var_handlesRunAction_8390, var_handlesTableViewBinding_8425, var_handlesEnabledBinding_8467, var_handlesHiddenBinding_8507, var_handleGraphicControllerBinding_8546, var_outletClassIsUserDefined_8595, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 215)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_outletClassIsUserDefined_8595.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 225)).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.setter_insert (enumerator_8149.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 226)) ;
        }
      }
    }
    switch (enumerator_8149.current_mGraphicController (HERE).enumValue ()) {
    case GGS_graphicController::Enumeration::invalid:
      break ;
    case GGS_graphicController::Enumeration::enum_none:
      break ;
    case GGS_graphicController::Enumeration::enum_defined:
      {
        GGS_lstring extractedValue_8862_controllerName_0 ;
        GGS_lstring extractedValue_8887_propertyName_1 ;
        enumerator_8149.current_mGraphicController (HERE).getAssociatedValuesFor_defined (extractedValue_8862_controllerName_0, extractedValue_8887_propertyName_1) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_handleGraphicControllerBinding_8546.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 232)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_8149.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8149.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 233)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 233)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 233)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GGS_propertyKind var_kind_9191 ;
          GGS_actionMap joker_9207_2 ; // Joker input parameter
          GGS_bool joker_9207_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_8862_controllerName_0, var_kind_9191, joker_9207_2, joker_9207_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 235)) ;
          switch (var_kind_9191.enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_9266__0 ;
              GGS_propertyAccessibility extractedValue_9266__1 ;
              var_kind_9191.getAssociatedValuesFor_property (extractedValue_9266__0, extractedValue_9266__1) ;
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 242)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_9374__0 ;
              GGS_propertyAccessibility extractedValue_9374__1 ;
              GGS_bool extractedValue_9374__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_9374__3 ;
              var_kind_9191.getAssociatedValuesFor_toMany (extractedValue_9374__0, extractedValue_9374__1, extractedValue_9374__2, extractedValue_9374__3) ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_9481__0 ;
              GGS_propertyAccessibility extractedValue_9481__1 ;
              GGS_bool extractedValue_9481__2 ;
              GGS_toOneOppositeRelationship extractedValue_9481__3 ;
              GGS_bool extractedValue_9481__4 ;
              var_kind_9191.getAssociatedValuesFor_toOne (extractedValue_9481__0, extractedValue_9481__1, extractedValue_9481__2, extractedValue_9481__3, extractedValue_9481__4) ;
              TC_Array <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 246)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            {
              GGS_lstring extractedValue_9597_entityName_0 ;
              GGS_bool extractedValue_9609_graphic_1 ;
              var_kind_9191.getAssociatedValuesFor_arrayController (extractedValue_9597_entityName_0, extractedValue_9609_graphic_1) ;
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, extractedValue_8887_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  enumGalgasBool test_13 = kBoolTrue ;
                  if (kBoolTrue == test_13) {
                    test_13 = extractedValue_9609_graphic_1.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 249)).boolEnum () ;
                    if (kBoolTrue == test_13) {
                      TC_Array <FixItDescription> fixItArray14 ;
                      inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_9597_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 250)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 250)), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 250)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_12) {
                GGS_propertyMap var_observablePropertyMap_9950 ;
                GGS_classKind joker_9927 ; // Joker input parameter
                GGS_actionMap joker_9987_2 ; // Joker input parameter
                GGS_propertyGenerationList joker_9987_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9597_entityName_0, joker_9927, var_observablePropertyMap_9950, joker_9987_2, joker_9987_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 253)) ;
                GGS_propertyKind var_propertyKind_10069 ;
                GGS_actionMap joker_10083_2 ; // Joker input parameter
                GGS_bool joker_10083_1 ; // Joker input parameter
                var_observablePropertyMap_9950.method_searchKey (extractedValue_8887_propertyName_1, var_propertyKind_10069, joker_10083_2, joker_10083_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)) ;
                switch (var_propertyKind_10069.enumValue ()) {
                case GGS_propertyKind::Enumeration::invalid:
                  break ;
                case GGS_propertyKind::Enumeration::enum_property:
                  {
                    GGS_typeKind extractedValue_10149__0 ;
                    GGS_propertyAccessibility extractedValue_10149__1 ;
                    var_propertyKind_10069.getAssociatedValuesFor_property (extractedValue_10149__0, extractedValue_10149__1) ;
                    TC_Array <FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 262)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toMany:
                  {
                    GGS_lstring extractedValue_10262_kEntityName_0 ;
                    GGS_propertyAccessibility extractedValue_10275__1 ;
                    GGS_bool extractedValue_10278_isGraphic_2 ;
                    GGS_toManyRelationshipOptionAST extractedValue_10289__3 ;
                    var_propertyKind_10069.getAssociatedValuesFor_toMany (extractedValue_10262_kEntityName_0, extractedValue_10275__1, extractedValue_10278_isGraphic_2, extractedValue_10289__3) ;
                    enumGalgasBool test_16 = kBoolTrue ;
                    if (kBoolTrue == test_16) {
                      test_16 = extractedValue_10278_isGraphic_2.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 264)).boolEnum () ;
                      if (kBoolTrue == test_16) {
                        TC_Array <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_10262_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 265)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 265)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 265)) ;
                      }
                    }
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toOne:
                  {
                    GGS_lstring extractedValue_10485__0 ;
                    GGS_propertyAccessibility extractedValue_10485__1 ;
                    GGS_bool extractedValue_10485__2 ;
                    GGS_toOneOppositeRelationship extractedValue_10485__3 ;
                    GGS_bool extractedValue_10485__4 ;
                    var_propertyKind_10069.getAssociatedValuesFor_toOne (extractedValue_10485__0, extractedValue_10485__1, extractedValue_10485__2, extractedValue_10485__3, extractedValue_10485__4) ;
                    TC_Array <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 268)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_arrayController:
                  {
                    GGS_lstring extractedValue_10608__0 ;
                    GGS_bool extractedValue_10608__1 ;
                    var_propertyKind_10069.getAssociatedValuesFor_arrayController (extractedValue_10608__0, extractedValue_10608__1) ;
                    TC_Array <FixItDescription> fixItArray19 ;
                    inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 270)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_selectionController:
                  {
                    GGS_string extractedValue_10734__0 ;
                    var_propertyKind_10069.getAssociatedValuesFor_selectionController (extractedValue_10734__0) ;
                    TC_Array <FixItDescription> fixItArray20 ;
                    inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 272)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            {
              GGS_string extractedValue_10885__0 ;
              var_kind_9191.getAssociatedValuesFor_selectionController (extractedValue_10885__0) ;
              TC_Array <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (extractedValue_8862_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 276)) ;
            }
            break ;
          }
          {
          outArgument_outEBViewGraphicControllerBindingGenerationList.setter_append (enumerator_8149.current_mOutletName (HERE).readProperty_string (), extractedValue_8862_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 278)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8149.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GGS_tableValueBinding::Enumeration::invalid:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_noTableValueBinding:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_tableValueBinding:
      {
        GGS_lstring extractedValue_11280_controllerName_0 ;
        enumerator_8149.current_mTableValueBindingDescriptor (HERE).getAssociatedValuesFor_tableValueBinding (extractedValue_11280_controllerName_0) ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_handlesTableViewBinding_8425.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 288)).boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_8149.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8149.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 289)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 289)), fixItArray23  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 289)) ;
          }
        }
        if (kBoolFalse == test_22) {
          GGS_propertyKind var_kind_11578 ;
          GGS_actionMap joker_11594_2 ; // Joker input parameter
          GGS_bool joker_11594_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11280_controllerName_0, var_kind_11578, joker_11594_2, joker_11594_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 291)) ;
          enumGalgasBool test_24 = kBoolTrue ;
          if (kBoolTrue == test_24) {
            test_24 = var_kind_11578.getter_isArrayController (SOURCE_FILE ("outlet-declaration.ggs", 296)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 296)).boolEnum () ;
            if (kBoolTrue == test_24) {
              TC_Array <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (extractedValue_11280_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray25  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 297)) ;
            }
          }
          {
          outArgument_outTableViewBindingGenerationList.setter_append (enumerator_8149.current_mOutletName (HERE).readProperty_string (), extractedValue_11280_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 299)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8149.current_mRunDescriptor (HERE).enumValue ()) {
    case GGS_runActionDescriptor::Enumeration::invalid:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_noAction:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_action:
      {
        GGS_lstring extractedValue_11985_target_0 ;
        GGS_lstring extractedValue_12002_action_1 ;
        enumerator_8149.current_mRunDescriptor (HERE).getAssociatedValuesFor_action (extractedValue_11985_target_0, extractedValue_12002_action_1) ;
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = var_handlesRunAction_8390.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 309)).boolEnum () ;
          if (kBoolTrue == test_26) {
            TC_Array <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (enumerator_8149.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8149.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 310)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 310)), fixItArray27  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 310)) ;
          }
        }
        if (kBoolFalse == test_26) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = GGS_bool (ComparisonKind::equal, extractedValue_11985_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_28) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12002_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 312)) ;
              {
              outArgument_outTargetActionList.setter_append (enumerator_8149.current_mOutletName (HERE).readProperty_string (), GGS_string ("self"), extractedValue_12002_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 313)) ;
              }
            }
          }
          if (kBoolFalse == test_28) {
            GGS_actionMap var_controllerActionMap_12537 ;
            GGS_propertyKind joker_12507 ; // Joker input parameter
            GGS_bool joker_12568 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11985_target_0, joker_12507, var_controllerActionMap_12537, joker_12568, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 320)) ;
            var_controllerActionMap_12537.method_searchKey (extractedValue_12002_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 326)) ;
            {
            GGS_string temp_29 ;
            const enumGalgasBool test_30 = constinArgument_inPreferences.boolEnum () ;
            if (kBoolTrue == test_30) {
              temp_29 = GGS_string ("preferences_") ;
            }else if (kBoolFalse == test_30) {
              temp_29 = GGS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.setter_append (enumerator_8149.current_mOutletName (HERE).readProperty_string (), temp_29.add_operation (extractedValue_11985_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 329)), extractedValue_12002_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 331)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 331)).add_operation (extractedValue_11985_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 331)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 327)) ;
            }
          }
        }
      }
      break ;
    }
    switch (enumerator_8149.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_13045_expression_0 ;
        enumerator_8149.current_mEnabledBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_13045_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13343 ;
        GGS_typeKind var_type_13384 ;
        GGS_location var_errorLocation_13413 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13045_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13343, var_type_13384, var_errorLocation_13413, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 339)) ;
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesEnabledBinding_8467.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 349)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_13413, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 350)) ;
          }
        }
        enumGalgasBool test_33 = kBoolTrue ;
        if (kBoolTrue == test_33) {
          test_33 = var_type_13384.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 352)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 352)).boolEnum () ;
          if (kBoolTrue == test_33) {
            TC_Array <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (var_errorLocation_13413, GGS_string ("expression is not boolean"), fixItArray34  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 353)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8149.current_mOutletName (HERE).readProperty_string (), GGS_string ("enabled"), var_enableExpression_13343, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 355)) ;
        }
      }
      break ;
    }
    switch (enumerator_8149.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_13953_expression_0 ;
        enumerator_8149.current_mHiddenBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_13953_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14251 ;
        GGS_typeKind var_type_14292 ;
        GGS_location var_errorLocation_14321 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13953_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14251, var_type_14292, var_errorLocation_14321, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 365)) ;
        enumGalgasBool test_35 = kBoolTrue ;
        if (kBoolTrue == test_35) {
          test_35 = var_type_14292.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 375)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 375)).boolEnum () ;
          if (kBoolTrue == test_35) {
            TC_Array <FixItDescription> fixItArray36 ;
            inCompiler->emitSemanticError (var_errorLocation_14321, GGS_string ("expression is not boolean"), fixItArray36  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 376)) ;
          }
        }
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_handlesHiddenBinding_8507.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 378)).boolEnum () ;
          if (kBoolTrue == test_37) {
            TC_Array <FixItDescription> fixItArray38 ;
            inCompiler->emitSemanticError (var_errorLocation_14321, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray38  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 379)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8149.current_mOutletName (HERE).readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_14251, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 381)) ;
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
    routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8149.current_mOutletTypeName (HERE), enumerator_8149.current_mOutletName (HERE).readProperty_string (), enumerator_8149.current_mRegularBindingList (HERE), temp_39, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 388)) ;
    }
    enumerator_8149.gotoNextObject () ;
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
  cEnumerator_regularBindingList enumerator_15690 (constinArgument_inRegularBindingList, EnumerationOrder::up) ;
  while (enumerator_15690.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)) ;
    GGS_outletBindingModelList var_boundModelTypeList_15790 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 418)) ;
    GGS_boundObjectList var_boundModelListForGeneration_15839 = temp_1 ;
    cEnumerator_observablePropertyList enumerator_15881 (enumerator_15690.current_mObservablePropertyList (HERE), EnumerationOrder::up) ;
    while (enumerator_15881.hasCurrentObject ()) {
      GGS_propertyKind var_kind_16099 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_16133 ;
      GGS_string var_defaultValueAsString_16206 ;
      extensionMethod_analyzeObservableProperty (enumerator_15881.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16099, var_swiftTypeStringForTransientFunctionArgument_16133, var_defaultValueAsString_16206, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 420)) ;
      switch (var_kind_16099.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_16305__0 ;
          GGS_propertyAccessibility extractedValue_16305__1 ;
          GGS_bool extractedValue_16305__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_16305__3 ;
          var_kind_16099.getAssociatedValuesFor_toMany (extractedValue_16305__0, extractedValue_16305__1, extractedValue_16305__2, extractedValue_16305__3) ;
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15881.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)), GGS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_16409__0 ;
          GGS_propertyAccessibility extractedValue_16409__1 ;
          GGS_bool extractedValue_16409__2 ;
          GGS_toOneOppositeRelationship extractedValue_16409__3 ;
          GGS_bool extractedValue_16409__4 ;
          var_kind_16099.getAssociatedValuesFor_toOne (extractedValue_16409__0, extractedValue_16409__1, extractedValue_16409__2, extractedValue_16409__3, extractedValue_16409__4) ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15881.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)), GGS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_16522__0 ;
          GGS_bool extractedValue_16522__1 ;
          var_kind_16099.getAssociatedValuesFor_arrayController (extractedValue_16522__0, extractedValue_16522__1) ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15881.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 435)), GGS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 435)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_16641__0 ;
          var_kind_16099.getAssociatedValuesFor_selectionController (extractedValue_16641__0) ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15881.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 437)), GGS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 437)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_15839.setter_append (extensionGetter_modelStringForSelf (enumerator_15881.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 440)), var_kind_16099, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 439)) ;
      }
      {
      var_boundModelTypeList_15790.setter_append (var_kind_16099, extensionGetter_location (enumerator_15881.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 443)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 443)) ;
      }
      enumerator_15881.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_6 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 446)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17028 = temp_6 ;
    GGS_controllerBindingOptionDecoratedList temp_7 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 447)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17115 = temp_7 ;
    GGS_lstring var_outletTypeName_17165 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_17207 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 450)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 450)).isValid ()) {
      uint32_t variant_17228 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 450)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 450)).uintValue () ;
      bool loop_17228 = true ;
      while (loop_17228) {
        loop_17228 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17165.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17207 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 450)).isValid () ;
        if (loop_17228) {
          loop_17228 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17165.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17207 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 450)).boolValue () ;
        }
        if (loop_17228 && (0 == variant_17228)) {
          loop_17228 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.ggs", 450)) ;
        }
        if (loop_17228) {
          variant_17228 -- ;
          var_continues_17207 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_17460 ;
          GGS_outletBindingSpecificationMap var_bindingMap_17526 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17165, var_superOutletClassName_17460, var_bindingMap_17526, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 452)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_bindingMap_17526.getter_hasKey (enumerator_15690.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.ggs", 457)).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_bindingMap_17526.method_searchKey (enumerator_15690.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17028, var_controllerBindingOptionDecoratedList_17115, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 458)) ;
            }
          }
          if (kBoolFalse == test_8) {
            var_continues_17207 = GGS_bool (true) ;
            var_outletTypeName_17165 = var_superOutletClassName_17460 ;
          }
        }
      }
    }
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_continues_17207.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_15690.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 469)) ;
      }
    }
    if (kBoolFalse == test_9) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_15790.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 470)).objectCompare (var_outletBindingSpecificationModelList_17028.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 470)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_15690.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17028.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 472)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 472)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 472)).add_operation (var_boundModelTypeList_15790.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 474)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 473)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 473)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 474)), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 471)) ;
        }
      }
      if (kBoolFalse == test_11) {
        cEnumerator_outletBindingSpecificationModelList enumerator_18245 (var_outletBindingSpecificationModelList_17028, EnumerationOrder::up) ;
        cEnumerator_outletBindingModelList enumerator_18340 (var_boundModelTypeList_15790, EnumerationOrder::up) ;
        while (enumerator_18245.hasCurrentObject () && enumerator_18340.hasCurrentObject ()) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            GGS_bool test_14 = enumerator_18245.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_14.boolEnum ()) {
              test_14 = extensionGetter_isTransient (enumerator_18340.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 477)) ;
            }
            test_13 = test_14.boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_18340.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 478)) ;
            }
          }
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            GGS_bool test_17 = enumerator_18245.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.ggs", 480)) ;
            if (kBoolTrue == test_17.boolEnum ()) {
              test_17 = extensionGetter_isEnumType (enumerator_18340.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 480)) ;
            }
            test_16 = test_17.boolEnum () ;
            if (kBoolTrue == test_16) {
            }
          }
          if (kBoolFalse == test_16) {
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_18245.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 481)).objectCompare (extensionGetter_swiftTypeName (enumerator_18340.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 481)))).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (enumerator_18340.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18245.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 482)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 482)), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 482)) ;
              }
            }
          }
          enumerator_18245.gotoNextObject () ;
          enumerator_18340.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_18911 = GGS_string::makeEmptyString () ;
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_17115.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 488)).objectCompare (enumerator_15690.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("outlet-declaration.ggs", 488)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        GGS_string var_s_19037 ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_17115.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 490)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_21) {
            var_s_19037 = GGS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_21) {
          var_s_19037 = GGS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_19239 (var_controllerBindingOptionDecoratedList_17115, EnumerationOrder::up) ;
          while (enumerator_19239.hasCurrentObject ()) {
            var_s_19037.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_19239.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 495)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 495)).add_operation (extensionGetter_swiftTypeName (enumerator_19239.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 495)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 495)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 495)) ;
            enumerator_19239.gotoNextObject () ;
          }
        }
        TC_Array <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15690.current_mBindingName (HERE).readProperty_location (), var_s_19037, fixItArray22  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 498)) ;
      }
    }
    if (kBoolFalse == test_20) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_19464 (var_controllerBindingOptionDecoratedList_17115, EnumerationOrder::up) ;
      cEnumerator_bindingOptionList enumerator_19561 (enumerator_15690.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
      while (enumerator_19464.hasCurrentObject () && enumerator_19561.hasCurrentObject ()) {
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::notEqual, enumerator_19464.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19561.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_23) {
            TC_Array <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_19561.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_19464.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 503)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 503)), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 503)) ;
          }
        }
        GGS_string var_optionValueAsString_19953 ;
        GGS_typeKindList temp_25 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)) ;
        temp_25.enterElement (GGS_typeKindList_2E_element::init_21_ (enumerator_19464.current_mOptionType (HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19561.current_mOptionValue (HERE).ptr (), temp_25, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_19953, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 505)) ;
        var_bindingOptionString_18911.plusAssign_operation(GGS_string (", ").add_operation (enumerator_19464.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 510)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 510)).add_operation (var_optionValueAsString_19953, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 510)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 510)) ;
        enumerator_19464.gotoNextObject () ;
        enumerator_19561.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (constinArgument_inOutletName, enumerator_15690.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_15839, var_bindingOptionString_18911, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 514)) ;
    }
    enumerator_15690.gotoNextObject () ;
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
  GGS_lstring var_node_703 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_computedPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_703, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 17)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_703, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("computed-property.ggs", 18)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_703, temp_5.readProperty_mComputedPropertyTypeName () COMMA_SOURCE_FILE ("computed-property.ggs", 19)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_977 (temp_6.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_977.hasCurrentObject ()) {
    switch (enumerator_977.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1061_propertyName_0 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1061_propertyName_0) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GGS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GGS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)).add_operation (extractedValue_1061_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)), extractedValue_1061_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1282_propertyName_0 ;
        GGS_lstring extractedValue_1296__1 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1282_propertyName_0, extractedValue_1296__1) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GGS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GGS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)).add_operation (extractedValue_1282_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)), extractedValue_1282_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1508_relationshipName_0 ;
        GGS_lstring extractedValue_1526__1 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1508_relationshipName_0, extractedValue_1526__1) ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GGS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GGS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)).add_operation (extractedValue_1508_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)), extractedValue_1508_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1738_relationshipName_0 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1738_relationshipName_0) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GGS_computedPropertyDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GGS_computedPropertyDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)).add_operation (extractedValue_1738_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)), extractedValue_1738_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 36)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_1996_propertyName_0 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_1996_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)).add_operation (extractedValue_1996_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)), extractedValue_1996_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 40)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2161_propertyName_0 ;
        GGS_lstring extractedValue_2175__1 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2161_propertyName_0, extractedValue_2175__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)).add_operation (extractedValue_2161_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)), extractedValue_2161_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 42)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2324_propertyName_0 ;
        GGS_lstring extractedValue_2338__1 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2324_propertyName_0, extractedValue_2338__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)).add_operation (extractedValue_2324_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)), extractedValue_2324_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 44)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2488_propertyName_0 ;
        GGS_lstring extractedValue_2502__1 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2488_propertyName_0, extractedValue_2502__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)).add_operation (extractedValue_2488_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)), extractedValue_2488_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 46)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2650_propertyName_0 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2650_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)).add_operation (extractedValue_2650_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)), extractedValue_2650_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 48)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2806_propertyName_0 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2806_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (extractedValue_2806_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)), extractedValue_2806_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 50)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_2968_propertyName_0 ;
        GGS_lstring extractedValue_2982__1 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_2968_propertyName_0, extractedValue_2982__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (extractedValue_2968_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)), extractedValue_2968_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 52)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3132_controllerName_0 ;
        GGS_lstring extractedValue_3155_propertyName_1 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3132_controllerName_0, extractedValue_3155_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)).add_operation (extractedValue_3132_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)), extractedValue_3132_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 54)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3334_controllerName_0 ;
        GGS_lstring extractedValue_3357_propertyName_1 ;
        GGS_lstring extractedValue_3378_secondaryPropertyName_2 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3334_controllerName_0, extractedValue_3357_propertyName_1, extractedValue_3378_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)).add_operation (extractedValue_3334_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)), extractedValue_3334_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 56)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3562_controllerName_0 ;
        GGS_lstring extractedValue_3585_propertyName_1 ;
        GGS_lstring extractedValue_3606_secondaryPropertyName_2 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3562_controllerName_0, extractedValue_3585_propertyName_1, extractedValue_3606_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)).add_operation (extractedValue_3562_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)), extractedValue_3562_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 58)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3788_controllerName_0 ;
        GGS_lstring extractedValue_3811_propertyName_1 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3788_controllerName_0, extractedValue_3811_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)).add_operation (extractedValue_3788_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)), extractedValue_3788_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 60)) ;
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
        GGS_lstring extractedValue_4079_superEntityName_0 ;
        GGS_lstring extractedValue_4105_propertyName_1 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4079_superEntityName_0, extractedValue_4105_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (extractedValue_4079_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)).add_operation (extractedValue_4105_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)), extractedValue_4105_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 65)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4277_superEntityName_0 ;
        GGS_lstring extractedValue_4303_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4317__2 ;
        enumerator_977.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4277_superEntityName_0, extractedValue_4303_propertyName_1, extractedValue_4317__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_703, GGS_lstring::init_21__21_ (extractedValue_4277_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)).add_operation (extractedValue_4303_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)), extractedValue_4303_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_977.gotoNextObject () ;
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
  cMapElement_classMap * objectArray_6415 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 130)) ;
  if (nullptr != objectArray_6415) {
    macroValidSharedObject (objectArray_6415, cMapElement_classMap) ;
    GGS_classKind var_classKind_6583 ;
    const GGS_computedPropertyDeclarationAST temp_1 = this ;
    GGS_propertyMap joker_6594_3 ; // Joker input parameter
    GGS_actionMap joker_6594_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_6594_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_6583, joker_6594_3, joker_6594_2, joker_6594_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 133)) ;
    switch (var_classKind_6583.enumValue ()) {
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
        GGS_typeKind extractedValue_6734_kind_0 ;
        var_classKind_6583.getAssociatedValuesFor_atomic (extractedValue_6734_kind_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_4 = this ;
        GGS_actionMap temp_5 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 141)) ;
        objectArray_6415->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6734_kind_0, GGS_propertyAccessibility::class_func_computed (SOURCE_FILE ("computed-property.ggs", 140))  COMMA_SOURCE_FILE ("computed-property.ggs", 140)), temp_5, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 138)) ;
        }
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_6924__0 ;
        var_classKind_6583.getAssociatedValuesFor_document (extractedValue_6924__0) ;
        const GGS_computedPropertyDeclarationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("computed-property.ggs", 145)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_7027__0 ;
        GGS_bool extractedValue_7027__1 ;
        GGS_bool extractedValue_7027__2 ;
        GGS_bool extractedValue_7027__3 ;
        var_classKind_6583.getAssociatedValuesFor_entity (extractedValue_7027__0, extractedValue_7027__1, extractedValue_7027__2, extractedValue_7027__3) ;
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
  GGS_classKind var_classKind_7606 ;
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_7617_3 ; // Joker input parameter
  GGS_actionMap joker_7617_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_7617_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_7606, joker_7617_3, joker_7617_2, joker_7617_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 161)) ;
  GGS_typeKind var_typeKind_7654 ;
  switch (var_classKind_7606.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_computedPropertyDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.ggs", 166)) ;
      var_typeKind_7654.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_7816_kind_0 ;
      var_classKind_7606.getAssociatedValuesFor_atomic (extractedValue_7816_kind_0) ;
      var_typeKind_7654 = extractedValue_7816_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7861__0 ;
      var_classKind_7606.getAssociatedValuesFor_document (extractedValue_7861__0) ;
      const GGS_computedPropertyDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.ggs", 170)) ;
      var_typeKind_7654.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7976__0 ;
      GGS_bool extractedValue_7976__1 ;
      GGS_bool extractedValue_7976__2 ;
      GGS_bool extractedValue_7976__3 ;
      var_classKind_7606.getAssociatedValuesFor_entity (extractedValue_7976__0, extractedValue_7976__1, extractedValue_7976__2, extractedValue_7976__3) ;
      const GGS_computedPropertyDeclarationAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 172)) ;
      var_typeKind_7654.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_8121 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GGS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GGS_propertyMap temp_9 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 177)) ;
      var_rootProperties_8121 = temp_9 ;
    }
  }
  if (kBoolFalse == test_7) {
    const GGS_computedPropertyDeclarationAST temp_10 = this ;
    GGS_classKind joker_8276 ; // Joker input parameter
    GGS_actionMap joker_8297_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_8297_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mRootEntityName (), joker_8276, var_rootProperties_8121, joker_8297_2, joker_8297_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 179)) ;
  }
  GGS_classKind var_currentClassKind_8401 ;
  GGS_propertyMap var_properties_8424 ;
  const GGS_computedPropertyDeclarationAST temp_11 = this ;
  GGS_actionMap joker_8436_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8436_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_11.readProperty_mClassName (), var_currentClassKind_8401, var_properties_8424, joker_8436_2, joker_8436_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 182)) ;
  GGS_transientDependencyListForGeneration temp_12 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 184)) ;
  GGS_transientDependencyListForGeneration var_dependencies_8516 = temp_12 ;
  const GGS_computedPropertyDeclarationAST temp_13 = this ;
  cEnumerator_observablePropertyList enumerator_8541 (temp_13.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_8541.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_8730 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_8765 ;
    GGS_string var_defaultValueAsString_8829 ;
    extensionMethod_analyzeObservableProperty (enumerator_8541.current_mObservableProperty (HERE), var_rootProperties_8121, ioArgument_ioSemanticContext, var_properties_8424, var_dependencyKind_8730, var_swiftTypeStringForTransientFunctionArgument_8765, var_defaultValueAsString_8829, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 186)) ;
    switch (var_dependencyKind_8730.enumValue ()) {
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
        GGS_lstring extractedValue_8979__0 ;
        GGS_bool extractedValue_8979__1 ;
        var_dependencyKind_8730.getAssociatedValuesFor_arrayController (extractedValue_8979__0, extractedValue_8979__1) ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8541.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 199)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("computed-property.ggs", 199)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_9099__0 ;
        var_dependencyKind_8730.getAssociatedValuesFor_selectionController (extractedValue_9099__0) ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8541.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 201)), GGS_string ("only an atomic property can be observed"), fixItArray15  COMMA_SOURCE_FILE ("computed-property.ggs", 201)) ;
      }
      break ;
    }
    {
    var_dependencies_8516.setter_append (enumerator_8541.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8541.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 205)), var_swiftTypeStringForTransientFunctionArgument_8765, var_defaultValueAsString_8829, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 203)) ;
    }
    enumerator_8541.gotoNextObject () ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_16 = this ;
  const GGS_computedPropertyDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7654, GGS_string ("computed"), var_dependencies_8516, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 210)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_18 = this ;
  const GGS_computedPropertyDeclarationAST temp_19 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_computeRoutineGeneration::init_21__21__21__21_ (temp_18.readProperty_mClassName ().readProperty_string (), temp_19.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7654, var_dependencies_8516, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 218)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_20 = this ;
  cMapElement_classMap * objectArray_9766 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_20.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 225)) ;
  if (nullptr != objectArray_9766) {
    macroValidSharedObject (objectArray_9766, cMapElement_classMap) ;
    GGS_bool var_generate_9868 ;
    switch (var_currentClassKind_8401.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        var_generate_9868 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_9963__0 ;
        var_currentClassKind_8401.getAssociatedValuesFor_document (extractedValue_9963__0) ;
        var_generate_9868 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_10007__0 ;
        var_currentClassKind_8401.getAssociatedValuesFor_atomic (extractedValue_10007__0) ;
        var_generate_9868 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_10051__0 ;
        GGS_bool extractedValue_10054_graphic_1 ;
        GGS_bool extractedValue_10064__2 ;
        GGS_bool extractedValue_10064__3 ;
        var_currentClassKind_8401.getAssociatedValuesFor_entity (extractedValue_10051__0, extractedValue_10054_graphic_1, extractedValue_10064__2, extractedValue_10064__3) ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = extractedValue_10054_graphic_1.boolEnum () ;
          if (kBoolTrue == test_21) {
            const GGS_computedPropertyDeclarationAST temp_22 = this ;
            const GGS_computedPropertyDeclarationAST temp_23 = this ;
            var_generate_9868 = GGS_bool (ComparisonKind::notEqual, temp_22.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_23.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.ggs", 238)) ;
          }
        }
        if (kBoolFalse == test_21) {
          var_generate_9868 = GGS_bool (true) ;
        }
      }
      break ;
    }
    {
    const GGS_computedPropertyDeclarationAST temp_24 = this ;
    const GGS_computedPropertyDeclarationAST temp_25 = this ;
    objectArray_9766->mProperty_mPropertyGenerationList.setter_append (GGS_computedPropertyGeneration::init_21__21__21__21__21_ (temp_24.readProperty_mComputedPropertyName ().readProperty_string (), temp_25.readProperty_mClassName ().readProperty_string (), var_typeKind_7654, var_dependencies_8516, var_generate_9868, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 243)) ;
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
  GGS_string var_prefix_16426 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_computedPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 372)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_computedPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16553 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)) ;
      const GGS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GGS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 374)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16553.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GGS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16426, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 376)) ;
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
        result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16426, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 383)) ;
        const GGS_computedPropertyGeneration temp_12 = this ;
        const GGS_computedPropertyGeneration temp_13 = this ;
        const GGS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 384)) ;
      }
      result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 386)) ;
      const GGS_computedPropertyGeneration temp_15 = this ;
      const GGS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16426, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GGS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 387)) ;
      const GGS_computedPropertyGeneration temp_17 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17559 (temp_17.readProperty_mDependencyList (), EnumerationOrder::up) ;
      while (enumerator_17559.hasCurrentObject ()) {
        GGS_string var_s_17599 = extensionGetter_generateAddObserverCall (enumerator_17559.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 389)) ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::notEqual, var_s_17599.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GGS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_s_17599, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (var_prefix_16426, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 391)) ;
          }
        }
        enumerator_17559.gotoNextObject () ;
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
      GGS_string var_s_18598 = GGS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.ggs", 415))) ;
      const GGS_computeRoutineGeneration temp_5 = this ;
      const GGS_computeRoutineGeneration temp_6 = this ;
      GGS_string var_fileName_18762 = GGS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_18762, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 421)) ;
      }
      GGS_string var_header_18892 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 422)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 422)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 422)) ;
      var_header_18892.plusAssign_operation(GGS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 423)) ;
      var_header_18892.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 424)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 424)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 424)) ;
      var_header_18892.plusAssign_operation(GGS_string ("import AppKit\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 425)) ;
      var_header_18892.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 426)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 426)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 426)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 426)) ;
      GGS_string var_generatedZone_33__19262 = GGS_string ("  }\n\n") ;
      var_generatedZone_33__19262.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 428)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 428)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 428)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 428)) ;
      var_generatedZone_33__19262.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 429)) ;
      var_generatedZone_33__19262.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 430)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 430)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 430)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 430)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_18762, GGS_string ("//"), var_header_18892, GGS_string ("\n\n"), var_s_18598, GGS_string ("\n"), var_generatedZone_33__19262, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)) ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func compute_") ;
  result.appendString (in_COMPUTED_5F_PROPERTY_5F_NAME.stringValue ()) ;
  result.appendString ("_property (_ inValue : ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("compute-property-function.swift.galgasTemplate", 7)).stringValue ()) ;
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
  GGS_lstring var_node_685 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_transientDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_685, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 17)) ;
  }
  {
  const GGS_transientDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_685, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("transient-property.ggs", 18)) ;
  }
  {
  const GGS_transientDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_685, temp_5.readProperty_mTransientTypeName () COMMA_SOURCE_FILE ("transient-property.ggs", 19)) ;
  }
  const GGS_transientDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_938 (temp_6.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_938.hasCurrentObject ()) {
    switch (enumerator_938.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1022_propertyName_0 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1022_propertyName_0) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GGS_transientDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GGS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)).add_operation (extractedValue_1022_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)), extractedValue_1022_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1243_propertyName_0 ;
        GGS_lstring extractedValue_1257__1 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1243_propertyName_0, extractedValue_1257__1) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GGS_transientDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GGS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)).add_operation (extractedValue_1243_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)), extractedValue_1243_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1469_relationshipName_0 ;
        GGS_lstring extractedValue_1487__1 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1469_relationshipName_0, extractedValue_1487__1) ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GGS_transientDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GGS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)).add_operation (extractedValue_1469_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)), extractedValue_1469_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1699_relationshipName_0 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1699_relationshipName_0) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GGS_transientDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GGS_transientDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)).add_operation (extractedValue_1699_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)), extractedValue_1699_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 36)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_1957_propertyName_0 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_1957_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)).add_operation (extractedValue_1957_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)), extractedValue_1957_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 40)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2122_propertyName_0 ;
        GGS_lstring extractedValue_2136__1 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2122_propertyName_0, extractedValue_2136__1) ;
        {
        const GGS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)).add_operation (extractedValue_2122_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)), extractedValue_2122_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 42)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2285_propertyName_0 ;
        GGS_lstring extractedValue_2299__1 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2285_propertyName_0, extractedValue_2299__1) ;
        {
        const GGS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)).add_operation (extractedValue_2285_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)), extractedValue_2285_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 44)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2449_propertyName_0 ;
        GGS_lstring extractedValue_2463__1 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2449_propertyName_0, extractedValue_2463__1) ;
        {
        const GGS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)).add_operation (extractedValue_2449_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)), extractedValue_2449_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 46)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2611_propertyName_0 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2611_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)).add_operation (extractedValue_2611_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)), extractedValue_2611_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 48)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2767_propertyName_0 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2767_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (extractedValue_2767_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)), extractedValue_2767_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 50)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_2929_propertyName_0 ;
        GGS_lstring extractedValue_2943__1 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_2929_propertyName_0, extractedValue_2943__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (extractedValue_2929_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)), extractedValue_2929_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 52)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3093_controllerName_0 ;
        GGS_lstring extractedValue_3116_propertyName_1 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3093_controllerName_0, extractedValue_3116_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)).add_operation (extractedValue_3093_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)), extractedValue_3093_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 54)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3295_controllerName_0 ;
        GGS_lstring extractedValue_3318_propertyName_1 ;
        GGS_lstring extractedValue_3339_secondaryPropertyName_2 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3295_controllerName_0, extractedValue_3318_propertyName_1, extractedValue_3339_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)).add_operation (extractedValue_3295_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)), extractedValue_3295_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 56)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3523_controllerName_0 ;
        GGS_lstring extractedValue_3546_propertyName_1 ;
        GGS_lstring extractedValue_3567_secondaryPropertyName_2 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3523_controllerName_0, extractedValue_3546_propertyName_1, extractedValue_3567_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)).add_operation (extractedValue_3523_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)), extractedValue_3523_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 58)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3749_controllerName_0 ;
        GGS_lstring extractedValue_3772_propertyName_1 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3749_controllerName_0, extractedValue_3772_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)).add_operation (extractedValue_3749_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)), extractedValue_3749_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 60)) ;
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
        GGS_lstring extractedValue_4040_superEntityName_0 ;
        GGS_lstring extractedValue_4066_propertyName_1 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4040_superEntityName_0, extractedValue_4066_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (extractedValue_4040_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)).add_operation (extractedValue_4066_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)), extractedValue_4066_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 65)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4238_superEntityName_0 ;
        GGS_lstring extractedValue_4264_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4278__2 ;
        enumerator_938.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4238_superEntityName_0, extractedValue_4264_propertyName_1, extractedValue_4278__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_685, GGS_lstring::init_21__21_ (extractedValue_4238_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)).add_operation (extractedValue_4264_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)), extractedValue_4264_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_938.gotoNextObject () ;
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
  cMapElement_classMap * objectArray_6941 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 153)) ;
  if (nullptr != objectArray_6941) {
    macroValidSharedObject (objectArray_6941, cMapElement_classMap) ;
    GGS_classKind var_classKind_7102 ;
    const GGS_transientDeclarationAST temp_1 = this ;
    GGS_propertyMap joker_7113_3 ; // Joker input parameter
    GGS_actionMap joker_7113_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_7113_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7102, joker_7113_3, joker_7113_2, joker_7113_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 156)) ;
    switch (var_classKind_7102.enumValue ()) {
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
        GGS_typeKind extractedValue_7246_kind_0 ;
        var_classKind_7102.getAssociatedValuesFor_atomic (extractedValue_7246_kind_0) ;
        {
        const GGS_transientDeclarationAST temp_4 = this ;
        const GGS_transientDeclarationAST temp_5 = this ;
        GGS_actionMap temp_6 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 164)) ;
        const GGS_transientDeclarationAST temp_7 = this ;
        objectArray_6941->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GGS_propertyKind::class_func_property (extractedValue_7246_kind_0, GGS_propertyAccessibility::class_func_transient (GGS_bool (ComparisonKind::equal, temp_5.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 163)).objectCompare (GGS_uint (uint32_t (0U))))  COMMA_SOURCE_FILE ("transient-property.ggs", 163))  COMMA_SOURCE_FILE ("transient-property.ggs", 163)), temp_6, temp_7.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 161)) ;
        }
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_7490__0 ;
        var_classKind_7102.getAssociatedValuesFor_document (extractedValue_7490__0) ;
        const GGS_transientDeclarationAST temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("transient-property.ggs", 168)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_7586__0 ;
        GGS_bool extractedValue_7586__1 ;
        GGS_bool extractedValue_7586__2 ;
        GGS_bool extractedValue_7586__3 ;
        var_classKind_7102.getAssociatedValuesFor_entity (extractedValue_7586__0, extractedValue_7586__1, extractedValue_7586__2, extractedValue_7586__3) ;
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
  GGS_classKind var_classKind_8144 ;
  const GGS_transientDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_8155_3 ; // Joker input parameter
  GGS_actionMap joker_8155_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8155_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8144, joker_8155_3, joker_8155_2, joker_8155_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 183)) ;
  GGS_typeKind var_typeKind_8192 ;
  switch (var_classKind_8144.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_transientDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.ggs", 188)) ;
      var_typeKind_8192.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_8347_kind_0 ;
      var_classKind_8144.getAssociatedValuesFor_atomic (extractedValue_8347_kind_0) ;
      var_typeKind_8192 = extractedValue_8347_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_8392__0 ;
      var_classKind_8144.getAssociatedValuesFor_document (extractedValue_8392__0) ;
      const GGS_transientDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.ggs", 192)) ;
      var_typeKind_8192.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_8500__0 ;
      GGS_bool extractedValue_8500__1 ;
      GGS_bool extractedValue_8500__2 ;
      GGS_bool extractedValue_8500__3 ;
      var_classKind_8144.getAssociatedValuesFor_entity (extractedValue_8500__0, extractedValue_8500__1, extractedValue_8500__2, extractedValue_8500__3) ;
      const GGS_transientDeclarationAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.ggs", 194)) ;
      var_typeKind_8192.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_8638 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GGS_transientDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GGS_propertyMap temp_9 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 199)) ;
      var_rootProperties_8638 = temp_9 ;
    }
  }
  if (kBoolFalse == test_7) {
    const GGS_transientDeclarationAST temp_10 = this ;
    GGS_classKind joker_8793 ; // Joker input parameter
    GGS_actionMap joker_8814_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_8814_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mRootEntityName (), joker_8793, var_rootProperties_8638, joker_8814_2, joker_8814_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 201)) ;
  }
  GGS_classKind var_currentClassKind_8918 ;
  GGS_propertyMap var_properties_8941 ;
  const GGS_transientDeclarationAST temp_11 = this ;
  GGS_actionMap joker_8953_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8953_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_11.readProperty_mClassName (), var_currentClassKind_8918, var_properties_8941, joker_8953_2, joker_8953_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 204)) ;
  GGS_transientDependencyListForGeneration temp_12 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 206)) ;
  GGS_transientDependencyListForGeneration var_dependencies_9033 = temp_12 ;
  const GGS_transientDeclarationAST temp_13 = this ;
  cEnumerator_observablePropertyList enumerator_9058 (temp_13.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_9058.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_9247 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_9282 ;
    GGS_string var_defaultValueAsString_9346 ;
    extensionMethod_analyzeObservableProperty (enumerator_9058.current_mObservableProperty (HERE), var_rootProperties_8638, ioArgument_ioSemanticContext, var_properties_8941, var_dependencyKind_9247, var_swiftTypeStringForTransientFunctionArgument_9282, var_defaultValueAsString_9346, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 208)) ;
    switch (var_dependencyKind_9247.enumValue ()) {
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
        GGS_lstring extractedValue_9564__0 ;
        GGS_bool extractedValue_9564__1 ;
        var_dependencyKind_9247.getAssociatedValuesFor_arrayController (extractedValue_9564__0, extractedValue_9564__1) ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9058.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 222)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("transient-property.ggs", 222)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_9684__0 ;
        var_dependencyKind_9247.getAssociatedValuesFor_selectionController (extractedValue_9684__0) ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9058.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 224)), GGS_string ("only an atomic property can be observed"), fixItArray15  COMMA_SOURCE_FILE ("transient-property.ggs", 224)) ;
      }
      break ;
    }
    {
    var_dependencies_9033.setter_append (enumerator_9058.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9058.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 228)), var_swiftTypeStringForTransientFunctionArgument_9282, var_defaultValueAsString_9346, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 226)) ;
    }
    enumerator_9058.gotoNextObject () ;
  }
  {
  const GGS_transientDeclarationAST temp_16 = this ;
  const GGS_transientDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mTransientName ().readProperty_string (), var_typeKind_8192, GGS_string ("transient"), var_dependencies_9033, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 233)) ;
  }
  const GGS_transientDeclarationAST temp_18 = this ;
  cMapElement_classMap * objectArray_10173 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_18.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 241)) ;
  if (nullptr != objectArray_10173) {
    macroValidSharedObject (objectArray_10173, cMapElement_classMap) ;
    GGS_bool var_generate_10275 ;
    switch (var_currentClassKind_8918.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        var_generate_10275 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_10370__0 ;
        var_currentClassKind_8918.getAssociatedValuesFor_document (extractedValue_10370__0) ;
        var_generate_10275 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_10414__0 ;
        var_currentClassKind_8918.getAssociatedValuesFor_atomic (extractedValue_10414__0) ;
        var_generate_10275 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_10458__0 ;
        GGS_bool extractedValue_10461_graphic_1 ;
        GGS_bool extractedValue_10471__2 ;
        GGS_bool extractedValue_10471__3 ;
        var_currentClassKind_8918.getAssociatedValuesFor_entity (extractedValue_10458__0, extractedValue_10461_graphic_1, extractedValue_10471__2, extractedValue_10471__3) ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extractedValue_10461_graphic_1.boolEnum () ;
          if (kBoolTrue == test_19) {
            const GGS_transientDeclarationAST temp_20 = this ;
            const GGS_transientDeclarationAST temp_21 = this ;
            var_generate_10275 = GGS_bool (ComparisonKind::notEqual, temp_20.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.ggs", 254)) ;
          }
        }
        if (kBoolFalse == test_19) {
          var_generate_10275 = GGS_bool (true) ;
        }
      }
      break ;
    }
    {
    const GGS_transientDeclarationAST temp_22 = this ;
    const GGS_transientDeclarationAST temp_23 = this ;
    objectArray_10173->mProperty_mPropertyGenerationList.setter_append (GGS_transientPropertyGeneration::init_21__21__21__21__21_ (temp_22.readProperty_mTransientName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), var_typeKind_8192, var_dependencies_9033, var_generate_10275, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 259)) ;
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
  GGS_string var_prefix_16079 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_transientPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 377)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_transientPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16206 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 378)) ;
      const GGS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GGS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 379)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16206.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GGS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16079, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 381)) ;
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
        result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16079, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 388)) ;
        const GGS_transientPropertyGeneration temp_12 = this ;
        const GGS_transientPropertyGeneration temp_13 = this ;
        const GGS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 389)) ;
      }
      result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 391)) ;
      const GGS_transientPropertyGeneration temp_15 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17049 (temp_15.readProperty_mDependencyList (), EnumerationOrder::up) ;
      while (enumerator_17049.hasCurrentObject ()) {
        GGS_string var_s_17089 = extensionGetter_generateAddObserverCall (enumerator_17049.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 393)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GGS_bool (ComparisonKind::notEqual, var_s_17089.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GGS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_s_17089, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (var_prefix_16079, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 395)) ;
          }
        }
        enumerator_17049.gotoNextObject () ;
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
      GGS_string var_s_27978 = GGS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mDependencyList (), temp_5.readProperty_mTransientType (), temp_6.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.ggs", 604))) ;
      GGS_string var_header_28205 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 611)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 613)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 614)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 615)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 615)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 615)) ;
      const GGS_transientRoutineGeneration temp_7 = this ;
      const GGS_transientRoutineGeneration temp_8 = this ;
      const GGS_transientRoutineGeneration temp_9 = this ;
      GGS_string var_fileName_28546 = temp_7.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (temp_8.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (temp_9.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_28546, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 617)) ;
      }
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_28546, GGS_string ("//"), var_header_28205, GGS_string ("\n\n"), var_s_27978, GGS_string ("\n"), GGS_string ("}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 626)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 626)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 626)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 618)) ;
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
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func ") ;
  result.appendString (in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TRANSIENT_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_269_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    cEnumerator_transientDependencyListForGeneration enumerator_269 (in_DEPENDENCY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_269.hasCurrentObject ()) {
      result.appendString ("\n       _ ") ;
      result.appendString (enumerator_269.current_mFunctionArgumentName (HERE).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_269.current_mFunctionArgumentTypeString (HERE).stringValue ()) ;
      if (enumerator_269.hasNextObject ()) {
        result.appendString (",") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_269_.increment () ;
      enumerator_269.gotoNextObject () ;
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
  GGS_lstring var_node_830 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_proxyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_830, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 24)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_830, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("proxy.ggs", 25)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_830, temp_5.readProperty_mProxyTypeName () COMMA_SOURCE_FILE ("proxy.ggs", 26)) ;
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
  cMapElement_classMap * objectArray_3033 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 88)) ;
  if (nullptr != objectArray_3033) {
    macroValidSharedObject (objectArray_3033, cMapElement_classMap) ;
    GGS_classKind var_proxyKind_3190 ;
    const GGS_proxyDeclarationAST temp_1 = this ;
    GGS_propertyMap joker_3201_3 ; // Joker input parameter
    GGS_actionMap joker_3201_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_3201_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mProxyTypeName (), var_proxyKind_3190, joker_3201_3, joker_3201_2, joker_3201_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 91)) ;
    switch (var_proxyKind_3190.enumValue ()) {
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
        GGS_string extractedValue_3329__0 ;
        GGS_bool extractedValue_3338_isGraphic_1 ;
        GGS_bool extractedValue_3350__2 ;
        GGS_bool extractedValue_3350__3 ;
        var_proxyKind_3190.getAssociatedValuesFor_entity (extractedValue_3329__0, extractedValue_3338_isGraphic_1, extractedValue_3350__2, extractedValue_3350__3) ;
        const GGS_proxyDeclarationAST temp_4 = this ;
        switch (temp_4.readProperty_mProxyKind ().enumValue ()) {
        case GGS_proxyKind::Enumeration::invalid:
          break ;
        case GGS_proxyKind::Enumeration::enum_toManyProxy:
          {
            const GGS_proxyDeclarationAST temp_5 = this ;
            GGS_propertyKind var_k_3420 = GGS_propertyKind::class_func_toMany (temp_5.readProperty_mProxyTypeName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 100)), extractedValue_3338_isGraphic_1, GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("proxy.ggs", 102))  COMMA_SOURCE_FILE ("proxy.ggs", 98)) ;
            {
            const GGS_proxyDeclarationAST temp_6 = this ;
            GGS_actionMap temp_7 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 104)) ;
            objectArray_3033->mProperty_mPropertyMap.setter_insertKey (temp_6.readProperty_mProxyName (), var_k_3420, temp_7, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 104)) ;
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
        GGS_lstring extractedValue_3771__0 ;
        var_proxyKind_3190.getAssociatedValuesFor_document (extractedValue_3771__0) ;
        const GGS_proxyDeclarationAST temp_10 = this ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("an atomic type is required here"), fixItArray11  COMMA_SOURCE_FILE ("proxy.ggs", 109)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_3861_type_0 ;
        var_proxyKind_3190.getAssociatedValuesFor_atomic (extractedValue_3861_type_0) ;
        {
        const GGS_proxyDeclarationAST temp_12 = this ;
        GGS_actionMap temp_13 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 111)) ;
        objectArray_3033->mProperty_mPropertyMap.setter_insertKey (temp_12.readProperty_mProxyName (), GGS_propertyKind::class_func_property (extractedValue_3861_type_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 111))  COMMA_SOURCE_FILE ("proxy.ggs", 111)), temp_13, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 111)) ;
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
  cMapElement_classMap * objectArray_4284 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 120)) ;
  if (nullptr != objectArray_4284) {
    macroValidSharedObject (objectArray_4284, cMapElement_classMap) ;
    GGS_propertyKind var_relationshipKind_4434 ;
    const GGS_proxyDeclarationAST temp_1 = this ;
    GGS_actionMap joker_4452_2 ; // Joker input parameter
    GGS_bool joker_4452_1 ; // Joker input parameter
    objectArray_4284->mProperty_mPropertyMap.method_searchKey (temp_1.readProperty_mToOneRelationshipName (), var_relationshipKind_4434, joker_4452_2, joker_4452_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 123)) ;
    switch (var_relationshipKind_4434.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_4512__0 ;
        GGS_bool extractedValue_4512__1 ;
        var_relationshipKind_4434.getAssociatedValuesFor_arrayController (extractedValue_4512__0, extractedValue_4512__1) ;
        const GGS_proxyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 126)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_4629__0 ;
        var_relationshipKind_4434.getAssociatedValuesFor_selectionController (extractedValue_4629__0) ;
        const GGS_proxyDeclarationAST temp_4 = this ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.ggs", 128)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      {
        GGS_typeKind extractedValue_4736__0 ;
        GGS_propertyAccessibility extractedValue_4736__1 ;
        var_relationshipKind_4434.getAssociatedValuesFor_property (extractedValue_4736__0, extractedValue_4736__1) ;
        const GGS_proxyDeclarationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.ggs", 130)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      {
        GGS_lstring extractedValue_4841__0 ;
        GGS_propertyAccessibility extractedValue_4841__1 ;
        GGS_bool extractedValue_4841__2 ;
        GGS_toManyRelationshipOptionAST extractedValue_4841__3 ;
        var_relationshipKind_4434.getAssociatedValuesFor_toMany (extractedValue_4841__0, extractedValue_4841__1, extractedValue_4841__2, extractedValue_4841__3) ;
        const GGS_proxyDeclarationAST temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.ggs", 132)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      {
        GGS_lstring extractedValue_4944_toOneTypeName_0 ;
        GGS_propertyAccessibility extractedValue_4960__1 ;
        GGS_bool extractedValue_4960__2 ;
        GGS_toOneOppositeRelationship extractedValue_4960__3 ;
        GGS_bool extractedValue_4960__4 ;
        var_relationshipKind_4434.getAssociatedValuesFor_toOne (extractedValue_4944_toOneTypeName_0, extractedValue_4960__1, extractedValue_4960__2, extractedValue_4960__3, extractedValue_4960__4) ;
        GGS_propertyMap var_propertyMap_5034 ;
        GGS_classKind joker_5025 ; // Joker input parameter
        GGS_actionMap joker_5047_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_5047_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_4944_toOneTypeName_0, joker_5025, var_propertyMap_5034, joker_5047_2, joker_5047_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 134)) ;
        GGS_propertyKind var_propertyKind_5106 ;
        const GGS_proxyDeclarationAST temp_10 = this ;
        GGS_actionMap joker_5120_2 ; // Joker input parameter
        GGS_bool joker_5120_1 ; // Joker input parameter
        var_propertyMap_5034.method_searchKey (temp_10.readProperty_mPropertyName (), var_propertyKind_5106, joker_5120_2, joker_5120_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 135)) ;
        switch (var_propertyKind_5106.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_5172_propertyType_0 ;
            GGS_propertyAccessibility extractedValue_5187__1 ;
            var_propertyKind_5106.getAssociatedValuesFor_property (extractedValue_5172_propertyType_0, extractedValue_5187__1) ;
            {
            const GGS_proxyDeclarationAST temp_11 = this ;
            const GGS_proxyDeclarationAST temp_12 = this ;
            const GGS_proxyDeclarationAST temp_13 = this ;
            const GGS_proxyDeclarationAST temp_14 = this ;
            objectArray_4284->mProperty_mPropertyGenerationList.setter_append (GGS_atomicProxyGeneration::init_21__21__21__21__21_ (temp_11.readProperty_mProxyName ().readProperty_string (), temp_12.readProperty_mProxyKind (), extractedValue_5172_propertyType_0, temp_13.readProperty_mToOneRelationshipName ().readProperty_string (), temp_14.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 138)) ;
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
            GGS_lstring extractedValue_5594_toManyTypeName_0 ;
            GGS_propertyAccessibility extractedValue_5611__1 ;
            GGS_bool extractedValue_5611__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_5611__3 ;
            var_propertyKind_5106.getAssociatedValuesFor_toMany (extractedValue_5594_toManyTypeName_0, extractedValue_5611__1, extractedValue_5611__2, extractedValue_5611__3) ;
            GGS_classKind joker_5679_4 ; // Joker input parameter
            GGS_propertyMap joker_5679_3 ; // Joker input parameter
            GGS_actionMap joker_5679_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_5679_1 ; // Joker input parameter
            ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5594_toManyTypeName_0, joker_5679_4, joker_5679_3, joker_5679_2, joker_5679_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 150)) ;
            {
            const GGS_proxyDeclarationAST temp_19 = this ;
            const GGS_proxyDeclarationAST temp_20 = this ;
            const GGS_proxyDeclarationAST temp_21 = this ;
            const GGS_proxyDeclarationAST temp_22 = this ;
            objectArray_4284->mProperty_mPropertyGenerationList.setter_append (GGS_toManyProxyGeneration::init_21__21__21__21__21_ (temp_19.readProperty_mProxyName ().readProperty_string (), temp_20.readProperty_mProxyKind (), extractedValue_5594_toManyTypeName_0.readProperty_string (), temp_21.readProperty_mToOneRelationshipName ().readProperty_string (), temp_22.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 151)) ;
            }
            {
            ioArgument_ioGeneration.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.setter_insert (extractedValue_5594_toManyTypeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 159)) ;
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
            GGS_lstring extractedValue_6162__0 ;
            GGS_propertyAccessibility extractedValue_6162__1 ;
            GGS_bool extractedValue_6162__2 ;
            GGS_toOneOppositeRelationship extractedValue_6162__3 ;
            GGS_bool extractedValue_6162__4 ;
            var_propertyKind_5106.getAssociatedValuesFor_toOne (extractedValue_6162__0, extractedValue_6162__1, extractedValue_6162__2, extractedValue_6162__3, extractedValue_6162__4) ;
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
            GGS_lstring extractedValue_6444__0 ;
            GGS_bool extractedValue_6444__1 ;
            var_propertyKind_5106.getAssociatedValuesFor_arrayController (extractedValue_6444__0, extractedValue_6444__1) ;
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
            GGS_string extractedValue_6729__0 ;
            var_propertyKind_5106.getAssociatedValuesFor_selectionController (extractedValue_6729__0) ;
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
  const GGS_toManyProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GGS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (temp_3.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 238)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 239)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 239)) ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("  var ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (temp_5.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 240)) ;
  result_result.plusAssign_operation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 241)) ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GGS_string ("      switch self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 242)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 242)) ;
  result_result.plusAssign_operation(GGS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 243)) ;
  result_result.plusAssign_operation(GGS_string ("        return EBReferenceArray ()\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 244)) ;
  result_result.plusAssign_operation(GGS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 245)) ;
  result_result.plusAssign_operation(GGS_string ("        return EBReferenceArray (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 246)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 247)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 248)) ;
  result_result.plusAssign_operation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 249)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 250)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 250)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 250)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 251)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 252)) ;
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
  result_result = GGS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 258)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 258)) ;
  result_result.plusAssign_operation(GGS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 259)) ;
  result_result.plusAssign_operation(GGS_string ("      let controller = EBObservablePropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 260)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GGS_string ("        observedObjects: [self.").add_operation (temp_1.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)).add_operation (GGS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 261)) ;
  result_result.plusAssign_operation(GGS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 262)) ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("          if let me = self, let model = me.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 263)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 263)) ;
  const GGS_toManyProxyGeneration temp_3 = this ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("            me.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (GGS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 264)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 265)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 266)) ;
  result_result.plusAssign_operation(GGS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 267)) ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_5.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)).add_operation (temp_6.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)).add_operation (GGS_string ("_StartsBeingObserved (by: controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 268)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)).add_operation (GGS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 269)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 270)) ;
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
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 293)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 293)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 293)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 294)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 295)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 295)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 296)) ;
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
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 308)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 309)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 310)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 311)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 312)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 313)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 314)) ;
  result_result.plusAssign_operation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 315)) ;
  result_result.plusAssign_operation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 316)) ;
  result_result.plusAssign_operation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 317)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 318)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 319)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 319)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 319)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 319)) ;
  result_result.plusAssign_operation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 320)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 321)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 322)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 322)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 322)) ;
  result_result.plusAssign_operation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 323)) ;
  result_result.plusAssign_operation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 324)) ;
  result_result.plusAssign_operation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 325)) ;
  result_result.plusAssign_operation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 326)) ;
  result_result.plusAssign_operation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 327)) ;
  result_result.plusAssign_operation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 328)) ;
  result_result.plusAssign_operation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 329)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 330)) ;
  result_result.plusAssign_operation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 331)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 332)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 333)) ;
  result_result.plusAssign_operation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 334)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 335)) ;
  result_result.plusAssign_operation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 336)) ;
  result_result.plusAssign_operation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 337)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 338)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 339)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 340)) ;
  result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 341)) ;
  result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 342)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 343)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 344)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 346)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 347)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 348)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 349)) ;
  result_result.plusAssign_operation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 350)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 351)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 352)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 353)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 353)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 354)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 355)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 356)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 357)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 358)) ;
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
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 368)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 368)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 368)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 369)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 370)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 371)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 372)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("  var ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 373)) ;
  result_result.plusAssign_operation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 374)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("      return self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 375)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 375)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 375)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 376)) ;
  result_result.plusAssign_operation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 377)) ;
  result_result.plusAssign_operation(GGS_string ("      if let unwrappedNewValue = newValue {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 378)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GGS_string ("        self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 379)).add_operation (GGS_string ("_property.setProp (unwrappedNewValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 379)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 380)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 381)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 382)) ;
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
  result_result = GGS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 389)) ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("      if let object = self\?.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)).add_operation (GGS_string ("_property {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 390)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("        switch object.").add_operation (temp_3.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 391)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 392)) ;
  result_result.plusAssign_operation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 393)) ;
  result_result.plusAssign_operation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 394)) ;
  result_result.plusAssign_operation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 395)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let optionalV) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 396)) ;
  result_result.plusAssign_operation(GGS_string ("          if let v = optionalV {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 397)) ;
  result_result.plusAssign_operation(GGS_string ("            return .single (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 398)) ;
  result_result.plusAssign_operation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 399)) ;
  result_result.plusAssign_operation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 400)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 401)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 402)) ;
  result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 403)) ;
  result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 404)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 405)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 406)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 407)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("      self\?.").add_operation (temp_6.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GGS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (temp_7.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 408)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 409)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  const GGS_atomicProxyGeneration temp_9 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_8.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 410)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 410)).add_operation (temp_9.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 410)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 410)) ;
  const GGS_atomicProxyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GGS_string ("_property.startsBeingObserved (by: self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 411)) ;
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
  GGS_lstring var_node_1082 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1082, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 27)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1082, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 28)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1082, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 29)) ;
  }
  const GGS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1082, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 30)) ;
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
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 36)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 36)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
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
  cMapElement_classMap * objectArray_6097 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 159)) ;
  if (nullptr != objectArray_6097) {
    macroValidSharedObject (objectArray_6097, cMapElement_classMap) ;
    GGS_classKind var_classKind_6257 ;
    const GGS_atomicPropertyDeclarationAST temp_1 = this ;
    GGS_propertyMap joker_6268_3 ; // Joker input parameter
    GGS_actionMap joker_6268_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_6268_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_6257, joker_6268_3, joker_6268_2, joker_6268_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 162)) ;
    GGS_propertyMap var_preferencesPropertyMap_6382 ;
    GGS_classKind joker_6367 ; // Joker input parameter
    GGS_actionMap joker_6412_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_6412_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 164)), GGS_location::class_func_nowhere (SOURCE_FILE ("simple-stored-property.ggs", 164)), inCompiler COMMA_HERE), joker_6367, var_preferencesPropertyMap_6382, joker_6412_2, joker_6412_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 163)) ;
    switch (var_classKind_6257.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        const GGS_atomicPropertyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 171)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_6549_kind_0 ;
        var_classKind_6257.getAssociatedValuesFor_atomic (extractedValue_6549_kind_0) ;
        {
        const GGS_atomicPropertyDeclarationAST temp_4 = this ;
        GGS_actionMap temp_5 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 173)) ;
        objectArray_6097->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6549_kind_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("simple-stored-property.ggs", 173))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 173)), temp_5, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 173)) ;
        }
        GGS_string var_swiftDefaultValueAsString_6804 ;
        const GGS_atomicPropertyDeclarationAST temp_6 = this ;
        GGS_typeKindList temp_7 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 175)) ;
        temp_7.enterElement (GGS_typeKindList_2E_element::init_21_ (extractedValue_6549_kind_0, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 175)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), temp_7, var_preferencesPropertyMap_6382, var_swiftDefaultValueAsString_6804, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 175)) ;
        {
        const GGS_atomicPropertyDeclarationAST temp_8 = this ;
        const GGS_atomicPropertyDeclarationAST temp_9 = this ;
        const GGS_atomicPropertyDeclarationAST temp_10 = this ;
        const GGS_atomicPropertyDeclarationAST temp_11 = this ;
        const GGS_atomicPropertyDeclarationAST temp_12 = this ;
        const GGS_atomicPropertyDeclarationAST temp_13 = this ;
        objectArray_6097->mProperty_mPropertyGenerationList.setter_append (GGS_atomicPropertyGeneration::init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (temp_8.readProperty_mPropertyName ().readProperty_string (), temp_9.readProperty_generateResetMethod (), temp_10.readProperty_generateDirectRead (), temp_11.readProperty_generateDirectAccess (), temp_12.readProperty_standalone (), extractedValue_6549_kind_0, GGS_bool (false), var_swiftDefaultValueAsString_6804, GGS_bool (ComparisonKind::equal, temp_13.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)))), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 177)) ;
        }
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_7317__0 ;
        var_classKind_6257.getAssociatedValuesFor_document (extractedValue_7317__0) ;
        const GGS_atomicPropertyDeclarationAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray15  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 190)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_7412__0 ;
        GGS_bool extractedValue_7412__1 ;
        GGS_bool extractedValue_7412__2 ;
        GGS_bool extractedValue_7412__3 ;
        var_classKind_6257.getAssociatedValuesFor_entity (extractedValue_7412__0, extractedValue_7412__1, extractedValue_7412__2, extractedValue_7412__3) ;
        const GGS_atomicPropertyDeclarationAST temp_16 = this ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray17  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)) ;
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
  result_result = GGS_string ("@MainActor let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)) ;
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
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)) ;
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
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)) ;
  const GGS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 240)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 241)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)) ;
  result_result.plusAssign_operation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)) ;
  result_result.plusAssign_operation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)) ;
  result_result.plusAssign_operation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)) ;
  const GGS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)) ;
  result_result.plusAssign_operation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 248)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 249)) ;
  const GGS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)) ;
  result_result.plusAssign_operation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 251)) ;
  result_result.plusAssign_operation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 252)) ;
  result_result.plusAssign_operation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 253)) ;
  result_result.plusAssign_operation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 254)) ;
  result_result.plusAssign_operation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 255)) ;
  result_result.plusAssign_operation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 256)) ;
  result_result.plusAssign_operation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 257)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 258)) ;
  result_result.plusAssign_operation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)) ;
  result_result.plusAssign_operation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)) ;
  result_result.plusAssign_operation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)) ;
  result_result.plusAssign_operation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 267)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)) ;
  result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 269)) ;
  result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 272)) ;
  const GGS_atomicPropertyGeneration temp_6 = this ;
  const GGS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 276)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)) ;
  result_result.plusAssign_operation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 278)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 279)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)) ;
  const GGS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 282)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 283)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 284)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 285)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 286)) ;
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
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 297)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 297)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 297)) ;
      const GGS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GGS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)) ;
      result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 299)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 299)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 299)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 299)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        const GGS_atomicPropertyGeneration temp_4 = this ;
        test_3 = temp_4.readProperty_standalone ().boolEnum () ;
        if (kBoolTrue == test_3) {
          const GGS_atomicPropertyGeneration temp_5 = this ;
          result_result.plusAssign_operation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)) ;
          const GGS_atomicPropertyGeneration temp_6 = this ;
          const GGS_atomicPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 302)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 302)).add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 302)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 302)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 302)) ;
        }
      }
      if (kBoolFalse == test_3) {
        const GGS_atomicPropertyGeneration temp_8 = this ;
        result_result.plusAssign_operation(GGS_string ("@MainActor let preferences_").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 304)) ;
        const GGS_atomicPropertyGeneration temp_9 = this ;
        result_result.plusAssign_operation(GGS_string ("_property = EBPreferenceProperty <").add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 305)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 305)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 305)) ;
        const GGS_atomicPropertyGeneration temp_10 = this ;
        result_result.plusAssign_operation(GGS_string ("> (defaultValue: ").add_operation (temp_10.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 306)).add_operation (GGS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 306)) ;
        const GGS_atomicPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(temp_11.readProperty_mPropertyName ().add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 307)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 307)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)) ;
    const GGS_atomicPropertyGeneration temp_12 = this ;
    result_result.plusAssign_operation(GGS_string ("  //   Atomic property: ").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)) ;
    result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 312)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 312)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 312)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 312)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GGS_atomicPropertyGeneration temp_14 = this ;
      test_13 = temp_14.readProperty_standalone ().boolEnum () ;
      if (kBoolTrue == test_13) {
        const GGS_atomicPropertyGeneration temp_15 = this ;
        const GGS_atomicPropertyGeneration temp_16 = this ;
        result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 314)).add_operation (GGS_string ("_property : EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 314)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 314)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 314)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 314)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 314)) ;
      }
    }
    if (kBoolFalse == test_13) {
      const GGS_atomicPropertyGeneration temp_17 = this ;
      const GGS_atomicPropertyGeneration temp_18 = this ;
      result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 316)).add_operation (GGS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 316)).add_operation (extensionGetter_swiftTypeName (temp_18.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 316)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 316)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 316)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 316)) ;
    }
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      const GGS_atomicPropertyGeneration temp_20 = this ;
      test_19 = temp_20.readProperty_generateResetMethod ().boolEnum () ;
      if (kBoolTrue == test_19) {
        result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)) ;
        const GGS_atomicPropertyGeneration temp_21 = this ;
        result_result.plusAssign_operation(GGS_string ("  final func reset_").add_operation (temp_21.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)).add_operation (GGS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)) ;
        const GGS_atomicPropertyGeneration temp_22 = this ;
        const GGS_atomicPropertyGeneration temp_23 = this ;
        result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_22.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 321)).add_operation (GGS_string ("_property.setProp ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 321)).add_operation (temp_23.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 321)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 321)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 321)) ;
        result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 322)) ;
      }
    }
    GGS_bool test_24 = constinArgument_inGenerationDirectAccess ;
    if (kBoolTrue != test_24.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_25 = this ;
      test_24 = temp_25.readProperty_generateDirectRead () ;
    }
    GGS_bool test_26 = test_24 ;
    if (kBoolTrue != test_26.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_27 = this ;
      test_26 = temp_27.readProperty_generateDirectAccess () ;
    }
    GGS_bool var_generateAccess_13884 = test_26 ;
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_generateAccess_13884.boolEnum () ;
      if (kBoolTrue == test_28) {
        result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)) ;
        const GGS_atomicPropertyGeneration temp_29 = this ;
        const GGS_atomicPropertyGeneration temp_30 = this ;
        result_result.plusAssign_operation(GGS_string ("  final var ").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)).add_operation (extensionGetter_swiftTypeName (temp_30.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)) ;
        const GGS_atomicPropertyGeneration temp_31 = this ;
        result_result.plusAssign_operation(GGS_string ("    get { return self.").add_operation (temp_31.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 328)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 328)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 328)) ;
        enumGalgasBool test_32 = kBoolTrue ;
        if (kBoolTrue == test_32) {
          const GGS_atomicPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_generateDirectAccess ().boolEnum () ;
          if (kBoolTrue == test_32) {
            const GGS_atomicPropertyGeneration temp_34 = this ;
            result_result.plusAssign_operation(GGS_string ("    set { self.").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 330)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 330)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 330)) ;
          }
        }
        result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 332)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_standalone ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_atomicPropertyGeneration temp_2 = this ;
      const GGS_atomicPropertyGeneration temp_3 = this ;
      result_result = GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)).add_operation (extensionGetter_swiftTypeName (temp_3.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)) ;
      const GGS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GGS_string (" (").add_operation (temp_4.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 342)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 342)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 342)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_atomicPropertyGeneration temp_5 = this ;
    const GGS_atomicPropertyGeneration temp_6 = this ;
    result_result = GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)).add_operation (GGS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)) ;
    const GGS_atomicPropertyGeneration temp_7 = this ;
    result_result.plusAssign_operation(GGS_string (" (defaultValue: ").add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 345)).add_operation (GGS_string (", undoManager: inUndoManager, key: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 345)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 345)) ;
    const GGS_atomicPropertyGeneration temp_8 = this ;
    result_result.plusAssign_operation(temp_8.readProperty_mPropertyName ().add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 346)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 346)) ;
  }
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
  GGS_lstring var_node_958 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toOneRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_958, temp_3, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 25)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_958, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 26)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_958, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 27)) ;
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
  cMapElement_classMap * objectArray_3917 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 104)) ;
  if (nullptr != objectArray_3917) {
    macroValidSharedObject (objectArray_3917, cMapElement_classMap) ;
    {
    const GGS_toOneRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToOneClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 107)) ;
    }
    GGS_classKind var_classKind_4165 ;
    const GGS_toOneRelationshipAST temp_2 = this ;
    GGS_propertyMap joker_4176_3 ; // Joker input parameter
    GGS_actionMap joker_4176_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_4176_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_4165, joker_4176_3, joker_4176_2, joker_4176_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 108)) ;
    switch (var_classKind_4165.enumValue ()) {
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
        GGS_typeKind extractedValue_4307__0 ;
        var_classKind_4165.getAssociatedValuesFor_atomic (extractedValue_4307__0) ;
        const GGS_toOneRelationshipAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 113)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_4402__0 ;
        var_classKind_4165.getAssociatedValuesFor_document (extractedValue_4402__0) ;
        const GGS_toOneRelationshipAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 115)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_4495__0 ;
        GGS_bool extractedValue_4498_graphic_1 ;
        GGS_bool extractedValue_4507__2 ;
        GGS_bool extractedValue_4510_handleOpposite_3 ;
        var_classKind_4165.getAssociatedValuesFor_entity (extractedValue_4495__0, extractedValue_4498_graphic_1, extractedValue_4507__2, extractedValue_4510_handleOpposite_3) ;
        const GGS_toOneRelationshipAST temp_9 = this ;
        const GGS_toOneRelationshipAST temp_10 = this ;
        const GGS_toOneRelationshipAST temp_11 = this ;
        GGS_propertyKind var_kind_4538 = GGS_propertyKind::class_func_toOne (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 119)), extractedValue_4498_graphic_1, temp_10.readProperty_mOpposite (), temp_11.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 117)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          const GGS_toOneRelationshipAST temp_13 = this ;
          test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOpposite ().objectCompare (GGS_toOneOppositeRelationship::class_func_none (SOURCE_FILE ("to-one-relationship.ggs", 124)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            test_12 = extractedValue_4510_handleOpposite_3.operator_not (SOURCE_FILE ("to-one-relationship.ggs", 124)).boolEnum () ;
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
        objectArray_3917->mProperty_mPropertyMap.setter_insertKey (temp_17.readProperty_mToOneRelationshipName (), var_kind_4538, temp_18, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 127)) ;
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
  cMapElement_classMap * objectArray_5337 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 136)) ;
  if (nullptr != objectArray_5337) {
    macroValidSharedObject (objectArray_5337, cMapElement_classMap) ;
    GGS_classKind var_classKind_5502 ;
    GGS_propertyMap var_destinationEntityPropertyMap_5518 ;
    const GGS_toOneRelationshipAST temp_1 = this ;
    GGS_actionMap joker_5548_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_5548_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mDestinationEntityName (), var_classKind_5502, var_destinationEntityPropertyMap_5518, joker_5548_2, joker_5548_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 139)) ;
    switch (var_classKind_5502.enumValue ()) {
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
        GGS_string extractedValue_5654__0 ;
        GGS_bool extractedValue_5657_graphic_1 ;
        GGS_bool extractedValue_5667__2 ;
        GGS_bool extractedValue_5667__3 ;
        var_classKind_5502.getAssociatedValuesFor_entity (extractedValue_5654__0, extractedValue_5657_graphic_1, extractedValue_5667__2, extractedValue_5667__3) ;
        const GGS_toOneRelationshipAST temp_2 = this ;
        const GGS_toOneRelationshipAST temp_3 = this ;
        const GGS_toOneRelationshipAST temp_4 = this ;
        GGS_propertyKind var_kind_5682 = GGS_propertyKind::class_func_toOne (temp_2.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 147)), extractedValue_5657_graphic_1, temp_3.readProperty_mOpposite (), temp_4.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 145)) ;
        {
        const GGS_toOneRelationshipAST temp_5 = this ;
        const GGS_toOneRelationshipAST temp_6 = this ;
        const GGS_toOneRelationshipAST temp_7 = this ;
        const GGS_toOneRelationshipAST temp_8 = this ;
        const GGS_toOneRelationshipAST temp_9 = this ;
        objectArray_5337->mProperty_mPropertyGenerationList.setter_append (GGS_toOnePropertyGeneration::init_21__21__21__21__21__21__21_ (temp_5.readProperty_mToOneRelationshipName ().readProperty_string (), temp_6.readProperty_mClassName ().readProperty_string (), var_kind_5682, temp_7.readProperty_mOpposite (), var_destinationEntityPropertyMap_5518, temp_8.readProperty_mUsedForSignature (), temp_9.readProperty_mWeak ().operator_not (SOURCE_FILE ("to-one-relationship.ggs", 159)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 153)) ;
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
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)) ;
  const GGS_toOnePropertyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GGS_string ("      /* if self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)).add_operation (GGS_string ("_property.propval !== newValue {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)) ;
  const GGS_toOnePropertyGeneration temp_11 = this ;
  result_result.plusAssign_operation(GGS_string ("        if self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)).add_operation (GGS_string ("_property.propval != nil {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)) ;
  const GGS_toOnePropertyGeneration temp_12 = this ;
  result_result.plusAssign_operation(GGS_string ("          self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)).add_operation (GGS_string ("_property.setProp (nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 208)) ;
  result_result.plusAssign_operation(GGS_string ("        if newValue != nil {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)) ;
  const GGS_toOnePropertyGeneration temp_13 = this ;
  result_result.plusAssign_operation(GGS_string ("          self.").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 210)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 210)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 210)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 211)) ;
  result_result.plusAssign_operation(GGS_string ("      } */\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 212)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)) ;
  const GGS_toOnePropertyGeneration temp_14 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 216)).add_operation (GGS_string ("_none = EBTransientProperty <Bool> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 216)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 216)) ;
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
      GGS_lstring extractedValue_9462_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToMany (extractedValue_9462_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_1 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)).add_operation (GGS_string (" (has opposite to many relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)).add_operation (extractedValue_9462_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)) ;
      const GGS_toOnePropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)) ;
      const GGS_toOnePropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)) ;
      result_result.plusAssign_operation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9462_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)).add_operation (GGS_string ("_property.add (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)) ;
      result_result.plusAssign_operation(GGS_string ("      resetter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9462_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 234)).add_operation (GGS_string ("_property.remove (me) } }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 234)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 234)) ;
      result_result.plusAssign_operation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 235)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
    {
      const GGS_toOnePropertyGeneration temp_4 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)) ;
      const GGS_toOnePropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 238)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 238)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
    {
      GGS_lstring extractedValue_10282_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToOne (extractedValue_10282_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_6 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)).add_operation (GGS_string (" (has opposite to one relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)).add_operation (extractedValue_10282_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)) ;
      const GGS_toOnePropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)) ;
      const GGS_toOnePropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)) ;
      result_result.plusAssign_operation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_10282_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)) ;
      result_result.plusAssign_operation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_10282_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 244)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 244)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 244)) ;
      result_result.plusAssign_operation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 245)) ;
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
  result_result = GGS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 252)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 252)) ;
  result_result.plusAssign_operation(GGS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 253)) ;
  result_result.plusAssign_operation(GGS_string ("      let possibleEntity = readEntityFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 254)) ;
  const GGS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GGS_string ("        relationshipName: \"").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 255)).add_operation (GGS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 255)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 255)) ;
  result_result.plusAssign_operation(GGS_string ("        dictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)) ;
  result_result.plusAssign_operation(GGS_string ("        managedObjectArray: inManagedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 257)) ;
  result_result.plusAssign_operation(GGS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)) ;
  const GGS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("      if let entity = possibleEntity as\? ").add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)) ;
  const GGS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("        self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)).add_operation (GGS_string ("_property.setProp (entity)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 261)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 262)) ;
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
  result_result = GGS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)) ;
  const GGS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GGS_string ("    if let object = self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 290)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 290)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 290)) ;
  result_result.plusAssign_operation(GGS_string ("      ioObjectArray.append (object)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 291)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 292)) ;
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
  GGS_lstring var_node_1014 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toManyRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1014, temp_3, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 27)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1014, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 28)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1014, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 29)) ;
  }
  const GGS_toManyRelationshipAST temp_6 = this ;
  switch (temp_6.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
    {
      GGS_lstring extractedValue_1308_masterPropertyName_0 ;
      temp_6.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_1308_masterPropertyName_0) ;
      const GGS_toManyRelationshipAST temp_7 = this ;
      GGS_lstring var_dependanceNode_1338 = GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)).add_operation (extractedValue_1308_masterPropertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)), extractedValue_1308_masterPropertyName_0.readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1014, var_dependanceNode_1338 COMMA_SOURCE_FILE ("to-many-relationship.ggs", 33)) ;
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
  cMapElement_classMap * objectArray_5285 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 139)) ;
  if (nullptr != objectArray_5285) {
    macroValidSharedObject (objectArray_5285, cMapElement_classMap) ;
    {
    const GGS_toManyRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 142)) ;
    }
    GGS_classKind var_classKind_5534 ;
    const GGS_toManyRelationshipAST temp_2 = this ;
    GGS_propertyMap joker_5545_3 ; // Joker input parameter
    GGS_actionMap joker_5545_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_5545_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_5534, joker_5545_3, joker_5545_2, joker_5545_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 143)) ;
    switch (var_classKind_5534.enumValue ()) {
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
        GGS_typeKind extractedValue_5676__0 ;
        var_classKind_5534.getAssociatedValuesFor_atomic (extractedValue_5676__0) ;
        const GGS_toManyRelationshipAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 148)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_5771__0 ;
        var_classKind_5534.getAssociatedValuesFor_document (extractedValue_5771__0) ;
        const GGS_toManyRelationshipAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 150)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_5864__0 ;
        GGS_bool extractedValue_5867_graphic_1 ;
        GGS_bool extractedValue_5876__2 ;
        GGS_bool extractedValue_5879_handleOpposite_3 ;
        var_classKind_5534.getAssociatedValuesFor_entity (extractedValue_5864__0, extractedValue_5867_graphic_1, extractedValue_5876__2, extractedValue_5879_handleOpposite_3) ;
        const GGS_toManyRelationshipAST temp_9 = this ;
        const GGS_toManyRelationshipAST temp_10 = this ;
        GGS_propertyKind var_kind_5907 = GGS_propertyKind::class_func_toMany (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-many-relationship.ggs", 154)), extractedValue_5867_graphic_1, temp_10.readProperty_mOption ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 152)) ;
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = extractedValue_5879_handleOpposite_3.operator_not (SOURCE_FILE ("to-many-relationship.ggs", 159)).boolEnum () ;
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
        objectArray_5285->mProperty_mPropertyMap.setter_insertKey (temp_16.readProperty_mToManyRelationshipName (), var_kind_5907, temp_17, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 162)) ;
        }
        const GGS_toManyRelationshipAST temp_18 = this ;
        GGS_bool var_inPrefs_6488 = GGS_bool (ComparisonKind::equal, temp_18.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 164)))) ;
        GGS_toManyRelationshipOptionGeneration var_optionForGeneration_6605 ;
        const GGS_toManyRelationshipAST temp_19 = this ;
        switch (temp_19.readProperty_mOption ().enumValue ()) {
        case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
          break ;
        case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
          {
            GGS_lstring extractedValue_6677_masterPropertyName_0 ;
            temp_19.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_6677_masterPropertyName_0) ;
            GGS_propertyKind var_masterPropertyKind_6756 ;
            GGS_actionMap joker_6776_2 ; // Joker input parameter
            GGS_bool joker_6776_1 ; // Joker input parameter
            objectArray_5285->mProperty_mPropertyMap.method_searchKey (extractedValue_6677_masterPropertyName_0, var_masterPropertyKind_6756, joker_6776_2, joker_6776_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 169)) ;
            var_optionForGeneration_6605 = GGS_toManyRelationshipOptionGeneration::class_func_hasDependance (extractedValue_6677_masterPropertyName_0.readProperty_string (), extensionGetter_swiftTypeName (var_masterPropertyKind_6756, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 172))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 170)) ;
          }
          break ;
        case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
          {
            GGS_lstring extractedValue_6993_oppositeName_0 ;
            temp_19.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_6993_oppositeName_0) ;
            var_optionForGeneration_6605 = GGS_toManyRelationshipOptionGeneration::class_func_hasOpposite (extractedValue_6993_oppositeName_0.readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 175)) ;
          }
          break ;
        case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
          {
            var_optionForGeneration_6605 = GGS_toManyRelationshipOptionGeneration::class_func_none (SOURCE_FILE ("to-many-relationship.ggs", 177)) ;
          }
          break ;
        }
        {
        const GGS_toManyRelationshipAST temp_20 = this ;
        const GGS_toManyRelationshipAST temp_21 = this ;
        const GGS_toManyRelationshipAST temp_22 = this ;
        const GGS_toManyRelationshipAST temp_23 = this ;
        const GGS_toManyRelationshipAST temp_24 = this ;
        objectArray_5285->mProperty_mPropertyGenerationList.setter_append (GGS_toManyPropertyGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mToManyRelationshipName ().readProperty_string (), temp_21.readProperty_mGenerateDirectAccess (), temp_22.readProperty_mGenerateDirectRead (), var_kind_5907, var_optionForGeneration_6605, var_inPrefs_6488, temp_23.readProperty_mCustomStore (), temp_24.readProperty_mUsedForSignature (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 180)) ;
        }
        {
        const GGS_toManyRelationshipAST temp_25 = this ;
        ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (temp_25.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 191)) ;
        }
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = var_inPrefs_6488.boolEnum () ;
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
      GGS_string var_masterPropertyTypeName_9429 ;
      const GGS_toManyPropertyGeneration temp_3 = this ;
      GGS_string joker_9390_1 ; // Joker input parameter
      temp_3.readProperty_mOption ().method_extractHasDependance (joker_9390_1, var_masterPropertyTypeName_9429, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)) ;
      const GGS_toManyPropertyGeneration temp_4 = this ;
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GGS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GGS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (var_masterPropertyTypeName_9429, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)) ;
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
  GGS_string var_prefix_12619 = temp_0 ;
  GGS_string temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GGS_string ("self.undoManager") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GGS_string ("inUndoManager") ;
  }
  GGS_string var_undoManager_12688 = temp_2 ;
  const GGS_toManyPropertyGeneration temp_4 = this ;
  switch (temp_4.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none:
    {
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)).add_operation (GGS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_12619, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (var_undoManager_12688, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)) ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance:
    {
      GGS_string extractedValue_13011__0 ;
      GGS_string extractedValue_13011__1 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_13011__0, extractedValue_13011__1) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite:
    {
      GGS_string extractedValue_13060_oppositeName_0 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_13060_oppositeName_0) ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GGS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_12619, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (var_undoManager_12688, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)) ;
      const GGS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_12619, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)) ;
      result_result.plusAssign_operation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_13060_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)) ;
      result_result.plusAssign_operation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_13060_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)) ;
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


