#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectionControllerDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selectionControllerDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclarationAST * object = (const cPtr_selectionControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclarationAST) ;
  const GALGAS_selectionControllerDeclarationAST temp_0 = object ;
  cMapElement_classMap * objectArray_3111 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("selection-controller.galgas", 69)) ;
  if (NULL != objectArray_3111) {
    macroValidSharedObject (objectArray_3111, cMapElement_classMap) ;
    GALGAS_propertyKind var_propertyKind_3267 ;
    const GALGAS_selectionControllerDeclarationAST temp_1 = object ;
    GALGAS_actionMap joker_3269_2 ; // Joker input parameter
    GALGAS_bool joker_3269_1 ; // Joker input parameter
    objectArray_3111->mProperty_mPropertyMap.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_3267, joker_3269_2, joker_3269_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 72)) ;
    switch (var_propertyKind_3267.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        const GALGAS_selectionControllerDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mModelControllerName ().readProperty_location (), GALGAS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("selection-controller.galgas", 75)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const GALGAS_selectionControllerDeclarationAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mModelControllerName ().readProperty_location (), GALGAS_string ("an array controller is required here"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.galgas", 77)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        const GALGAS_selectionControllerDeclarationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mModelControllerName ().readProperty_location (), GALGAS_string ("an array controller is required here"), fixItArray7  COMMA_SOURCE_FILE ("selection-controller.galgas", 79)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        const GALGAS_selectionControllerDeclarationAST temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mModelControllerName ().readProperty_location (), GALGAS_string ("an array controller is required here"), fixItArray9  COMMA_SOURCE_FILE ("selection-controller.galgas", 81)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_selectionControllerDeclarationAST temp_11 = object ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mModelControllerPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("selectedArray"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            const GALGAS_selectionControllerDeclarationAST temp_12 = object ;
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_mModelControllerPropertyName ().readProperty_location (), GALGAS_string ("'selectedArray' is required here"), fixItArray13  COMMA_SOURCE_FILE ("selection-controller.galgas", 84)) ;
          }
        }
        const GALGAS_selectionControllerDeclarationAST temp_14 = object ;
        GALGAS_propertyKind var_kind_3933 = GALGAS_propertyKind::constructor_selectionController (temp_14.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.galgas", 86)) ;
        {
        const GALGAS_selectionControllerDeclarationAST temp_15 = object ;
        objectArray_3111->mProperty_mPropertyMap.setter_insertKey (temp_15.readProperty_mSelectionControllerName (), var_kind_3933, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("selection-controller.galgas", 87)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 87)) ;
        }
        const GALGAS_selectionControllerDeclarationAST temp_16 = object ;
        const GALGAS_selectionControllerDeclarationAST temp_17 = object ;
        const GALGAS_selectionControllerDeclarationAST temp_18 = object ;
        const GALGAS_selectionControllerDeclarationAST temp_19 = object ;
        objectArray_3111->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_selectionControllerPropertyGeneration::constructor_new (temp_16.readProperty_mSelectionControllerName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mModelControllerName ().readProperty_string (), temp_19.readProperty_mModelControllerPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.galgas", 88))  COMMA_SOURCE_FILE ("selection-controller.galgas", 88)) ;
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selectionControllerDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_selectionControllerDeclarationAST.mSlotID,
                                           extensionMethod_selectionControllerDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selectionControllerDeclarationAST_firstAnalysisPhase (defineExtensionMethod_selectionControllerDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectionControllerDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selectionControllerDeclarationAST_fourthAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclarationAST * object = (const cPtr_selectionControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclarationAST) ;
  GALGAS_classKind var_superClassKind_4713 ;
  GALGAS_propertyMap var_propertyMap_4730 ;
  const GALGAS_selectionControllerDeclarationAST temp_0 = object ;
  GALGAS_actionMap joker_4732_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_4732_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), var_superClassKind_4713, var_propertyMap_4730, joker_4732_2, joker_4732_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 104)) ;
  GALGAS_propertyKind var_propertyKind_4805 ;
  const GALGAS_selectionControllerDeclarationAST temp_1 = object ;
  GALGAS_actionMap joker_4807_2 ; // Joker input parameter
  GALGAS_bool joker_4807_1 ; // Joker input parameter
  var_propertyMap_4730.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_4805, joker_4807_2, joker_4807_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 105)) ;
  switch (var_propertyKind_4805.enumValue ()) {
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
  case GALGAS_propertyKind::kEnum_selectionController:
    {
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_6361 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_propertyKind_4805.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_4968_typeName = extractPtr_6361->mAssociatedValue0 ;
      GALGAS_propertyMap var_selectionObservablePropertyMap_5104 ;
      GALGAS_propertyGenerationList var_selectionGenerationList_5150 ;
      const GALGAS_selectionControllerDeclarationAST temp_2 = object ;
      GALGAS_classKind joker_5060 ; // Joker input parameter
      GALGAS_actionMap joker_5113 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSelectionEntityName (), joker_5060, var_selectionObservablePropertyMap_5104, joker_5113, var_selectionGenerationList_5150, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 112)) ;
      const GALGAS_selectionControllerDeclarationAST temp_3 = object ;
      const GALGAS_selectionControllerDeclarationAST temp_4 = object ;
      const GALGAS_selectionControllerDeclarationAST temp_5 = object ;
      const GALGAS_selectionControllerDeclarationAST temp_6 = object ;
      const GALGAS_selectionControllerDeclarationAST temp_7 = object ;
      ioArgument_ioGeneration.mProperty_mSelectionControllerListForGeneration.addAssign_operation (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mSelectionControllerName ().readProperty_string (), temp_5.readProperty_mModelControllerName ().readProperty_string (), temp_6.readProperty_mModelControllerPropertyName ().readProperty_string (), extractedValue_4968_typeName.readProperty_string (), temp_7.readProperty_mSelectionEntityName ().readProperty_string (), var_selectionObservablePropertyMap_5104, var_selectionGenerationList_5150  COMMA_SOURCE_FILE ("selection-controller.galgas", 119)) ;
      const GALGAS_selectionControllerDeclarationAST temp_8 = object ;
      ioArgument_ioGeneration.mProperty_mToManyClassImplementations.addAssign_operation (temp_8.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.galgas", 128)) ;
      const GALGAS_selectionControllerDeclarationAST temp_9 = object ;
      GALGAS_string var_testedTypeName_5678 = temp_9.readProperty_mSelectionEntityName ().readProperty_string () ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("selection-controller.galgas", 131)).isValid ()) {
        uint32_t variant_5723 = GALGAS_uint::constructor_max (SOURCE_FILE ("selection-controller.galgas", 131)).uintValue () ;
        bool loop_5723 = true ;
        while (loop_5723) {
          loop_5723 = GALGAS_bool (kIsNotEqual, extractedValue_4968_typeName.readProperty_string ().objectCompare (var_testedTypeName_5678)).operator_and (GALGAS_bool (kIsNotEqual, var_testedTypeName_5678.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.galgas", 131)).isValid () ;
          if (loop_5723) {
            loop_5723 = GALGAS_bool (kIsNotEqual, extractedValue_4968_typeName.readProperty_string ().objectCompare (var_testedTypeName_5678)).operator_and (GALGAS_bool (kIsNotEqual, var_testedTypeName_5678.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.galgas", 131)).boolValue () ;
          }
          if (loop_5723 && (0 == variant_5723)) {
            loop_5723 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("selection-controller.galgas", 131)) ;
          }
          if (loop_5723) {
            variant_5723 -- ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              const GALGAS_selectionControllerDeclarationAST temp_11 = object ;
              test_10 = GALGAS_bool (kIsNotEqual, extractedValue_4968_typeName.readProperty_string ().objectCompare (temp_11.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_10) {
                switch (var_superClassKind_4713.enumValue ()) {
                case GALGAS_classKind::kNotBuilt:
                  break ;
                case GALGAS_classKind::kEnum_prefs:
                  {
                    var_testedTypeName_5678 = GALGAS_string::makeEmptyString () ;
                  }
                  break ;
                case GALGAS_classKind::kEnum_atomic:
                  {
                    var_testedTypeName_5678 = GALGAS_string::makeEmptyString () ;
                  }
                  break ;
                case GALGAS_classKind::kEnum_document:
                  {
                    var_testedTypeName_5678 = GALGAS_string::makeEmptyString () ;
                  }
                  break ;
                case GALGAS_classKind::kEnum_entity:
                  {
                    const cEnumAssociatedValues_classKind_entity * extractPtr_6329 = (const cEnumAssociatedValues_classKind_entity *) (var_superClassKind_4713.unsafePointer ()) ;
                    const GALGAS_string extractedValue_6123_superOfSuperEntity = extractPtr_6329->mAssociatedValue0 ;
                    var_testedTypeName_5678 = extractedValue_6123_superOfSuperEntity ;
                    enumGalgasBool test_12 = kBoolTrue ;
                    if (kBoolTrue == test_12) {
                      test_12 = GALGAS_bool (kIsEqual, var_testedTypeName_5678.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                      if (kBoolTrue == test_12) {
                        const GALGAS_selectionControllerDeclarationAST temp_13 = object ;
                        TC_Array <C_FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (temp_13.readProperty_mSelectionEntityName ().readProperty_location (), GALGAS_string ("This entity is not descendant of ").add_operation (extractedValue_4968_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 143)), fixItArray14  COMMA_SOURCE_FILE ("selection-controller.galgas", 143)) ;
                      }
                    }
                  }
                  break ;
                }
              }
            }
          }
        }
      }
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selectionControllerDeclarationAST_fourthAnalysisPhase (void) {
  enterExtensionMethod_fourthAnalysisPhase (kTypeDescriptor_GALGAS_selectionControllerDeclarationAST.mSlotID,
                                            extensionMethod_selectionControllerDeclarationAST_fourthAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selectionControllerDeclarationAST_fourthAnalysisPhase (defineExtensionMethod_selectionControllerDeclarationAST_fourthAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_selectionControllerPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                                    const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                                    const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_selectionControllerPropertyGeneration * object = (const cPtr_selectionControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("selection-controller.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 167)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 167)) ;
  const GALGAS_selectionControllerPropertyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection controller: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 168)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 168)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("selection-controller.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 169)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 169)) ;
  const GALGAS_selectionControllerPropertyGeneration temp_1 = object ;
  const GALGAS_selectionControllerPropertyGeneration temp_2 = object ;
  const GALGAS_selectionControllerPropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 170)).add_operation (GALGAS_string (" = SelectionController_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 170)).add_operation (temp_2.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 170)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 170)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 170)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 170)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_selectionControllerPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration.mSlotID,
                                                extensionGetter_selectionControllerPropertyGeneration_propertyDeclarationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_selectionControllerPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_selectionControllerPropertyGeneration_propertyDeclarationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_selectionControllerPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                              const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_selectionControllerPropertyGeneration * object = (const cPtr_selectionControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerPropertyGeneration) ;
  const GALGAS_selectionControllerPropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 176)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 176)) ;
  const GALGAS_selectionControllerPropertyGeneration temp_1 = object ;
  const GALGAS_selectionControllerPropertyGeneration temp_2 = object ;
  const GALGAS_selectionControllerPropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 177)).add_operation (GALGAS_string (".bind_selection (model: self."), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 177)).add_operation (temp_2.readProperty_mModelControllerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 177)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 177)).add_operation (temp_3.readProperty_mModelControllerPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 178)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 177)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_selectionControllerPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration.mSlotID,
                                          extensionGetter_selectionControllerPropertyGeneration_configurationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_selectionControllerPropertyGeneration_configurationCode (defineExtensionGetter_selectionControllerPropertyGeneration_configurationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_selectionControllerPropertyGeneration_initCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_selectionControllerPropertyGeneration_initCode (void) {
  enterExtensionGetter_initCode (kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration.mSlotID,
                                 extensionGetter_selectionControllerPropertyGeneration_initCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_selectionControllerPropertyGeneration_initCode (defineExtensionGetter_selectionControllerPropertyGeneration_initCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration populateExplorerWindowCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_selectionControllerPropertyGeneration * object = (const cPtr_selectionControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerPropertyGeneration) ;
  const GALGAS_selectionControllerPropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("    //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 190)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 190)) ;
  const GALGAS_selectionControllerPropertyGeneration temp_1 = object ;
  const GALGAS_selectionControllerPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 191)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 191)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 191)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 191)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode (void) {
  enterExtensionGetter_populateExplorerWindowCode (kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration.mSlotID,
                                                   extensionGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode (defineExtensionGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_selectionControllerPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                            const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_selectionControllerPropertyGeneration * object = (const cPtr_selectionControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerPropertyGeneration) ;
  const GALGAS_selectionControllerPropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 197)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 197)) ;
  const GALGAS_selectionControllerPropertyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 198)).add_operation (GALGAS_string (".unbind_selection ()\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 198)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_selectionControllerPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration.mSlotID,
                                        extensionGetter_selectionControllerPropertyGeneration_terminationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_selectionControllerPropertyGeneration_terminationCode (defineExtensionGetter_selectionControllerPropertyGeneration_terminationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'selectionControllerGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_selectionControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_selectionControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_selectionControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_selectionControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_selectionControllerGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate baseSelectionControllerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                               const GALGAS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                               const GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const GALGAS_propertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    Base Selection Controller " ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << " " ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "final class SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " : EBSwiftBaseObject {\n"
    "\n" ;
  GALGAS_uint index_816_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_816 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_816.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //   Selection observable property: " ;
      result << enumerator_816.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n" ;
      const enumGalgasBool test_0 = extensionGetter_isEntityType (enumerator_816.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 17)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 17)).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = extensionGetter_isTransient (enumerator_816.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 18)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "  var " ;
          result << enumerator_816.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property = EBTransientProperty_" ;
          result << extensionGetter_swiftTypeName (enumerator_816.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 19)).stringValue () ;
          result << " ()\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
          result << "  var " ;
          result << enumerator_816.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property = EBPropertyProxy_" ;
          result << extensionGetter_swiftTypeName (enumerator_816.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 21)).stringValue () ;
          result << " ()\n"
            "\n" ;
        }
      }else if (kBoolFalse == test_0) {
      }
      index_816_.increment () ;
      enumerator_816.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   BIND SELECTION\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mModel : ReadOnlyArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func bind_selection (model : ReadOnlyArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n"
    "    self.mModel = model\n" ;
  GALGAS_uint index_2039_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_2039 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2039.hasCurrentObject ()) {
      const enumGalgasBool test_2 = extensionGetter_isEntityType (enumerator_2039.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 36)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 36)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    self.bind_property_" ;
        result << enumerator_2039.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (model: model)\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_2039_.increment () ;
      enumerator_2039.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   UNBIND SELECTION\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func unbind_selection () {\n" ;
  GALGAS_uint index_2539_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_2539 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2539.hasCurrentObject ()) {
      const enumGalgasBool test_3 = extensionGetter_isEntityType (enumerator_2539.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 49)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 49)).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  //--- " ;
        result << enumerator_2539.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "\n"
          "    self." ;
        result << enumerator_2539.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property.mReadModelFunction = nil \n" ;
        const enumGalgasBool test_4 = extensionGetter_isTransient (enumerator_2539.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 52)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 52)).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "    self." ;
          result << enumerator_2539.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property.mWriteModelFunction = nil \n" ;
        }else if (kBoolFalse == test_4) {
        }
        result << "    self.mModel\?.removeEBObserverOf_" ;
        result << enumerator_2539.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (self." ;
        result << enumerator_2539.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property)\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2539_.increment () ;
      enumerator_2539.gotoNextObject () ;
    }
  }
  result << "  //---\n"
    "    self.mModel = nil\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Explorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    private var mValueExplorer : NSButton\?\n"
    "    private var mExplorerWindow : NSWindow\?\n"
    "  #endif\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    final func addExplorer (name : String, y : inout CGFloat, view : NSView) {\n"
    "      let font = NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)\n"
    "      let tf = NSTextField (frame:secondColumn (y))\n"
    "      tf.isEnabled = true\n"
    "      tf.isEditable = false\n"
    "      tf.stringValue = name\n"
    "      tf.font = font\n"
    "      view.addSubview (tf)\n"
    "      let valueExplorer = NSButton (frame:thirdColumn (y))\n"
    "      valueExplorer.font = font\n"
    "      valueExplorer.title = self.explorerIndexString + \" \" + String (describing: type (of: self))\n"
    "      valueExplorer.target = self\n"
    "      valueExplorer.action = #selector(SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << ".showObjectWindowFromExplorerButton(_:))\n"
    "      view.addSubview (valueExplorer)\n"
    "      mValueExplorer = valueExplorer\n"
    "      y += EXPLORER_ROW_HEIGHT\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    func buildExplorerWindow () {\n"
    "    //-------------------------------------------------- Create Window\n"
    "      let r = NSRect (x:20.0, y:20.0, width:10.0, height:10.0)\n"
    "      mExplorerWindow = NSWindow (contentRect: r, styleMask: [.titled, .closable], backing: .buffered, defer: true, screen: nil)\n"
    "    //-------------------------------------------------- Adding properties\n"
    "      let view = NSView (frame:r)\n"
    "      var y : CGFloat = 0.0\n" ;
  GALGAS_uint index_4967_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_4967 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4967.hasCurrentObject ()) {
      const enumGalgasBool test_5 = extensionGetter_isEntityType (enumerator_4967.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 104)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 104)).operator_and (extensionGetter_isTransient (enumerator_4967.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 104)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 104)) COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 104)).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "      createEntryForPropertyNamed (\n"
          "        \"" ;
        result << enumerator_4967.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "\",\n"
          "        object: self." ;
        result << enumerator_4967.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property,\n"
          "        y: &y,\n"
          "        view: view,\n"
          "        observerExplorer: &self." ;
        result << enumerator_4967.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property.mObserverExplorer,\n"
          "        valueExplorer: &self." ;
        result << enumerator_4967.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property.mValueExplorer\n"
          "      )\n" ;
      }else if (kBoolFalse == test_5) {
      }
      index_4967_.increment () ;
      enumerator_4967.gotoNextObject () ;
    }
  }
  result << "    //-------------------------------------------------- Finish Window construction\n"
    "    //--- Resize View\n"
    "      let viewFrame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)\n"
    "      view.frame = viewFrame\n"
    "    //--- Set content size\n"
    "      mExplorerWindow\?.setContentSize (NSSize (width:EXPLORER_ROW_WIDTH + 16.0, height:fmin (600.0, y)))\n"
    "    //--- Set close button as 'remove window' button\n"
    "      let closeButton : NSButton\? = mExplorerWindow\?.standardWindowButton (.closeButton)\n"
    "      closeButton\?.target = self\n"
    "      closeButton\?.action = #selector(SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << ".deleteSelectionControllerWindowAction(_:))\n"
    "    //--- Set window title\n"
    "      let windowTitle = self.explorerIndexString + \" \" + String (describing: type (of: self))\n"
    "      mExplorerWindow!.title = windowTitle\n"
    "    //--- Add Scroll view\n"
    "      let frame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)\n"
    "      let sw = NSScrollView (frame:frame)\n"
    "      sw.hasVerticalScroller = true\n"
    "      sw.documentView = view\n"
    "      mExplorerWindow!.contentView = sw\n"
    "    }\n"
    "  #endif\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   showObjectWindowFromExplorerButton\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    @objc func showObjectWindowFromExplorerButton (_ : Any) {\n"
    "      if mExplorerWindow == nil {\n"
    "        buildExplorerWindow ()\n"
    "      }\n"
    "      mExplorerWindow\?.makeKeyAndOrderFront(nil)\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   deleteSelectionControllerWindowAction\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    @objc func deleteSelectionControllerWindowAction (_ : Any) {\n"
    "      clearObjectExplorer ()\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   clearObjectExplorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    func clearObjectExplorer () {\n"
    "      let closeButton = mExplorerWindow\?.standardWindowButton (.closeButton)\n"
    "      closeButton!.target = nil\n"
    "      mExplorerWindow\?.orderOut (nil)\n"
    "      mExplorerWindow = nil\n"
    "    }\n"
    "  #endif\n"
    "\n" ;
  GALGAS_uint index_8016_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_8016 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_8016.hasCurrentObject ()) {
      const enumGalgasBool test_6 = extensionGetter_isEntityType (enumerator_8016.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 173)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 173)).boolEnum () ;
      if (kBoolTrue == test_6) {
        result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
          "\n"
          "  private final func bind_property_" ;
        result << enumerator_8016.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (model : ReadOnlyArrayOf_" ;
        result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
        result << ") {\n"
          "    model.addEBObserverOf_" ;
        result << enumerator_8016.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (self." ;
        result << enumerator_8016.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property)\n"
          "    self." ;
        result << enumerator_8016.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property.mReadModelFunction = { [weak self] in\n"
          "      if let model = self\?.mModel {\n"
          "        switch model.selection {\n"
          "        case .empty :\n"
          "          return .empty\n"
          "        case .multiple :\n"
          "          return .multiple\n"
          "        case .single (let v) :\n"
          "          var s = Set <" ;
        result << extensionGetter_swiftTypeName (enumerator_8016.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 185)).stringValue () ;
        result << "> ()\n"
          "          var isMultipleSelection = false\n"
          "          for object in v {\n"
          "            switch object." ;
        result << enumerator_8016.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "_property.selection {\n"
          "            case .empty :\n"
          "              return .empty\n"
          "            case .multiple :\n"
          "              isMultipleSelection = true\n"
          "            case .single (let vProp) :\n"
          "              s.insert (vProp)\n"
          "            }\n"
          "          }\n"
          "          if isMultipleSelection {\n"
          "            return .multiple\n"
          "          }else if s.count == 0 {\n"
          "            return .empty\n"
          "          }else if s.count == 1 {\n"
          "            return .single (s.first!)\n"
          "          }else{\n"
          "            return .multiple\n"
          "          }\n"
          "        }\n"
          "      }else{\n"
          "        return .empty\n"
          "      }\n"
          "    }\n" ;
        const enumGalgasBool test_7 = extensionGetter_isTransient (enumerator_8016.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 211)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 211)).boolEnum () ;
        if (kBoolTrue == test_7) {
          result << "    self." ;
          result << enumerator_8016.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property.mWriteModelFunction = { [weak self] (inValue : " ;
          result << extensionGetter_swiftTypeName (enumerator_8016.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 212)).stringValue () ;
          result << ") in\n"
            "      if let model = self\?.mModel {\n"
            "        switch model.selection {\n"
            "        case .empty, .multiple :\n"
            "          break\n"
            "        case .single (let v) :\n"
            "          for object in v {\n"
            "            object." ;
          result << enumerator_8016.current_lkey (HERE).readProperty_string ().stringValue () ;
          result << "_property.setProp (inValue)\n"
            "          }\n"
            "        }\n"
            "      }\n"
            "    }\n" ;
        }else if (kBoolFalse == test_7) {
        }
        result << "  }\n"
          "\n" ;
      }else if (kBoolFalse == test_6) {
      }
      index_8016_.increment () ;
      enumerator_8016.gotoNextObject () ;
    }
  }
  result << "\n"
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
//Filewrapper template 'selectionControllerGenerationTemplate derivedSelectionControllerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (C_Compiler * inCompiler,
                                                                                                                  const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                                  const GALGAS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                                  const GALGAS_string & in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                  const GALGAS_string & in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                  const GALGAS_propertyGenerationList & in_PROPERTY_5F_GENERATION_5F_LIST,
                                                                                                                  const GALGAS_bool & in_HAS_5F_ATOMIC_5F_PROPERTIES
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    Derived selection controller " ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << " " ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "final class SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " : EBSwiftBaseObject {\n"
    "\n" ;
  GALGAS_uint index_784_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_784 (in_PROPERTY_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_784.hasCurrentObject ()) {
      result << callExtensionGetter_declarationInSelectionControllerCode ((const cPtr_propertyGeneration *) enumerator_784.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 14)).stringValue () ;
      index_784_.increment () ;
      enumerator_784.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   Selected array (not observable)\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedArray : EBReferenceArray <" ;
  result << in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> { return self.selectedArray_property.propval }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   BIND SELECTION\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "   let selectedArray_property = TransientArrayOfSuperOf_" ;
  result << in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " <" ;
  result << in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func bind_selection (model : ReadOnlyArrayOf_" ;
  result << in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n"
    "    self.selectedArray_property.setDataProvider (model)\n" ;
  GALGAS_uint index_1934_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_1934 (in_PROPERTY_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1934.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (enumerator_1934.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_1934.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 34)).operator_or (GALGAS_bool (enumerator_1934.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 35)).operator_or (GALGAS_bool (enumerator_1934.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 36)).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "    self.bind_property_" ;
        result << enumerator_1934.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_1934_.increment () ;
      enumerator_1934.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   UNBIND SELECTION\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func unbind_selection () {\n"
    "    self.selectedArray_property.setDataProvider (nil)\n" ;
  GALGAS_uint index_2635_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2635 (in_PROPERTY_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2635.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (enumerator_2635.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_2635.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 51)).operator_or (GALGAS_bool (enumerator_2635.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 52)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "  //--- " ;
        result << enumerator_2635.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "\n"
          "    self." ;
        result << enumerator_2635.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.mReadModelFunction = nil \n" ;
        const enumGalgasBool test_2 = GALGAS_bool (enumerator_2635.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_2635.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 56)).boolEnum () ;
        if (kBoolTrue == test_2) {
          result << "    self." ;
          result << enumerator_2635.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
          result << "_property.mWriteModelFunction = nil \n" ;
        }else if (kBoolFalse == test_2) {
        }
        result << "    self.selectedArray_property.removeEBObserverOf_" ;
        result << enumerator_2635.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " (self." ;
        result << enumerator_2635.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property)\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_2635_.increment () ;
      enumerator_2635.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Explorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    private var mValueExplorer : NSButton\?\n"
    "    private var mExplorerWindow : NSWindow\?\n"
    "  #endif\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    final func addExplorer (name : String, y : inout CGFloat, view : NSView) {\n"
    "      let font = NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)\n"
    "      let tf = NSTextField (frame:secondColumn (y))\n"
    "      tf.isEnabled = true\n"
    "      tf.isEditable = false\n"
    "      tf.stringValue = name\n"
    "      tf.font = font\n"
    "      view.addSubview (tf)\n"
    "      let valueExplorer = NSButton (frame: thirdColumn (y))\n"
    "      valueExplorer.font = font\n"
    "      valueExplorer.title = self.explorerIndexString + \" \" + String (describing: type (of: self))\n"
    "      valueExplorer.target = self\n"
    "      valueExplorer.action = #selector(SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << ".showObjectWindowFromExplorerButton(_:))\n"
    "      view.addSubview (valueExplorer)\n"
    "      self.mValueExplorer = valueExplorer\n"
    "      y += EXPLORER_ROW_HEIGHT\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    func buildExplorerWindow () {\n"
    "    //-------------------------------------------------- Create Window\n"
    "      let r = NSRect (x: 20.0, y: 20.0, width: 10.0, height: 10.0)\n"
    "      self.mExplorerWindow = NSWindow (contentRect: r, styleMask: [.titled, .closable], backing: .buffered, defer: true, screen: nil)\n"
    "    //-------------------------------------------------- Adding properties\n"
    "      let view = NSView (frame: r)\n" ;
  const enumGalgasBool test_3 = in_HAS_5F_ATOMIC_5F_PROPERTIES.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "      var y : CGFloat = 0.0\n" ;
  }else if (kBoolFalse == test_3) {
    result << "      let y : CGFloat = 0.0\n" ;
  }
  GALGAS_uint index_5364_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5364 (in_PROPERTY_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5364.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (enumerator_5364.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "      createEntryForPropertyNamed (\n"
          "        \"" ;
        result << enumerator_5364.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "\",\n"
          "        object: self." ;
        result << enumerator_5364.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property,\n"
          "        y: &y,\n"
          "        view: view,\n"
          "        observerExplorer: &self." ;
        result << enumerator_5364.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.mObserverExplorer,\n"
          "        valueExplorer: &self." ;
        result << enumerator_5364.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.mValueExplorer\n"
          "      )\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_5364_.increment () ;
      enumerator_5364.gotoNextObject () ;
    }
  }
  result << "    //-------------------------------------------------- Finish Window construction\n"
    "    //--- Resize View\n"
    "      let viewFrame = NSRect (x: 0.0, y: 0.0, width: EXPLORER_ROW_WIDTH, height: y)\n"
    "      view.frame = viewFrame\n"
    "    //--- Set content size\n"
    "      self.mExplorerWindow\?.setContentSize (NSSize (width: EXPLORER_ROW_WIDTH + 16.0, height: fmin (600.0, y)))\n"
    "    //--- Set close button as 'remove window' button\n"
    "      let closeButton : NSButton\? = self.mExplorerWindow\?.standardWindowButton (.closeButton)\n"
    "      closeButton\?.target = self\n"
    "      closeButton\?.action = #selector(SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << ".deleteSelectionControllerWindowAction(_:))\n"
    "    //--- Set window title\n"
    "      let windowTitle = self.explorerIndexString + \" \" + String (describing: type (of: self))\n"
    "      self.mExplorerWindow!.title = windowTitle\n"
    "    //--- Add Scroll view\n"
    "      let frame = NSRect (x: 0.0, y: 0.0, width: EXPLORER_ROW_WIDTH, height: y)\n"
    "      let sw = NSScrollView (frame: frame)\n"
    "      sw.hasVerticalScroller = true\n"
    "      sw.documentView = view\n"
    "      self.mExplorerWindow!.contentView = sw\n"
    "    }\n"
    "  #endif\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   showObjectWindowFromExplorerButton\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    @objc func showObjectWindowFromExplorerButton (_ : Any) {\n"
    "      if self.mExplorerWindow == nil {\n"
    "        self.buildExplorerWindow ()\n"
    "      }\n"
    "      self.mExplorerWindow\?.makeKeyAndOrderFront (nil)\n"
    "    }\n"
    "  #endif\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   deleteSelectionControllerWindowAction\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    @objc func deleteSelectionControllerWindowAction (_ : Any) {\n"
    "      self.clearObjectExplorer ()\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   clearObjectExplorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  #if BUILD_OBJECT_EXPLORER\n"
    "    func clearObjectExplorer () {\n"
    "      if let closeButton = self.mExplorerWindow\?.standardWindowButton (.closeButton) {\n"
    "        closeButton.target = nil\n"
    "      }\n"
    "      self.mExplorerWindow\?.orderOut (nil)\n"
    "      self.mExplorerWindow = nil\n"
    "    }\n"
    "  #endif\n"
    "\n" ;
  GALGAS_uint index_8523_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8523 (in_PROPERTY_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8523.hasCurrentObject ()) {
      result << callExtensionGetter_bindPropertyInSelectionController ((const cPtr_propertyGeneration *) enumerator_8523.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 182)).stringValue () ;
      index_8523_.increment () ;
      enumerator_8523.gotoNextObject () ;
    }
  }
  result << "\n"
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
//Routine 'generateSelectionControllers'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateSelectionControllers (const GALGAS_selectionControllerForGeneration constinArgument_inArrayControllerListForGeneration,
                                           const GALGAS_string constinArgument_inOutputDirectory,
                                           GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_selectionControllerForGeneration enumerator_11190 (constinArgument_inArrayControllerListForGeneration, kENUMERATION_UP) ;
  while (enumerator_11190.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_11190.current_mBaseTypeName (HERE).objectCompare (enumerator_11190.current_mSelectionTypeName (HERE))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_11292 = GALGAS_string (filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (inCompiler, enumerator_11190.current_mOwnerName (HERE), enumerator_11190.current_mSelectionControllerName (HERE), enumerator_11190.current_mBaseTypeName (HERE), enumerator_11190.current_mSelectionObservablePropertyMap (HERE) COMMA_SOURCE_FILE ("selection-controller.galgas", 247))) ;
        GALGAS_string var_fileName_11528 = GALGAS_string ("selectionController-").add_operation (enumerator_11190.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 253)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 253)).add_operation (enumerator_11190.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 253)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 253)) ;
        ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_11528  COMMA_SOURCE_FILE ("selection-controller.galgas", 254)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11528, var_s_11292, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 255)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool var_hasAtomicStoredProperties_11786 = GALGAS_bool (false) ;
      cEnumerator_propertyGenerationList enumerator_11814 (enumerator_11190.current_mPropertyGenerationList (HERE), kENUMERATION_UP) ;
      bool bool_1 = var_hasAtomicStoredProperties_11786.operator_not (SOURCE_FILE ("selection-controller.galgas", 262)).isValidAndTrue () ;
      if (enumerator_11814.hasCurrentObject () && bool_1) {
        while (enumerator_11814.hasCurrentObject () && bool_1) {
          var_hasAtomicStoredProperties_11786 = GALGAS_bool (enumerator_11814.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration) ;
          enumerator_11814.gotoNextObject () ;
          if (enumerator_11814.hasCurrentObject ()) {
            bool_1 = var_hasAtomicStoredProperties_11786.operator_not (SOURCE_FILE ("selection-controller.galgas", 262)).isValidAndTrue () ;
          }
        }
      }
      GALGAS_string var_s_11980 = GALGAS_string (filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (inCompiler, enumerator_11190.current_mOwnerName (HERE), enumerator_11190.current_mSelectionControllerName (HERE), enumerator_11190.current_mBaseTypeName (HERE), enumerator_11190.current_mSelectionTypeName (HERE), enumerator_11190.current_mPropertyGenerationList (HERE), var_hasAtomicStoredProperties_11786 COMMA_SOURCE_FILE ("selection-controller.galgas", 265))) ;
      GALGAS_string var_fileName_12274 = GALGAS_string ("selectionController-").add_operation (enumerator_11190.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 273)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 273)).add_operation (enumerator_11190.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 273)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 273)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_12274  COMMA_SOURCE_FILE ("selection-controller.galgas", 274)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12274, var_s_11980, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 275)) ;
      }
    }
    enumerator_11190.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                        const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                        const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                        GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolAsDefaultValue * object = (const cPtr_boolAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_boolAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_4284 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_4305 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_4284.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 113)).isValidAndTrue () ;
  if (enumerator_4305.hasCurrentObject () && bool_0) {
    while (enumerator_4305.hasCurrentObject () && bool_0) {
      switch (enumerator_4305.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          const GALGAS_boolAsDefaultValue temp_1 = object ;
          GALGAS_string temp_2 ;
          const enumGalgasBool test_3 = temp_1.readProperty_mValue ().readProperty_bool ().boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = GALGAS_string ("true") ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GALGAS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_2 ;
          var_found_4284 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
      case GALGAS_typeKind::kEnum_dataType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_bezierPathType:
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyExternType:
        {
        }
        break ;
      }
      enumerator_4305.gotoNextObject () ;
      if (enumerator_4305.hasCurrentObject ()) {
        bool_0 = var_found_4284.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 113)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_found_4284.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 126)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_boolAsDefaultValue temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mValue ().readProperty_location (), GALGAS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 127)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_boolAsDefaultValue.mSlotID,
                                                extensionMethod_boolAsDefaultValue_analyzeDefaultValueType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_boolAsDefaultValue_analyzeDefaultValueType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_integerAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                           const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                           const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                           GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerAsDefaultValue * object = (const cPtr_integerAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_integerAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_5278 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_5299 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_5278.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 141)).isValidAndTrue () ;
  if (enumerator_5299.hasCurrentObject () && bool_0) {
    while (enumerator_5299.hasCurrentObject () && bool_0) {
      switch (enumerator_5299.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          const GALGAS_integerAsDefaultValue temp_1 = object ;
          GALGAS_string temp_2 ;
          const enumGalgasBool test_3 = temp_1.readProperty_mNegative ().boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = GALGAS_string ("-") ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_integerAsDefaultValue temp_4 = object ;
          outArgument_outSwiftDefaultValueAsString = temp_2.add_operation (temp_4.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 144)) ;
          var_found_5278 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
        {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            const GALGAS_integerAsDefaultValue temp_6 = object ;
            test_5 = temp_6.readProperty_mNegative ().boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_integerAsDefaultValue temp_7 = object ;
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GALGAS_string ("Uint32 value should be \xE2""\x89""\xA5"" 0"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 148)) ;
            }
          }
          const GALGAS_integerAsDefaultValue temp_9 = object ;
          outArgument_outSwiftDefaultValueAsString = temp_9.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas", 150)) ;
          var_found_5278 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          const GALGAS_integerAsDefaultValue temp_10 = object ;
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSFont.systemFont (ofSize: ").add_operation (temp_10.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 153)).add_operation (GALGAS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 153)) ;
          var_found_5278 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_dataType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_bezierPathType:
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyExternType:
        {
        }
        break ;
      }
      enumerator_5299.gotoNextObject () ;
      if (enumerator_5299.hasCurrentObject ()) {
        bool_0 = var_found_5278.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 141)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_found_5278.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_integerAsDefaultValue temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mValue ().readProperty_location (), GALGAS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray13  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 163)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_integerAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_integerAsDefaultValue.mSlotID,
                                                extensionMethod_integerAsDefaultValue_analyzeDefaultValueType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_integerAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_integerAsDefaultValue_analyzeDefaultValueType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doubleAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_doubleAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                          const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                          const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                          GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_doubleAsDefaultValue * object = (const cPtr_doubleAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_doubleAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_6602 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_6623 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_6602.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 177)).isValidAndTrue () ;
  if (enumerator_6623.hasCurrentObject () && bool_0) {
    while (enumerator_6623.hasCurrentObject () && bool_0) {
      switch (enumerator_6623.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          const GALGAS_doubleAsDefaultValue temp_1 = object ;
          outArgument_outSwiftDefaultValueAsString = temp_1.readProperty_mValue ().readProperty_double ().getter_string (SOURCE_FILE ("explicit-default-value.galgas", 180)) ;
          var_found_6602 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_dataType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_bezierPathType:
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyExternType:
        {
        }
        break ;
      }
      enumerator_6623.gotoNextObject () ;
      if (enumerator_6623.hasCurrentObject ()) {
        bool_0 = var_found_6602.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 177)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_found_6602.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 190)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_doubleAsDefaultValue temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GALGAS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 191)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_doubleAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_doubleAsDefaultValue.mSlotID,
                                                extensionMethod_doubleAsDefaultValue_analyzeDefaultValueType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_doubleAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_doubleAsDefaultValue_analyzeDefaultValueType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                          const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                          const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                          GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_stringAsDefaultValue * object = (const cPtr_stringAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_stringAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_7589 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_7610 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_7589.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 205)).isValidAndTrue () ;
  if (enumerator_7610.hasCurrentObject () && bool_0) {
    while (enumerator_7610.hasCurrentObject () && bool_0) {
      switch (enumerator_7610.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          const GALGAS_stringAsDefaultValue temp_1 = object ;
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("\"").add_operation (temp_1.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 208)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 208)) ;
          var_found_7589 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_dataType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_fontType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_bezierPathType:
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyExternType:
        {
        }
        break ;
      }
      enumerator_7610.gotoNextObject () ;
      if (enumerator_7610.hasCurrentObject ()) {
        bool_0 = var_found_7589.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 205)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_found_7589.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 218)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_stringAsDefaultValue temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GALGAS_string ("only a string attribute can be initialized by a string constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 219)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_stringAsDefaultValue.mSlotID,
                                                extensionMethod_stringAsDefaultValue_analyzeDefaultValueType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_stringAsDefaultValue_analyzeDefaultValueType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'predefinedDates'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_predefinedDates (C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("explicit-default-value.galgas", 227)) ;
  result_result.addAssign_operation (GALGAS_string ("now")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 228)) ;
  result_result.addAssign_operation (GALGAS_string ("distantPast")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 229)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedDates = false ;
