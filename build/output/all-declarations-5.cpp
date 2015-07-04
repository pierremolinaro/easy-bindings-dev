#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@andBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 494)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 494))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 494)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 494))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 494)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryReader_observedModelSet (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@comparisonMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset categoryReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 502)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 502))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 502)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 502))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 502)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryReader_observedModelSet (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@booleanMultipleBindingLiteralIntForGeneration expressionString'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_booleanMultipleBindingLiteralIntForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * object = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  result_outExpressionString = GALGAS_string ("EBProperty.singleSelection (").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("multiple-binding.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 514)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 514)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_booleanMultipleBindingLiteralIntForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                        categoryReader_booleanMultipleBindingLiteralIntForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_booleanMultipleBindingLiteralIntForGeneration_expressionString (defineCategoryReader_booleanMultipleBindingLiteralIntForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category reader '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = object->mAttribute_mObservedModel.add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 521)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@negateBooleanMultipleBindingExpressionForGeneration expressionString'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("!").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 528)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@orBooleanMultipleBindingExpressionForGeneration expressionString'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_orBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)).add_operation (GALGAS_string (" || "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)).add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_orBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_orBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@xorBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_xorBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)).add_operation (GALGAS_string (" ^ "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)).add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_xorBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_xorBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_xorBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_xorBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@andBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_andBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)).add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_andBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_andBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@comparisonMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_comparisonMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 556)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 556)) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_multipleBindingComparisonAST::kNotBuilt:
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_equal:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string ("==")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 558)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_notEqual:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string ("!=")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lower:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string ("<")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 560)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lowerOrEqual:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string ("<=")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 561)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greater:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string (">")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 562)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greaterOrEqual:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string (">=")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 563)) ;
    }
    break ;
  }
  result_outExpressionString.dotAssign_operation (GALGAS_string (" ").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 565)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 565))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 565)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_comparisonMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_comparisonMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_comparisonMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_comparisonMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@arrayControllerDeclaration typeInventory'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayControllerDeclaration_typeInventory (const cPtr_abstractSecondaryProperty * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayControllerDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_arrayControllerDeclaration.mSlotID,
                                     categoryMethod_arrayControllerDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayControllerDeclaration_typeInventory (defineCategoryMethod_arrayControllerDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@arrayControllerDeclaration tryToSolveSecondaryProperty'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                                   GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                   const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                                   GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                                   GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclaration * object = (const cPtr_arrayControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclaration) ;
  GALGAS_bool var_solved ;
  switch (object->mAttribute_mArrayControllerModel.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_5156 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_5156->mAssociatedValue0 ;
      var_solved = ioArgument_ioObservableProperties.reader_hasKey (extractedValue_storedPropertyName.mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 118)) ;
      const enumGalgasBool test_0 = var_solved.boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_typeKind var_type ;
        GALGAS_propertyKind var_kind ;
        GALGAS_propertyMultiplicity var_multiplicity ;
        GALGAS_string joker_4765_2 ; // Joker input parameter
        GALGAS_actionMap joker_4765_1 ; // Joker input parameter
        ioArgument_ioObservableProperties.method_searchKey (extractedValue_storedPropertyName, var_type, var_kind, var_multiplicity, joker_4765_2, joker_4765_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 120)) ;
        GALGAS_actionMap var_controllerActions = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 127)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_kind.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("array-controller.galgas", 128)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("add").reader_nowhere (SOURCE_FILE ("array-controller.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 129)) ;
          }
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("remove").reader_nowhere (SOURCE_FILE ("array-controller.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 130)) ;
          }
        }
        {
        ioArgument_ioObservableProperties.modifier_insertKey (object->mAttribute_mControllerName, var_type, GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("array-controller.galgas", 135)), var_multiplicity, GALGAS_string::makeEmptyString (), var_controllerActions, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 132)) ;
        }
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_5842 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_5842->mAssociatedValue0 ;
      var_solved = constinArgument_inRootObservableProperties.reader_hasKey (extractedValue_relationshipName.mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 142)) ;
      const enumGalgasBool test_2 = var_solved.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_typeKind var_type ;
        GALGAS_propertyKind var_kind ;
        GALGAS_propertyMultiplicity var_multiplicity ;
        GALGAS_string joker_5451_2 ; // Joker input parameter
        GALGAS_actionMap joker_5451_1 ; // Joker input parameter
        constinArgument_inRootObservableProperties.method_searchKey (extractedValue_relationshipName, var_type, var_kind, var_multiplicity, joker_5451_2, joker_5451_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 144)) ;
        GALGAS_actionMap var_controllerActions = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 151)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_kind.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("array-controller.galgas", 152)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("add").reader_nowhere (SOURCE_FILE ("array-controller.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 153)) ;
          }
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("remove").reader_nowhere (SOURCE_FILE ("array-controller.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 154)) ;
          }
        }
        {
        ioArgument_ioObservableProperties.modifier_insertKey (object->mAttribute_mControllerName, var_type, GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("array-controller.galgas", 159)), var_multiplicity, GALGAS_string::makeEmptyString (), var_controllerActions, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 156)) ;
        }
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_6536 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_6536->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6536->mAssociatedValue1 ;
      var_solved = ioArgument_ioObservableProperties.reader_hasKey (extractedValue_controllerName.mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 166)) ;
      const enumGalgasBool test_4 = var_solved.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_typeKind var_type ;
        GALGAS_propertyKind var_kind ;
        GALGAS_propertyMultiplicity var_multiplicity ;
        GALGAS_string joker_6145_2 ; // Joker input parameter
        GALGAS_actionMap joker_6145_1 ; // Joker input parameter
        ioArgument_ioObservableProperties.method_searchKey (extractedValue_controllerName, var_type, var_kind, var_multiplicity, joker_6145_2, joker_6145_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 168)) ;
        GALGAS_actionMap var_controllerActions = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 175)) ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_kind.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("array-controller.galgas", 176)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("add").reader_nowhere (SOURCE_FILE ("array-controller.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 177)) ;
          }
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("remove").reader_nowhere (SOURCE_FILE ("array-controller.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 178)) ;
          }
        }
        {
        ioArgument_ioObservableProperties.modifier_insertKey (object->mAttribute_mControllerName, var_type, GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("array-controller.galgas", 183)), var_multiplicity, GALGAS_string::makeEmptyString (), var_controllerActions, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 180)) ;
        }
      }
    }
    break ;
  }
  const enumGalgasBool test_6 = var_solved.operator_not (SOURCE_FILE ("array-controller.galgas", 190)).boolEnum () ;
  if (kBoolTrue == test_6) {
    const GALGAS_arrayControllerDeclaration temp_7 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_7  COMMA_SOURCE_FILE ("array-controller.galgas", 191)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty (void) {
  enterCategoryMethod_tryToSolveSecondaryProperty (kTypeDescriptor_GALGAS_arrayControllerDeclaration.mSlotID,
                                                   categoryMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty (defineCategoryMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@arrayControllerDeclaration secondaryPropertySemanticAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                                                         const GALGAS_string constinArgument_inOwnerName,
                                                                                         const GALGAS_string constinArgument_inRootEntityName,
                                                                                         const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                         const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                                         GALGAS_transientDefinitionListForGeneration & /* ioArgument_ioTransientDefinitionListForGeneration */,
                                                                                         GALGAS_arrayControllerForGeneration & ioArgument_ioArrayControllerForGeneration,
                                                                                         GALGAS_selectionControllerForGeneration & /* ioArgument_ioSelectionControllerForGeneration */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclaration * object = (const cPtr_arrayControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclaration) ;
  GALGAS_typeKind var_modelType ;
  GALGAS_propertyKind var_kind ;
  GALGAS_location var_errorLocation ;
  GALGAS_arrayControllerModelKind var_modelKind ;
  GALGAS_string var_entityName ;
  switch (object->mAttribute_mArrayControllerModel.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_8410 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_8410->mAssociatedValue0 ;
      var_errorLocation = extractedValue_storedPropertyName.mAttribute_location ;
      var_modelKind = GALGAS_arrayControllerModelKind::constructor_storedArrayModel (SOURCE_FILE ("array-controller.galgas", 215)) ;
      GALGAS_propertyMultiplicity var_multiplicity ;
      GALGAS_string joker_7694_2 ; // Joker input parameter
      GALGAS_actionMap joker_7694_1 ; // Joker input parameter
      constinArgument_inObservableProperties.method_searchKey (extractedValue_storedPropertyName, var_modelType, var_kind, var_multiplicity, joker_7694_2, joker_7694_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 216)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_multiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 224)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the bound property should be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 225)) ;
      }
      switch (var_modelType.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 230)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 232)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          const cEnumAssociatedValues_typeKind_classType * extractPtr_8291 = (const cEnumAssociatedValues_typeKind_classType *) (var_modelType.unsafePointer ()) ;
          const GALGAS_string extractedValue_kClassTypeName = extractPtr_8291->mAssociatedValue0 ;
          var_entityName = extractedValue_kClassTypeName ;
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a stored class array")  COMMA_SOURCE_FILE ("array-controller.galgas", 236)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_9411 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_9411->mAssociatedValue0 ;
      var_errorLocation = extractedValue_relationshipName.mAttribute_location ;
      var_modelKind = GALGAS_arrayControllerModelKind::constructor_relationshipModel (SOURCE_FILE ("array-controller.galgas", 240)) ;
      GALGAS_propertyMultiplicity var_multiplicity ;
      GALGAS_string joker_8700_2 ; // Joker input parameter
      GALGAS_actionMap joker_8700_1 ; // Joker input parameter
      constinArgument_inRootObservableProperties.method_searchKey (extractedValue_relationshipName, var_modelType, var_kind, var_multiplicity, joker_8700_2, joker_8700_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 241)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_multiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 249)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the bound property should be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 250)) ;
      }
      switch (var_modelType.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 255)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 257)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 259)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_9403 = (const cEnumAssociatedValues_typeKind_entityType *) (var_modelType.unsafePointer ()) ;
          const GALGAS_string extractedValue_kEntityName = extractPtr_9403->mAssociatedValue0 ;
          var_entityName = extractedValue_kEntityName ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_10389 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_10389->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10389->mAssociatedValue1 ;
      var_errorLocation = extractedValue_propertyName.mAttribute_location ;
      var_modelKind = GALGAS_arrayControllerModelKind::constructor_transientModel (SOURCE_FILE ("array-controller.galgas", 265)) ;
      GALGAS_propertyMultiplicity joker_9655_3 ; // Joker input parameter
      GALGAS_string joker_9655_2 ; // Joker input parameter
      GALGAS_actionMap joker_9655_1 ; // Joker input parameter
      constinArgument_inObservableProperties.method_searchKey (extractedValue_controllerName, var_modelType, var_kind, joker_9655_3, joker_9655_2, joker_9655_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 266)) ;
      GALGAS_bool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("sortedArray"))) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = GALGAS_bool (kIsNotEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("selectedArray"))) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("'sortedArray' or 'selectedArray' are required here")  COMMA_SOURCE_FILE ("array-controller.galgas", 273)) ;
      }
      switch (var_modelType.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 278)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 280)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 282)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_10381 = (const cEnumAssociatedValues_typeKind_entityType *) (var_modelType.unsafePointer ()) ;
          const GALGAS_string extractedValue_kEntityName = extractPtr_10381->mAssociatedValue0 ;
          var_entityName = extractedValue_kEntityName ;
        }
        break ;
      }
    }
    break ;
  }
  GALGAS_observablePropertyMap var_boundModelObservablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (var_entityName.reader_nowhere (SOURCE_FILE ("array-controller.galgas", 289)), var_boundModelObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 288)) ;
  GALGAS_arrayControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 292)) ;
  cEnumerator_arrayControllerBoundColumnListAST enumerator_10773 (object->mAttribute_mArrayControllerBoundColumnListAST, kEnumeration_up) ;
  while (enumerator_10773.hasCurrentObject ()) {
    GALGAS_typeKind var_columnType ;
    GALGAS_propertyKind var_columnKind ;
    GALGAS_propertyMultiplicity var_columnMultiplicity ;
    GALGAS_string var_inverseRelationshipName ;
    GALGAS_actionMap joker_11066 ; // Joker input parameter
    var_boundModelObservablePropertyMap.method_searchKey (enumerator_10773.current_mObservablePropertyName (HERE), var_columnType, var_columnKind, var_columnMultiplicity, var_inverseRelationshipName, joker_11066, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 294)) ;
    switch (var_columnType.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_fontType:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        inCompiler->emitSemanticError (enumerator_10773.current_mObservablePropertyName (HERE).reader_location (SOURCE_FILE ("array-controller.galgas", 307)), GALGAS_string ("the model should not be a relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 307)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_11525 = (const cEnumAssociatedValues_typeKind_entityType *) (var_columnType.unsafePointer ()) ;
        const GALGAS_string extractedValue_entityTypeName = extractPtr_11525->mAssociatedValue0 ;
        inCompiler->emitSemanticError (enumerator_10773.current_mObservablePropertyName (HERE).reader_location (SOURCE_FILE ("array-controller.galgas", 309)), GALGAS_string ("the model should not be a relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 309)) ;
      }
      break ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_columnMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 311)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_10773.current_mObservablePropertyName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the bound column property should not be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 312)) ;
    }
    var_arrayControllerBoundColumnListForGeneration.addAssign_operation (enumerator_10773.current_mColumnName (HERE).mAttribute_string, enumerator_10773.current_mColumnOutletTypeName (HERE).mAttribute_string, enumerator_10773.current_mObservablePropertyName (HERE).mAttribute_string, var_columnType, enumerator_10773.current_mBindingOptionList (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 314)) ;
    enumerator_10773.gotoNextObject () ;
  }
  GALGAS_arrayControllerFilterListForGeneration var_arrayControllerFilterListForGeneration = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 322)) ;
  cEnumerator_lstringlist enumerator_12044 (object->mAttribute_mFilterProperties, kEnumeration_up) ;
  while (enumerator_12044.hasCurrentObject ()) {
    GALGAS_typeKind var_filterType ;
    GALGAS_propertyKind var_columnKind ;
    GALGAS_propertyMultiplicity var_filterMultiplicity ;
    GALGAS_string var_inverseRelationshipName ;
    GALGAS_actionMap joker_12332 ; // Joker input parameter
    var_boundModelObservablePropertyMap.method_searchKey (enumerator_12044.current_mValue (HERE), var_filterType, var_columnKind, var_filterMultiplicity, var_inverseRelationshipName, joker_12332, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 324)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_filterMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 332)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (enumerator_12044.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("the filter property should not be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 333)) ;
    }
    var_arrayControllerFilterListForGeneration.addAssign_operation (enumerator_12044.current_mValue (HERE).mAttribute_string, var_filterType  COMMA_SOURCE_FILE ("array-controller.galgas", 335)) ;
    enumerator_12044.gotoNextObject () ;
  }
  ioArgument_ioArrayControllerForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mControllerName.mAttribute_string, var_arrayControllerFilterListForGeneration, categoryReader_modelString (object->mAttribute_mArrayControllerModel, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 342)), var_arrayControllerBoundColumnListForGeneration, categoryReader_modelTypeName (object->mAttribute_mArrayControllerModel, constinArgument_inRootEntityName, constinArgument_inObservableProperties, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 344)), categoryReader_modelTypeName_32_ (object->mAttribute_mArrayControllerModel, constinArgument_inRootEntityName, constinArgument_inObservableProperties, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 345)), var_modelKind, categoryReader_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 347))  COMMA_SOURCE_FILE ("array-controller.galgas", 338)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis (void) {
  enterCategoryMethod_secondaryPropertySemanticAnalysis (kTypeDescriptor_GALGAS_arrayControllerDeclaration.mSlotID,
                                                         categoryMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis (defineCategoryMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@selectionControllerDeclaration typeInventory'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectionControllerDeclaration_typeInventory (const cPtr_abstractSecondaryProperty * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectionControllerDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_selectionControllerDeclaration.mSlotID,
                                     categoryMethod_selectionControllerDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectionControllerDeclaration_typeInventory (defineCategoryMethod_selectionControllerDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@selectionControllerDeclaration tryToSolveSecondaryProperty'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                       const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                                       GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                                       GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclaration * object = (const cPtr_selectionControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclaration) ;
  const enumGalgasBool test_0 = ioArgument_ioObservableProperties.reader_hasKey (object->mAttribute_mModelControllerName.mAttribute_string COMMA_SOURCE_FILE ("selection-controller.galgas", 57)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_typeKind var_type ;
    GALGAS_propertyKind var_kind ;
    GALGAS_propertyMultiplicity var_multiplicity ;
    GALGAS_string joker_2761_2 ; // Joker input parameter
    GALGAS_actionMap joker_2761_1 ; // Joker input parameter
    ioArgument_ioObservableProperties.method_searchKey (object->mAttribute_mModelControllerName, var_type, var_kind, var_multiplicity, joker_2761_2, joker_2761_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 59)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_kind.objectCompare (GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("selection-controller.galgas", 67)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mModelControllerName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the model should be an array controller")  COMMA_SOURCE_FILE ("selection-controller.galgas", 68)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_multiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("selection-controller.galgas", 71)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mModelControllerName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the model should be an array controller")  COMMA_SOURCE_FILE ("selection-controller.galgas", 72)) ;
    }
    GALGAS_string var_entityName ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_fontType:
      {
        GALGAS_location location_5 (object->mAttribute_mModelControllerName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 78)) ;
        var_entityName.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_location location_6 (object->mAttribute_mModelControllerName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 80)) ;
        var_entityName.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        GALGAS_location location_7 (object->mAttribute_mModelControllerName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 82)) ;
        var_entityName.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_3614 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type.unsafePointer ()) ;
        const GALGAS_string extractedValue_kEntityName = extractPtr_3614->mAssociatedValue0 ;
        var_entityName = extractedValue_kEntityName ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.modifier_insertKey (object->mAttribute_mSelectionControllerName, var_type, GALGAS_propertyKind::constructor_selectionController (SOURCE_FILE ("selection-controller.galgas", 90)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("selection-controller.galgas", 91)), GALGAS_string::makeEmptyString (), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("selection-controller.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 87)) ;
    }
  }else if (kBoolFalse == test_0) {
    const GALGAS_selectionControllerDeclaration temp_8 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_8  COMMA_SOURCE_FILE ("selection-controller.galgas", 97)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty (void) {
  enterCategoryMethod_tryToSolveSecondaryProperty (kTypeDescriptor_GALGAS_selectionControllerDeclaration.mSlotID,
                                                   categoryMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty (defineCategoryMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@selectionControllerDeclaration secondaryPropertySemanticAnalysis'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                                                             const GALGAS_string constinArgument_inOwnerName,
                                                                                             const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                                             const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                                             GALGAS_transientDefinitionListForGeneration & /* ioArgument_ioTransientDefinitionListForGeneration */,
                                                                                             GALGAS_arrayControllerForGeneration & /* ioArgument_ioArrayControllerForGeneration */,
                                                                                             GALGAS_selectionControllerForGeneration & ioArgument_ioSelectionControllerForGeneration,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclaration * object = (const cPtr_selectionControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclaration) ;
  GALGAS_typeKind var_type ;
  GALGAS_propertyKind var_kind ;
  GALGAS_propertyMultiplicity var_multiplicity ;
  GALGAS_string joker_4722_2 ; // Joker input parameter
  GALGAS_actionMap joker_4722_1 ; // Joker input parameter
  constinArgument_inObservableProperties.method_searchKey (object->mAttribute_mModelControllerName, var_type, var_kind, var_multiplicity, joker_4722_2, joker_4722_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 114)) ;
  GALGAS_string var_selectionEntityName ;
  switch (var_type.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_colorType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_fontType:
    {
      GALGAS_location location_0 (object->mAttribute_mModelControllerName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_0, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 125)) ;
      var_selectionEntityName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      GALGAS_location location_1 (object->mAttribute_mModelControllerName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 127)) ;
      var_selectionEntityName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      GALGAS_location location_2 (object->mAttribute_mModelControllerName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 129)) ;
      var_selectionEntityName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_5305 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type.unsafePointer ()) ;
      const GALGAS_string extractedValue_kEntityName = extractPtr_5305->mAssociatedValue0 ;
      var_selectionEntityName = extractedValue_kEntityName ;
    }
    break ;
  }
  GALGAS_observablePropertyMap var_selectionObservablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (GALGAS_lstring::constructor_new (var_selectionEntityName, object->mAttribute_mSelectionControllerName.mAttribute_location  COMMA_SOURCE_FILE ("selection-controller.galgas", 135)), var_selectionObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 134)) ;
  ioArgument_ioSelectionControllerForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mSelectionControllerName.mAttribute_string, object->mAttribute_mModelControllerName.mAttribute_string, object->mAttribute_mModelControllerPropertyName.mAttribute_string, var_selectionEntityName, var_selectionObservablePropertyMap  COMMA_SOURCE_FILE ("selection-controller.galgas", 139)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis (void) {
  enterCategoryMethod_secondaryPropertySemanticAnalysis (kTypeDescriptor_GALGAS_selectionControllerDeclaration.mSlotID,
                                                         categoryMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis (defineCategoryMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@boolAsDefaultValue analyzeDefaultValueType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_boolAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                       const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                       GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolAsDefaultValue * object = (const cPtr_boolAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_boolAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_4536 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 114)).isValidAndTrue () ;
  if (enumerator_4536.hasCurrentObject () && bool_0) {
    while (enumerator_4536.hasCurrentObject () && bool_0) {
      switch (enumerator_4536.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          GALGAS_string temp_1 ;
          const enumGalgasBool test_2 = object->mAttribute_mValue.mAttribute_bool.boolEnum () ;
          if (kBoolTrue == test_2) {
            temp_1 = GALGAS_string ("true") ;
          }else if (kBoolFalse == test_2) {
            temp_1 = GALGAS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_1 ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
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
      }
      enumerator_4536.gotoNextObject () ;
      if (enumerator_4536.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 114)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_3 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 125)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("only a boolean attribute can be initialized by YES or NO")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 126)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_boolAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_boolAsDefaultValue.mSlotID,
                                               categoryMethod_boolAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_boolAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@integerAsDefaultValue analyzeDefaultValueType'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                          const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                          GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerAsDefaultValue * object = (const cPtr_integerAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_integerAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_5348 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 139)).isValidAndTrue () ;
  if (enumerator_5348.hasCurrentObject () && bool_0) {
    while (enumerator_5348.hasCurrentObject () && bool_0) {
      switch (enumerator_5348.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_uint.reader_string (SOURCE_FILE ("explicit-default-value.galgas", 142)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSFont.systemFontOfSize (").add_operation (object->mAttribute_mValue.mAttribute_uint.reader_string (SOURCE_FILE ("explicit-default-value.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 145)).add_operation (GALGAS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 145)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
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
      }
      enumerator_5348.gotoNextObject () ;
      if (enumerator_5348.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 139)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("only an integer attribute can be initialized by an integer constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 154)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_integerAsDefaultValue.mSlotID,
                                               categoryMethod_integerAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_integerAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@doubleAsDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_doubleAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                         const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                         GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_doubleAsDefaultValue * object = (const cPtr_doubleAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_doubleAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_6263 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 167)).isValidAndTrue () ;
  if (enumerator_6263.hasCurrentObject () && bool_0) {
    while (enumerator_6263.hasCurrentObject () && bool_0) {
      switch (enumerator_6263.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_double.reader_string (SOURCE_FILE ("explicit-default-value.galgas", 170)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
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
      }
      enumerator_6263.gotoNextObject () ;
      if (enumerator_6263.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 167)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 178)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("only a double attribute can be initialized by a floating point constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 179)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_doubleAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_doubleAsDefaultValue.mSlotID,
                                               categoryMethod_doubleAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doubleAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_doubleAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@stringAsDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                         const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                         GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_stringAsDefaultValue * object = (const cPtr_stringAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_stringAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_7068 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 192)).isValidAndTrue () ;
  if (enumerator_7068.hasCurrentObject () && bool_0) {
    while (enumerator_7068.hasCurrentObject () && bool_0) {
      switch (enumerator_7068.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("\"").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 195)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 195)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_fontType:
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
      }
      enumerator_7068.gotoNextObject () ;
      if (enumerator_7068.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 192)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 203)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("only a string attribute can be initialized by a string constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 204)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_stringAsDefaultValue.mSlotID,
                                               categoryMethod_stringAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_stringAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@identifierAsDefaultValue analyzeDefaultValueType'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_identifierAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                             const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                             GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_identifierAsDefaultValue * object = (const cPtr_identifierAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_identifierAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_9763 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 272)).isValidAndTrue () ;
  if (enumerator_9763.hasCurrentObject () && bool_0) {
    while (enumerator_9763.hasCurrentObject () && bool_0) {
      switch (enumerator_9763.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_colorType:
        {
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_1 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 276)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 276)).boolEnum () ;
          if (kBoolTrue == test_1) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSColor.").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 277)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 277)) ;
          }else if (kBoolFalse == test_1) {
            GALGAS_location location_2 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_2, GALGAS_string ("unknown predefined color")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 279)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_dateType:
        {
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_3 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 284)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 284)).boolEnum () ;
          if (kBoolTrue == test_3) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSDate ()") ;
          }else if (kBoolFalse == test_3) {
            GALGAS_location location_4 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown predefined date")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 287)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          const cEnumAssociatedValues_typeKind_enumType * extractPtr_10663 = (const cEnumAssociatedValues_typeKind_enumType *) (enumerator_9763.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_enumTypeName = extractPtr_10663->mAssociatedValue0 ;
          const GALGAS_enumConstantMap extractedValue_constantMap = extractPtr_10663->mAssociatedValue1 ;
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_5 = extractedValue_constantMap.reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 291)).boolEnum () ;
          if (kBoolTrue == test_5) {
            outArgument_outSwiftDefaultValueAsString = extractedValue_enumTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 292)).add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 292)) ;
          }else if (kBoolFalse == test_5) {
            GALGAS_location location_6 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_6, GALGAS_string ("the '").add_operation (extractedValue_enumTypeName, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 295)).add_operation (GALGAS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 295)).add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("explicit-default-value.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 295)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 295))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 294)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          GALGAS_location location_7 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("invalid entity type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 299)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          GALGAS_location location_8 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_8, GALGAS_string ("invalid class type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 301)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          GALGAS_location location_9 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("invalid bool type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 303)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          GALGAS_location location_10 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_10, GALGAS_string ("invalid double type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 305)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          GALGAS_location location_11 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_11, GALGAS_string ("invalid integer type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 307)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          GALGAS_location location_12 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_12, GALGAS_string ("invalid string type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 309)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          GALGAS_location location_13 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_13, GALGAS_string ("invalid font type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 311)) ;
        }
        break ;
      }
      enumerator_9763.gotoNextObject () ;
      if (enumerator_9763.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 272)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_14 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 314)).boolEnum () ;
  if (kBoolTrue == test_14) {
    GALGAS_location location_15 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_15, GALGAS_string ("unknow type for this identifier")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 315)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_identifierAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_identifierAsDefaultValue.mSlotID,
                                               categoryMethod_identifierAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_identifierAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_identifierAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listAsDefaultValue analyzeDefaultValueType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                       const GALGAS_typeKindList /* constinArgument_inAttributeActualTypeList */,
                                                                       GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listAsDefaultValue * object = (const cPtr_listAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_listAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 403)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mStartLocation, GALGAS_string ("invalid initialization value")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 404)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_listAsDefaultValue.mSlotID,
                                               categoryMethod_listAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_listAsDefaultValue_analyzeDefaultValueType, NULL) ;

