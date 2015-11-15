#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@documentDeclaration typeInventory'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  categoryMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 72)) ;
  cEnumerator_secondaryPropertyList enumerator_3019 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_3019.hasCurrentObject ()) {
    callCategoryMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_3019.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 74)) ;
    enumerator_3019.gotoNextObject () ;
  }
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3156 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mRootEntityName, joker_3156 COMMA_SOURCE_FILE ("document.galgas", 78)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                     categoryMethod_documentDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_typeInventory (defineCategoryMethod_documentDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@documentDeclaration buildInitialSecondaryPropertyListMap'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
                                                                                     GALGAS_secondaryDeclarationListWorkingList & ioArgument_ioSecondaryDeclarationListWorkingList,
                                                                                     GALGAS_uint & ioArgument_ioSecondaryDeclarationCount,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  ioArgument_ioSecondaryDeclarationCount = ioArgument_ioSecondaryDeclarationCount.add_operation (object->mAttribute_mSecondaryPropertyList.getter_length (SOURCE_FILE ("document.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("document.galgas", 97)) ;
  const GALGAS_documentDeclaration temp_0 = object ;
  ioArgument_ioSecondaryDeclarationListWorkingList.addAssign_operation (temp_0, object->mAttribute_mSecondaryPropertyList  COMMA_SOURCE_FILE ("document.galgas", 98)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterCategoryMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                                            categoryMethod_documentDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_buildInitialSecondaryPropertyListMap (defineCategoryMethod_documentDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@documentDeclaration buildObservablePropertyMapsFromStoredProperties'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                                                const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("document.galgas", 109)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 111)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.modifier_insertKey (object->mAttribute_mDocumentName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 116)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterCategoryMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                                                       categoryMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties (defineCategoryMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@documentDeclaration solveSecondaryProperty'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                       const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                                                       GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 130)) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.method_searchKey (object->mAttribute_mDocumentName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 131)) ;
  GALGAS_observablePropertyMap var_rootObservablePropertyMap ;
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mRootEntityName, var_rootObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 135)) ;
  cEnumerator_secondaryPropertyList enumerator_5831 (constinArgument_inPropertiesToSolve, kEnumeration_up) ;
  while (enumerator_5831.hasCurrentObject ()) {
    callCategoryMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_5831.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, var_rootObservablePropertyMap, var_observablePropertyMap, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("document.galgas", 140)) ;
    enumerator_5831.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.modifier_setMObservablePropertyMapForKey (var_observablePropertyMap, object->mAttribute_mDocumentName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("document.galgas", 147)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_solveSecondaryProperty (void) {
  enterCategoryMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                              categoryMethod_documentDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_solveSecondaryProperty (defineCategoryMethod_documentDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@documentDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mDocumentObservablePropertyMap.method_searchKey (object->mAttribute_mDocumentName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 159)) ;
  GALGAS_observablePropertyMap var_rootObservablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mRootEntityName, var_rootObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 163)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration ;
  categoryMethod_simpleStoredPropertySemanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mDocumentName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("document.galgas", 168)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 175)) ;
  GALGAS_arrayControllerForGeneration var_documentArrayControllerListForGeneration = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 176)) ;
  GALGAS_selectionControllerForGeneration var_selectionControllerListForGeneration = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 177)) ;
  cEnumerator_secondaryPropertyList enumerator_7313 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_7313.hasCurrentObject ()) {
    callCategoryMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_7313.current_mSecondaryProperty (HERE).ptr (), object->mAttribute_mDocumentName.mAttribute_string, object->mAttribute_mRootEntityName.mAttribute_string, var_rootObservablePropertyMap, constinArgument_inSemanticContext, var_observablePropertyMap, var_transientDefinitionListForGeneration, var_documentArrayControllerListForGeneration, var_selectionControllerListForGeneration, ioArgument_ioGeneration.mAttribute_mNeededOutletClasses, inCompiler COMMA_SOURCE_FILE ("document.galgas", 179)) ;
    enumerator_7313.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.dotAssign_operation (var_transientDefinitionListForGeneration  COMMA_SOURCE_FILE ("document.galgas", 191)) ;
  ioArgument_ioGeneration.mAttribute_mAllArrayControllerForGeneration.dotAssign_operation (var_documentArrayControllerListForGeneration  COMMA_SOURCE_FILE ("document.galgas", 192)) ;
  ioArgument_ioGeneration.mAttribute_mSelectionControllerListForGeneration.dotAssign_operation (var_selectionControllerListForGeneration  COMMA_SOURCE_FILE ("document.galgas", 193)) ;
  GALGAS_actionMap var_actionMap ;
  {
  routine_buildActionMap (object->mAttribute_mActionDeclarationList, var_actionMap, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 195)) ;
  }
  cEnumerator_actionMap enumerator_8079 (var_actionMap, kEnumeration_up) ;
  while (enumerator_8079.hasCurrentObject ()) {
    ioArgument_ioGeneration.mAttribute_mActionListForGeneration.addAssign_operation (object->mAttribute_mDocumentName.mAttribute_string, enumerator_8079.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("document.galgas", 197)) ;
    enumerator_8079.gotoNextObject () ;
  }
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration ;
  GALGAS_decoratedOutletMap var_outletMap ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList ;
  {
  routine_analyzeOutlets (var_rootObservablePropertyMap, constinArgument_inSemanticContext, object->mAttribute_mOutletDeclarationList, var_observablePropertyMap, var_actionMap, ioArgument_ioGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_actionBindingListForGeneration, var_outletMap, var_tableViewBindingGenerationList, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 202)) ;
  }
  ioArgument_ioGeneration.mAttribute_mDocumentListForGeneration.addAssign_operation (object->mAttribute_mDocumentName.mAttribute_string, object->mAttribute_mRootEntityName.mAttribute_string, var_simpleStoredPropertyListForGeneration, var_transientDefinitionListForGeneration, var_outletMap, var_actionBindingListForGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_documentArrayControllerListForGeneration, var_tableViewBindingGenerationList, var_selectionControllerListForGeneration  COMMA_SOURCE_FILE ("document.galgas", 216)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                        categoryMethod_documentDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_semanticAnalysis (defineCategoryMethod_documentDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@transientAST typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientAST_typeInventory (const cPtr_abstractSecondaryProperty * inObject,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_2269 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mTransientTypeName, joker_2269 COMMA_SOURCE_FILE ("transient-property.galgas", 52)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientAST_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                     categoryMethod_transientAST_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientAST_typeInventory (defineCategoryMethod_transientAST_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@transientAST tryToSolveSecondaryProperty'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientAST_tryToSolveSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                     GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                     GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  GALGAS_bool var_solved = GALGAS_bool (true) ;
  cEnumerator_observablePropertyList enumerator_2945 (object->mAttribute_mDependencyList, kEnumeration_up) ;
  bool bool_0 = var_solved.isValidAndTrue () ;
  if (enumerator_2945.hasCurrentObject () && bool_0) {
    while (enumerator_2945.hasCurrentObject () && bool_0) {
      var_solved = extensionGetter_isPropertyDefined (enumerator_2945.current_mObservableProperty (HERE), ioArgument_ioSemanticContext, constinArgument_inRootObservableProperties, ioArgument_ioObservableProperties, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 71)) ;
      enumerator_2945.gotoNextObject () ;
      if (enumerator_2945.hasCurrentObject ()) {
        bool_0 = var_solved.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_typeKind var_type ;
    GALGAS_actionMap var_actionMap ;
    ioArgument_ioSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (object->mAttribute_mTransientTypeName, var_type, var_actionMap, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 78)) ;
    {
    ioArgument_ioObservableProperties.modifier_insertKey (object->mAttribute_mTransientName, var_type, GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("transient-property.galgas", 82)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("transient-property.galgas", 83)), GALGAS_string::makeEmptyString (), var_actionMap, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 79)) ;
    }
  }else if (kBoolFalse == test_1) {
    const GALGAS_transientAST temp_2 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_2  COMMA_SOURCE_FILE ("transient-property.galgas", 88)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientAST_tryToSolveSecondaryProperty (void) {
  enterCategoryMethod_tryToSolveSecondaryProperty (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                                   categoryMethod_transientAST_tryToSolveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientAST_tryToSolveSecondaryProperty (defineCategoryMethod_transientAST_tryToSolveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@transientAST secondaryPropertySemanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientAST_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                                           const GALGAS_string constinArgument_inOwnerName,
                                                                           const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                           const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                           GALGAS_transientDefinitionListForGeneration & ioArgument_ioTransientDefinitionListForGeneration,
                                                                           GALGAS_arrayControllerForGeneration & /* ioArgument_ioArrayControllerForGeneration */,
                                                                           GALGAS_selectionControllerForGeneration & /* ioArgument_ioSelectionControllerForGeneration */,
                                                                           GALGAS_stringset & /* ioArgument_ioNeededOutletClasses */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  GALGAS_typeKind var_type ;
  GALGAS_actionMap joker_4197 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (object->mAttribute_mTransientTypeName, var_type, joker_4197, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 106)) ;
  GALGAS_typeKindList var_typeList ;
  switch (var_type.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_colorType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_fontType:
  case GALGAS_typeKind::kEnum_imageType:
    {
      GALGAS_typeKindList temp_0 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 111)) ;
      temp_0.addAssign_operation (var_type  COMMA_SOURCE_FILE ("transient-property.galgas", 111)) ;
      var_typeList = temp_0 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 113)) ;
      temp_1.addAssign_operation (var_type  COMMA_SOURCE_FILE ("transient-property.galgas", 113)) ;
      var_typeList = temp_1 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      GALGAS_location location_2 (object->mAttribute_mTransientName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("an entity cannot be used as simple property type")  COMMA_SOURCE_FILE ("transient-property.galgas", 115)) ;
      var_typeList.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      GALGAS_location location_3 (object->mAttribute_mTransientName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("a class cannot be used as simple property type")  COMMA_SOURCE_FILE ("transient-property.galgas", 117)) ;
      var_typeList.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_transientDependencyListForGeneration var_dependencies = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 120)) ;
  cEnumerator_observablePropertyList enumerator_4775 (object->mAttribute_mDependencyList, kEnumeration_up) ;
  while (enumerator_4775.hasCurrentObject ()) {
    GALGAS_typeKind var_dependencyType ;
    GALGAS_propertyKind var_dependencyKind ;
    GALGAS_propertyMultiplicity var_outMultiplicity ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument ;
    categoryMethod_analyzeObservableProperty (enumerator_4775.current_mObservableProperty (HERE), constinArgument_inRootObservableProperties, constinArgument_inSemanticContext, constinArgument_inObservableProperties, var_dependencyType, var_dependencyKind, var_outMultiplicity, var_swiftTypeStringForTransientFunctionArgument, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 122)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("transient-property.galgas", 131)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (extensionGetter_location (enumerator_4775.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 132)), GALGAS_string ("a collection cannot be observed")  COMMA_SOURCE_FILE ("transient-property.galgas", 132)) ;
    }
    var_dependencies.addAssign_operation (enumerator_4775.current_mObservableProperty (HERE), extensionGetter_modelString (enumerator_4775.current_mObservableProperty (HERE), GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 136)).getter_nameRepresentation (SOURCE_FILE ("transient-property.galgas", 136)), var_swiftTypeStringForTransientFunctionArgument  COMMA_SOURCE_FILE ("transient-property.galgas", 134)) ;
    enumerator_4775.gotoNextObject () ;
  }
  ioArgument_ioTransientDefinitionListForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mTransientName.mAttribute_string, var_type, var_dependencies  COMMA_SOURCE_FILE ("transient-property.galgas", 140)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientAST_secondaryPropertySemanticAnalysis (void) {
  enterCategoryMethod_secondaryPropertySemanticAnalysis (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                                         categoryMethod_transientAST_secondaryPropertySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientAST_secondaryPropertySemanticAnalysis (defineCategoryMethod_transientAST_secondaryPropertySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_observablePropertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                                       const GALGAS_observablePropertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                                       GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                       GALGAS_typeKind & outArgument_outType,
                                                                                                       GALGAS_location & outArgument_outErrorLocation,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntMultipleBindingExpressionAST * object = (const cPtr_literalIntMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntMultipleBindingExpressionAST) ;
  outArgument_outEnableExpression = GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (object->mAttribute_mValue.mAttribute_uint  COMMA_SOURCE_FILE ("multiple-binding.galgas", 227)) ;
  outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("multiple-binding.galgas", 228)) ;
  outArgument_outErrorLocation = object->mAttribute_mValue.mAttribute_location ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding category method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                 const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                                 const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                                 GALGAS_typeKind & outArgument_outType,
                                                                                                                 GALGAS_location & outArgument_outErrorLocation,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_observablePropertyInMultipleBindingExpressionAST * object = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  GALGAS_propertyKind var_outKind ;
  GALGAS_propertyMultiplicity var_outMultiplicity ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument ;
  categoryMethod_analyzeObservableProperty (object->mAttribute_mProperty, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, outArgument_outType, var_outKind, var_outMultiplicity, var_swiftTypeStringForTransientFunctionArgument, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 242)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("multiple-binding.galgas", 251)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 252)), GALGAS_string ("a collection cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 252)) ;
  }
  switch (outArgument_outType.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_colorType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_fontType:
  case GALGAS_typeKind::kEnum_imageType:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      inCompiler->emitSemanticError (extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 258)), GALGAS_string ("an entity cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 258)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      inCompiler->emitSemanticError (extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 260)), GALGAS_string ("a class cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 260)) ;
    }
    break ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (extensionGetter_modelString (object->mAttribute_mProperty, GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 263))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 262)) ;
  outArgument_outErrorLocation = extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 265)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding category method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                          GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                          GALGAS_typeKind & outArgument_outType,
                                                                                                          GALGAS_location & outArgument_outErrorLocation,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_negateBooleanMultipleBindingExpressionAST * object = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 278)) ;
  const enumGalgasBool test_0 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 286)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 287)) ;
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 289)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                      const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                      const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                      GALGAS_typeKind & outArgument_outType,
                                                                                                      GALGAS_location & outArgument_outErrorLocation,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orBooleanMultipleBindingExpressionAST * object = (const cPtr_orBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  GALGAS_typeKind var_outLeftType ;
  GALGAS_location var_outLeftLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression, var_outLeftType, var_outLeftLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 302)) ;
  const enumGalgasBool test_0 = var_outLeftType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 310)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 310)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_outLeftLocation, GALGAS_string ("cannot apply 'or': left operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 311)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  GALGAS_typeKind var_outRightType ;
  GALGAS_location var_outRightLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression, var_outRightType, var_outRightLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 313)) ;
  const enumGalgasBool test_1 = var_outRightType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 321)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 321)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outRightLocation, GALGAS_string ("cannot apply 'or': right operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 322)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 324)) ;
  outArgument_outErrorLocation = var_outRightLocation ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 326)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                       GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                       GALGAS_typeKind & outArgument_outType,
                                                                                                       GALGAS_location & outArgument_outErrorLocation,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorBooleanMultipleBindingExpressionAST * object = (const cPtr_xorBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  GALGAS_typeKind var_outLeftType ;
  GALGAS_location var_outLeftLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression, var_outLeftType, var_outLeftLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 339)) ;
  const enumGalgasBool test_0 = var_outLeftType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 347)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 347)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_outLeftLocation, GALGAS_string ("cannot apply 'or': left operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 348)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  GALGAS_typeKind var_outRightType ;
  GALGAS_location var_outRightLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression, var_outRightType, var_outRightLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 350)) ;
  const enumGalgasBool test_1 = var_outRightType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 358)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 358)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outRightLocation, GALGAS_string ("cannot apply 'or': right operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 359)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 361)) ;
  outArgument_outErrorLocation = var_outRightLocation ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 363)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                       GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                       GALGAS_typeKind & outArgument_outType,
                                                                                                       GALGAS_location & outArgument_outErrorLocation,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andBooleanMultipleBindingExpressionAST * object = (const cPtr_andBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  GALGAS_typeKind var_outLeftType ;
  GALGAS_location var_outLeftLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression, var_outLeftType, var_outLeftLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 376)) ;
  const enumGalgasBool test_0 = var_outLeftType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 384)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 384)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_outLeftLocation, GALGAS_string ("cannot apply 'and': left operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 385)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  GALGAS_typeKind var_outRightType ;
  GALGAS_location var_outRightLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression, var_outRightType, var_outRightLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 387)) ;
  const enumGalgasBool test_1 = var_outRightType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 395)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 395)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outRightLocation, GALGAS_string ("cannot apply 'and': right operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 396)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 398)) ;
  outArgument_outErrorLocation = var_outRightLocation ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 400)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                       GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                       GALGAS_typeKind & outArgument_outType,
                                                                                                       GALGAS_location & outArgument_outErrorLocation,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonMultipleBindingExpressionAST * object = (const cPtr_comparisonMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  GALGAS_typeKind var_outLeftType ;
  GALGAS_location var_outLeftLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression, var_outLeftType, var_outLeftLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 413)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  GALGAS_typeKind var_outRightType ;
  GALGAS_location var_outRightLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression, var_outRightType, var_outRightLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 421)) ;
  GALGAS_bool test_0 = var_outLeftType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 429)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = var_outLeftType.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas", 429)) ;
  }
  const enumGalgasBool test_1 = test_0.operator_not (SOURCE_FILE ("multiple-binding.galgas", 429)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outLeftLocation, GALGAS_string ("cannot compare: left operand is neither boolean nor integer")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 430)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_outRightType.objectCompare (var_outLeftType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (var_outRightLocation, GALGAS_string ("cannot compare: right operand type is different than left operand type")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 433)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 435)) ;
  outArgument_outErrorLocation = var_outRightLocation ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, object->mAttribute_mOperator, var_rightExpression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 437)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category getter '@booleanMultipleBindingLiteralIntForGeneration observedModelSet'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * /* inObject */,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  result_outObservedModelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 454)) ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet (void) {
  enterCategoryGetter_observedModelSet (kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                        extensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet (defineCategoryGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration observedModelSet'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                            C_Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 462)) ;
  temp_0.addAssign_operation (object->mAttribute_mObservedModel  COMMA_SOURCE_FILE ("multiple-binding.galgas", 462)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryGetter_observedModelSet (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category getter '@negateBooleanMultipleBindingExpressionForGeneration observedModelSet'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelSet = callCategoryGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 470)) ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryGetter_observedModelSet (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@orBooleanMultipleBindingExpressionForGeneration observedModelSet'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 478)) ;
  temp_0.dotAssign_operation (callCategoryGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 478))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 478)) ;
  temp_0.dotAssign_operation (callCategoryGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 478))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 478)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryGetter_observedModelSet (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@xorBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 486)) ;
  temp_0.dotAssign_operation (callCategoryGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 486))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 486)) ;
  temp_0.dotAssign_operation (callCategoryGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 486))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 486)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryGetter_observedModelSet (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@andBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 494)) ;
  temp_0.dotAssign_operation (callCategoryGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 494))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 494)) ;
  temp_0.dotAssign_operation (callCategoryGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 494))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 494)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryGetter_observedModelSet (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@comparisonMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 502)) ;
  temp_0.dotAssign_operation (callCategoryGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 502))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 502)) ;
  temp_0.dotAssign_operation (callCategoryGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 502))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 502)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryGetter_observedModelSet (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category getter '@booleanMultipleBindingLiteralIntForGeneration expressionString'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * object = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  result_outExpressionString = GALGAS_string ("EBProperty.singleSelection (").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("multiple-binding.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 514)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 514)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (void) {
  enterCategoryGetter_expressionString (kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                        extensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (defineCategoryGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
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

static void defineCategoryGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryGetter_expressionString (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category getter '@negateBooleanMultipleBindingExpressionForGeneration expressionString'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("!").add_operation (callCategoryGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 528)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryGetter_expressionString (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@orBooleanMultipleBindingExpressionForGeneration expressionString'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)).add_operation (GALGAS_string (" || "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)).add_operation (callCategoryGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 535)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryGetter_expressionString (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@xorBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)).add_operation (GALGAS_string (" ^ "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)).add_operation (callCategoryGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryGetter_expressionString (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@andBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)).add_operation (callCategoryGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 549)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryGetter_expressionString (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@comparisonMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 556)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 556)) ;
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
  result_outExpressionString.dotAssign_operation (GALGAS_string (" ").add_operation (callCategoryGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 565)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 565))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 565)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryGetter_expressionString (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                        extensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (defineCategoryGetter_comparisonMultipleBindingExpressionForGeneration_expressionString, NULL) ;

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
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_8050 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_8050->mAssociatedValue0 ;
      var_solved = ioArgument_ioObservableProperties.getter_hasKey (extractedValue_storedPropertyName.mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 202)) ;
      const enumGalgasBool test_0 = var_solved.boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_typeKind var_type ;
        GALGAS_propertyKind var_kind ;
        GALGAS_propertyMultiplicity var_multiplicity ;
        GALGAS_string joker_7659_2 ; // Joker input parameter
        GALGAS_actionMap joker_7659_1 ; // Joker input parameter
        ioArgument_ioObservableProperties.method_searchKey (extractedValue_storedPropertyName, var_type, var_kind, var_multiplicity, joker_7659_2, joker_7659_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 204)) ;
        GALGAS_actionMap var_controllerActions = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 211)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_kind.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("array-controller.galgas", 212)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 213)) ;
          }
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 214)) ;
          }
        }
        {
        ioArgument_ioObservableProperties.modifier_insertKey (object->mAttribute_mControllerName, var_type, GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("array-controller.galgas", 219)), var_multiplicity, GALGAS_string::makeEmptyString (), var_controllerActions, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 216)) ;
        }
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_8736 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_8736->mAssociatedValue0 ;
      var_solved = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_relationshipName.mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 226)) ;
      const enumGalgasBool test_2 = var_solved.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_typeKind var_type ;
        GALGAS_propertyKind var_kind ;
        GALGAS_propertyMultiplicity var_multiplicity ;
        GALGAS_string joker_8345_2 ; // Joker input parameter
        GALGAS_actionMap joker_8345_1 ; // Joker input parameter
        constinArgument_inRootObservableProperties.method_searchKey (extractedValue_relationshipName, var_type, var_kind, var_multiplicity, joker_8345_2, joker_8345_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 228)) ;
        GALGAS_actionMap var_controllerActions = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 235)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_kind.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("array-controller.galgas", 236)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 237)) ;
          }
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 238)) ;
          }
        }
        {
        ioArgument_ioObservableProperties.modifier_insertKey (object->mAttribute_mControllerName, var_type, GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("array-controller.galgas", 243)), var_multiplicity, GALGAS_string::makeEmptyString (), var_controllerActions, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 240)) ;
        }
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_9430 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9430->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9430->mAssociatedValue1 ;
      var_solved = ioArgument_ioObservableProperties.getter_hasKey (extractedValue_controllerName.mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 250)) ;
      const enumGalgasBool test_4 = var_solved.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_typeKind var_type ;
        GALGAS_propertyKind var_kind ;
        GALGAS_propertyMultiplicity var_multiplicity ;
        GALGAS_string joker_9039_2 ; // Joker input parameter
        GALGAS_actionMap joker_9039_1 ; // Joker input parameter
        ioArgument_ioObservableProperties.method_searchKey (extractedValue_controllerName, var_type, var_kind, var_multiplicity, joker_9039_2, joker_9039_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 252)) ;
        GALGAS_actionMap var_controllerActions = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 259)) ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_kind.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("array-controller.galgas", 260)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 261)) ;
          }
          {
          var_controllerActions.modifier_insertKey (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 262)) ;
          }
        }
        {
        ioArgument_ioObservableProperties.modifier_insertKey (object->mAttribute_mControllerName, var_type, GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("array-controller.galgas", 267)), var_multiplicity, GALGAS_string::makeEmptyString (), var_controllerActions, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 264)) ;
        }
      }
    }
    break ;
  }
  const enumGalgasBool test_6 = var_solved.operator_not (SOURCE_FILE ("array-controller.galgas", 274)).boolEnum () ;
  if (kBoolTrue == test_6) {
    const GALGAS_arrayControllerDeclaration temp_7 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_7  COMMA_SOURCE_FILE ("array-controller.galgas", 275)) ;
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
                                                                                         GALGAS_stringset & ioArgument_ioNeededOutletClasses,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclaration * object = (const cPtr_arrayControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclaration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 293)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 293)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 293)) ;
  GALGAS_stringset var_attributes = temp_0 ;
  GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 294)) ;
  temp_1.addAssign_operation (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("array-controller.galgas", 294))  COMMA_SOURCE_FILE ("array-controller.galgas", 294)) ;
  GALGAS_typeKindList var_allowedTypes = temp_1 ;
  GALGAS_stringset var_definedAttributes = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 295)) ;
  GALGAS__32_stringlist var_attributeListForGeneration = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 296)) ;
  cEnumerator_arrayControllerAttributListAST enumerator_10548 (object->mAttribute_mArrayControllerAttributListAST, kEnumeration_up) ;
  while (enumerator_10548.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_attributes.getter_hasKey (enumerator_10548.current_mAttributeName (HERE).mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 298)).operator_not (SOURCE_FILE ("array-controller.galgas", 298)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_10548.current_mAttributeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("array-controller.galgas", 299)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = var_definedAttributes.getter_hasKey (enumerator_10548.current_mAttributeName (HERE).mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 300)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (enumerator_10548.current_mAttributeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("attribute multiply defined")  COMMA_SOURCE_FILE ("array-controller.galgas", 301)) ;
      }else if (kBoolFalse == test_4) {
        var_definedAttributes.addAssign_operation (enumerator_10548.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("array-controller.galgas", 303)) ;
      }
    }
    GALGAS_string var_valueAsString ;
    callCategoryMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_10548.current_mAttributeValue (HERE).ptr (), var_allowedTypes, var_valueAsString, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 305)) ;
    var_attributeListForGeneration.addAssign_operation (enumerator_10548.current_mAttributeName (HERE).mAttribute_string, var_valueAsString  COMMA_SOURCE_FILE ("array-controller.galgas", 306)) ;
    enumerator_10548.gotoNextObject () ;
  }
  cEnumerator_stringset enumerator_10958 (var_attributes, kEnumeration_up) ;
  while (enumerator_10958.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_definedAttributes.getter_hasKey (enumerator_10958.current (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 309)).operator_not (SOURCE_FILE ("array-controller.galgas", 309)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mControllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("attribute '").add_operation (enumerator_10958.current (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 310)).add_operation (GALGAS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 310))  COMMA_SOURCE_FILE ("array-controller.galgas", 310)) ;
    }
    enumerator_10958.gotoNextObject () ;
  }
  GALGAS_typeKind var_modelType ;
  GALGAS_propertyKind var_kind ;
  GALGAS_location var_errorLocation ;
  GALGAS_arrayControllerModelKind var_modelKind ;
  GALGAS_string var_entityName ;
  GALGAS_actionMap var_actionMap ;
  switch (object->mAttribute_mArrayControllerModel.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_12417 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_12417->mAssociatedValue0 ;
      var_errorLocation = extractedValue_storedPropertyName.mAttribute_location ;
      var_modelKind = GALGAS_arrayControllerModelKind::constructor_storedArrayModel (SOURCE_FILE ("array-controller.galgas", 323)) ;
      GALGAS_propertyMultiplicity var_multiplicity ;
      GALGAS_string joker_11560 ; // Joker input parameter
      constinArgument_inObservableProperties.method_searchKey (extractedValue_storedPropertyName, var_modelType, var_kind, var_multiplicity, joker_11560, var_actionMap, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 324)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_multiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 333)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the bound property should be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 334)) ;
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
      case GALGAS_typeKind::kEnum_imageType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 339)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 341)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          const cEnumAssociatedValues_typeKind_classType * extractPtr_12298 = (const cEnumAssociatedValues_typeKind_classType *) (var_modelType.unsafePointer ()) ;
          const GALGAS_string extractedValue_kClassTypeName = extractPtr_12298->mAssociatedValue0 ;
          var_entityName = extractedValue_kClassTypeName ;
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a stored class array")  COMMA_SOURCE_FILE ("array-controller.galgas", 345)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_13559 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_13559->mAssociatedValue0 ;
      var_errorLocation = extractedValue_relationshipName.mAttribute_location ;
      var_modelKind = GALGAS_arrayControllerModelKind::constructor_relationshipModel (SOURCE_FILE ("array-controller.galgas", 349)) ;
      GALGAS_propertyMultiplicity var_multiplicity ;
      GALGAS_string joker_12707 ; // Joker input parameter
      constinArgument_inRootObservableProperties.method_searchKey (extractedValue_relationshipName, var_modelType, var_kind, var_multiplicity, joker_12707, var_actionMap, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 350)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_multiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 359)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the bound property should be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 360)) ;
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
      case GALGAS_typeKind::kEnum_imageType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 365)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 367)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 369)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_13551 = (const cEnumAssociatedValues_typeKind_entityType *) (var_modelType.unsafePointer ()) ;
          const GALGAS_string extractedValue_kEntityName = extractPtr_13551->mAssociatedValue0 ;
          var_entityName = extractedValue_kEntityName ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_14622 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_14622->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14622->mAssociatedValue1 ;
      var_errorLocation = extractedValue_propertyName.mAttribute_location ;
      var_modelKind = GALGAS_arrayControllerModelKind::constructor_transientModel (SOURCE_FILE ("array-controller.galgas", 375)) ;
      GALGAS_propertyMultiplicity joker_13803_2 ; // Joker input parameter
      GALGAS_string joker_13803_1 ; // Joker input parameter
      constinArgument_inObservableProperties.method_searchKey (extractedValue_controllerName, var_modelType, var_kind, joker_13803_2, joker_13803_1, var_actionMap, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 376)) ;
      GALGAS_bool test_10 = GALGAS_bool (kIsNotEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("sortedArray"))) ;
      if (kBoolTrue == test_10.boolEnum ()) {
        test_10 = GALGAS_bool (kIsNotEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("selectedArray"))) ;
      }
      const enumGalgasBool test_11 = test_10.boolEnum () ;
      if (kBoolTrue == test_11) {
        inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("'sortedArray' or 'selectedArray' are required here")  COMMA_SOURCE_FILE ("array-controller.galgas", 384)) ;
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
      case GALGAS_typeKind::kEnum_imageType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 389)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 391)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          inCompiler->emitSemanticError (var_errorLocation, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 393)) ;
          var_entityName.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_14614 = (const cEnumAssociatedValues_typeKind_entityType *) (var_modelType.unsafePointer ()) ;
          const GALGAS_string extractedValue_kEntityName = extractPtr_14614->mAssociatedValue0 ;
          var_entityName = extractedValue_kEntityName ;
        }
        break ;
      }
    }
    break ;
  }
  GALGAS_observablePropertyMap var_boundModelObservablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (var_entityName.getter_nowhere (SOURCE_FILE ("array-controller.galgas", 401)), var_boundModelObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 400)) ;
  GALGAS_arrayControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 404)) ;
  cEnumerator_arrayControllerBoundColumnListAST enumerator_15065 (object->mAttribute_mArrayControllerBoundColumnListAST, kEnumeration_up) ;
  while (enumerator_15065.hasCurrentObject ()) {
    const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_15065.current_mColumnBindingAST (HERE).mAttribute_mRunActionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      var_actionMap.method_searchKey (enumerator_15065.current_mColumnBindingAST (HERE).mAttribute_mRunActionName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 408)) ;
    }
    GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 411)) ;
    {
    routine_analyzeRegularBinding (GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 413)), constinArgument_inSemanticContext, var_boundModelObservablePropertyMap, enumerator_15065.current_mColumnOutletTypeName (HERE), GALGAS_string ("<<not used>>"), enumerator_15065.current_mColumnBindingAST (HERE).mAttribute_mRegularBindingList, GALGAS_string ("object"), var_regularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 412)) ;
    }
    var_arrayControllerBoundColumnListForGeneration.addAssign_operation (enumerator_15065.current_mColumnName (HERE).mAttribute_string, enumerator_15065.current_mColumnOutletTypeName (HERE).mAttribute_string, GALGAS_string::makeEmptyString (), enumerator_15065.current_mColumnBindingAST (HERE).mAttribute_mRunActionName.mAttribute_string, var_regularBindingsGenerationList  COMMA_SOURCE_FILE ("array-controller.galgas", 423)) ;
    ioArgument_ioNeededOutletClasses.addAssign_operation (enumerator_15065.current_mColumnOutletTypeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("array-controller.galgas", 429)) ;
    enumerator_15065.gotoNextObject () ;
  }
  GALGAS_arrayControllerFilterListForGeneration var_arrayControllerFilterListForGeneration = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 432)) ;
  cEnumerator_lstringlist enumerator_16197 (object->mAttribute_mFilterProperties, kEnumeration_up) ;
  while (enumerator_16197.hasCurrentObject ()) {
    GALGAS_typeKind var_filterType ;
    GALGAS_propertyKind var_columnKind ;
    GALGAS_propertyMultiplicity var_filterMultiplicity ;
    GALGAS_string var_inverseRelationshipName ;
    GALGAS_actionMap joker_16485 ; // Joker input parameter
    var_boundModelObservablePropertyMap.method_searchKey (enumerator_16197.current_mValue (HERE), var_filterType, var_columnKind, var_filterMultiplicity, var_inverseRelationshipName, joker_16485, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 434)) ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, var_filterMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 442)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location location_14 (enumerator_16197.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the filter property should not be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 443)) ;
    }
    var_arrayControllerFilterListForGeneration.addAssign_operation (enumerator_16197.current_mValue (HERE).mAttribute_string, var_filterType  COMMA_SOURCE_FILE ("array-controller.galgas", 445)) ;
    enumerator_16197.gotoNextObject () ;
  }
  ioArgument_ioArrayControllerForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mControllerName.mAttribute_string, var_arrayControllerFilterListForGeneration, extensionGetter_modelString (object->mAttribute_mArrayControllerModel, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 452)), var_arrayControllerBoundColumnListForGeneration, extensionGetter_modelTypeName (object->mAttribute_mArrayControllerModel, constinArgument_inRootEntityName, constinArgument_inObservableProperties, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 454)), extensionGetter_modelTypeName_32_ (object->mAttribute_mArrayControllerModel, constinArgument_inRootEntityName, constinArgument_inObservableProperties, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 455)), var_modelKind, extensionGetter_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 457)), var_attributeListForGeneration  COMMA_SOURCE_FILE ("array-controller.galgas", 448)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioObservableProperties.getter_hasKey (object->mAttribute_mModelControllerName.mAttribute_string COMMA_SOURCE_FILE ("selection-controller.galgas", 57)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_typeKind var_type ;
    GALGAS_propertyKind var_kind ;
    GALGAS_propertyMultiplicity var_multiplicity ;
    GALGAS_string joker_2761_2 ; // Joker input parameter
    GALGAS_actionMap joker_2761_1 ; // Joker input parameter
    ioArgument_ioObservableProperties.method_searchKey (object->mAttribute_mModelControllerName, var_type, var_kind, var_multiplicity, joker_2761_2, joker_2761_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 59)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_kind.objectCompare (GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("selection-controller.galgas", 67)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mModelControllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the model should be an array controller")  COMMA_SOURCE_FILE ("selection-controller.galgas", 68)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_multiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("selection-controller.galgas", 71)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mModelControllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
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
    case GALGAS_typeKind::kEnum_imageType:
      {
        GALGAS_location location_5 (object->mAttribute_mModelControllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 78)) ;
        var_entityName.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_location location_6 (object->mAttribute_mModelControllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 80)) ;
        var_entityName.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        GALGAS_location location_7 (object->mAttribute_mModelControllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 82)) ;
        var_entityName.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_3625 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type.unsafePointer ()) ;
        const GALGAS_string extractedValue_kEntityName = extractPtr_3625->mAssociatedValue0 ;
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
                                                                                             GALGAS_stringset & /* ioArgument_ioNeededOutletClasses */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclaration * object = (const cPtr_selectionControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclaration) ;
  GALGAS_typeKind var_type ;
  GALGAS_propertyKind var_kind ;
  GALGAS_propertyMultiplicity var_multiplicity ;
  GALGAS_string joker_4777_2 ; // Joker input parameter
  GALGAS_actionMap joker_4777_1 ; // Joker input parameter
  constinArgument_inObservableProperties.method_searchKey (object->mAttribute_mModelControllerName, var_type, var_kind, var_multiplicity, joker_4777_2, joker_4777_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 115)) ;
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
  case GALGAS_typeKind::kEnum_imageType:
    {
      GALGAS_location location_0 (object->mAttribute_mModelControllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_0, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 126)) ;
      var_selectionEntityName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      GALGAS_location location_1 (object->mAttribute_mModelControllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 128)) ;
      var_selectionEntityName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      GALGAS_location location_2 (object->mAttribute_mModelControllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 130)) ;
      var_selectionEntityName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_5371 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type.unsafePointer ()) ;
      const GALGAS_string extractedValue_kEntityName = extractPtr_5371->mAssociatedValue0 ;
      var_selectionEntityName = extractedValue_kEntityName ;
    }
    break ;
  }
  GALGAS_observablePropertyMap var_selectionObservablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (GALGAS_lstring::constructor_new (var_selectionEntityName, object->mAttribute_mSelectionControllerName.mAttribute_location  COMMA_SOURCE_FILE ("selection-controller.galgas", 136)), var_selectionObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 135)) ;
  ioArgument_ioSelectionControllerForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mSelectionControllerName.mAttribute_string, object->mAttribute_mModelControllerName.mAttribute_string, object->mAttribute_mModelControllerPropertyName.mAttribute_string, var_selectionEntityName, var_selectionObservablePropertyMap  COMMA_SOURCE_FILE ("selection-controller.galgas", 140)) ;
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
      case GALGAS_typeKind::kEnum_imageType:
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
    GALGAS_location location_4 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
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
  cEnumerator_typeKindList enumerator_5359 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 139)).isValidAndTrue () ;
  if (enumerator_5359.hasCurrentObject () && bool_0) {
    while (enumerator_5359.hasCurrentObject () && bool_0) {
      switch (enumerator_5359.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_uint.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 142)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSFont.systemFontOfSize (").add_operation (object->mAttribute_mValue.mAttribute_uint.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 145)).add_operation (GALGAS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 145)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_imageType:
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
      enumerator_5359.gotoNextObject () ;
      if (enumerator_5359.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 139)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
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
  cEnumerator_typeKindList enumerator_6285 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 167)).isValidAndTrue () ;
  if (enumerator_6285.hasCurrentObject () && bool_0) {
    while (enumerator_6285.hasCurrentObject () && bool_0) {
      switch (enumerator_6285.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_double.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 170)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
      case GALGAS_typeKind::kEnum_imageType:
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
      enumerator_6285.gotoNextObject () ;
      if (enumerator_6285.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 167)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 178)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
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
  cEnumerator_typeKindList enumerator_7101 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 192)).isValidAndTrue () ;
  if (enumerator_7101.hasCurrentObject () && bool_0) {
    while (enumerator_7101.hasCurrentObject () && bool_0) {
      switch (enumerator_7101.current_mType (HERE).enumValue ()) {
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
      case GALGAS_typeKind::kEnum_imageType:
        {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSImage (named:\"").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 202)).add_operation (GALGAS_string ("\")"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 202)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      }
      enumerator_7101.gotoNextObject () ;
      if (enumerator_7101.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 192)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 206)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("only a string attribute can be initialized by a string constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 207)) ;
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
  cEnumerator_typeKindList enumerator_9920 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 275)).isValidAndTrue () ;
  if (enumerator_9920.hasCurrentObject () && bool_0) {
    while (enumerator_9920.hasCurrentObject () && bool_0) {
      switch (enumerator_9920.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_colorType:
        {
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_1 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 279)).getter_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 279)).boolEnum () ;
          if (kBoolTrue == test_1) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSColor.").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 280)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 280)) ;
          }else if (kBoolFalse == test_1) {
            GALGAS_location location_2 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_2, GALGAS_string ("unknown predefined color")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 282)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_dateType:
        {
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_3 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 287)).getter_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 287)).boolEnum () ;
          if (kBoolTrue == test_3) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSDate ()") ;
          }else if (kBoolFalse == test_3) {
            GALGAS_location location_4 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown predefined date")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 290)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          const cEnumAssociatedValues_typeKind_enumType * extractPtr_10820 = (const cEnumAssociatedValues_typeKind_enumType *) (enumerator_9920.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_enumTypeName = extractPtr_10820->mAssociatedValue0 ;
          const GALGAS_enumConstantMap extractedValue_constantMap = extractPtr_10820->mAssociatedValue1 ;
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_5 = extractedValue_constantMap.getter_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 294)).boolEnum () ;
          if (kBoolTrue == test_5) {
            outArgument_outSwiftDefaultValueAsString = extractedValue_enumTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 295)).add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 295)) ;
          }else if (kBoolFalse == test_5) {
            GALGAS_location location_6 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_6, GALGAS_string ("the '").add_operation (extractedValue_enumTypeName, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 298)).add_operation (GALGAS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 298)).add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 298)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 298))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 297)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          GALGAS_location location_7 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_7, GALGAS_string ("invalid entity type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 302)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          GALGAS_location location_8 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("invalid class type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 304)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          GALGAS_location location_9 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_9, GALGAS_string ("invalid bool type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 306)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          GALGAS_location location_10 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("invalid double type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 308)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          GALGAS_location location_11 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_11, GALGAS_string ("invalid integer type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 310)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          GALGAS_location location_12 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_12, GALGAS_string ("invalid string type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 312)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          GALGAS_location location_13 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_13, GALGAS_string ("invalid font type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 314)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_imageType:
        {
          GALGAS_location location_14 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_14, GALGAS_string ("invalid image type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 316)) ;
        }
        break ;
      }
      enumerator_9920.gotoNextObject () ;
      if (enumerator_9920.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 275)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_15 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 319)).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_location location_16 (object->mAttribute_mValue.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_16, GALGAS_string ("unknow type for this identifier")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 320)) ;
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
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 408)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mStartLocation, GALGAS_string ("invalid initialization value")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 409)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_listAsDefaultValue.mSlotID,
                                               categoryMethod_listAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_listAsDefaultValue_analyzeDefaultValueType, NULL) ;