static GALGAS_stringset gOnceFunctionResult_predefinedDates ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_predefinedDates (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedDates) {
    gOnceFunctionResult_predefinedDates = onceFunction_predefinedDates (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedDates = true ;
  }
  return gOnceFunctionResult_predefinedDates ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedDates (void) {
  gOnceFunctionResult_predefinedDates.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_predefinedDates (NULL,
                                                             releaseOnceFunctionResult_predefinedDates) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_predefinedDates [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_predefinedDates (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_predefinedDates (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedDates ("predefinedDates",
                                                                 functionWithGenericHeader_predefinedDates,
                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                 0,
                                                                 functionArgs_predefinedDates) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'predefinedColors'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_predefinedColors (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("explicit-default-value.galgas", 235)) ;
  result_result.addAssign_operation (GALGAS_string ("black")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 236)) ;
  result_result.addAssign_operation (GALGAS_string ("blue")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 237)) ;
  result_result.addAssign_operation (GALGAS_string ("brown")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 238)) ;
  result_result.addAssign_operation (GALGAS_string ("clear")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 239)) ;
  result_result.addAssign_operation (GALGAS_string ("control")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 240)) ;
  result_result.addAssign_operation (GALGAS_string ("controlDarkShadow")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 241)) ;
  result_result.addAssign_operation (GALGAS_string ("controlHighlight")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 242)) ;
  result_result.addAssign_operation (GALGAS_string ("controlLightHighlight")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 243)) ;
  result_result.addAssign_operation (GALGAS_string ("controlShadow")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 244)) ;
  result_result.addAssign_operation (GALGAS_string ("controlText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 245)) ;
  result_result.addAssign_operation (GALGAS_string ("cyan")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 246)) ;
  result_result.addAssign_operation (GALGAS_string ("darkGray")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 247)) ;
  result_result.addAssign_operation (GALGAS_string ("disabledControlText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 248)) ;
  result_result.addAssign_operation (GALGAS_string ("gray")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 249)) ;
  result_result.addAssign_operation (GALGAS_string ("green")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 250)) ;
  result_result.addAssign_operation (GALGAS_string ("grid")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 251)) ;
  result_result.addAssign_operation (GALGAS_string ("header")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 252)) ;
  result_result.addAssign_operation (GALGAS_string ("headerText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 253)) ;
  result_result.addAssign_operation (GALGAS_string ("highlight")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 254)) ;
  result_result.addAssign_operation (GALGAS_string ("keyboardFocusIndicator")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 255)) ;
  result_result.addAssign_operation (GALGAS_string ("knob")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 256)) ;
  result_result.addAssign_operation (GALGAS_string ("lightGray")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 257)) ;
  result_result.addAssign_operation (GALGAS_string ("magenta")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 258)) ;
  result_result.addAssign_operation (GALGAS_string ("orange")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 259)) ;
  result_result.addAssign_operation (GALGAS_string ("purple")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 260)) ;
  result_result.addAssign_operation (GALGAS_string ("red")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 261)) ;
  result_result.addAssign_operation (GALGAS_string ("scrollBar")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 262)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedControl")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 263)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedControlText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 264)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedKnob")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 265)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedMenuItem")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 266)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedMenuItemText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 267)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedTextBackground")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 268)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 269)) ;
  result_result.addAssign_operation (GALGAS_string ("shadow")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 270)) ;
  result_result.addAssign_operation (GALGAS_string ("textBackground")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 271)) ;
  result_result.addAssign_operation (GALGAS_string ("white")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 272)) ;
  result_result.addAssign_operation (GALGAS_string ("windowBackground")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 273)) ;
  result_result.addAssign_operation (GALGAS_string ("windowFrame")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 274)) ;
  result_result.addAssign_operation (GALGAS_string ("windowFrameText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 275)) ;
  result_result.addAssign_operation (GALGAS_string ("yellow")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 276)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedColors = false ;
static GALGAS_stringset gOnceFunctionResult_predefinedColors ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_predefinedColors (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedColors) {
    gOnceFunctionResult_predefinedColors = onceFunction_predefinedColors (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedColors = true ;
  }
  return gOnceFunctionResult_predefinedColors ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedColors (void) {
  gOnceFunctionResult_predefinedColors.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_predefinedColors (NULL,
                                                              releaseOnceFunctionResult_predefinedColors) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_predefinedColors [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_predefinedColors (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_predefinedColors (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedColors ("predefinedColors",
                                                                  functionWithGenericHeader_predefinedColors,
                                                                  & kTypeDescriptor_GALGAS_stringset,
                                                                  0,
                                                                  functionArgs_predefinedColors) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@identifierAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_identifierAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                              const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                              const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                              GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_identifierAsDefaultValue * object = (const cPtr_identifierAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_identifierAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_10070 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_10091 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_10070.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 287)).isValidAndTrue () ;
  if (enumerator_10091.hasCurrentObject () && bool_0) {
    while (enumerator_10091.hasCurrentObject () && bool_0) {
      switch (enumerator_10091.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_dateType:
        {
          var_found_10070 = GALGAS_bool (true) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            const GALGAS_identifierAsDefaultValue temp_2 = object ;
            test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 291)).getter_hasKey (temp_2.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas", 291)).boolEnum () ;
            if (kBoolTrue == test_1) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                const GALGAS_identifierAsDefaultValue temp_4 = object ;
                test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("now"))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  outArgument_outSwiftDefaultValueAsString = GALGAS_string ("Date ()") ;
                }
              }
              if (kBoolFalse == test_3) {
                enumGalgasBool test_5 = kBoolTrue ;
                if (kBoolTrue == test_5) {
                  const GALGAS_identifierAsDefaultValue temp_6 = object ;
                  test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("distantPast"))).boolEnum () ;
                  if (kBoolTrue == test_5) {
                    outArgument_outSwiftDefaultValueAsString = GALGAS_string ("Date.distantPast") ;
                  }
                }
                if (kBoolFalse == test_5) {
                  const GALGAS_identifierAsDefaultValue temp_7 = object ;
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GALGAS_string ("unknown predefined date"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 297)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_1) {
            const GALGAS_identifierAsDefaultValue temp_9 = object ;
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mValue ().readProperty_location (), GALGAS_string ("unknown predefined date"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 300)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_bezierPathType:
        {
          var_found_10070 = GALGAS_bool (true) ;
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            const GALGAS_identifierAsDefaultValue temp_12 = object ;
            test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSBezierPath ()") ;
            }
          }
          if (kBoolFalse == test_11) {
            const GALGAS_identifierAsDefaultValue temp_13 = object ;
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mValue ().readProperty_location (), GALGAS_string ("only 'empty' is accepted as default NSBezierPath"), fixItArray14  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 307)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_bezierPathArrayType:
        {
          var_found_10070 = GALGAS_bool (true) ;
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            const GALGAS_identifierAsDefaultValue temp_16 = object ;
            test_15 = GALGAS_bool (kIsEqual, temp_16.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_15) {
              outArgument_outSwiftDefaultValueAsString = GALGAS_string ("BezierPathArray ()") ;
            }
          }
          if (kBoolFalse == test_15) {
            const GALGAS_identifierAsDefaultValue temp_17 = object ;
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mValue ().readProperty_location (), GALGAS_string ("only 'empty' is accepted as default BezierPathArray"), fixItArray18  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 314)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          const cEnumAssociatedValues_typeKind_enumType * extractPtr_11554 = (const cEnumAssociatedValues_typeKind_enumType *) (enumerator_10091.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_11176_enumTypeName = extractPtr_11554->mAssociatedValue0 ;
          const GALGAS_enumConstantMap extractedValue_11205_constantMap = extractPtr_11554->mAssociatedValue1 ;
          var_found_10070 = GALGAS_bool (true) ;
          enumGalgasBool test_19 = kBoolTrue ;
          if (kBoolTrue == test_19) {
            const GALGAS_identifierAsDefaultValue temp_20 = object ;
            test_19 = extractedValue_11205_constantMap.getter_hasKey (temp_20.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas", 319)).boolEnum () ;
            if (kBoolTrue == test_19) {
              const GALGAS_identifierAsDefaultValue temp_21 = object ;
              outArgument_outSwiftDefaultValueAsString = extractedValue_11176_enumTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 320)).add_operation (temp_21.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 320)) ;
            }
          }
          if (kBoolFalse == test_19) {
            const GALGAS_identifierAsDefaultValue temp_22 = object ;
            const GALGAS_identifierAsDefaultValue temp_23 = object ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_22.readProperty_mValue ().readProperty_location (), GALGAS_string ("the '").add_operation (extractedValue_11176_enumTypeName, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 323)).add_operation (GALGAS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 323)).add_operation (temp_23.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 323)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 323)), fixItArray24  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 322)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const GALGAS_identifierAsDefaultValue temp_25 = object ;
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid entity type"), fixItArray26  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 327)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          const GALGAS_identifierAsDefaultValue temp_27 = object ;
          TC_Array <C_FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid class type"), fixItArray28  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 329)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          const GALGAS_identifierAsDefaultValue temp_29 = object ;
          TC_Array <C_FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid bool type"), fixItArray30  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 331)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_dataType:
        {
          var_found_10070 = GALGAS_bool (true) ;
          enumGalgasBool test_31 = kBoolTrue ;
          if (kBoolTrue == test_31) {
            const GALGAS_identifierAsDefaultValue temp_32 = object ;
            test_31 = GALGAS_bool (kIsEqual, temp_32.readProperty_mValue ().readProperty_string ().objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_31) {
              outArgument_outSwiftDefaultValueAsString = GALGAS_string ("Data ()") ;
            }
          }
          if (kBoolFalse == test_31) {
            const GALGAS_identifierAsDefaultValue temp_33 = object ;
            TC_Array <C_FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (temp_33.readProperty_mValue ().readProperty_location (), GALGAS_string ("only 'empty' is accepted as default Data"), fixItArray34  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 337)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          const GALGAS_identifierAsDefaultValue temp_35 = object ;
          TC_Array <C_FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (temp_35.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid double type"), fixItArray36  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 340)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          const GALGAS_identifierAsDefaultValue temp_37 = object ;
          TC_Array <C_FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid integer type"), fixItArray38  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 342)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_uint_33__32_Type:
        {
          const GALGAS_identifierAsDefaultValue temp_39 = object ;
          TC_Array <C_FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (temp_39.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid UInt32 type"), fixItArray40  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 344)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          const GALGAS_identifierAsDefaultValue temp_41 = object ;
          TC_Array <C_FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (temp_41.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid string type"), fixItArray42  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 346)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          const GALGAS_identifierAsDefaultValue temp_43 = object ;
          TC_Array <C_FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid font type"), fixItArray44  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 348)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_colorType:
        {
          enumGalgasBool test_45 = kBoolTrue ;
          if (kBoolTrue == test_45) {
            const GALGAS_identifierAsDefaultValue temp_46 = object ;
            test_45 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 350)).getter_hasKey (temp_46.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas", 350)).boolEnum () ;
            if (kBoolTrue == test_45) {
              const GALGAS_identifierAsDefaultValue temp_47 = object ;
              outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSColor.").add_operation (temp_47.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 351)) ;
              var_found_10070 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_45) {
            const GALGAS_identifierAsDefaultValue temp_48 = object ;
            TC_Array <C_FixItDescription> fixItArray49 ;
            inCompiler->emitSemanticError (temp_48.readProperty_mValue ().readProperty_location (), GALGAS_string ("unknown predefined color"), fixItArray49  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 354)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyExternType:
        {
          const GALGAS_identifierAsDefaultValue temp_50 = object ;
          TC_Array <C_FixItDescription> fixItArray51 ;
          inCompiler->emitSemanticError (temp_50.readProperty_mValue ().readProperty_location (), GALGAS_string ("invalid image type"), fixItArray51  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 357)) ;
        }
        break ;
      }
      enumerator_10091.gotoNextObject () ;
      if (enumerator_10091.hasCurrentObject ()) {
        bool_0 = var_found_10070.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 287)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_52 = kBoolTrue ;
  if (kBoolTrue == test_52) {
    test_52 = var_found_10070.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 360)).boolEnum () ;
    if (kBoolTrue == test_52) {
      const GALGAS_identifierAsDefaultValue temp_53 = object ;
      TC_Array <C_FixItDescription> fixItArray54 ;
      inCompiler->emitSemanticError (temp_53.readProperty_mValue ().readProperty_location (), GALGAS_string ("unknow type for this identifier"), fixItArray54  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 361)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_identifierAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_identifierAsDefaultValue.mSlotID,
                                                extensionMethod_identifierAsDefaultValue_analyzeDefaultValueType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_identifierAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_identifierAsDefaultValue_analyzeDefaultValueType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsAsDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefsAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                         const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                         const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                         GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefsAsDefaultValue * object = (const cPtr_prefsAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_prefsAsDefaultValue) ;
  GALGAS_propertyKind var_kind_13213 ;
  const GALGAS_prefsAsDefaultValue temp_0 = object ;
  GALGAS_actionMap joker_13215_2 ; // Joker input parameter
  GALGAS_bool joker_13215_1 ; // Joker input parameter
  constinArgument_inPreferencesPropertyMap.method_searchKey (temp_0.readProperty_mPrefPropertyName (), var_kind_13213, joker_13215_2, joker_13215_1, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 373)) ;
  switch (var_kind_13213.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_13495 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_13213.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_13264_type = extractPtr_13495->mAssociatedValue0 ;
      GALGAS_bool var_found_13283 = GALGAS_bool (false) ;
      cEnumerator_typeKindList enumerator_13302 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
      bool bool_1 = var_found_13283.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 377)).isValidAndTrue () ;
      if (enumerator_13302.hasCurrentObject () && bool_1) {
        while (enumerator_13302.hasCurrentObject () && bool_1) {
          var_found_13283 = GALGAS_bool (kIsEqual, extractedValue_13264_type.objectCompare (enumerator_13302.current_mType (HERE))) ;
          enumerator_13302.gotoNextObject () ;
          if (enumerator_13302.hasCurrentObject ()) {
            bool_1 = var_found_13283.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 377)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_found_13283.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 380)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_prefsAsDefaultValue temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("the atomic property type is not compatible"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 381)) ;
        }
      }
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const GALGAS_prefsAsDefaultValue temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 384)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const GALGAS_prefsAsDefaultValue temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 386)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const GALGAS_prefsAsDefaultValue temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 388)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const GALGAS_prefsAsDefaultValue temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mPrefPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 390)) ;
    }
    break ;
  }
  const GALGAS_prefsAsDefaultValue temp_13 = object ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string ("preferences_").add_operation (temp_13.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 392)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefsAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_prefsAsDefaultValue.mSlotID,
                                                extensionMethod_prefsAsDefaultValue_analyzeDefaultValueType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefsAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_prefsAsDefaultValue_analyzeDefaultValueType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsAsDefaultValue enterDefaultValuePrecedence'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefsAsDefaultValue_enterDefaultValuePrecedence (const cPtr_abstractDefaultValue * inObject,
                                                                             const GALGAS_lstring constinArgument_inNode,
                                                                             GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefsAsDefaultValue * object = (const cPtr_prefsAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_prefsAsDefaultValue) ;
  const GALGAS_prefsAsDefaultValue temp_0 = object ;
  const GALGAS_prefsAsDefaultValue temp_1 = object ;
  GALGAS_lstring var_p_14235 = GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 401)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 401)).add_operation (temp_0.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 401)), temp_1.readProperty_mPrefPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 401)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inNode, var_p_14235 COMMA_SOURCE_FILE ("explicit-default-value.galgas", 402)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefsAsDefaultValue_enterDefaultValuePrecedence (void) {
  enterExtensionMethod_enterDefaultValuePrecedence (kTypeDescriptor_GALGAS_prefsAsDefaultValue.mSlotID,
                                                    extensionMethod_prefsAsDefaultValue_enterDefaultValuePrecedence) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefsAsDefaultValue_enterDefaultValuePrecedence (defineExtensionMethod_prefsAsDefaultValue_enterDefaultValuePrecedence, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateCode (const GALGAS_string constinArgument_inXcodeProjectString,
                           const GALGAS_generationStruct constinArgument_inGeneration,
                           const GALGAS_string constinArgument_inSourceFile,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_outputDirectory_2364 = constinArgument_inSourceFile.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("code-generation.galgas", 57)) ;
  GALGAS_string var_projectName_2433 = constinArgument_inSourceFile.getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas", 58)).getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 58)) ;
  GALGAS_string var_fileOutputDirectory_2526 = var_outputDirectory_2364.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 59)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 59)) ;
  GALGAS_stringset var_generatedFileSet_2598 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("code-generation.galgas", 60)) ;
  cEnumerator_fileGenerationList enumerator_2625 (constinArgument_inGeneration.readProperty_mFileGenerationList (), kENUMERATION_UP) ;
  while (enumerator_2625.hasCurrentObject ()) {
    callExtensionMethod_generateCode ((const cPtr_abstractFileGeneration *) enumerator_2625.current_mFileGeneration (HERE).ptr (), var_fileOutputDirectory_2526, constinArgument_inGeneration.readProperty_mToOneClassImplementations (), constinArgument_inGeneration.readProperty_mToManyClassImplementations (), var_generatedFileSet_2598, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 62)) ;
    enumerator_2625.gotoNextObject () ;
  }
  {
  routine_generateEBManagedObjectContext (constinArgument_inGeneration.readProperty_mEntityListForGeneration (), var_fileOutputDirectory_2526, var_generatedFileSet_2598, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 74)) ;
  }
  {
  routine_generateSelectionControllers (constinArgument_inGeneration.readProperty_mSelectionControllerListForGeneration (), var_fileOutputDirectory_2526, var_generatedFileSet_2598, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 79)) ;
  }
  {
  routine_generateValidationRoutineStubs (var_fileOutputDirectory_2526, constinArgument_inGeneration.readProperty_mValidationStubRoutineListForGeneration (), var_generatedFileSet_2598, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 89)) ;
  }
  {
  routine_generateStandardProperties (var_fileOutputDirectory_2526, constinArgument_inGeneration.readProperty_mPropertyClassList (), constinArgument_inGeneration.readProperty_mTransientPropertyTypeList (), var_generatedFileSet_2598, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 94)) ;
  }
  {
  routine_generateXcodeProject (var_outputDirectory_2364, constinArgument_inXcodeProjectString, var_generatedFileSet_2598, var_projectName_2433, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 100)) ;
  }
  {
  routine_generateTestFile (constinArgument_inXcodeProjectString, var_projectName_2433, constinArgument_inGeneration.readProperty_mMainXibDescriptorList (), var_outputDirectory_2364, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 106)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'standard_properties'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_standard_5F_properties_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_standard_5F_properties_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties (
  "",
  0,
  gWrapperAllFiles_standard_5F_properties_0,
  0,
  gWrapperAllDirectories_standard_5F_properties_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties stub'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_stub (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties scalarProperty'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_scalarProperty (C_Compiler * /* inCompiler */,
                                                                         const GALGAS_string & in_TYPE,
                                                                         const GALGAS_bool & in_TRANSIENT,
                                                                         const GALGAS_string & in_COMPARISON_5F_METHOD
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//   Scalar property " ;
  result << in_TYPE.stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "typealias EBReadOnlyProperty_" ;
  result << in_TYPE.stringValue () ;
  result << "    = EBObservableProperty <" ;
  result << in_TYPE.stringValue () ;
  result << ">\n"
    "typealias EBTransientProperty_" ;
  result << in_TYPE.stringValue () ;
  result << "   = EBGenericTransientProperty <" ;
  result << in_TYPE.stringValue () ;
  result << ">\n" ;
  const enumGalgasBool test_0 = in_TRANSIENT.operator_not (SOURCE_FILE ("scalar-standard-property.swift.galgasTemplate", 7)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typealias EBReadWriteProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "   = EBObservableMutableProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "typealias EBPropertyProxy_" ;
    result << in_TYPE.stringValue () ;
    result << "       = EBGenericPropertyProxy <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "typealias EBComputedProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "    = EBGenericComputedProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "typealias EBStoredProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "      = EBGenericStoredProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "typealias EBPreferencesProperty_" ;
    result << in_TYPE.stringValue () ;
    result << " = EBGenericPreferenceProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "\n"
      "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
      "\n"
      "func values_" ;
    result << in_TYPE.stringValue () ;
    result << "_are_ordered (_ inLeft : " ;
    result << in_TYPE.stringValue () ;
    result << ", _ inAscending : Bool, _ inRight : " ;
    result << in_TYPE.stringValue () ;
    result << ") -> Bool {\n"
      "  let left  = inAscending \? inLeft  : inRight\n"
      "  let right = inAscending \? inRight : inLeft\n" ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, in_COMPARISON_5F_METHOD.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      result << "  return left." ;
      result << in_COMPARISON_5F_METHOD.stringValue () ;
      result << " (right) == .orderedAscending\n" ;
    }else if (kBoolFalse == test_1) {
      result << "  return left < right\n" ;
    }
    result << "}\n"
      "\n"
      "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
      "\n"
      "func compare_" ;
    result << in_TYPE.stringValue () ;
    result << "_properties (_ inLeft : EBReadOnlyProperty_" ;
    result << in_TYPE.stringValue () ;
    result << ", _ inAscending : Bool, _ inRight : EBReadOnlyProperty_" ;
    result << in_TYPE.stringValue () ;
    result << ") -> ComparisonResult {\n"
      "  let left  = inAscending \? inLeft  : inRight\n"
      "  let right = inAscending \? inRight : inLeft\n"
      "  switch left.selection {\n"
      "  case .empty :\n"
      "    switch right.selection {\n"
      "    case .empty :\n"
      "      return .orderedSame\n"
      "    default:\n"
      "      return .orderedAscending\n"
      "    }\n"
      "  case .multiple :\n"
      "    switch right.selection {\n"
      "    case .empty :\n"
      "      return .orderedDescending\n"
      "    case .multiple :\n"
      "      return .orderedSame\n"
      "   case .single (_) :\n"
      "      return .orderedAscending\n"
      "   }\n"
      " case .single (let currentValue) :\n"
      "    switch right.selection {\n"
      "    case .empty, .multiple :\n"
      "      return .orderedDescending\n"
      "    case .single (let otherValue) :\n" ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, in_COMPARISON_5F_METHOD.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      result << "      return currentValue." ;
      result << in_COMPARISON_5F_METHOD.stringValue () ;
      result << " (otherValue)\n" ;
    }else if (kBoolFalse == test_2) {
      result << "      if currentValue < otherValue {\n"
        "        return .orderedAscending\n"
        "      }else if currentValue > otherValue {\n"
        "        return .orderedDescending\n"
        "      }else{\n"
        "        return .orderedSame\n"
        "      }\n" ;
    }
    result << "    }\n"
      "  }\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties classProperty'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_classProperty (C_Compiler * /* inCompiler */,
                                                                        const GALGAS_string & in_CLASS_5F_NAME,
                                                                        const GALGAS_bool & in_COMPARABLE,
                                                                        const GALGAS_bool & in_TRANSIENT
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  const enumGalgasBool test_0 = in_TRANSIENT.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//   Transient property class " ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "\n" ;
  }else if (kBoolFalse == test_0) {
    result << "//   Property class " ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "\n" ;
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  const enumGalgasBool test_1 = in_TRANSIENT.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "typealias EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "       = EBObservableProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBTransientProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "      = EBGenericTransientProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBReadOnlyPropertyArray_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "  = EBObservableProperty <[" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "]>\n"
      "typealias EBTransientPropertyArray_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << " = EBGenericTransientProperty <[" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "]>\n" ;
  }else if (kBoolFalse == test_1) {
    result << "typealias EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "    = EBObservableProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBTransientProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "   = EBGenericTransientProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBReadWriteProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "   = EBObservableMutableProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBPropertyProxy_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "       = EBGenericPropertyProxy <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBComputedProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "    = EBGenericComputedProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBStoredProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "      = EBGenericStoredProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBPreferencesProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << " = EBGenericPreferenceProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n" ;
  }
  result << "\n" ;
  const enumGalgasBool test_2 = in_COMPARABLE.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "\n"
      "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
      "\n"
      "func compare_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "_properties (_ left : EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ", _ right : EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ") -> ComparisonResult {\n"
      "  switch left.prop {\n"
      "  case .empty :\n"
      "    switch right.prop {\n"
      "    case .empty :\n"
      "      return .orderedSame\n"
      "    default:\n"
      "      return .orderedAscending\n"
      "    }\n"
      "  case .multiple :\n"
      "    switch right.prop {\n"
      "    case .empty :\n"
      "      return .OrderedDescending\n"
      "    case .multiple :\n"
      "      return .OrderedSame\n"
      "   case .single (_) :\n"
      "      return .OrderedAscending\n"
      "   }\n"
      " case .single (let currentValue) :\n"
      "    switch right.prop {\n"
      "    case .empty, .multiple :\n"
      "      return .orderedDescending\n"
      "    case .single (let otherValue) :\n"
      "      if currentValue < otherValue {\n"
      "        return .orderedAscending\n"
      "      }else if currentValue > otherValue {\n"
      "        return .orderedDescending\n"
      "      }else{\n"
      "        return .orderedSame\n"
      "      }\n"
      "    }\n"
      "  }\n"
      "}\n" ;
  }else if (kBoolFalse == test_2) {
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateStandardProperties'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateStandardProperties (const GALGAS_string constinArgument_inOutputDirectory,
                                         const GALGAS_stringlist constinArgument_inPropertyClassList,
                                         const GALGAS_transientExternTypeList constinArgument_inTransientPropertyExternTypeList,
                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_contents_10759 = GALGAS_string (filewrapperTemplate_standard_5F_properties_stub (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 300))) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("UInt32"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 302))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 302)) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Int"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 303))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 303)) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Bool"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 304))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 304)) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Double"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 305))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 305)) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("String"), GALGAS_bool (false), GALGAS_string ("localizedStandardCompare") COMMA_SOURCE_FILE ("code-generation.galgas", 306))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 306)) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Data"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 307))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 307)) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Date"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 308))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 308)) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("BezierPathArray"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 309))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 309)) ;
  cEnumerator_stringlist enumerator_11587 (constinArgument_inPropertyClassList, kENUMERATION_UP) ;
  while (enumerator_11587.hasCurrentObject ()) {
    var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, enumerator_11587.current_mValue (HERE), GALGAS_bool (false), GALGAS_bool (false) COMMA_SOURCE_FILE ("code-generation.galgas", 312))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 312)) ;
    enumerator_11587.gotoNextObject () ;
  }
  cEnumerator_transientExternTypeList enumerator_11741 (constinArgument_inTransientPropertyExternTypeList, kENUMERATION_UP) ;
  while (enumerator_11741.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_11741.current_mIsClass (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, enumerator_11741.current_mTypeName (HERE), GALGAS_bool (false), GALGAS_bool (true) COMMA_SOURCE_FILE ("code-generation.galgas", 316))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 316)) ;
      }
    }
    if (kBoolFalse == test_0) {
      var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, enumerator_11741.current_mTypeName (HERE), GALGAS_bool (true), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 318))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 318)) ;
    }
    enumerator_11741.gotoNextObject () ;
  }
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, GALGAS_string ("NSBezierPath"), GALGAS_bool (false), GALGAS_bool (false) COMMA_SOURCE_FILE ("code-generation.galgas", 321))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 321)) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, GALGAS_string ("NSFont"), GALGAS_bool (false), GALGAS_bool (false) COMMA_SOURCE_FILE ("code-generation.galgas", 322))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 322)) ;
  var_contents_10759.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, GALGAS_string ("NSColor"), GALGAS_bool (false), GALGAS_bool (false) COMMA_SOURCE_FILE ("code-generation.galgas", 323))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 323)) ;
  GALGAS_string var_fileName_12309 = GALGAS_string ("standard-properties.swift") ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_12309  COMMA_SOURCE_FILE ("code-generation.galgas", 326)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12309, var_contents_10759, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 327)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProject'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateXcodeProject (const GALGAS_string constinArgument_inOutputDirectory,
                                   const GALGAS_string constinArgument_inXcodeProjectString,
                                   const GALGAS_stringset constinArgument_inGeneratedFileSet,
                                   const GALGAS_string constinArgument_projectName,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inXcodeProjectString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_generateXcodeProjectInternal (constinArgument_inOutputDirectory, constinArgument_inXcodeProjectString, constinArgument_inGeneratedFileSet, constinArgument_projectName, inCompiler  COMMA_SOURCE_FILE ("xcode-project.galgas", 39)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProjectInternal'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateXcodeProjectInternal (const GALGAS_string constinArgument_inOutputDirectory,
                                           const GALGAS_string constinArgument_inXcodeProjectString,
                                           const GALGAS_stringset constinArgument_inGeneratedFileSet,
                                           const GALGAS_string constinArgument_projectName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor var_xcodeProject_1600 = GALGAS_XcodeProjectDescriptor::constructor_default (SOURCE_FILE ("xcode-project.galgas", 51)) ;
  GALGAS_string var_SDK_1677 = GALGAS_string ("macosx") ;
  GALGAS_string var_DEPLOYMENT_1705 = GALGAS_string ("10.10") ;
  {
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 93)) ;
  temp_0.addAssign_operation (GALGAS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 56)) ;
  temp_0.addAssign_operation (GALGAS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\"")  COMMA_SOURCE_FILE ("xcode-project.galgas", 57)) ;
  temp_0.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 58)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 59)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 60)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 61)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 62)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 63)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 64)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 65)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 66)) ;
  temp_0.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 67)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 68)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 69)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 70)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 71)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 72)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 73)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 74)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 75)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 76)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 77)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 78)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_SHADOW = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 79)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 80)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 81)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 82)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 83)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 84)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 85)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 86)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 87)) ;
  temp_0.addAssign_operation (GALGAS_string ("HEADER_SEARCH_PATHS = ()")  COMMA_SOURCE_FILE ("xcode-project.galgas", 88)) ;
  temp_0.addAssign_operation (GALGAS_string ("MACOSX_DEPLOYMENT_TARGET = ").add_operation (var_DEPLOYMENT_1705, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 89))  COMMA_SOURCE_FILE ("xcode-project.galgas", 89)) ;
  temp_0.addAssign_operation (GALGAS_string ("SDKROOT = ").add_operation (var_SDK_1677, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 90))  COMMA_SOURCE_FILE ("xcode-project.galgas", 90)) ;
  temp_0.addAssign_operation (GALGAS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 91)) ;
  temp_0.addAssign_operation (GALGAS_string ("SWIFT_VERSION = 4.2")  COMMA_SOURCE_FILE ("xcode-project.galgas", 92)) ;
  temp_0.addAssign_operation (GALGAS_string ("LD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/../Frameworks\"")  COMMA_SOURCE_FILE ("xcode-project.galgas", 93)) ;
  extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_1600, temp_0, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 55)) ;
  }
  GALGAS_stringlist var_swiftFileRefList_3505 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 96)) ;
  GALGAS_stringlist var_resourceFileRefList_3548 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 97)) ;
  GALGAS_stringset var_generatedFileSet_3576 = constinArgument_inGeneratedFileSet ;
  var_generatedFileSet_3576.addAssign_operation (GALGAS_string ("MainMenu.xib")  COMMA_SOURCE_FILE ("xcode-project.galgas", 99)) ;
  GALGAS_stringlist joker_3774 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 104)) ;
  GALGAS_stringlist joker_3792 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 105)) ;
  GALGAS_stringlist joker_3811 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 106)) ;
  GALGAS_stringlist joker_3874 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 108)) ;
  GALGAS_string var_groupRef_3949 ;
  {
  extensionSetter_addGroupWithFiles (var_xcodeProject_1600, GALGAS_string ("Sources"), constinArgument_projectName, var_generatedFileSet_3576, joker_3774, joker_3792, joker_3811, var_swiftFileRefList_3505, joker_3874, var_resourceFileRefList_3548, var_groupRef_3949, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 100)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1600, var_groupRef_3949, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 112)) ;
  }
  GALGAS_stringlist joker_4153 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 117)) ;
  GALGAS_stringlist joker_4171 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 118)) ;
  GALGAS_stringlist joker_4190 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 119)) ;
  GALGAS_stringlist joker_4253 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 121)) ;
  {
  GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("xcode-project.galgas", 116)) ;
  temp_1.addAssign_operation (GALGAS_string ("Info.plist")  COMMA_SOURCE_FILE ("xcode-project.galgas", 116)) ;
  extensionSetter_addGroupWithFiles (var_xcodeProject_1600, GALGAS_string ("Resources"), constinArgument_projectName, temp_1, joker_4153, joker_4171, joker_4190, var_swiftFileRefList_3505, joker_4253, var_resourceFileRefList_3548, var_groupRef_3949, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 113)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1600, var_groupRef_3949, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 125)) ;
  }
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 135)) ;
  temp_2.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("xcode-project.galgas", 134)) ;
  temp_2.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("xcode-project.galgas", 135)) ;
  GALGAS_string joker_4880 ; // Joker input parameter
  extensionSetter_addAppTarget (var_xcodeProject_1600, constinArgument_projectName, constinArgument_projectName, var_swiftFileRefList_3505, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 131)), var_resourceFileRefList_3548, temp_2, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 137)), GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 138)), constinArgument_projectName.add_operation (GALGAS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 139)), joker_4880, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 127)) ;
  }
  GALGAS_string var_sourceDir_4923 = constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 143)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 143)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 143)) ;
  extensionMethod_generateAtPath (var_xcodeProject_1600, constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 145)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 145)).add_operation (GALGAS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 145)), var_sourceDir_4923.add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 146)).add_operation (GALGAS_string (".xcodeproj.txt"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 144)) ;
  GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("xcode-project.galgas", 153)) ;
  temp_3.addAssign_operation (constinArgument_projectName  COMMA_SOURCE_FILE ("xcode-project.galgas", 153)) ;
  GALGAS_string var_s_5177 = GALGAS_string (filewrapperTemplate_additionalXcodeFiles_info_5F_plist (inCompiler, constinArgument_projectName, constinArgument_inXcodeProjectString, GALGAS_string ("1.0.0"), temp_3 COMMA_SOURCE_FILE ("xcode-project.galgas", 149))) ;
  {
  GALGAS_string::class_method_generateFile (var_sourceDir_4923, GALGAS_string ("Info.plist"), var_s_5177, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 155)) ;
  }
  var_s_5177 = GALGAS_string (filewrapperTemplate_additionalXcodeFiles_main_5F_xib (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas", 160))) ;
  {
  GALGAS_string::class_method_generateFile (var_sourceDir_4923, GALGAS_string ("MainMenu.xib"), var_s_5177, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 163)) ;
  }
  var_s_5177 = GALGAS_string (filewrapperTemplate_additionalXcodeFiles_build_5F_command (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas", 168))) ;
  GALGAS_bool joker_5678 ; // Joker input parameter
  var_s_5177.method_writeToExecutableFileWhenDifferentContents (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 172)), joker_5678, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 171)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'additionalXcodeFiles'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_additionalXcodeFiles_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_additionalXcodeFiles_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles (
  "",
  0,
  gWrapperAllFiles_additionalXcodeFiles_0,
  0,
  gWrapperAllDirectories_additionalXcodeFiles_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles main_xib'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (C_Compiler * /* inCompiler */,
                                                                    const GALGAS_string & in_PROJECT_5F_NAME
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"\?>\n"
    "<document type=\"com.apple.InterfaceBuilder3.Cocoa.XIB\" version=\"3.0\" toolsVersion=\"7528.3\" systemVersion=\"14C1514\" targetRuntime=\"MacOSX.Cocoa\" proper"
    "tyAccessControl=\"none\">\n"
    "    <dependencies>\n"
    "        <deployment version=\"1090\" identifier=\"macosx\"/>\n"
    "        <plugIn identifier=\"com.apple.InterfaceBuilder.CocoaPlugin\" version=\"7528.3\"/>\n"
    "    </dependencies>\n"
    "    <objects>\n"
    "        <customObject id=\"-2\" userLabel=\"File's Owner\" customClass=\"NSApplication\"/>\n"
    "        <customObject id=\"-1\" userLabel=\"First Responder\" customClass=\"FirstResponder\"/>\n"
    "        <customObject id=\"-3\" userLabel=\"Application\" customClass=\"NSObject\"/>\n"
    "        <menu title=\"AMainMenu\" systemMenu=\"main\" id=\"29\">\n"
    "            <items>\n"
    "                <menuItem title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" id=\"56\">\n"
    "                    <menu key=\"submenu\" title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" systemMenu=\"apple\" id=\"57\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"About " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" id=\"58\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"orderFrontStandardAboutPanel:\" target=\"-2\" id=\"142\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"236\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Preferences\xE2""\x80""\xA6""\" keyEquivalent=\",\" id=\"129\"/>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"143\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Services\" id=\"131\">\n"
    "                                <menu key=\"submenu\" title=\"Services\" systemMenu=\"services\" id=\"130\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"144\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Hide " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" keyEquivalent=\"h\" id=\"134\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"hide:\" target=\"-1\" id=\"367\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Hide Others\" keyEquivalent=\"h\" id=\"145\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"hideOtherApplications:\" target=\"-1\" id=\"368\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Show All\" id=\"150\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"unhideAllApplications:\" target=\"-1\" id=\"370\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"149\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Quit " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" keyEquivalent=\"q\" id=\"136\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"terminate:\" target=\"-3\" id=\"449\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"File\" id=\"83\">\n"
    "                    <menu key=\"submenu\" title=\"File\" id=\"81\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"New\" keyEquivalent=\"n\" id=\"82\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"newDocument:\" target=\"-1\" id=\"373\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Open\xE2""\x80""\xA6""\" keyEquivalent=\"o\" id=\"72\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"openDocument:\" target=\"-1\" id=\"374\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Open Recent\" id=\"124\">\n"
    "                                <menu key=\"submenu\" title=\"Open Recent\" systemMenu=\"recentDocuments\" id=\"125\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Clear Menu\" id=\"126\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"clearRecentDocuments:\" target=\"-1\" id=\"127\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"79\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Close\" keyEquivalent=\"w\" id=\"73\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"performClose:\" target=\"-1\" id=\"193\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Save\xE2""\x80""\xA6""\" keyEquivalent=\"s\" id=\"75\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"saveDocument:\" target=\"-1\" id=\"362\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Revert to Saved\" id=\"112\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"revertDocumentToSaved:\" target=\"-1\" id=\"364\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"74\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Page Setup...\" keyEquivalent=\"P\" id=\"77\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"runPageLayout:\" target=\"-1\" id=\"87\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Print\xE2""\x80""\xA6""\" keyEquivalent=\"p\" id=\"78\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"print:\" target=\"-1\" id=\"86\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"Edit\" id=\"217\">\n"
    "                    <menu key=\"submenu\" title=\"Edit\" id=\"205\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"Undo\" keyEquivalent=\"z\" id=\"207\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"undo:\" target=\"-1\" id=\"223\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Redo\" keyEquivalent=\"Z\" id=\"215\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"redo:\" target=\"-1\" id=\"231\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"206\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Cut\" keyEquivalent=\"x\" id=\"199\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"cut:\" target=\"-1\" id=\"228\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Copy\" keyEquivalent=\"c\" id=\"197\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"copy:\" target=\"-1\" id=\"224\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Paste\" keyEquivalent=\"v\" id=\"203\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"paste:\" target=\"-1\" id=\"226\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Paste and Match Style\" keyEquivalent=\"V\" id=\"485\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"pasteAsPlainText:\" target=\"-1\" id=\"486\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Delete\" id=\"202\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"delete:\" target=\"-1\" id=\"235\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Select All\" keyEquivalent=\"a\" id=\"198\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"selectAll:\" target=\"-1\" id=\"232\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"214\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Find\" id=\"218\">\n"
    "                                <menu key=\"submenu\" title=\"Find\" id=\"220\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Find\xE2""\x80""\xA6""\" tag=\"1\" keyEquivalent=\"f\" id=\"209\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"241\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Find and Replace\xE2""\x80""\xA6""\" tag=\"12\" keyEquivalent=\"f\" id=\"534\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"535\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Find Next\" tag=\"2\" keyEquivalent=\"g\" id=\"208\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"487\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Find Previous\" tag=\"3\" keyEquivalent=\"G\" id=\"213\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"488\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Use Selection for Find\" tag=\"7\" keyEquivalent=\"e\" id=\"221\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"489\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Jump to Selection\" keyEquivalent=\"j\" id=\"210\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"centerSelectionInVisibleArea:\" target=\"-1\" id=\"245\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Spelling and Grammar\" id=\"216\">\n"
    "                                <menu key=\"submenu\" title=\"Spelling and Grammar\" id=\"200\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Show Spelling and Grammar\" keyEquivalent=\":\" id=\"204\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"showGuessPanel:\" target=\"-1\" id=\"230\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Check Document Now\" keyEquivalent=\";\" id=\"201\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"checkSpelling:\" target=\"-1\" id=\"225\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"453\"/>\n"
    "                                        <menuItem title=\"Check Spelling While Typing\" id=\"219\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleContinuousSpellChecking:\" target=\"-1\" id=\"222\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Check Grammar With Spelling\" id=\"346\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleGrammarChecking:\" target=\"-1\" id=\"347\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Correct Spelling Automatically\" id=\"454\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticSpellingCorrection:\" target=\"-1\" id=\"456\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Substitutions\" id=\"348\">\n"
    "                                <menu key=\"submenu\" title=\"Substitutions\" id=\"349\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Show Substitutions\" id=\"457\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"orderFrontSubstitutionsPanel:\" target=\"-1\" id=\"458\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"459\"/>\n"
    "                                        <menuItem title=\"Smart Copy/Paste\" tag=\"1\" keyEquivalent=\"f\" id=\"350\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleSmartInsertDelete:\" target=\"-1\" id=\"355\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Smart Quotes\" tag=\"2\" keyEquivalent=\"g\" id=\"351\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticQuoteSubstitution:\" target=\"-1\" id=\"356\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Smart Dashes\" id=\"460\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticDashSubstitution:\" target=\"-1\" id=\"461\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Smart Links\" tag=\"3\" keyEquivalent=\"G\" id=\"354\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticLinkDetection:\" target=\"-1\" id=\"357\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Text Replacement\" id=\"462\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticTextReplacement:\" target=\"-1\" id=\"463\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Transformations\" id=\"450\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <menu key=\"submenu\" title=\"Transformations\" id=\"451\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Make Upper Case\" id=\"452\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"uppercaseWord:\" target=\"-1\" id=\"464\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Make Lower Case\" id=\"465\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"lowercaseWord:\" target=\"-1\" id=\"468\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Capitalize\" id=\"466\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"capitalizeWord:\" target=\"-1\" id=\"467\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Speech\" id=\"211\">\n"
    "                                <menu key=\"submenu\" title=\"Speech\" id=\"212\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Start Speaking\" id=\"196\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"startSpeaking:\" target=\"-1\" id=\"233\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Stop Speaking\" id=\"195\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"stopSpeaking:\" target=\"-1\" id=\"227\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"Format\" id=\"375\">\n"
    "                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                    <menu key=\"submenu\" title=\"Format\" id=\"376\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"Font\" id=\"377\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <menu key=\"submenu\" title=\"Font\" systemMenu=\"font\" id=\"388\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Show Fonts\" keyEquivalent=\"t\" id=\"389\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"orderFrontFontPanel:\" target=\"420\" id=\"424\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Bold\" tag=\"2\" keyEquivalent=\"b\" id=\"390\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"421\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Italic\" tag=\"1\" keyEquivalent=\"i\" id=\"391\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"422\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Underline\" keyEquivalent=\"u\" id=\"392\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"underline:\" target=\"-1\" id=\"432\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"393\"/>\n"
    "                                        <menuItem title=\"Bigger\" tag=\"3\" keyEquivalent=\"+\" id=\"394\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"modifyFont:\" target=\"420\" id=\"425\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Smaller\" tag=\"4\" keyEquivalent=\"-\" id=\"395\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"modifyFont:\" target=\"420\" id=\"423\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"396\"/>\n"
    "                                        <menuItem title=\"Kern\" id=\"397\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <menu key=\"submenu\" title=\"Kern\" id=\"415\">\n"
    "                                                <items>\n"
    "                                                    <menuItem title=\"Use Default\" id=\"416\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"useStandardKerning:\" target=\"-1\" id=\"438\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Use None\" id=\"417\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"turnOffKerning:\" target=\"-1\" id=\"441\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Tighten\" id=\"418\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"tightenKerning:\" target=\"-1\" id=\"431\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Loosen\" id=\"419\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"loosenKerning:\" target=\"-1\" id=\"435\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                </items>\n"
    "                                            </menu>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Ligature\" id=\"398\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <menu key=\"submenu\" title=\"Ligature\" id=\"411\">\n"
    "                                                <items>\n"
    "                                                    <menuItem title=\"Use Default\" id=\"412\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"useStandardLigatures:\" target=\"-1\" id=\"439\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Use None\" id=\"413\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"turnOffLigatures:\" target=\"-1\" id=\"440\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Use All\" id=\"414\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"useAllLigatures:\" target=\"-1\" id=\"434\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                </items>\n"
    "                                            </menu>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Baseline\" id=\"399\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <menu key=\"submenu\" title=\"Baseline\" id=\"405\">\n"
    "                                                <items>\n"
    "                                                    <menuItem title=\"Use Default\" id=\"406\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"unscript:\" target=\"-1\" id=\"437\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Superscript\" id=\"407\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"superscript:\" target=\"-1\" id=\"430\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Subscript\" id=\"408\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"subscript:\" target=\"-1\" id=\"429\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Raise\" id=\"409\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"raiseBaseline:\" target=\"-1\" id=\"426\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Lower\" id=\"410\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"lowerBaseline:\" target=\"-1\" id=\"427\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                </items>\n"
    "                                            </menu>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"400\"/>\n"
    "                                        <menuItem title=\"Show Colors\" keyEquivalent=\"C\" id=\"401\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"orderFrontColorPanel:\" target=\"-1\" id=\"433\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"402\"/>\n"
    "                                        <menuItem title=\"Copy Style\" keyEquivalent=\"c\" id=\"403\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"copyFont:\" target=\"-1\" id=\"428\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Paste Style\" keyEquivalent=\"v\" id=\"404\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"pasteFont:\" target=\"-1\" id=\"436\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Text\" id=\"496\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <menu key=\"submenu\" title=\"Text\" id=\"497\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Align Left\" keyEquivalent=\"{\" id=\"498\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"alignLeft:\" target=\"-1\" id=\"524\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Center\" keyEquivalent=\"|\" id=\"499\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"alignCenter:\" target=\"-1\" id=\"518\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Justify\" id=\"500\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"alignJustified:\" target=\"-1\" id=\"523\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Align Right\" keyEquivalent=\"}\" id=\"501\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"alignRight:\" target=\"-1\" id=\"521\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"502\"/>\n"
    "                                        <menuItem title=\"Writing Direction\" id=\"503\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <menu key=\"submenu\" title=\"Writing Direction\" id=\"508\">\n"
    "                                                <items>\n"
    "                                                    <menuItem title=\"Paragraph\" enabled=\"NO\" id=\"509\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"510\">\n"
    "                                                        <string key=\"title\"> Default</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeBaseWritingDirectionNatural:\" target=\"-1\" id=\"525\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"511\">\n"
    "                                                        <string key=\"title\"> Left to Right</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeBaseWritingDirectionLeftToRight:\" target=\"-1\" id=\"526\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"512\">\n"
    "                                                        <string key=\"title\"> Right to Left</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeBaseWritingDirectionRightToLeft:\" target=\"-1\" id=\"527\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem isSeparatorItem=\"YES\" id=\"513\"/>\n"
    "                                                    <menuItem title=\"Selection\" enabled=\"NO\" id=\"514\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"515\">\n"
    "                                                        <string key=\"title\"> Default</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeTextWritingDirectionNatural:\" target=\"-1\" id=\"528\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"516\">\n"
    "                                                        <string key=\"title\"> Left to Right</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeTextWritingDirectionLeftToRight:\" target=\"-1\" id=\"529\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"517\">\n"
    "                                                        <string key=\"title\"> Right to Left</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeTextWritingDirectionRightToLeft:\" target=\"-1\" id=\"530\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                </items>\n"
    "                                            </menu>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"504\"/>\n"
    "                                        <menuItem title=\"Show Ruler\" id=\"505\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleRuler:\" target=\"-1\" id=\"520\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Copy Ruler\" keyEquivalent=\"c\" id=\"506\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"copyRuler:\" target=\"-1\" id=\"522\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Paste Ruler\" keyEquivalent=\"v\" id=\"507\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"pasteRuler:\" target=\"-1\" id=\"519\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"View\" id=\"295\">\n"
    "                    <menu key=\"submenu\" title=\"View\" id=\"296\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"Show Toolbar\" keyEquivalent=\"t\" id=\"297\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"toggleToolbarShown:\" target=\"-1\" id=\"366\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Customize Toolbar\xE2""\x80""\xA6""\" id=\"298\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"runToolbarCustomizationPalette:\" target=\"-1\" id=\"365\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"Window\" id=\"19\">\n"
    "                    <menu key=\"submenu\" title=\"Window\" systemMenu=\"window\" id=\"24\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"Minimize\" keyEquivalent=\"m\" id=\"23\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"performMiniaturize:\" target=\"-1\" id=\"37\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Zoom\" id=\"239\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"performZoom:\" target=\"-1\" id=\"240\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"92\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Bring All to Front\" id=\"5\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"arrangeInFront:\" target=\"-1\" id=\"39\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"Help\" id=\"490\">\n"
    "                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                    <menu key=\"submenu\" title=\"Help\" systemMenu=\"help\" id=\"491\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << " Help\" keyEquivalent=\"\?\" id=\"492\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"showHelp:\" target=\"-1\" id=\"493\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "            </items>\n"
    "        </menu>\n"
    "        <window identifier=\"PrefWindow\" title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" allowsToolTipsWhenApplicationIsInactive=\"NO\" autorecalculatesKeyViewLoop=\"NO\" releasedWhenClosed=\"NO\" animationBehavior=\"default\" id=\"371\">\n"
    "            <windowStyleMask key=\"styleMask\" titled=\"YES\"/>\n"
    "            <windowPositionMask key=\"initialPositionMask\" leftStrut=\"YES\" rightStrut=\"YES\" topStrut=\"YES\" bottomStrut=\"YES\"/>\n"
    "            <rect key=\"contentRect\" x=\"335\" y=\"390\" width=\"615\" height=\"409\"/>\n"
    "            <rect key=\"screenRect\" x=\"0.0\" y=\"0.0\" width=\"2560\" height=\"1418\"/>\n"
    "            <view key=\"contentView\" id=\"372\">\n"
    "                <rect key=\"frame\" x=\"0.0\" y=\"0.0\" width=\"615\" height=\"409\"/>\n"
    "                <autoresizingMask key=\"autoresizingMask\"/>\n"
    "            </view>\n"
    "        </window>\n"
    "        <customObject id=\"536\" userLabel=\"Prefs\" customClass=\"Preferences\">\n"
    "            <connections>\n"
    "                <outlet property=\"window\" destination=\"371\" id=\"MyW-LM-hi6\"/>\n"
    "            </connections>\n"
    "        </customObject>\n"
    "        <customObject id=\"420\" customClass=\"NSFontManager\"/>\n"
    "    </objects>\n"
    "</document>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles info_plist'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (C_Compiler * /* inCompiler */,
                                                                      const GALGAS_string & in_PROJECT_5F_NAME,
                                                                      const GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                      const GALGAS_string & in_VERSION_5F_STRING,
                                                                      const GALGAS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n"
    "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
    "<plist version=\"1.0\">\n"
    "<dict>\n"
    " <key>CFBundleDevelopmentRegion</key>\n"
    " <string>English</string>\n"
    " <key>CFBundleExecutable</key>\n"
    " <string>${EXECUTABLE_NAME}</string>\n"
    " <key>CFBundleIconFile</key>\n"
    " <string>application_icns</string>\n"
    " <key>CFBundleIdentifier</key>\n"
    " <string>" ;
  result << in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</string>\n"
    " <key>CFBundleInfoDictionaryVersion</key>\n"
    " <string>6.0</string>\n"
    " <key>CFBundleName</key>\n"
    " <string>${PRODUCT_NAME}</string>\n"
    " <key>CFBundlePackageType</key>\n"
    " <string>APPL</string>\n"
    " <key>CFBundleSignature</key>\n"
    " <string>\?\?\?\?</string>\n"
    " <key>LSMinimumSystemVersion</key>\n"
    " <string>10.9</string>\n"
    " <key>CFBundleShortVersionString</key>\n"
    " <string>" ;
  result << in_VERSION_5F_STRING.stringValue () ;
  result << "</string>\n"
    " <key>NSMainNibFile</key>\n"
    " <string>MainMenu</string>\n"
    " <key>NSPrincipalClass</key>\n"
    " <string>EBApplication</string>\n"
    " <key>CFBundleDocumentTypes</key>\n"
    " <array>\n" ;
  GALGAS_uint index_1017_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1017 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1017.hasCurrentObject ()) {
      result << "  <dict>\n"
        "   <key>CFBundleTypeIconFile</key>\n"
        "   <string>" ;
      result << enumerator_1017.current_key (HERE).stringValue () ;
      result << "_icns</string>\n"
        "   <key>CFBundleTypeExtensions</key>\n"
        "   <array>\n"
        "    <string>" ;
      result << enumerator_1017.current_key (HERE).stringValue () ;
      result << "</string>\n"
        "   </array>\n"
        "   <key>CFBundleTypeName</key>\n"
        "   <string>" ;
      result << in_PROJECT_5F_NAME.stringValue () ;
      result << " Source</string>\n"
        "   <key>CFBundleTypeOSTypes</key>\n"
        "   <array>\n"
        "    <string>TEXT</string>\n"
        "   </array>\n"
        "   <key>CFBundleTypeRole</key>\n"
        "   <string>Editor</string>\n"
        "   <key>LSTypeIsPackage</key>\n"
        "   <false/>\n"
        "   <key>NSDocumentClass</key>\n"
        "   <string>OC_GGS_Document</string>\n"
        "  </dict>\n" ;
      index_1017_.increment () ;
      enumerator_1017.gotoNextObject () ;
    }
  }
  result << "\n"
    " </array>\n"
    "</dict>\n"
    "</plist>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles build_command'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (C_Compiler * /* inCompiler */,
                                                                         const GALGAS_string & in_PROJECT_5F_NAME
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "import subprocess, os, sys, atexit\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup () :\n"
    "  if buildProcess.poll () == None :\n"
    "    buildProcess.kill ()\n"
    "    print 'Build process killed'\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "#------------------- Register a function for killing build subprocess\n"
    "atexit.register (cleanup)\n"
    "#------------------- Get compiler as first argument\n"
    "compiler = \"eb\" # Default compiler\n"
    "if len (sys.argv) > 1 :\n"
    "  compiler = sys.argv [1]\n"
    "#------------------- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "os.chdir (scriptDir)\n"
    "#------------------- Build\n"
    "print \"+ \" + compiler + \" " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".eb\"\n"
    "buildProcess = subprocess.Popen ([compiler, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".eb\"])\n"
    "buildProcess.wait ()\n"
    "#------------------- Xcode build\n"
    "if buildProcess.returncode == 0 :\n"
    "  buildProcess = subprocess.Popen ([\"/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild\"])\n"
    "  buildProcess.wait ()\n"
    "#------------------- Result\n"
    "if buildProcess.returncode != 0 :\n"
    "  sys.exit (buildProcess.returncode)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (C_Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_REF,
                                                                               const GALGAS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                               const GALGAS_XCodeGroupList & in_GROUPS,
                                                                               const GALGAS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                               const GALGAS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                               const GALGAS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                               const GALGAS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                               const GALGAS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const GALGAS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                               const GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "// !$*UTF8*$!\n"
    "{\n"
    "  archiveVersion = 1;\n"
    "  classes = {\n"
    "  };\n"
    "  objectVersion = 42;\n"
    "  objects = {\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXBuildFile */\n" ;
  GALGAS_uint index_250_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_250 (in_BUILD_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_250.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_250.current_mBuildReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_250.current_mFileName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXBuildFile;\n"
        "    fileRef = " ;
      result << enumerator_250.current_mFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    settings = {ATTRIBUTES = (); };\n"
        "  };\n"
        "\n" ;
      index_250_.increment () ;
      enumerator_250.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFileReference */\n" ;
  GALGAS_uint index_555_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_555 (in_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_555.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_555.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_555.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.cpp;\n"
        "    name = " ;
      result << enumerator_555.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_555.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_555_.increment () ;
      enumerator_555.gotoNextObject () ;
    }
  }
  GALGAS_uint index_902_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_902 (in_M_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_902.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_902.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_902.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.obj;\n"
        "    name = " ;
      result << enumerator_902.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_902.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_902_.increment () ;
      enumerator_902.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1248_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1248 (in_MM_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1248.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1248.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1248.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.objcpp;\n"
        "    name = " ;
      result << enumerator_1248.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1248.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1248_.increment () ;
      enumerator_1248.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1602_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1602 (in_SWIFT_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1602.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1602.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1602.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.swift;\n"
        "    name = " ;
      result << enumerator_1602.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1602.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1602_.increment () ;
      enumerator_1602.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1952_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1952 (in_HEADER_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1952.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1952.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1952.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.h;\n"
        "    name = " ;
      result << enumerator_1952.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1952.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1952_.increment () ;
      enumerator_1952.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2303_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2303 (in_FRAMEWORK_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2303.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2303.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_2303.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = wrapper.framework;\n"
        "    name = " ;
      result << enumerator_2303.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_2303.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_2303_.increment () ;
      enumerator_2303.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2836_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_2836 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2836.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2836.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_2836.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_2836_.increment () ;
      enumerator_2836.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3427_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_3427 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3427.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3427.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_3427.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_3427_.increment () ;
      enumerator_3427.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3736_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3736 (in_PLIST_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3736.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3736.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = text.plist;\n"
        "    name = " ;
      result << enumerator_3736.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3736.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3736_.increment () ;
      enumerator_3736.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4060_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4060 (in_XIB_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4060.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4060.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = wrapper.xib;\n"
        "    name = " ;
      result << enumerator_4060.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_4060.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_4060_.increment () ;
      enumerator_4060.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4386_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4386 (in_TIFF_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4386.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4386.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.tiff;\n"
        "    name = " ;
      result << enumerator_4386.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_4386.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_4386_.increment () ;
      enumerator_4386.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4685_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4685 (in_ICNS_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4685.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4685.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.icns;\n"
        "    name = " ;
      result << enumerator_4685.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_4685.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_4685_.increment () ;
      enumerator_4685.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_5296_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5296 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5296.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5296.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  " ;
        result << enumerator_5296.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " = {\n"
          "    isa = PBXFrameworksBuildPhase;\n"
          "    buildActionMask = 2147483647;\n"
          "    files = (\n" ;
        GALGAS_uint index_5536_ (0) ;
        if (enumerator_5296.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_5536 (enumerator_5296.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
          while (enumerator_5536.hasCurrentObject ()) {
            result << "      " ;
            result << enumerator_5536.current_mValue (HERE).stringValue () ;
            result << ",\n" ;
            index_5536_.increment () ;
            enumerator_5536.gotoNextObject () ;
          }
        }
        result << "    );\n"
          "    runOnlyForDeploymentPostprocessing = 0;\n"
          "  };\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_5296_.increment () ;
      enumerator_5296.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5989_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_5989 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5989.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5989.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFrameworksBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_6173_ (0) ;
      if (enumerator_5989.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6173 (enumerator_5989.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_6173.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6173.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_6173_.increment () ;
          enumerator_6173.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_5989_.increment () ;
      enumerator_5989.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXGroup section */\n" ;
  GALGAS_uint index_6449_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_6449 (in_GROUPS, kENUMERATION_UP) ;
    while (enumerator_6449.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_6449.current_mGroupReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_6449.current_mGroupName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXGroup;\n"
        "    children = (\n" ;
      GALGAS_uint index_6576_ (0) ;
      if (enumerator_6449.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6576 (enumerator_6449.current_mChildrenRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_6576.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6576.current_mValue (HERE).stringValue () ;
          result << ", \n" ;
          index_6576_.increment () ;
          enumerator_6576.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_6449.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_6449.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n" ;
      index_6449_.increment () ;
      enumerator_6449.gotoNextObject () ;
    }
  }
  result << "\n"
    "  " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << " /* Main Group */ = {\n"
    "    isa = PBXGroup;\n"
    "    children = (\n" ;
  GALGAS_uint index_6888_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_6888 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, kENUMERATION_UP) ;
    while (enumerator_6888.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_6888.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_6888_.increment () ;
      enumerator_6888.gotoNextObject () ;
    }
  }
  result << "    );\n"
    "    sourceTree = \"<group>\";\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXNativeTarget */\n" ;
  GALGAS_uint index_7302_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7302 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7302.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_7302.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_7302.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_7302.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_7302.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " ,\n" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_7302.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "      " ;
        result << enumerator_7302.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " , /* Frameworks */\n" ;
      }else if (kBoolFalse == test_1) {
      }
      result << "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n"
        "    );\n"
        "    name = " ;
      result << enumerator_7302.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_7302.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_7302.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.tool\";\n"
        "  };\n"
        " \n" ;
      index_7302_.increment () ;
      enumerator_7302.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8235_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8235 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8235.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_8235.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_8235.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_8235.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_8235.current_mResourceBuildRef (HERE).stringValue () ;
      result << " , /* Resources */\n"
        "      " ;
      result << enumerator_8235.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Frameworks */\n"
        "      " ;
      result << enumerator_8235.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Sources */\n"
        "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n" ;
      GALGAS_uint index_8624_ (0) ;
      if (enumerator_8235.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_8624 (enumerator_8235.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_8624.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_8624.current_mValue_30_ (HERE).stringValue () ;
          result << " ,\n" ;
          index_8624_.increment () ;
          enumerator_8624.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_8235.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_8235.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_8235.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.application\";\n"
        "  };\n"
        "\n" ;
      index_8235_.increment () ;
      enumerator_8235.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXProject */\n"
    "  " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */ = {\n"
    "   isa = PBXProject;\n"
    "   attributes = {\n"
    "     LastSwiftUpdateCheck = 0700;\n"
    "     LastUpgradeCheck = 0700;\n"
    "   };\n"
    "   buildConfigurationList = " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */;\n"
    "   compatibilityVersion = \"Xcode 2.4\";\n"
    "   hasScannedForEncodings = 1;\n"
    "   mainGroup = " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << ";\n"
    "   projectDirPath = \"\";\n"
    "   projectRoot = \"\";\n"
    "   targets = (\n" ;
  GALGAS_uint index_9696_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_9696 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9696.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9696.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_9696_.increment () ;
      enumerator_9696.gotoNextObject () ;
    }
  }
  GALGAS_uint index_10050_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10050 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10050.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10050.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_10050_.increment () ;
      enumerator_10050.gotoNextObject () ;
    }
  }
  result << "   );\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_10517_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10517 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10517.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_10517.current_mResourceBuildRef (HERE).stringValue () ;
      result << " /* Resources */ = {\n"
        "    isa = PBXResourcesBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_10700_ (0) ;
      if (enumerator_10517.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_10700 (enumerator_10517.current_mResourceFileBuildRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_10700.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_10700.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_10700_.increment () ;
          enumerator_10700.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_10517_.increment () ;
      enumerator_10517.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n" ;
  GALGAS_uint index_11150_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_11150 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11150.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_11150.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_11317_ (0) ;
      if (enumerator_11150.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11317 (enumerator_11150.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_11317.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_11317.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11317_.increment () ;
          enumerator_11317.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_11150_.increment () ;
      enumerator_11150.gotoNextObject () ;
    }
  }
  GALGAS_uint index_11738_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_11738 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11738.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_11738.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_11905_ (0) ;
      if (enumerator_11738.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11905 (enumerator_11738.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_11905.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_11905.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11905_.increment () ;
          enumerator_11905.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_11738_.increment () ;
      enumerator_11738.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXTargetDependency */\n"
    " \n" ;
  GALGAS_uint index_12427_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12427 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12427.hasCurrentObject ()) {
      GALGAS_uint index_12475_ (0) ;
      if (enumerator_12427.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_12475 (enumerator_12427.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_12475.hasCurrentObject ()) {
          result << "  " ;
          result << enumerator_12475.current_mValue_30_ (HERE).stringValue () ;
          result << " = {\n"
            "    isa = PBXTargetDependency;\n"
            "    target = " ;
          result << enumerator_12475.current_mValue_31_ (HERE).stringValue () ;
          result << ";\n"
            "  };\n"
            "\n" ;
          index_12475_.increment () ;
          enumerator_12475.gotoNextObject () ;
        }
      }
      index_12427_.increment () ;
      enumerator_12427.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXVariantGroup */\n"
    " \n"
    "  /*------------------------------------------------------------------ XCBuildConfiguration */\n"
    "    " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */ = {\n"
    "      isa = XCBuildConfiguration;\n"
    "      buildSettings = {\n" ;
  GALGAS_uint index_12952_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12952 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12952.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_12952.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_12952_.increment () ;
      enumerator_12952.gotoNextObject () ;
    }
  }
  result << "    };\n"
    "    name = Default;\n"
    "  };\n"
    "\n" ;
  GALGAS_uint index_13267_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_13267 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13267.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_13267.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_13435_ (0) ;
      if (enumerator_13267.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_13435 (enumerator_13267.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_13435.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_13435.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_13435_.increment () ;
          enumerator_13435.gotoNextObject () ;
        }
      }
      result << "      PRODUCT_NAME = " ;
      result << enumerator_13267.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_13267_.increment () ;
      enumerator_13267.gotoNextObject () ;
    }
  }
  GALGAS_uint index_13905_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_13905 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13905.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_13905.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_14073_ (0) ;
      if (enumerator_13905.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_14073 (enumerator_13905.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_14073.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_14073.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_14073_.increment () ;
          enumerator_14073.gotoNextObject () ;
        }
      }
      result << "      INFOPLIST_FILE = " ;
      result << enumerator_13905.current_mInfoPListFile (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue () ;
      result << ";\n"
        "      PRODUCT_NAME = " ;
      result << enumerator_13905.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_13905_.increment () ;
      enumerator_13905.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ XCConfigurationList section */\n"
    "\n"
    "    " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */ = {\n"
    "      isa = XCConfigurationList;\n"
    "      buildConfigurations = (\n"
    "        " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */,\n"
    "      );\n"
    "      defaultConfigurationIsVisible = 0;\n"
    "      defaultConfigurationName = Default;\n"
    "    };\n"
    "\n" ;
  GALGAS_uint index_14955_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_14955 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14955.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_14955.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_14955.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_14955_.increment () ;
      enumerator_14955.gotoNextObject () ;
    }
  }
  GALGAS_uint index_15552_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_15552 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15552.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_15552.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_15552.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_15552_.increment () ;
      enumerator_15552.gotoNextObject () ;
    }
  }
  result << "/*------------------------------------------------------------------ End */\n"
    "  };\n"
    "\n"
    "  rootObject = " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */;\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateTestFile (const GALGAS_string constinArgument_inBundleIdentifier,
                               const GALGAS_string constinArgument_inProjectName,
                               const GALGAS_mainXibDescriptorList constinArgument_inMainXibDescriptorList,
                               const GALGAS_string constinArgument_inOutputDirectory,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inMainXibDescriptorList.getter_length (SOURCE_FILE ("main-xib.galgas", 135)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBundleIdentifier.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_outlet_5F_identifier_5F_list_5322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 136)) ;
      cEnumerator_mainXibDescriptorList enumerator_5342 (constinArgument_inMainXibDescriptorList, kENUMERATION_UP) ;
      while (enumerator_5342.hasCurrentObject ()) {
        cEnumerator_mainXibLineDescriptorList enumerator_5393 (enumerator_5342.current_mLine (HERE), kENUMERATION_UP) ;
        while (enumerator_5393.hasCurrentObject ()) {
          switch (enumerator_5393.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_5546 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_5393.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_5488_outletName = extractPtr_5546->mAssociatedValue1 ;
              var_outlet_5F_identifier_5F_list_5322.addAssign_operation (extractedValue_5488_outletName.readProperty_string ()  COMMA_SOURCE_FILE ("main-xib.galgas", 142)) ;
            }
            break ;
          }
          enumerator_5393.gotoNextObject () ;
        }
        enumerator_5342.gotoNextObject () ;
      }
      GALGAS_string var_s_5586 = GALGAS_string (filewrapperTemplate_testFiles_test_5F_py (inCompiler, constinArgument_inBundleIdentifier, constinArgument_inProjectName, var_outlet_5F_identifier_5F_list_5322 COMMA_SOURCE_FILE ("main-xib.galgas", 146))) ;
      GALGAS_string var_header_5717 = GALGAS_string ("#!/usr/bin/python\n"
        "# coding=utf-8\n"
        "\n"
        "# https://pypi.python.org/pypi/atomac\n"
        "# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py\n"
        "\n") ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, GALGAS_string ("test.py"), GALGAS_string ("#"), var_header_5717, GALGAS_string::makeEmptyString (), var_s_5586, GALGAS_string ("#    ENTER USER CODE HERE\n"), GALGAS_string ("\n"
        "quitApplication ()\n"
        "\n"
        "#----------------------------------------------------------------------------*\n"), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 155)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'testFiles'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_testFiles_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_testFiles_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_testFiles (
  "",
  0,
  gWrapperAllFiles_testFiles_0,
  0,
  gWrapperAllDirectories_testFiles_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'testFiles test_py'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_testFiles_test_5F_py (C_Compiler * /* inCompiler */,
                                                        const GALGAS_string & in_BUNDLE_5F_IDENTIFIER,
                                                        const GALGAS_string & in_PROJECT_5F_NAME,
                                                        const GALGAS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#------------------------------------------------------------------------------*\n"
    "\n"
    "import random, string\n"
    "\n"
    "import subprocess, os, sys, atexit\n"
    "import atomac, sys, time, inspect\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   GET SOURCE LINE NUMBER                                                     *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def lineno():\n"
    "  return inspect.currentframe().f_back.f_lineno\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   LAUNCH APPLICATION                                                         *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def launchApplication ():\n"
    "  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "  atomac.launchAppByBundlePath (scriptDir + \"/build/Default/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".app\")\n"
    "  time.sleep (0.5)\n"
    "  application = atomac.getAppRefByBundleId ('" ;
  result << in_BUNDLE_5F_IDENTIFIER.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')\n"
    "  return application\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   QUIT APPLICATION                                                           *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def quitApplication ():\n"
    "  atomac.terminateAppByBundleId ('" ;
  result << in_BUNDLE_5F_IDENTIFIER.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')\n"
    "  time.sleep (0.5)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   PREFERENCES WINDOW                                                         *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def setUpPreferencesWindow (application) :\n"
    "  time.sleep (0.5)\n"
    "  window = application.windows ('" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')[0]\n" ;
  GALGAS_uint index_1785_ (0) ;
  if (in_OUTLET_5F_IDENTIFIER_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1785 (in_OUTLET_5F_IDENTIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1785.hasCurrentObject ()) {
      result << "  global " ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << "\n"
        "  " ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << " = window.findFirst (AXIdentifier='" ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << "')\n" ;
      index_1785_.increment () ;
      enumerator_1785.gotoNextObject () ;
    }
  }
  result << "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   CHECK TEXT FIELD VALUE                                                     *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def checkTextFieldValue (textField, expectedValue, line):\n"
    "  if textField.AXValue != expectedValue :\n"
    "    print '*** Check error at line ' + str (line) + ' ***'\n"
    "    sys.exit (1)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   SET TEXT FIELD                                                             *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def setTextFieldValue (textField, value):\n"
    "  textField.AXFocused = True\n"
    "  textField.AXValue = value\n"
    "  textField.Confirm ()\n"
    "  time.sleep (0.5)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   MAIN                                                                       *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "application = launchApplication ()\n"
    "setUpPreferencesWindow (application)\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "eb",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .easyBindings extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct var_declarationStruct_1128 = GALGAS_astDeclarationStruct::constructor_default (SOURCE_FILE ("program.galgas", 23)) ;
  GALGAS_location joker_1267 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GALGAS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.galgas", 25))), GALGAS_string::makeEmptyString (), var_declarationStruct_1128, joker_1267  COMMA_SOURCE_FILE ("program.galgas", 25)) ;
  GALGAS_location var_endOfSourceFile_1475 ;
  var_endOfSourceFile_1475.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationStruct_1128, var_endOfSourceFile_1475  COMMA_SOURCE_FILE ("program.galgas", 27)) ;
  var_declarationStruct_1128.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 30)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("program.galgas", 30))  COMMA_SOURCE_FILE ("program.galgas", 30)), var_declarationStruct_1128.readProperty_mPreferences ()  COMMA_SOURCE_FILE ("program.galgas", 29))  COMMA_SOURCE_FILE ("program.galgas", 29)) ;
  {
  routine_enterAtomicClassesIn (var_declarationStruct_1128.mProperty_mUnifiedDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 34)) ;
  }
  GALGAS_declarationListAST var_sortedDeclarationListAST_2025 ;
  {
  routine_sortProperties (constinArgument_inSourceFile.readProperty_string (), var_declarationStruct_1128.readProperty_mUnifiedDeclarationList (), var_sortedDeclarationListAST_2025, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 36)) ;
  }
  GALGAS_semanticContext var_semanticContext_2139 = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("program.galgas", 38)) ;
  var_semanticContext_2139.setter_setMAutoLayoutVStackFunctionMap (var_declarationStruct_1128.readProperty_mAutoLayoutVStackFunctionMap () COMMA_SOURCE_FILE ("program.galgas", 39)) ;
  var_semanticContext_2139.setter_setMAutoLayoutHStackFunctionMap (var_declarationStruct_1128.readProperty_mAutoLayoutHStackFunctionMap () COMMA_SOURCE_FILE ("program.galgas", 40)) ;
  var_semanticContext_2139.setter_setMEnumerationFunctionListAST (var_declarationStruct_1128.readProperty_mEnumerationFunctionListAST () COMMA_SOURCE_FILE ("program.galgas", 41)) ;
  GALGAS_generationStruct var_generation_2471 = GALGAS_generationStruct::constructor_default (SOURCE_FILE ("program.galgas", 42)) ;
  cEnumerator_declarationListAST enumerator_2501 (var_sortedDeclarationListAST_2025, kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 43)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_2501.hasCurrentObject () && bool_0) {
    while (enumerator_2501.hasCurrentObject () && bool_0) {
      callExtensionMethod_firstAnalysisPhase ((const cPtr_abstractDeclarationAST *) enumerator_2501.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2139, var_generation_2471, inCompiler COMMA_SOURCE_FILE ("program.galgas", 44)) ;
      enumerator_2501.gotoNextObject () ;
      if (enumerator_2501.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 43)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_buildBindingSpecificationMap (var_semanticContext_2139, var_declarationStruct_1128.readProperty_mBindingSpecificationListMap (), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 48)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 53)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_buildAutoLayoutBindingSpecificationMap (var_semanticContext_2139, var_declarationStruct_1128.readProperty_mAutoLayoutBindingSpecificationList (), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 54)) ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3135 (var_sortedDeclarationListAST_2025, kENUMERATION_UP) ;
  bool bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_3135.hasCurrentObject () && bool_3) {
    while (enumerator_3135.hasCurrentObject () && bool_3) {
      callExtensionMethod_secondAnalysisPhase ((const cPtr_abstractDeclarationAST *) enumerator_3135.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2139, var_generation_2471, inCompiler COMMA_SOURCE_FILE ("program.galgas", 61)) ;
      enumerator_3135.gotoNextObject () ;
      if (enumerator_3135.hasCurrentObject ()) {
        bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3363 (var_sortedDeclarationListAST_2025, kENUMERATION_UP) ;
  bool bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 64)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_3363.hasCurrentObject () && bool_4) {
    while (enumerator_3363.hasCurrentObject () && bool_4) {
      callExtensionMethod_thirdAnalysisPhase ((const cPtr_abstractDeclarationAST *) enumerator_3363.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2139, var_generation_2471, inCompiler COMMA_SOURCE_FILE ("program.galgas", 65)) ;
      enumerator_3363.gotoNextObject () ;
      if (enumerator_3363.hasCurrentObject ()) {
        bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 64)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3591 (var_sortedDeclarationListAST_2025, kENUMERATION_UP) ;
  bool bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_3591.hasCurrentObject () && bool_5) {
    while (enumerator_3591.hasCurrentObject () && bool_5) {
      callExtensionMethod_fourthAnalysisPhase ((const cPtr_abstractDeclarationAST *) enumerator_3591.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2139, var_generation_2471, inCompiler COMMA_SOURCE_FILE ("program.galgas", 69)) ;
      enumerator_3591.gotoNextObject () ;
      if (enumerator_3591.hasCurrentObject ()) {
        bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 72)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_enumerationFunctionListAST enumerator_3879 (var_semanticContext_2139.readProperty_mEnumerationFunctionListAST (), kENUMERATION_UP) ;
      while (enumerator_3879.hasCurrentObject ()) {
        GALGAS_classKind var_type_3997 ;
        GALGAS_propertyMap joker_3999_3 ; // Joker input parameter
        GALGAS_actionMap joker_3999_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_3999_1 ; // Joker input parameter
        var_semanticContext_2139.readProperty_mClassMap ().method_searchKey (enumerator_3879.current_mEnumName (HERE), var_type_3997, joker_3999_3, joker_3999_2, joker_3999_1, inCompiler COMMA_SOURCE_FILE ("program.galgas", 74)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_type_3997.getter_isAtomic (SOURCE_FILE ("program.galgas", 75)).operator_not (SOURCE_FILE ("program.galgas", 75)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_3879.current_mEnumName (HERE).readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray8  COMMA_SOURCE_FILE ("program.galgas", 76)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_typeKind var_typeKind_4151 ;
          var_type_3997.method_atomic (var_typeKind_4151, inCompiler COMMA_SOURCE_FILE ("program.galgas", 78)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_typeKind_4151.getter_isEnumType (SOURCE_FILE ("program.galgas", 79)).operator_not (SOURCE_FILE ("program.galgas", 79)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_3879.current_mEnumName (HERE).readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray10  COMMA_SOURCE_FILE ("program.galgas", 80)) ;
            }
          }
        }
        enumerator_3879.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 86)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      {
      routine_graphvizAnalysis (constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 87)), var_semanticContext_2139, var_declarationStruct_1128.readProperty_mGraphvizList (), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 87)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      routine_generateCode (var_declarationStruct_1128.readProperty_mXcodeProject ().readProperty_string (), var_generation_2471, constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 91)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "eb") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_easyBindings_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

