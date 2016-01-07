#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@outletClassDeclarationList buildOutletClassMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildOutletClassMap (const GALGAS_outletClassDeclarationList inObject,
                                         GALGAS_outletClassMap & outArgument_outOutletClassMap,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOutletClassMap.drop () ; // Release 'out' argument
  outArgument_outOutletClassMap = GALGAS_outletClassMap::constructor_emptyMap (SOURCE_FILE ("outlet-class.galgas", 73)) ;
  const GALGAS_outletClassDeclarationList temp_0 = inObject ;
  cEnumerator_outletClassDeclarationList enumerator_2940 (temp_0, kEnumeration_up) ;
  while (enumerator_2940.hasCurrentObject ()) {
    {
    outArgument_outOutletClassMap.setter_insertKey (enumerator_2940.current_mOutletClassName (HERE), enumerator_2940.current_mHasRunAction (HERE), enumerator_2940.current_mHandlesTableViewBinding (HERE), enumerator_2940.current_mUserDefined (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 75)) ;
    }
    enumerator_2940.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category Getter '@tableViewBindingGenerationList outletNameListForController'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_outletNameListForController (const GALGAS_tableViewBindingGenerationList & inObject,
                                                           const GALGAS_string & constinArgument_inControllerName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_first = GALGAS_bool (true) ;
  const GALGAS_tableViewBindingGenerationList temp_0 = inObject ;
  cEnumerator_tableViewBindingGenerationList enumerator_5391 (temp_0, kEnumeration_up) ;
  while (enumerator_5391.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5391.current_mTableValueBindingControllerName (HERE).objectCompare (constinArgument_inControllerName)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_first.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_first = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_2) {
        result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 144)) ;
      }
      result_outResult.plusAssign_operation(enumerator_5391.current_mTableValueBindingOutletName (HERE).add_operation (GALGAS_string ("!"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 146)) ;
    }
    enumerator_5391.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Getter '@transientDependencyListForGeneration transientComputeFunctionCall'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_transientComputeFunctionCall (const GALGAS_transientDependencyListForGeneration & inObject,
                                                            const GALGAS_string & constinArgument_inOwnerName,
                                                            const GALGAS_string & constinArgument_inTransientName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_transientDependencyListForGeneration temp_0 = inObject ;
  GALGAS_transientDependencyListForGeneration var_dependencies = temp_0 ;
  GALGAS_observablePropertyAST var_first ;
  {
  GALGAS_string joker_7114 ; // Joker input parameter
  GALGAS_string joker_7117 ; // Joker input parameter
  var_dependencies.setter_popFirst (var_first, joker_7114, joker_7117, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 190)) ;
  }
  GALGAS_string var_ident = GALGAS_string ("        ") ;
  result_outResult = var_ident.add_operation (GALGAS_string ("switch "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 192)).add_operation (extensionGetter_modelString (var_first, GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 192)).add_operation (GALGAS_string (".prop {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 192)) ;
  result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("case .noSelection :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 193)) ;
  result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("  return .noSelection\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 194)) ;
  result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("case .multipleSelection :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 195)) ;
  GALGAS_string var_finalCloseString = var_ident.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 196)) ;
  GALGAS_string var_closeString = GALGAS_string::makeEmptyString () ;
  cEnumerator_transientDependencyListForGeneration enumerator_7463 (var_dependencies, kEnumeration_up) ;
  while (enumerator_7463.hasCurrentObject ()) {
    var_ident.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 199)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("switch "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 200)).add_operation (extensionGetter_modelString (enumerator_7463.current_mDependency (HERE), GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 200)).add_operation (GALGAS_string (".prop {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 200)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("case .noSelection :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 201)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("  return .noSelection\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 202)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("case .multipleSelection, .singleSelection :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 203)) ;
    var_closeString = var_ident.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 204)).add_operation (var_closeString, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 204)) ;
    enumerator_7463.gotoNextObject () ;
  }
  result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("  return .multipleSelection\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 206)) ;
  result_outResult.plusAssign_operation(var_closeString, inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 207)) ;
  var_ident = GALGAS_string ("        ") ;
  result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("case .singleSelection (let v1) :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 209)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 2U) ;
  GALGAS_string var_args = GALGAS_string::makeEmptyString () ;
  cEnumerator_transientDependencyListForGeneration enumerator_8015 (var_dependencies, kEnumeration_up) ;
  while (enumerator_8015.hasCurrentObject ()) {
    var_ident.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 213)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("switch "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 214)).add_operation (extensionGetter_modelString (enumerator_8015.current_mDependency (HERE), GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 214)).add_operation (GALGAS_string (".prop {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 214)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("case .noSelection :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 215)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("  return .noSelection\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 216)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("case .multipleSelection :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 217)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("  return .multipleSelection\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 218)) ;
    result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("case .singleSelection (let v"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 219)).add_operation (var_idx.getter_string (SOURCE_FILE ("transient-property.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 219)).add_operation (GALGAS_string (") :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 219)) ;
    var_args.plusAssign_operation(GALGAS_string (", v").add_operation (var_idx.getter_string (SOURCE_FILE ("transient-property.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 220)) ;
    var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 221)) ;
    enumerator_8015.gotoNextObject () ;
  }
  result_outResult.plusAssign_operation(var_ident.add_operation (GALGAS_string ("  return .singleSelection (compute_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 223)).add_operation (constinArgument_inOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 223)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 223)).add_operation (constinArgument_inTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 223)).add_operation (GALGAS_string (" (v1"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 223)).add_operation (var_args, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 223)).add_operation (GALGAS_string ("))\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 223)) ;
  result_outResult.plusAssign_operation(var_closeString, inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 224)) ;
  result_outResult.plusAssign_operation(var_finalCloseString, inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 225)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Getter '@transientDependencyListForGeneration needs_unwSelf'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_needs_5F_unwSelf (const GALGAS_transientDependencyListForGeneration & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
  const GALGAS_transientDependencyListForGeneration temp_0 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_8883 (temp_0, kEnumeration_up) ;
  bool bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 234)).isValidAndTrue () ;
  if (enumerator_8883.hasCurrentObject () && bool_1) {
    while (enumerator_8883.hasCurrentObject () && bool_1) {
      result_outResult = extensionGetter_needs_5F_unwSelf (enumerator_8883.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 235)) ;
      enumerator_8883.gotoNextObject () ;
      if (enumerator_8883.hasCurrentObject ()) {
        bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 234)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@simpleStoredPropertyList typeInventory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const GALGAS_simpleStoredPropertyList inObject,
                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_2409 (temp_0, kEnumeration_up) ;
  while (enumerator_2409.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_2507 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_2409.current_mPropertyTypeName (HERE), joker_2507 COMMA_SOURCE_FILE ("simple-stored-property.galgas", 66)) ;
    }
    enumerator_2409.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@simpleStoredPropertyList buildObservablePropertyMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const GALGAS_simpleStoredPropertyList inObject,
                                                const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_3056 (temp_0, kEnumeration_up) ;
  while (enumerator_3056.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    GALGAS_actionMap var_actionMap ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_3056.current_mPropertyTypeName (HERE), var_type, var_actionMap, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 84)) ;
    GALGAS_typeKindList var_typeList ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
      {
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 89)) ;
        temp_1.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 89)) ;
        var_typeList = temp_1 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 91)) ;
        temp_2.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 91)) ;
        var_typeList = temp_2 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        GALGAS_location location_3 (enumerator_3056.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("a class cannot be used as simple property type")  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 93)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_propertyClassType:
      {
        GALGAS_typeKindList temp_4 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 95)) ;
        temp_4.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 95)) ;
        var_typeList = temp_4 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyClassType:
      {
        GALGAS_typeKindList temp_5 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 97)) ;
        temp_5.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 97)) ;
        var_typeList = temp_5 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        GALGAS_location location_6 (enumerator_3056.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("an entity cannot be used as simple property type")  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 99)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_3056.current_mPropertyName (HERE), var_type, GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("simple-stored-property.galgas", 105)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("simple-stored-property.galgas", 106)), GALGAS_string::makeEmptyString (), var_actionMap, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 102)) ;
    }
    enumerator_3056.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@simpleStoredPropertyList simpleStoredPropertySemanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_simpleStoredPropertySemanticAnalysis (const GALGAS_simpleStoredPropertyList inObject,
                                                          const GALGAS_string constinArgument_inSwiftClassName,
                                                          const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                          GALGAS_validationStubRoutineListForGeneration & ioArgument_ioValidationStubRoutineListForGeneration,
                                                          GALGAS_simpleStoredPropertyListForGeneration & outArgument_outSimpleStoredPropertyListForGeneration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSimpleStoredPropertyListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSimpleStoredPropertyListForGeneration = GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 121)) ;
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_4415 (temp_0, kEnumeration_up) ;
  while (enumerator_4415.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    GALGAS_actionMap joker_4502 ; // Joker input parameter
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_4415.current_mPropertyTypeName (HERE), var_type, joker_4502, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 124)) ;
    GALGAS_typeKindList var_typeList ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
      {
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 129)) ;
        temp_1.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 129)) ;
        var_typeList = temp_1 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 131)) ;
        temp_2.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 131)) ;
        var_typeList = temp_2 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        GALGAS_location location_3 (enumerator_4415.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("a class cannot be used as simple property type")  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 133)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_propertyClassType:
      {
        GALGAS_typeKindList temp_4 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 135)) ;
        temp_4.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 135)) ;
        var_typeList = temp_4 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyClassType:
      {
        GALGAS_location location_5 (enumerator_4415.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a transient property class cannot be used as simple property type")  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 137)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        GALGAS_location location_6 (enumerator_4415.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("an entity cannot be used as simple property type")  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 139)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_string var_swiftDefaultValueAsString ;
    callCategoryMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_4415.current_mDefaultValue (HERE).ptr (), var_typeList, var_swiftDefaultValueAsString, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 142)) ;
    outArgument_outSimpleStoredPropertyListForGeneration.addAssign_operation (var_type, enumerator_4415.current_mPropertyName (HERE).mAttribute_string, var_swiftDefaultValueAsString, enumerator_4415.current_mNeedsValidation (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 144)) ;
    const enumGalgasBool test_7 = enumerator_4415.current_mNeedsValidation (HERE).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioValidationStubRoutineListForGeneration.addAssign_operation (constinArgument_inSwiftClassName, enumerator_4415.current_mPropertyName (HERE).mAttribute_string, extensionGetter_swiftTypeName (var_type, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 153))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 150)) ;
    }
    enumerator_4415.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@storedArrayPropertyList typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const GALGAS_storedArrayPropertyList inObject,
                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_storedArrayPropertyList temp_0 = inObject ;
  cEnumerator_storedArrayPropertyList enumerator_1864 (temp_0, kEnumeration_up) ;
  while (enumerator_1864.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_1962 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_1864.current_mElementClassName (HERE), joker_1962 COMMA_SOURCE_FILE ("stored-array-property.galgas", 40)) ;
    }
    enumerator_1864.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@storedArrayPropertyList buildObservablePropertyMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const GALGAS_storedArrayPropertyList inObject,
                                                const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_storedArrayPropertyList temp_0 = inObject ;
  cEnumerator_storedArrayPropertyList enumerator_2510 (temp_0, kEnumeration_up) ;
  while (enumerator_2510.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    GALGAS_actionMap var_actionMap ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_2510.current_mElementClassName (HERE), var_type, var_actionMap, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 58)) ;
    GALGAS_typeKindList var_typeList ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
      {
        GALGAS_location location_1 (enumerator_2510.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a simple type cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 63)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_propertyClassType:
      {
        GALGAS_location location_2 (enumerator_2510.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a simple type cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 65)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyClassType:
      {
        GALGAS_location location_3 (enumerator_2510.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("a property class type cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 67)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_location location_4 (enumerator_2510.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("ae enumeration cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 69)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        GALGAS_location location_5 (enumerator_2510.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("an entity cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 71)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        GALGAS_typeKindList temp_6 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("stored-array-property.galgas", 73)) ;
        temp_6.addAssign_operation (var_type  COMMA_SOURCE_FILE ("stored-array-property.galgas", 73)) ;
        var_typeList = temp_6 ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_2510.current_mStoredArrayPropertyName (HERE), var_type, GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("stored-array-property.galgas", 79)), GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("stored-array-property.galgas", 80)), GALGAS_string::makeEmptyString (), var_actionMap, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 76)) ;
    }
    enumerator_2510.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@storedArrayPropertyList storedArrayPropertySemanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_storedArrayPropertySemanticAnalysis (const GALGAS_storedArrayPropertyList inObject,
                                                         const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                         GALGAS_storedArrayPropertyListForGeneration & outArgument_outSimpleStoredPropertyListForGeneration,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSimpleStoredPropertyListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSimpleStoredPropertyListForGeneration = GALGAS_storedArrayPropertyListForGeneration::constructor_emptyList (SOURCE_FILE ("stored-array-property.galgas", 93)) ;
  const GALGAS_storedArrayPropertyList temp_0 = inObject ;
  cEnumerator_storedArrayPropertyList enumerator_4018 (temp_0, kEnumeration_up) ;
  while (enumerator_4018.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    GALGAS_actionMap joker_4105 ; // Joker input parameter
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_4018.current_mElementClassName (HERE), var_type, joker_4105, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 96)) ;
    GALGAS_typeKindList var_typeList ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
      {
        GALGAS_location location_1 (enumerator_4018.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a simple type cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 101)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_location location_2 (enumerator_4018.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("ae enumeration cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 103)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        GALGAS_location location_3 (enumerator_4018.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("an entity cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 105)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        GALGAS_typeKindList temp_4 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("stored-array-property.galgas", 107)) ;
        temp_4.addAssign_operation (var_type  COMMA_SOURCE_FILE ("stored-array-property.galgas", 107)) ;
        var_typeList = temp_4 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_propertyClassType:
      {
        GALGAS_location location_5 (enumerator_4018.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a property class type cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 109)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyClassType:
      {
        GALGAS_location location_6 (enumerator_4018.current_mStoredArrayPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a property class type cannot be used as array element type")  COMMA_SOURCE_FILE ("stored-array-property.galgas", 111)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    }
    outArgument_outSimpleStoredPropertyListForGeneration.addAssign_operation (enumerator_4018.current_mElementClassName (HERE).mAttribute_string, enumerator_4018.current_mStoredArrayPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("stored-array-property.galgas", 114)) ;
    enumerator_4018.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract category method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding> gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeExpressionForMultipleBinding (const int32_t inClassIndex,
                                                              categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding inMethod) {
  gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (NULL,
                                                                                                            freeCategoryMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                             const GALGAS_observablePropertyMap constin_inRootObservablePropertyMap,
                                                             const GALGAS_semanticContext constin_inSemanticContext,
                                                             const GALGAS_observablePropertyMap constin_inCurrentObservablePropertyMap,
                                                             GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                             GALGAS_typeKind & out_outType,
                                                             GALGAS_location & out_outErrorLocation,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnableExpression.drop () ;
  out_outType.drop () ;
  out_outErrorLocation.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
      f = gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
           f = gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category getter '@abstractBooleanMultipleBindingExpressionForGeneration observedModelSet'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet> gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_observedModelSet (const int32_t inClassIndex,
                                           categoryGetterSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet inGetter) {
  gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (NULL,
                                                                                                   freeCategoryGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset callCategoryGetter_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_stringset result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet f = NULL ;
    if (classIndex < gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.count ()) {
      f = gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.count ()) {
           f = gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_abstractBooleanMultipleBindingExpressionForGeneration_expressionString> gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_expressionString (const int32_t inClassIndex,
                                           categoryGetterSignature_abstractBooleanMultipleBindingExpressionForGeneration_expressionString inGetter) {
  gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (NULL,
                                                                                                   freeCategoryGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryGetter_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_abstractBooleanMultipleBindingExpressionForGeneration_expressionString f = NULL ;
    if (classIndex < gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
      f = gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
           f = gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Getter '@arrayControllerFilterListForGeneration filterCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_filterCode (const GALGAS_arrayControllerFilterListForGeneration & inObject,
                                          const GALGAS_string & constinArgument_inFilterFunction,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerFilterListForGeneration temp_0 = inObject ;
  GALGAS_arrayControllerFilterListForGeneration var_filterProperties = temp_0 ;
  GALGAS_string var_firstFilterProperty ;
  {
  GALGAS_typeKind joker_23736 ; // Joker input parameter
  var_filterProperties.setter_popFirst (var_firstFilterProperty, joker_23736, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 625)) ;
  }
  GALGAS_string var_indent = GALGAS_string ("            ") ;
  result_outResult = var_indent.add_operation (GALGAS_string ("switch object."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 627)).add_operation (var_firstFilterProperty, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 627)).add_operation (GALGAS_string (".prop {\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 627)) ;
  result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("case .noSelection :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 628)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 628)) ;
  result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("  return .noSelection\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 629)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 629)) ;
  result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("case .multipleSelection :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 630)) ;
  result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("  isMultiple = true\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 631)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 631)) ;
  result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("case .singleSelection (let v1) :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 632)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 632)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 2U) ;
  GALGAS_string var_args = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_blockEnd = var_indent.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 635)) ;
  cEnumerator_arrayControllerFilterListForGeneration enumerator_24210 (var_filterProperties, kEnumeration_up) ;
  while (enumerator_24210.hasCurrentObject ()) {
    var_indent.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 637)) ;
    result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("switch object."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 638)).add_operation (enumerator_24210.current_mFilterPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 638)).add_operation (GALGAS_string (".prop {\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 638)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 638)) ;
    result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("case .noSelection :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 639)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 639)) ;
    result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("  return .noSelection\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 640)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 640)) ;
    result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("case .multipleSelection :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 641)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 641)) ;
    result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("  isMultiple = true\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 642)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 642)) ;
    result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("case .singleSelection (let v"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 643)).add_operation (var_idx.getter_string (SOURCE_FILE ("array-controller.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 643)).add_operation (GALGAS_string (") :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 643)) ;
    var_blockEnd = var_indent.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 644)).add_operation (var_blockEnd, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 644)) ;
    var_args.plusAssign_operation(GALGAS_string (", v").add_operation (var_idx.getter_string (SOURCE_FILE ("array-controller.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 645)) ;
    var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 646)) ;
    enumerator_24210.gotoNextObject () ;
  }
  var_indent.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 648)) ;
  result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("if "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 649)).add_operation (constinArgument_inFilterFunction, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 649)).add_operation (GALGAS_string (" (v1"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 649)).add_operation (var_args, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 649)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 649)) ;
  result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("  filteredArray.append (object)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 650)) ;
  result_outResult.plusAssign_operation(var_indent.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 651)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 651)) ;
  result_outResult.plusAssign_operation(var_blockEnd, inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 652)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@abstractDefaultValue analyzeDefaultValueType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractDefaultValue_analyzeDefaultValueType> gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeDefaultValueType (const int32_t inClassIndex,
                                                  categoryMethodSignature_abstractDefaultValue_analyzeDefaultValueType inMethod) {
  gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractDefaultValue_analyzeDefaultValueType (void) {
  gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDefaultValue_analyzeDefaultValueType (NULL,
                                                                         freeCategoryMethod_abstractDefaultValue_analyzeDefaultValueType) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                 const GALGAS_typeKindList constin_inAttributeActualTypeList,
                                                 GALGAS_string & out_outSwiftDefaultValueAsString,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outSwiftDefaultValueAsString.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDefaultValue) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractDefaultValue_analyzeDefaultValueType f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.count ()) {
      f = gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.count ()) {
           f = gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAttributeActualTypeList, out_outSwiftDefaultValueAsString, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@abstractSecondaryProperty tryToSolveSecondaryProperty'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractSecondaryProperty_tryToSolveSecondaryProperty> gCategoryMethodTable_abstractSecondaryProperty_tryToSolveSecondaryProperty ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_tryToSolveSecondaryProperty (const int32_t inClassIndex,
                                                      categoryMethodSignature_abstractSecondaryProperty_tryToSolveSecondaryProperty inMethod) {
  gCategoryMethodTable_abstractSecondaryProperty_tryToSolveSecondaryProperty.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractSecondaryProperty_tryToSolveSecondaryProperty (void) {
  gCategoryMethodTable_abstractSecondaryProperty_tryToSolveSecondaryProperty.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractSecondaryProperty_tryToSolveSecondaryProperty (NULL,
                                                                                  freeCategoryMethod_abstractSecondaryProperty_tryToSolveSecondaryProperty) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_tryToSolveSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                     GALGAS_semanticContext & io_ioSemanticContext,
                                                     const GALGAS_observablePropertyMap constin_inRootObservableProperties,
                                                     GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                     GALGAS_secondaryPropertyList & io_ioUnsolvedProperties,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSecondaryProperty) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractSecondaryProperty_tryToSolveSecondaryProperty f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractSecondaryProperty_tryToSolveSecondaryProperty.count ()) {
      f = gCategoryMethodTable_abstractSecondaryProperty_tryToSolveSecondaryProperty (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractSecondaryProperty_tryToSolveSecondaryProperty.count ()) {
           f = gCategoryMethodTable_abstractSecondaryProperty_tryToSolveSecondaryProperty (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractSecondaryProperty_tryToSolveSecondaryProperty.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, constin_inRootObservableProperties, io_ioObservableProperties, io_ioUnsolvedProperties, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mAttribute_mUnifiedTypeMap (),
mAttribute_mOutletClassMap (),
mAttribute_mBindingSpecificationMap (),
mAttribute_mPreferencesObservablePropertyMap (),
mAttribute_mDocumentObservablePropertyMap (),
mAttribute_mEntityObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_unifiedTypeMap & inOperand0,
                                                const GALGAS_outletClassMap & inOperand1,
                                                const GALGAS_bindingSpecificationMap & inOperand2,
                                                const GALGAS_observablePropertyMap & inOperand3,
                                                const GALGAS_documentObservablePropertyMap & inOperand4,
                                                const GALGAS_entityObservablePropertyMap & inOperand5) :
mAttribute_mUnifiedTypeMap (inOperand0),
mAttribute_mOutletClassMap (inOperand1),
mAttribute_mBindingSpecificationMap (inOperand2),
mAttribute_mPreferencesObservablePropertyMap (inOperand3),
mAttribute_mDocumentObservablePropertyMap (inOperand4),
mAttribute_mEntityObservablePropertyMap (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_outletClassMap::constructor_emptyMap (HERE),
                                 GALGAS_bindingSpecificationMap::constructor_emptyMap (HERE),
                                 GALGAS_observablePropertyMap::constructor_emptyMap (HERE),
                                 GALGAS_documentObservablePropertyMap::constructor_emptyMap (HERE),
                                 GALGAS_entityObservablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_unifiedTypeMap & inOperand0,
                                                                const GALGAS_outletClassMap & inOperand1,
                                                                const GALGAS_bindingSpecificationMap & inOperand2,
                                                                const GALGAS_observablePropertyMap & inOperand3,
                                                                const GALGAS_documentObservablePropertyMap & inOperand4,
                                                                const GALGAS_entityObservablePropertyMap & inOperand5 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mUnifiedTypeMap.objectCompare (inOperand.mAttribute_mUnifiedTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassMap.objectCompare (inOperand.mAttribute_mOutletClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingSpecificationMap.objectCompare (inOperand.mAttribute_mBindingSpecificationMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreferencesObservablePropertyMap.objectCompare (inOperand.mAttribute_mPreferencesObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentObservablePropertyMap.objectCompare (inOperand.mAttribute_mDocumentObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEntityObservablePropertyMap.objectCompare (inOperand.mAttribute_mEntityObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mAttribute_mUnifiedTypeMap.isValid () && mAttribute_mOutletClassMap.isValid () && mAttribute_mBindingSpecificationMap.isValid () && mAttribute_mPreferencesObservablePropertyMap.isValid () && mAttribute_mDocumentObservablePropertyMap.isValid () && mAttribute_mEntityObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mAttribute_mUnifiedTypeMap.drop () ;
  mAttribute_mOutletClassMap.drop () ;
  mAttribute_mBindingSpecificationMap.drop () ;
  mAttribute_mPreferencesObservablePropertyMap.drop () ;
  mAttribute_mDocumentObservablePropertyMap.drop () ;
  mAttribute_mEntityObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mUnifiedTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreferencesObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDocumentObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mUnifiedTypeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnifiedTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap GALGAS_semanticContext::getter_mOutletClassMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap GALGAS_semanticContext::getter_mBindingSpecificationMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingSpecificationMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_semanticContext::getter_mPreferencesObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreferencesObservablePropertyMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap GALGAS_semanticContext::getter_mDocumentObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentObservablePropertyMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap GALGAS_semanticContext::getter_mEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@mainXibDescriptorList generateCode'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_generateCode (const GALGAS_mainXibDescriptorList & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  const GALGAS_mainXibDescriptorList temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, temp_0.getter_length (SOURCE_FILE ("main-xib.galgas", 88)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_mainXibDescriptorList temp_2 = inObject ;
    result_outResult = GALGAS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_length (SOURCE_FILE ("main-xib.galgas", 89)).getter_string (SOURCE_FILE ("main-xib.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)).add_operation (GALGAS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)) ;
    result_outResult.plusAssign_operation(GALGAS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 90)) ;
    GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_columnMax = GALGAS_uint ((uint32_t) 1U) ;
    const GALGAS_mainXibDescriptorList temp_3 = inObject ;
    cEnumerator_mainXibDescriptorList enumerator_3394 (temp_3, kEnumeration_up) ;
    while (enumerator_3394.hasCurrentObject ()) {
      GALGAS_uint var_column = GALGAS_uint ((uint32_t) 0U) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 95)) ;
      cEnumerator_mainXibLineDescriptorList enumerator_3486 (enumerator_3394.current_mLine (HERE), kEnumeration_up) ;
      while (enumerator_3486.hasCurrentObject ()) {
        switch (enumerator_3486.current_mElement (HERE).enumValue ()) {
        case GALGAS_mainXibElement::kNotBuilt:
          break ;
        case GALGAS_mainXibElement::kEnum_text:
          {
            const cEnumAssociatedValues_mainXibElement_text * extractPtr_4231 = (const cEnumAssociatedValues_mainXibElement_text *) (enumerator_3486.current_mElement (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_t = extractPtr_4231->mAssociatedValue0 ;
            var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 99)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("  //--- Text ").add_operation (extractedValue_t.getter_string (SOURCE_FILE ("main-xib.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 100)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("  //  createTextFieldForText (").add_operation (extractedValue_t.mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)).add_operation (GALGAS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 101)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    let tf").add_operation (var_idx.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (var_column.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 102)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx.getter_string (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (extractedValue_t.mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 103)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx.getter_string (SOURCE_FILE ("main-xib.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)).add_operation (GALGAS_string (".editable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 104)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx.getter_string (SOURCE_FILE ("main-xib.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)).add_operation (GALGAS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 105)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx.getter_string (SOURCE_FILE ("main-xib.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)).add_operation (GALGAS_string (".bordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 106)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (tf").add_operation (var_idx.getter_string (SOURCE_FILE ("main-xib.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 107)) ;
          }
          break ;
        case GALGAS_mainXibElement::kEnum_outlet:
          {
            const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_4702 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_3486.current_mElement (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_outletType = extractPtr_4702->mAssociatedValue0 ;
            const GALGAS_lstring extractedValue_outletName = extractPtr_4702->mAssociatedValue1 ;
            result_outResult.plusAssign_operation(GALGAS_string ("  //--- Outlet ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 109)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (extractedValue_outletType.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (var_column.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 110)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (extractedValue_outletName.mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 111)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)).add_operation (GALGAS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 112)) ;
          }
          break ;
        }
        var_column.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 114)) ;
        enumerator_3486.gotoNextObject () ;
      }
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_column.objectCompare (var_columnMax)).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_columnMax = var_column ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 119)) ;
      enumerator_3394.gotoNextObject () ;
    }
    result_outResult.plusAssign_operation(GALGAS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 121)) ;
    const GALGAS_mainXibDescriptorList temp_5 = inObject ;
    result_outResult.plusAssign_operation(GALGAS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax.getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (temp_5.getter_length (SOURCE_FILE ("main-xib.galgas", 122)).getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 122)) ;
    result_outResult.plusAssign_operation(GALGAS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 123)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList_2D_element::GALGAS_secondaryPropertyList_2D_element (void) :
mAttribute_mSecondaryProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList_2D_element::~ GALGAS_secondaryPropertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList_2D_element::GALGAS_secondaryPropertyList_2D_element (const GALGAS_abstractSecondaryProperty & inOperand0) :
mAttribute_mSecondaryProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList_2D_element GALGAS_secondaryPropertyList_2D_element::constructor_new (const GALGAS_abstractSecondaryProperty & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_secondaryPropertyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_secondaryPropertyList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_secondaryPropertyList_2D_element::objectCompare (const GALGAS_secondaryPropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSecondaryProperty.objectCompare (inOperand.mAttribute_mSecondaryProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_secondaryPropertyList_2D_element::isValid (void) const {
  return mAttribute_mSecondaryProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryPropertyList_2D_element::drop (void) {
  mAttribute_mSecondaryProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryPropertyList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @secondaryPropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSecondaryProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractSecondaryProperty GALGAS_secondaryPropertyList_2D_element::getter_mSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSecondaryProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @secondaryPropertyList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_secondaryPropertyList_2D_element ("secondaryPropertyList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_secondaryPropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_secondaryPropertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_secondaryPropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_secondaryPropertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList_2D_element GALGAS_secondaryPropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_secondaryPropertyList_2D_element result ;
  const GALGAS_secondaryPropertyList_2D_element * p = (const GALGAS_secondaryPropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_secondaryPropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("secondaryPropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element::GALGAS_enumListForGeneration_2D_element (void) :
mAttribute_mEnumName (),
mAttribute_mEnumConstantList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element::~ GALGAS_enumListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element::GALGAS_enumListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_lstringlist & inOperand1) :
mAttribute_mEnumName (inOperand0),
mAttribute_mEnumConstantList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumListForGeneration_2D_element::objectCompare (const GALGAS_enumListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEnumName.objectCompare (inOperand.mAttribute_mEnumName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumConstantList.objectCompare (inOperand.mAttribute_mEnumConstantList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mEnumName.isValid () && mAttribute_mEnumConstantList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumListForGeneration_2D_element::drop (void) {
  mAttribute_mEnumName.drop () ;
  mAttribute_mEnumConstantList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumListForGeneration_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @enumListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEnumName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumConstantList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumListForGeneration_2D_element::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_enumListForGeneration_2D_element::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumConstantList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumListForGeneration-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ("enumListForGeneration-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumListForGeneration_2D_element result ;
  const GALGAS_enumListForGeneration_2D_element * p = (const GALGAS_enumListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classListForGeneration_2D_element::GALGAS_classListForGeneration_2D_element (void) :
mAttribute_mClassName (),
mAttribute_mSimpleStoredPropertyListForGeneration (),
mAttribute_mTransientListForGeneration (),
mAttribute_mExternSwiftFunctionList (),
mAttribute_mExternSwiftDelegateList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classListForGeneration_2D_element::~ GALGAS_classListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classListForGeneration_2D_element::GALGAS_classListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                                                    const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                    const GALGAS_externSwiftFunctionList & inOperand3,
                                                                                    const GALGAS_externSwiftDelegateList & inOperand4) :
mAttribute_mClassName (inOperand0),
mAttribute_mSimpleStoredPropertyListForGeneration (inOperand1),
mAttribute_mTransientListForGeneration (inOperand2),
mAttribute_mExternSwiftFunctionList (inOperand3),
mAttribute_mExternSwiftDelegateList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classListForGeneration_2D_element GALGAS_classListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_classListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                   GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                                   GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                   GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                   GALGAS_externSwiftDelegateList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classListForGeneration_2D_element GALGAS_classListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                                                                    const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                                    const GALGAS_externSwiftFunctionList & inOperand3,
                                                                                                    const GALGAS_externSwiftDelegateList & inOperand4 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_classListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_classListForGeneration_2D_element::objectCompare (const GALGAS_classListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mClassName.objectCompare (inOperand.mAttribute_mClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mAttribute_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientListForGeneration.objectCompare (inOperand.mAttribute_mTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternSwiftFunctionList.objectCompare (inOperand.mAttribute_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternSwiftDelegateList.objectCompare (inOperand.mAttribute_mExternSwiftDelegateList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_classListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mClassName.isValid () && mAttribute_mSimpleStoredPropertyListForGeneration.isValid () && mAttribute_mTransientListForGeneration.isValid () && mAttribute_mExternSwiftFunctionList.isValid () && mAttribute_mExternSwiftDelegateList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classListForGeneration_2D_element::drop (void) {
  mAttribute_mClassName.drop () ;
  mAttribute_mSimpleStoredPropertyListForGeneration.drop () ;
  mAttribute_mTransientListForGeneration.drop () ;
  mAttribute_mExternSwiftFunctionList.drop () ;
  mAttribute_mExternSwiftDelegateList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classListForGeneration_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @classListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_classListForGeneration_2D_element::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_classListForGeneration_2D_element::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_classListForGeneration_2D_element::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList GALGAS_classListForGeneration_2D_element::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternSwiftFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftDelegateList GALGAS_classListForGeneration_2D_element::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternSwiftDelegateList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @classListForGeneration-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classListForGeneration_2D_element ("classListForGeneration-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classListForGeneration_2D_element GALGAS_classListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_classListForGeneration_2D_element result ;
  const GALGAS_classListForGeneration_2D_element * p = (const GALGAS_classListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element::GALGAS_entityListForGeneration_2D_element (void) :
mAttribute_mEntityName (),
mAttribute_mSuperEntityName (),
mAttribute_mSimpleStoredPropertyListForGeneration (),
mAttribute_mDecoratedTransientListForGeneration (),
mAttribute_mToOneEntityRelationshipList (),
mAttribute_mToManyEntityRelationshipList (),
mAttribute_mSignatureSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element::~ GALGAS_entityListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element::GALGAS_entityListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_string & inOperand1,
                                                                                      const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                      const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                      const GALGAS_toOneEntityRelationshipListForGeneration & inOperand4,
                                                                                      const GALGAS_toManyEntityRelationshipListForGeneration & inOperand5,
                                                                                      const GALGAS_stringset & inOperand6) :
mAttribute_mEntityName (inOperand0),
mAttribute_mSuperEntityName (inOperand1),
mAttribute_mSimpleStoredPropertyListForGeneration (inOperand2),
mAttribute_mDecoratedTransientListForGeneration (inOperand3),
mAttribute_mToOneEntityRelationshipList (inOperand4),
mAttribute_mToManyEntityRelationshipList (inOperand5),
mAttribute_mSignatureSet (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE),
                                                    GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                                      const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                                      const GALGAS_toOneEntityRelationshipListForGeneration & inOperand4,
                                                                                                      const GALGAS_toManyEntityRelationshipListForGeneration & inOperand5,
                                                                                                      const GALGAS_stringset & inOperand6 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_entityListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_entityListForGeneration_2D_element::objectCompare (const GALGAS_entityListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEntityName.objectCompare (inOperand.mAttribute_mEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSuperEntityName.objectCompare (inOperand.mAttribute_mSuperEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mAttribute_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDecoratedTransientListForGeneration.objectCompare (inOperand.mAttribute_mDecoratedTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToOneEntityRelationshipList.objectCompare (inOperand.mAttribute_mToOneEntityRelationshipList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToManyEntityRelationshipList.objectCompare (inOperand.mAttribute_mToManyEntityRelationshipList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignatureSet.objectCompare (inOperand.mAttribute_mSignatureSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_entityListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mEntityName.isValid () && mAttribute_mSuperEntityName.isValid () && mAttribute_mSimpleStoredPropertyListForGeneration.isValid () && mAttribute_mDecoratedTransientListForGeneration.isValid () && mAttribute_mToOneEntityRelationshipList.isValid () && mAttribute_mToManyEntityRelationshipList.isValid () && mAttribute_mSignatureSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityListForGeneration_2D_element::drop (void) {
  mAttribute_mEntityName.drop () ;
  mAttribute_mSuperEntityName.drop () ;
  mAttribute_mSimpleStoredPropertyListForGeneration.drop () ;
  mAttribute_mDecoratedTransientListForGeneration.drop () ;
  mAttribute_mToOneEntityRelationshipList.drop () ;
  mAttribute_mToManyEntityRelationshipList.drop () ;
  mAttribute_mSignatureSet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @entityListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSuperEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDecoratedTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToOneEntityRelationshipList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToManyEntityRelationshipList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignatureSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_entityListForGeneration_2D_element::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_entityListForGeneration_2D_element::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSuperEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_entityListForGeneration_2D_element::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_entityListForGeneration_2D_element::getter_mDecoratedTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDecoratedTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_entityListForGeneration_2D_element::getter_mToOneEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToOneEntityRelationshipList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_entityListForGeneration_2D_element::getter_mToManyEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToManyEntityRelationshipList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_entityListForGeneration_2D_element::getter_mSignatureSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignatureSet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @entityListForGeneration-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneration_2D_element ("entityListForGeneration-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneration_2D_element result ;
  const GALGAS_entityListForGeneration_2D_element * p = (const GALGAS_entityListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (void) :
mAttribute_mDocumentName (),
mAttribute_mRootEntityName (),
mAttribute_mSimpleStoredPropertyListForGeneration (),
mAttribute_mTransientListForGeneration (),
mAttribute_mOutletMap (),
mAttribute_mTargetActionList (),
mAttribute_mRegularBindingsGenerationList (),
mAttribute_multipleBindingGenerationList (),
mAttribute_mDocumentArrayControllerForGeneration (),
mAttribute_mTableViewBindingGenerationList (),
mAttribute_mSelectionControllerListForGeneration (),
mAttribute_mCustomObjectControllerListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element::~ GALGAS_documentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_string & inOperand1,
                                                                                          const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                          const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                          const GALGAS_decoratedOutletMap & inOperand4,
                                                                                          const GALGAS_actionBindingListForGeneration & inOperand5,
                                                                                          const GALGAS_regularBindingsGenerationList & inOperand6,
                                                                                          const GALGAS_multipleBindingGenerationList & inOperand7,
                                                                                          const GALGAS_arrayControllerForGeneration & inOperand8,
                                                                                          const GALGAS_tableViewBindingGenerationList & inOperand9,
                                                                                          const GALGAS_selectionControllerForGeneration & inOperand10,
                                                                                          const GALGAS_customObjectControllerForGeneration & inOperand11) :
mAttribute_mDocumentName (inOperand0),
mAttribute_mRootEntityName (inOperand1),
mAttribute_mSimpleStoredPropertyListForGeneration (inOperand2),
mAttribute_mTransientListForGeneration (inOperand3),
mAttribute_mOutletMap (inOperand4),
mAttribute_mTargetActionList (inOperand5),
mAttribute_mRegularBindingsGenerationList (inOperand6),
mAttribute_multipleBindingGenerationList (inOperand7),
mAttribute_mDocumentArrayControllerForGeneration (inOperand8),
mAttribute_mTableViewBindingGenerationList (inOperand9),
mAttribute_mSelectionControllerListForGeneration (inOperand10),
mAttribute_mCustomObjectControllerListForGeneration (inOperand11) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                      GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_customObjectControllerForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                          const GALGAS_string & inOperand1,
                                                                                                          const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                                          const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                                          const GALGAS_decoratedOutletMap & inOperand4,
                                                                                                          const GALGAS_actionBindingListForGeneration & inOperand5,
                                                                                                          const GALGAS_regularBindingsGenerationList & inOperand6,
                                                                                                          const GALGAS_multipleBindingGenerationList & inOperand7,
                                                                                                          const GALGAS_arrayControllerForGeneration & inOperand8,
                                                                                                          const GALGAS_tableViewBindingGenerationList & inOperand9,
                                                                                                          const GALGAS_selectionControllerForGeneration & inOperand10,
                                                                                                          const GALGAS_customObjectControllerForGeneration & inOperand11 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_documentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_documentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_documentListForGeneration_2D_element::objectCompare (const GALGAS_documentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentName.objectCompare (inOperand.mAttribute_mDocumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRootEntityName.objectCompare (inOperand.mAttribute_mRootEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mAttribute_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientListForGeneration.objectCompare (inOperand.mAttribute_mTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletMap.objectCompare (inOperand.mAttribute_mOutletMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetActionList.objectCompare (inOperand.mAttribute_mTargetActionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingsGenerationList.objectCompare (inOperand.mAttribute_mRegularBindingsGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_multipleBindingGenerationList.objectCompare (inOperand.mAttribute_multipleBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mDocumentArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableViewBindingGenerationList.objectCompare (inOperand.mAttribute_mTableViewBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionControllerListForGeneration.objectCompare (inOperand.mAttribute_mSelectionControllerListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCustomObjectControllerListForGeneration.objectCompare (inOperand.mAttribute_mCustomObjectControllerListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_documentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mDocumentName.isValid () && mAttribute_mRootEntityName.isValid () && mAttribute_mSimpleStoredPropertyListForGeneration.isValid () && mAttribute_mTransientListForGeneration.isValid () && mAttribute_mOutletMap.isValid () && mAttribute_mTargetActionList.isValid () && mAttribute_mRegularBindingsGenerationList.isValid () && mAttribute_multipleBindingGenerationList.isValid () && mAttribute_mDocumentArrayControllerForGeneration.isValid () && mAttribute_mTableViewBindingGenerationList.isValid () && mAttribute_mSelectionControllerListForGeneration.isValid () && mAttribute_mCustomObjectControllerListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentListForGeneration_2D_element::drop (void) {
  mAttribute_mDocumentName.drop () ;
  mAttribute_mRootEntityName.drop () ;
  mAttribute_mSimpleStoredPropertyListForGeneration.drop () ;
  mAttribute_mTransientListForGeneration.drop () ;
  mAttribute_mOutletMap.drop () ;
  mAttribute_mTargetActionList.drop () ;
  mAttribute_mRegularBindingsGenerationList.drop () ;
  mAttribute_multipleBindingGenerationList.drop () ;
  mAttribute_mDocumentArrayControllerForGeneration.drop () ;
  mAttribute_mTableViewBindingGenerationList.drop () ;
  mAttribute_mSelectionControllerListForGeneration.drop () ;
  mAttribute_mCustomObjectControllerListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentListForGeneration_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @documentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDocumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRootEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetActionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDocumentArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCustomObjectControllerListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_documentListForGeneration_2D_element::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_documentListForGeneration_2D_element::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRootEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_documentListForGeneration_2D_element::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_documentListForGeneration_2D_element::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap GALGAS_documentListForGeneration_2D_element::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration GALGAS_documentListForGeneration_2D_element::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetActionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_documentListForGeneration_2D_element::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingsGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList GALGAS_documentListForGeneration_2D_element::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_multipleBindingGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_documentListForGeneration_2D_element::getter_mDocumentArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList GALGAS_documentListForGeneration_2D_element::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableViewBindingGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration GALGAS_documentListForGeneration_2D_element::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionControllerListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration GALGAS_documentListForGeneration_2D_element::getter_mCustomObjectControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCustomObjectControllerListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @documentListForGeneration-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentListForGeneration_2D_element ("documentListForGeneration-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_documentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_documentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_documentListForGeneration_2D_element result ;
  const GALGAS_documentListForGeneration_2D_element * p = (const GALGAS_documentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element::GALGAS_bindingSpecificationListMap_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element::~ GALGAS_bindingSpecificationListMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element::GALGAS_bindingSpecificationListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_outletClassBindingSpecificationList & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingSpecificationListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                        GALGAS_outletClassBindingSpecificationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_outletClassBindingSpecificationList & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingSpecificationListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingSpecificationListMap_2D_element::objectCompare (const GALGAS_bindingSpecificationListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingSpecificationListMap_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationListMap_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationListMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @bindingSpecificationListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_bindingSpecificationListMap_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList GALGAS_bindingSpecificationListMap_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @bindingSpecificationListMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ("bindingSpecificationListMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingSpecificationListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationListMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap_2D_element result ;
  const GALGAS_bindingSpecificationListMap_2D_element * p = (const GALGAS_bindingSpecificationListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (void) :
mAttribute_mTableValueBindingOutletName (),
mAttribute_mTableValueBindingControllerName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element::~ GALGAS_tableViewBindingGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1) :
mAttribute_mTableValueBindingOutletName (inOperand0),
mAttribute_mTableValueBindingControllerName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_tableViewBindingGenerationList_2D_element::objectCompare (const GALGAS_tableViewBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTableValueBindingOutletName.objectCompare (inOperand.mAttribute_mTableValueBindingOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableValueBindingControllerName.objectCompare (inOperand.mAttribute_mTableValueBindingControllerName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_tableViewBindingGenerationList_2D_element::isValid (void) const {
  return mAttribute_mTableValueBindingOutletName.isValid () && mAttribute_mTableValueBindingControllerName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewBindingGenerationList_2D_element::drop (void) {
  mAttribute_mTableValueBindingOutletName.drop () ;
  mAttribute_mTableValueBindingControllerName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewBindingGenerationList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @tableViewBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTableValueBindingOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableValueBindingControllerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableValueBindingOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableValueBindingControllerName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @tableViewBindingGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ("tableViewBindingGenerationList-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  const GALGAS_tableViewBindingGenerationList_2D_element * p = (const GALGAS_tableViewBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mAttribute_mOutletName (),
mAttribute_mBindingName (),
mAttribute_mBoundObjectStringList (),
mAttribute_mBindingOptionsString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_stringlist & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mAttribute_mOutletName (inOperand0),
mAttribute_mBindingName (inOperand1),
mAttribute_mBoundObjectStringList (inOperand2),
mAttribute_mBindingOptionsString (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_string::constructor_default (HERE),
                                                          GALGAS_stringlist::constructor_emptyList (HERE),
                                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_stringlist & inOperand2,
                                                                                                                  const GALGAS_string & inOperand3 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_regularBindingsGenerationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_regularBindingsGenerationList_2D_element::objectCompare (const GALGAS_regularBindingsGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundObjectStringList.objectCompare (inOperand.mAttribute_mBoundObjectStringList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionsString.objectCompare (inOperand.mAttribute_mBindingOptionsString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mAttribute_mOutletName.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mBoundObjectStringList.isValid () && mAttribute_mBindingOptionsString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mAttribute_mOutletName.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mBoundObjectStringList.drop () ;
  mAttribute_mBindingOptionsString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingsGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @regularBindingsGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundObjectStringList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_regularBindingsGenerationList_2D_element::getter_mBoundObjectStringList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundObjectStringList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingOptionsString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionsString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @regularBindingsGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ("regularBindingsGenerationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_regularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  const GALGAS_regularBindingsGenerationList_2D_element * p = (const GALGAS_regularBindingsGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingsGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (void) :
mAttribute_mOutletName (),
mAttribute_mTargetName (),
mAttribute_mActionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::~ GALGAS_actionBindingListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2) :
mAttribute_mOutletName (inOperand0),
mAttribute_mTargetName (inOperand1),
mAttribute_mActionName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_actionBindingListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actionBindingListForGeneration_2D_element::objectCompare (const GALGAS_actionBindingListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actionBindingListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOutletName.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mActionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionBindingListForGeneration_2D_element::drop (void) {
  mAttribute_mOutletName.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mActionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionBindingListForGeneration_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @actionBindingListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @actionBindingListForGeneration-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ("actionBindingListForGeneration-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actionBindingListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  const GALGAS_actionBindingListForGeneration_2D_element * p = (const GALGAS_actionBindingListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionBindingListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element::GALGAS_storedArrayPropertyListForGeneration_2D_element (void) :
mAttribute_mElementClassName (),
mAttribute_mStoredPropertyName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element::~ GALGAS_storedArrayPropertyListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element::GALGAS_storedArrayPropertyListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1) :
mAttribute_mElementClassName (inOperand0),
mAttribute_mStoredPropertyName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element GALGAS_storedArrayPropertyListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_storedArrayPropertyListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element GALGAS_storedArrayPropertyListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_storedArrayPropertyListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_storedArrayPropertyListForGeneration_2D_element::objectCompare (const GALGAS_storedArrayPropertyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElementClassName.objectCompare (inOperand.mAttribute_mElementClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStoredPropertyName.objectCompare (inOperand.mAttribute_mStoredPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_storedArrayPropertyListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mElementClassName.isValid () && mAttribute_mStoredPropertyName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_storedArrayPropertyListForGeneration_2D_element::drop (void) {
  mAttribute_mElementClassName.drop () ;
  mAttribute_mStoredPropertyName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_storedArrayPropertyListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @storedArrayPropertyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElementClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStoredPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storedArrayPropertyListForGeneration_2D_element::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storedArrayPropertyListForGeneration_2D_element::getter_mStoredPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStoredPropertyName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @storedArrayPropertyListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storedArrayPropertyListForGeneration_2D_element ("storedArrayPropertyListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storedArrayPropertyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storedArrayPropertyListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storedArrayPropertyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storedArrayPropertyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element GALGAS_storedArrayPropertyListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListForGeneration_2D_element result ;
  const GALGAS_storedArrayPropertyListForGeneration_2D_element * p = (const GALGAS_storedArrayPropertyListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storedArrayPropertyListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storedArrayPropertyListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (void) :
mAttribute_mObjectTypeName (),
mAttribute_mModelName (),
mAttribute_mModelTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mAttribute_mObjectTypeName (inOperand0),
mAttribute_mModelName (inOperand1),
mAttribute_mModelTypeName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_validationStubRoutineListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_validationStubRoutineListForGeneration_2D_element::objectCompare (const GALGAS_validationStubRoutineListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mObjectTypeName.objectCompare (inOperand.mAttribute_mObjectTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelName.objectCompare (inOperand.mAttribute_mModelName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName.objectCompare (inOperand.mAttribute_mModelTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_validationStubRoutineListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mObjectTypeName.isValid () && mAttribute_mModelName.isValid () && mAttribute_mModelTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_validationStubRoutineListForGeneration_2D_element::drop (void) {
  mAttribute_mObjectTypeName.drop () ;
  mAttribute_mModelName.drop () ;
  mAttribute_mModelTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_validationStubRoutineListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @validationStubRoutineListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mObjectTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mObjectTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObjectTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @validationStubRoutineListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ("validationStubRoutineListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  const GALGAS_validationStubRoutineListForGeneration_2D_element * p = (const GALGAS_validationStubRoutineListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_validationStubRoutineListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element::GALGAS_actionListForGeneration_2D_element (void) :
mAttribute_mClassName (),
mAttribute_mActionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element::~ GALGAS_actionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element::GALGAS_actionListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_string & inOperand1) :
mAttribute_mClassName (inOperand0),
mAttribute_mActionName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_actionListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actionListForGeneration_2D_element::objectCompare (const GALGAS_actionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mClassName.objectCompare (inOperand.mAttribute_mClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mClassName.isValid () && mAttribute_mActionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionListForGeneration_2D_element::drop (void) {
  mAttribute_mClassName.drop () ;
  mAttribute_mActionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @actionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionListForGeneration_2D_element::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionListForGeneration_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @actionListForGeneration-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionListForGeneration_2D_element ("actionListForGeneration-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actionListForGeneration_2D_element result ;
  const GALGAS_actionListForGeneration_2D_element * p = (const GALGAS_actionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (void) :
mAttribute_mOutletName (),
mAttribute_mBindingName (),
mAttribute_mBoundObjectExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::~ GALGAS_multipleBindingGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mAttribute_mOutletName (inOperand0),
mAttribute_mBindingName (inOperand1),
mAttribute_mBoundObjectExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_multipleBindingGenerationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_multipleBindingGenerationList_2D_element::objectCompare (const GALGAS_multipleBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundObjectExpression.objectCompare (inOperand.mAttribute_mBoundObjectExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_multipleBindingGenerationList_2D_element::isValid (void) const {
  return mAttribute_mOutletName.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mBoundObjectExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingGenerationList_2D_element::drop (void) {
  mAttribute_mOutletName.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mBoundObjectExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @multipleBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList_2D_element::getter_mBoundObjectExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundObjectExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @multipleBindingGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ("multipleBindingGenerationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_multipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  const GALGAS_multipleBindingGenerationList_2D_element * p = (const GALGAS_multipleBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element::GALGAS_arrayControllerForGeneration_2D_element (void) :
mAttribute_mOwnerName (),
mAttribute_mControllerName (),
mAttribute_mArrayControllerFilterListForGeneration (),
mAttribute_mModelString (),
mAttribute_mArrayControllerBoundColumnListForGeneration (),
mAttribute_mArrayControllerSortedColumnListForGeneration (),
mAttribute_mModelTypeName (),
mAttribute_mModelTypeName_32_ (),
mAttribute_mModelKind (),
mAttribute_mElementTypeName (),
mAttribute_mAttributeListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element::~ GALGAS_arrayControllerForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element::GALGAS_arrayControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                                                const GALGAS_string & inOperand3,
                                                                                                const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                                                const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                                                                const GALGAS_string & inOperand6,
                                                                                                const GALGAS_string & inOperand7,
                                                                                                const GALGAS_arrayControllerModelKind & inOperand8,
                                                                                                const GALGAS_string & inOperand9,
                                                                                                const GALGAS__32_stringlist & inOperand10) :
mAttribute_mOwnerName (inOperand0),
mAttribute_mControllerName (inOperand1),
mAttribute_mArrayControllerFilterListForGeneration (inOperand2),
mAttribute_mModelString (inOperand3),
mAttribute_mArrayControllerBoundColumnListForGeneration (inOperand4),
mAttribute_mArrayControllerSortedColumnListForGeneration (inOperand5),
mAttribute_mModelTypeName (inOperand6),
mAttribute_mModelTypeName_32_ (inOperand7),
mAttribute_mModelKind (inOperand8),
mAttribute_mElementTypeName (inOperand9),
mAttribute_mAttributeListForGeneration (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element GALGAS_arrayControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                                                                const GALGAS_string & inOperand3,
                                                                                                                const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                                                                const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                                                                                const GALGAS_string & inOperand6,
                                                                                                                const GALGAS_string & inOperand7,
                                                                                                                const GALGAS_arrayControllerModelKind & inOperand8,
                                                                                                                const GALGAS_string & inOperand9,
                                                                                                                const GALGAS__32_stringlist & inOperand10 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_arrayControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOwnerName.objectCompare (inOperand.mAttribute_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerName.objectCompare (inOperand.mAttribute_mControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerFilterListForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerFilterListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelString.objectCompare (inOperand.mAttribute_mModelString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerBoundColumnListForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerBoundColumnListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerSortedColumnListForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerSortedColumnListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName.objectCompare (inOperand.mAttribute_mModelTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName_32_.objectCompare (inOperand.mAttribute_mModelTypeName_32_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelKind.objectCompare (inOperand.mAttribute_mModelKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mElementTypeName.objectCompare (inOperand.mAttribute_mElementTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeListForGeneration.objectCompare (inOperand.mAttribute_mAttributeListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOwnerName.isValid () && mAttribute_mControllerName.isValid () && mAttribute_mArrayControllerFilterListForGeneration.isValid () && mAttribute_mModelString.isValid () && mAttribute_mArrayControllerBoundColumnListForGeneration.isValid () && mAttribute_mArrayControllerSortedColumnListForGeneration.isValid () && mAttribute_mModelTypeName.isValid () && mAttribute_mModelTypeName_32_.isValid () && mAttribute_mModelKind.isValid () && mAttribute_mElementTypeName.isValid () && mAttribute_mAttributeListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerForGeneration_2D_element::drop (void) {
  mAttribute_mOwnerName.drop () ;
  mAttribute_mControllerName.drop () ;
  mAttribute_mArrayControllerFilterListForGeneration.drop () ;
  mAttribute_mModelString.drop () ;
  mAttribute_mArrayControllerBoundColumnListForGeneration.drop () ;
  mAttribute_mArrayControllerSortedColumnListForGeneration.drop () ;
  mAttribute_mModelTypeName.drop () ;
  mAttribute_mModelTypeName_32_.drop () ;
  mAttribute_mModelKind.drop () ;
  mAttribute_mElementTypeName.drop () ;
  mAttribute_mAttributeListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerForGeneration_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerFilterListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerSortedColumnListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelTypeName_32_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mElementTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerForGeneration_2D_element::getter_mArrayControllerFilterListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerFilterListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerForGeneration_2D_element::getter_mArrayControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerBoundColumnListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerForGeneration_2D_element::getter_mArrayControllerSortedColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerSortedColumnListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mModelTypeName_32_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName_32_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerForGeneration_2D_element::getter_mModelKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_arrayControllerForGeneration_2D_element::getter_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @arrayControllerForGeneration-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerForGeneration_2D_element ("arrayControllerForGeneration-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element GALGAS_arrayControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerForGeneration_2D_element result ;
  const GALGAS_arrayControllerForGeneration_2D_element * p = (const GALGAS_arrayControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) :
mAttribute_mColumnName (),
mAttribute_mColumnOutletTypeName (),
mAttribute_mRunAction (),
mAttribute_mRegularBindingsGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::~ GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_regularBindingsGenerationList & inOperand3) :
mAttribute_mColumnName (inOperand0),
mAttribute_mColumnOutletTypeName (inOperand1),
mAttribute_mRunAction (inOperand2),
mAttribute_mRegularBindingsGenerationList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                                              const GALGAS_regularBindingsGenerationList & inOperand3 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mColumnName.objectCompare (inOperand.mAttribute_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mColumnOutletTypeName.objectCompare (inOperand.mAttribute_mColumnOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRunAction.objectCompare (inOperand.mAttribute_mRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingsGenerationList.objectCompare (inOperand.mAttribute_mRegularBindingsGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mColumnName.isValid () && mAttribute_mColumnOutletTypeName.isValid () && mAttribute_mRunAction.isValid () && mAttribute_mRegularBindingsGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mAttribute_mColumnName.drop () ;
  mAttribute_mColumnOutletTypeName.drop () ;
  mAttribute_mRunAction.drop () ;
  mAttribute_mRegularBindingsGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerBoundColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mRunAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingsGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @arrayControllerBoundColumnListForGeneration-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ("arrayControllerBoundColumnListForGeneration-element",
                                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration_2D_element result ;
  const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element * p = (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (void) :
mAttribute_mOwnerName (),
mAttribute_mSelectionControllerName (),
mAttribute_mBoundControllerName (),
mAttribute_mBoundControllerPropertyName (),
mAttribute_mSelectionTypeName (),
mAttribute_mSelectionObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element::~ GALGAS_selectionControllerForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_string & inOperand4,
                                                                                                        const GALGAS_observablePropertyMap & inOperand5) :
mAttribute_mOwnerName (inOperand0),
mAttribute_mSelectionControllerName (inOperand1),
mAttribute_mBoundControllerName (inOperand2),
mAttribute_mBoundControllerPropertyName (inOperand3),
mAttribute_mSelectionTypeName (inOperand4),
mAttribute_mSelectionObservablePropertyMap (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_string & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4,
                                                                                                                        const GALGAS_observablePropertyMap & inOperand5 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_selectionControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_selectionControllerForGeneration_2D_element::objectCompare (const GALGAS_selectionControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOwnerName.objectCompare (inOperand.mAttribute_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionControllerName.objectCompare (inOperand.mAttribute_mSelectionControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundControllerName.objectCompare (inOperand.mAttribute_mBoundControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundControllerPropertyName.objectCompare (inOperand.mAttribute_mBoundControllerPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionTypeName.objectCompare (inOperand.mAttribute_mSelectionTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionObservablePropertyMap.objectCompare (inOperand.mAttribute_mSelectionObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_selectionControllerForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOwnerName.isValid () && mAttribute_mSelectionControllerName.isValid () && mAttribute_mBoundControllerName.isValid () && mAttribute_mBoundControllerPropertyName.isValid () && mAttribute_mSelectionTypeName.isValid () && mAttribute_mSelectionObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_selectionControllerForGeneration_2D_element::drop (void) {
  mAttribute_mOwnerName.drop () ;
  mAttribute_mSelectionControllerName.drop () ;
  mAttribute_mBoundControllerName.drop () ;
  mAttribute_mBoundControllerPropertyName.drop () ;
  mAttribute_mSelectionTypeName.drop () ;
  mAttribute_mSelectionObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_selectionControllerForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @selectionControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundControllerPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundControllerPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @selectionControllerForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ("selectionControllerForGeneration-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selectionControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  const GALGAS_selectionControllerForGeneration_2D_element * p = (const GALGAS_selectionControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element::GALGAS_customObjectControllerForGeneration_2D_element (void) :
mAttribute_mOwnerName (),
mAttribute_mCustomObjectControllerName (),
mAttribute_mClassNameForSwift (),
mAttribute_mEntityTypeName (),
mAttribute_mSelectionObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element::~ GALGAS_customObjectControllerForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element::GALGAS_customObjectControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_string & inOperand1,
                                                                                                              const GALGAS_string & inOperand2,
                                                                                                              const GALGAS_string & inOperand3,
                                                                                                              const GALGAS_observablePropertyMap & inOperand4) :
mAttribute_mOwnerName (inOperand0),
mAttribute_mCustomObjectControllerName (inOperand1),
mAttribute_mClassNameForSwift (inOperand2),
mAttribute_mEntityTypeName (inOperand3),
mAttribute_mSelectionObservablePropertyMap (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element GALGAS_customObjectControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_customObjectControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element GALGAS_customObjectControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_string & inOperand3,
                                                                                                                              const GALGAS_observablePropertyMap & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_customObjectControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_customObjectControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_customObjectControllerForGeneration_2D_element::objectCompare (const GALGAS_customObjectControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOwnerName.objectCompare (inOperand.mAttribute_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCustomObjectControllerName.objectCompare (inOperand.mAttribute_mCustomObjectControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mClassNameForSwift.objectCompare (inOperand.mAttribute_mClassNameForSwift) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEntityTypeName.objectCompare (inOperand.mAttribute_mEntityTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionObservablePropertyMap.objectCompare (inOperand.mAttribute_mSelectionObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_customObjectControllerForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOwnerName.isValid () && mAttribute_mCustomObjectControllerName.isValid () && mAttribute_mClassNameForSwift.isValid () && mAttribute_mEntityTypeName.isValid () && mAttribute_mSelectionObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_customObjectControllerForGeneration_2D_element::drop (void) {
  mAttribute_mOwnerName.drop () ;
  mAttribute_mCustomObjectControllerName.drop () ;
  mAttribute_mClassNameForSwift.drop () ;
  mAttribute_mEntityTypeName.drop () ;
  mAttribute_mSelectionObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_customObjectControllerForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @customObjectControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCustomObjectControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mClassNameForSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEntityTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mCustomObjectControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCustomObjectControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mClassNameForSwift (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mClassNameForSwift ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mEntityTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_customObjectControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @customObjectControllerForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_customObjectControllerForGeneration_2D_element ("customObjectControllerForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_customObjectControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_customObjectControllerForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_customObjectControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_customObjectControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element GALGAS_customObjectControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_customObjectControllerForGeneration_2D_element result ;
  const GALGAS_customObjectControllerForGeneration_2D_element * p = (const GALGAS_customObjectControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_customObjectControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("customObjectControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (void) :
mAttribute_mDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::~ GALGAS_defaultValueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (const GALGAS_abstractDefaultValue & inOperand0) :
mAttribute_mDefaultValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::constructor_new (const GALGAS_abstractDefaultValue & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_defaultValueList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_defaultValueList_2D_element::objectCompare (const GALGAS_defaultValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultValue.objectCompare (inOperand.mAttribute_mDefaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_defaultValueList_2D_element::isValid (void) const {
  return mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList_2D_element::drop (void) {
  mAttribute_mDefaultValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @defaultValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_defaultValueList_2D_element::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @defaultValueList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList_2D_element ("defaultValueList-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_defaultValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_defaultValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  const GALGAS_defaultValueList_2D_element * p = (const GALGAS_defaultValueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultValueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultValueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mAttribute_mGroupReference (),
mAttribute_mGroupName (),
mAttribute_mGroupPath (),
mAttribute_mChildrenRefs () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mAttribute_mGroupReference (inOperand0),
mAttribute_mGroupName (inOperand1),
mAttribute_mGroupPath (inOperand2),
mAttribute_mChildrenRefs (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_stringlist & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeGroupList_2D_element::objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGroupReference.objectCompare (inOperand.mAttribute_mGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGroupName.objectCompare (inOperand.mAttribute_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGroupPath.objectCompare (inOperand.mAttribute_mGroupPath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mChildrenRefs.objectCompare (inOperand.mAttribute_mChildrenRefs) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mAttribute_mGroupReference.isValid () && mAttribute_mGroupName.isValid () && mAttribute_mGroupPath.isValid () && mAttribute_mChildrenRefs.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mAttribute_mGroupReference.drop () ;
  mAttribute_mGroupName.drop () ;
  mAttribute_mGroupPath.drop () ;
  mAttribute_mChildrenRefs.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @XCodeGroupList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGroupPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeGroupList_2D_element::getter_mChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mChildrenRefs ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @XCodeGroupList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  const GALGAS_XCodeGroupList_2D_element * p = (const GALGAS_XCodeGroupList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeGroupList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (void) :
mAttribute_mTargetRef (),
mAttribute_mTargetName (),
mAttribute_mProductFileReference (),
mAttribute_mProductFileName (),
mAttribute_mBuildPhaseRefList (),
mAttribute_mBuildPhaseRef (),
mAttribute_mBuildConfigurationListRef (),
mAttribute_mBuildConfigurationSettingList (),
mAttribute_mBuildConfigurationRef (),
mAttribute_mFrameworksFileRefList (),
mAttribute_mFrameworkBuildPhaseRef () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_stringlist & inOperand4,
                                                                              const GALGAS_string & inOperand5,
                                                                              const GALGAS_string & inOperand6,
                                                                              const GALGAS_stringlist & inOperand7,
                                                                              const GALGAS_string & inOperand8,
                                                                              const GALGAS_stringlist & inOperand9,
                                                                              const GALGAS_string & inOperand10) :
mAttribute_mTargetRef (inOperand0),
mAttribute_mTargetName (inOperand1),
mAttribute_mProductFileReference (inOperand2),
mAttribute_mProductFileName (inOperand3),
mAttribute_mBuildPhaseRefList (inOperand4),
mAttribute_mBuildPhaseRef (inOperand5),
mAttribute_mBuildConfigurationListRef (inOperand6),
mAttribute_mBuildConfigurationSettingList (inOperand7),
mAttribute_mBuildConfigurationRef (inOperand8),
mAttribute_mFrameworksFileRefList (inOperand9),
mAttribute_mFrameworkBuildPhaseRef (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_string & inOperand2,
                                                                                              const GALGAS_string & inOperand3,
                                                                                              const GALGAS_stringlist & inOperand4,
                                                                                              const GALGAS_string & inOperand5,
                                                                                              const GALGAS_string & inOperand6,
                                                                                              const GALGAS_stringlist & inOperand7,
                                                                                              const GALGAS_string & inOperand8,
                                                                                              const GALGAS_stringlist & inOperand9,
                                                                                              const GALGAS_string & inOperand10 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeToolTargetList_2D_element::objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTargetRef.objectCompare (inOperand.mAttribute_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileReference.objectCompare (inOperand.mAttribute_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileName.objectCompare (inOperand.mAttribute_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRefList.objectCompare (inOperand.mAttribute_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRef.objectCompare (inOperand.mAttribute_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationListRef.objectCompare (inOperand.mAttribute_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationSettingList.objectCompare (inOperand.mAttribute_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationRef.objectCompare (inOperand.mAttribute_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworksFileRefList.objectCompare (inOperand.mAttribute_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworkBuildPhaseRef.objectCompare (inOperand.mAttribute_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mAttribute_mTargetRef.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mProductFileReference.isValid () && mAttribute_mProductFileName.isValid () && mAttribute_mBuildPhaseRefList.isValid () && mAttribute_mBuildPhaseRef.isValid () && mAttribute_mBuildConfigurationListRef.isValid () && mAttribute_mBuildConfigurationSettingList.isValid () && mAttribute_mBuildConfigurationRef.isValid () && mAttribute_mFrameworksFileRefList.isValid () && mAttribute_mFrameworkBuildPhaseRef.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList_2D_element::drop (void) {
  mAttribute_mTargetRef.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mProductFileReference.drop () ;
  mAttribute_mProductFileName.drop () ;
  mAttribute_mBuildPhaseRefList.drop () ;
  mAttribute_mBuildPhaseRef.drop () ;
  mAttribute_mBuildConfigurationListRef.drop () ;
  mAttribute_mBuildConfigurationSettingList.drop () ;
  mAttribute_mBuildConfigurationRef.drop () ;
  mAttribute_mFrameworksFileRefList.drop () ;
  mAttribute_mFrameworkBuildPhaseRef.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @XCodeToolTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworkBuildPhaseRef ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @XCodeToolTargetList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  const GALGAS_XCodeToolTargetList_2D_element * p = (const GALGAS_XCodeToolTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeToolTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (void) :
mAttribute_mTargetRef (),
mAttribute_mTargetName (),
mAttribute_mProductFileReference (),
mAttribute_mProductFileName (),
mAttribute_mBuildPhaseRefList (),
mAttribute_mBuildPhaseRef (),
mAttribute_mBuildConfigurationListRef (),
mAttribute_mBuildConfigurationSettingList (),
mAttribute_mBuildConfigurationRef (),
mAttribute_mFrameworksFileRefList (),
mAttribute_mFrameworkBuildPhaseRef (),
mAttribute_mDependentTargets (),
mAttribute_mResourceBuildRef (),
mAttribute_mResourceFileBuildRefs (),
mAttribute_mInfoPListFile () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_string & inOperand2,
                                                                            const GALGAS_string & inOperand3,
                                                                            const GALGAS_stringlist & inOperand4,
                                                                            const GALGAS_string & inOperand5,
                                                                            const GALGAS_string & inOperand6,
                                                                            const GALGAS_stringlist & inOperand7,
                                                                            const GALGAS_string & inOperand8,
                                                                            const GALGAS_stringlist & inOperand9,
                                                                            const GALGAS_string & inOperand10,
                                                                            const GALGAS__32_stringlist & inOperand11,
                                                                            const GALGAS_string & inOperand12,
                                                                            const GALGAS_stringlist & inOperand13,
                                                                            const GALGAS_string & inOperand14) :
mAttribute_mTargetRef (inOperand0),
mAttribute_mTargetName (inOperand1),
mAttribute_mProductFileReference (inOperand2),
mAttribute_mProductFileName (inOperand3),
mAttribute_mBuildPhaseRefList (inOperand4),
mAttribute_mBuildPhaseRef (inOperand5),
mAttribute_mBuildConfigurationListRef (inOperand6),
mAttribute_mBuildConfigurationSettingList (inOperand7),
mAttribute_mBuildConfigurationRef (inOperand8),
mAttribute_mFrameworksFileRefList (inOperand9),
mAttribute_mFrameworkBuildPhaseRef (inOperand10),
mAttribute_mDependentTargets (inOperand11),
mAttribute_mResourceBuildRef (inOperand12),
mAttribute_mResourceFileBuildRefs (inOperand13),
mAttribute_mInfoPListFile (inOperand14) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS__32_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_stringlist & inOperand4,
                                                                                            const GALGAS_string & inOperand5,
                                                                                            const GALGAS_string & inOperand6,
                                                                                            const GALGAS_stringlist & inOperand7,
                                                                                            const GALGAS_string & inOperand8,
                                                                                            const GALGAS_stringlist & inOperand9,
                                                                                            const GALGAS_string & inOperand10,
                                                                                            const GALGAS__32_stringlist & inOperand11,
                                                                                            const GALGAS_string & inOperand12,
                                                                                            const GALGAS_stringlist & inOperand13,
                                                                                            const GALGAS_string & inOperand14 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    result = GALGAS_XCodeAppTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeAppTargetList_2D_element::objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTargetRef.objectCompare (inOperand.mAttribute_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileReference.objectCompare (inOperand.mAttribute_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileName.objectCompare (inOperand.mAttribute_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRefList.objectCompare (inOperand.mAttribute_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRef.objectCompare (inOperand.mAttribute_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationListRef.objectCompare (inOperand.mAttribute_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationSettingList.objectCompare (inOperand.mAttribute_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationRef.objectCompare (inOperand.mAttribute_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworksFileRefList.objectCompare (inOperand.mAttribute_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworkBuildPhaseRef.objectCompare (inOperand.mAttribute_mFrameworkBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDependentTargets.objectCompare (inOperand.mAttribute_mDependentTargets) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResourceBuildRef.objectCompare (inOperand.mAttribute_mResourceBuildRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResourceFileBuildRefs.objectCompare (inOperand.mAttribute_mResourceFileBuildRefs) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInfoPListFile.objectCompare (inOperand.mAttribute_mInfoPListFile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mAttribute_mTargetRef.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mProductFileReference.isValid () && mAttribute_mProductFileName.isValid () && mAttribute_mBuildPhaseRefList.isValid () && mAttribute_mBuildPhaseRef.isValid () && mAttribute_mBuildConfigurationListRef.isValid () && mAttribute_mBuildConfigurationSettingList.isValid () && mAttribute_mBuildConfigurationRef.isValid () && mAttribute_mFrameworksFileRefList.isValid () && mAttribute_mFrameworkBuildPhaseRef.isValid () && mAttribute_mDependentTargets.isValid () && mAttribute_mResourceBuildRef.isValid () && mAttribute_mResourceFileBuildRefs.isValid () && mAttribute_mInfoPListFile.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList_2D_element::drop (void) {
  mAttribute_mTargetRef.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mProductFileReference.drop () ;
  mAttribute_mProductFileName.drop () ;
  mAttribute_mBuildPhaseRefList.drop () ;
  mAttribute_mBuildPhaseRef.drop () ;
  mAttribute_mBuildConfigurationListRef.drop () ;
  mAttribute_mBuildConfigurationSettingList.drop () ;
  mAttribute_mBuildConfigurationRef.drop () ;
  mAttribute_mFrameworksFileRefList.drop () ;
  mAttribute_mFrameworkBuildPhaseRef.drop () ;
  mAttribute_mDependentTargets.drop () ;
  mAttribute_mResourceBuildRef.drop () ;
  mAttribute_mResourceFileBuildRefs.drop () ;
  mAttribute_mInfoPListFile.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @XCodeAppTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInfoPListFile.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworkBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mDependentTargets (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependentTargets ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mResourceBuildRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResourceBuildRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mResourceFileBuildRefs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResourceFileBuildRefs ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mInfoPListFile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfoPListFile ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @XCodeAppTargetList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  const GALGAS_XCodeAppTargetList_2D_element * p = (const GALGAS_XCodeAppTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeAppTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mAttribute_mFileReference (),
mAttribute_mFileName (),
mAttribute_mBuildReference () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mAttribute_mFileReference (inOperand0),
mAttribute_mFileName (inOperand1),
mAttribute_mBuildReference (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_BuildFileList_2D_element::objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFileReference.objectCompare (inOperand.mAttribute_mFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFileName.objectCompare (inOperand.mAttribute_mFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildReference.objectCompare (inOperand.mAttribute_mBuildReference) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mAttribute_mFileReference.isValid () && mAttribute_mFileName.isValid () && mAttribute_mBuildReference.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList_2D_element::drop (void) {
  mAttribute_mFileReference.drop () ;
  mAttribute_mFileName.drop () ;
  mAttribute_mBuildReference.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @BuildFileList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mBuildReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildReference ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @BuildFileList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  const GALGAS_BuildFileList_2D_element * p = (const GALGAS_BuildFileList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (void) :
mAttribute_mLine () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element::~ GALGAS_mainXibDescriptorList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & inOperand0) :
mAttribute_mLine (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibDescriptorList_2D_element (GALGAS_mainXibLineDescriptorList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_new (const GALGAS_mainXibLineDescriptorList & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mainXibDescriptorList_2D_element::objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLine.objectCompare (inOperand.mAttribute_mLine) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mainXibDescriptorList_2D_element::isValid (void) const {
  return mAttribute_mLine.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibDescriptorList_2D_element::drop (void) {
  mAttribute_mLine.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibDescriptorList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @mainXibDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLine.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibDescriptorList_2D_element::getter_mLine (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLine ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mainXibDescriptorList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ("mainXibDescriptorList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mainXibDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  const GALGAS_mainXibDescriptorList_2D_element * p = (const GALGAS_mainXibDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mAttribute_mOutletDeclarationList (),
mAttribute_mSimpleStoredAttributeList (),
mAttribute_mActionDeclarationList (),
mAttribute_mSecondaryPropertyList (),
mAttribute_mMainXibDescriptorList (),
mAttribute_mExternSwiftFunctionList (),
mAttribute_mStoredArrayList (),
mAttribute_mArrayControllerForGeneration (),
mAttribute_mSignatureList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & inOperand0,
                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_secondaryPropertyList & inOperand3,
                                                const GALGAS_mainXibDescriptorList & inOperand4,
                                                const GALGAS_externSwiftFunctionList & inOperand5,
                                                const GALGAS_storedArrayPropertyList & inOperand6,
                                                const GALGAS_arrayControllerForGeneration & inOperand7,
                                                const GALGAS_stringset & inOperand8) :
mAttribute_mOutletDeclarationList (inOperand0),
mAttribute_mSimpleStoredAttributeList (inOperand1),
mAttribute_mActionDeclarationList (inOperand2),
mAttribute_mSecondaryPropertyList (inOperand3),
mAttribute_mMainXibDescriptorList (inOperand4),
mAttribute_mExternSwiftFunctionList (inOperand5),
mAttribute_mStoredArrayList (inOperand6),
mAttribute_mArrayControllerForGeneration (inOperand7),
mAttribute_mSignatureList (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefDeclaration (GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                 GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                 GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                 GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                 GALGAS_storedArrayPropertyList::constructor_emptyList (HERE),
                                 GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_outletDeclarationList & inOperand0,
                                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_secondaryPropertyList & inOperand3,
                                                                const GALGAS_mainXibDescriptorList & inOperand4,
                                                                const GALGAS_externSwiftFunctionList & inOperand5,
                                                                const GALGAS_storedArrayPropertyList & inOperand6,
                                                                const GALGAS_arrayControllerForGeneration & inOperand7,
                                                                const GALGAS_stringset & inOperand8 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_prefDeclaration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefDeclaration::objectCompare (const GALGAS_prefDeclaration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletDeclarationList.objectCompare (inOperand.mAttribute_mOutletDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredAttributeList.objectCompare (inOperand.mAttribute_mSimpleStoredAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionDeclarationList.objectCompare (inOperand.mAttribute_mActionDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSecondaryPropertyList.objectCompare (inOperand.mAttribute_mSecondaryPropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainXibDescriptorList.objectCompare (inOperand.mAttribute_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternSwiftFunctionList.objectCompare (inOperand.mAttribute_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStoredArrayList.objectCompare (inOperand.mAttribute_mStoredArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignatureList.objectCompare (inOperand.mAttribute_mSignatureList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefDeclaration::isValid (void) const {
  return mAttribute_mOutletDeclarationList.isValid () && mAttribute_mSimpleStoredAttributeList.isValid () && mAttribute_mActionDeclarationList.isValid () && mAttribute_mSecondaryPropertyList.isValid () && mAttribute_mMainXibDescriptorList.isValid () && mAttribute_mExternSwiftFunctionList.isValid () && mAttribute_mStoredArrayList.isValid () && mAttribute_mArrayControllerForGeneration.isValid () && mAttribute_mSignatureList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefDeclaration::drop (void) {
  mAttribute_mOutletDeclarationList.drop () ;
  mAttribute_mSimpleStoredAttributeList.drop () ;
  mAttribute_mActionDeclarationList.drop () ;
  mAttribute_mSecondaryPropertyList.drop () ;
  mAttribute_mMainXibDescriptorList.drop () ;
  mAttribute_mExternSwiftFunctionList.drop () ;
  mAttribute_mStoredArrayList.drop () ;
  mAttribute_mArrayControllerForGeneration.drop () ;
  mAttribute_mSignatureList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefDeclaration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @prefDeclaration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStoredArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignatureList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList GALGAS_prefDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList GALGAS_prefDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_prefDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList GALGAS_prefDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSecondaryPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList GALGAS_prefDeclaration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainXibDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList GALGAS_prefDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternSwiftFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyList GALGAS_prefDeclaration::getter_mStoredArrayList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStoredArrayList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_prefDeclaration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_prefDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignatureList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @prefDeclaration type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration GALGAS_prefDeclaration::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  const GALGAS_prefDeclaration * p = (const GALGAS_prefDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@prefDeclaration typeInventory'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const GALGAS_prefDeclaration inObject,
                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_typeInventory (inObject.mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 65)) ;
  cEnumerator_secondaryPropertyList enumerator_2985 (inObject.mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_2985.hasCurrentObject ()) {
    callCategoryMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_2985.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 67)) ;
    enumerator_2985.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@prefDeclaration solveSecondaryProperty'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_solveSecondaryProperty (const GALGAS_prefDeclaration /* inObject */,
                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                            const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                            const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                            GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnsolvedProperties.drop () ; // Release 'out' argument
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 81)) ;
  GALGAS_observablePropertyMap var_preferencesObservablePropertyMap = ioArgument_ioSemanticContext.mAttribute_mPreferencesObservablePropertyMap ;
  cEnumerator_secondaryPropertyList enumerator_3569 (constinArgument_inPropertiesToSolve, kEnumeration_up) ;
  while (enumerator_3569.hasCurrentObject ()) {
    callCategoryMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_3569.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 86)), var_preferencesObservablePropertyMap, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 84)) ;
    enumerator_3569.gotoNextObject () ;
  }
  ioArgument_ioSemanticContext.mAttribute_mPreferencesObservablePropertyMap = var_preferencesObservablePropertyMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@prefDeclaration buildObservablePropertyMapsFromStoredProperties'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMapsFromStoredProperties (const GALGAS_prefDeclaration inObject,
                                                                     const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_buildObservablePropertyMap (inObject.mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, ioArgument_ioSemanticContext.mAttribute_mPreferencesObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 113)) ;
  categoryMethod_buildObservablePropertyMap (inObject.mAttribute_mStoredArrayList, constinArgument_inUnifiedTypeMap, ioArgument_ioSemanticContext.mAttribute_mPreferencesObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 118)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@prefDeclaration semanticAnalysis'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const GALGAS_prefDeclaration inObject,
                                      const GALGAS_externSwiftFunctionList constinArgument_inExternSwiftFunctionList,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      GALGAS_structForGeneration & ioArgument_ioGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 132)) ;
  temp_0.addAssign_operation (GALGAS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.galgas", 132)) ;
  temp_0.addAssign_operation (GALGAS_string ("init")  COMMA_SOURCE_FILE ("preferences.galgas", 132)) ;
  GALGAS_stringset var_availableCallers = temp_0 ;
  GALGAS_externFunctionMap var_externFunctionMap = GALGAS_externFunctionMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 133)) ;
  cEnumerator_externSwiftFunctionList enumerator_5770 (constinArgument_inExternSwiftFunctionList, kEnumeration_up) ;
  while (enumerator_5770.hasCurrentObject ()) {
    {
    var_externFunctionMap.setter_insertKey (enumerator_5770.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 135)) ;
    }
    const enumGalgasBool test_1 = var_availableCallers.getter_hasKey (enumerator_5770.current_mCallerName (HERE).mAttribute_string COMMA_SOURCE_FILE ("preferences.galgas", 136)).operator_not (SOURCE_FILE ("preferences.galgas", 136)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_s = GALGAS_string ("invalid caller; available callers:") ;
      cEnumerator_stringset enumerator_5984 (var_availableCallers, kEnumeration_up) ;
      while (enumerator_5984.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_5984.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 139)) ;
        enumerator_5984.gotoNextObject () ;
      }
      GALGAS_location location_2 (enumerator_5770.current_mCallerName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, var_s  COMMA_SOURCE_FILE ("preferences.galgas", 141)) ;
    }
    enumerator_5770.gotoNextObject () ;
  }
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration ;
  categoryMethod_simpleStoredPropertySemanticAnalysis (inObject.mAttribute_mSimpleStoredAttributeList, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 146)), constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 145)) ;
  GALGAS_storedArrayPropertyListForGeneration var_storedArrayPropertyListForGeneration ;
  categoryMethod_storedArrayPropertySemanticAnalysis (inObject.mAttribute_mStoredArrayList, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, var_storedArrayPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 152)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 157)) ;
  GALGAS_arrayControllerForGeneration var_arrayControllerListForGeneration = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 158)) ;
  cEnumerator_secondaryPropertyList enumerator_6819 (inObject.mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_6819.hasCurrentObject ()) {
    GALGAS_selectionControllerForGeneration joker_7130 = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 168)) ;
    GALGAS_customObjectControllerForGeneration joker_7166 = GALGAS_customObjectControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 169)) ;
    callCategoryMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_6819.current_mSecondaryProperty (HERE).ptr (), function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 161)), GALGAS_string::makeEmptyString (), GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 163)), constinArgument_inSemanticContext, constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap, var_transientDefinitionListForGeneration, var_arrayControllerListForGeneration, joker_7130, joker_7166, ioArgument_ioGeneration.mAttribute_mNeededOutletClasses, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 160)) ;
    enumerator_6819.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.plusAssign_operation(var_transientDefinitionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 173)) ;
  ioArgument_ioGeneration.mAttribute_mAllArrayControllerForGeneration.plusAssign_operation(var_arrayControllerListForGeneration, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 174)) ;
  GALGAS_actionMap var_actionMap ;
  {
  routine_buildActionMap (inObject.mAttribute_mActionDeclarationList, var_actionMap, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 176)) ;
  }
  cEnumerator_actionMap enumerator_7531 (var_actionMap, kEnumeration_up) ;
  while (enumerator_7531.hasCurrentObject ()) {
    ioArgument_ioGeneration.mAttribute_mActionListForGeneration.addAssign_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 179)), enumerator_7531.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("preferences.galgas", 178)) ;
    enumerator_7531.gotoNextObject () ;
  }
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration ;
  GALGAS_decoratedOutletMap var_outletMap ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList ;
  {
  routine_analyzeOutlets (GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 184)), constinArgument_inSemanticContext, inObject.mAttribute_mOutletDeclarationList, constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap, var_actionMap, ioArgument_ioGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_actionBindingListForGeneration, var_outletMap, var_tableViewBindingGenerationList, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 183)) ;
  }
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mSimpleStoredPropertyListForGeneration = var_simpleStoredPropertyListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mTransientDefinitionListForGeneration = var_transientDefinitionListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mRegularBindingsGenerationList = var_regularBindingsGenerationList ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mActionBindingListForGeneration = var_actionBindingListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mMultipleBindingGenerationList = var_multipleBindingGenerationList ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mOutletMap = var_outletMap ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mMainXibDescriptorList = inObject.mAttribute_mMainXibDescriptorList ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mExternSwiftFunctionList = constinArgument_inExternSwiftFunctionList ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mStoredArrayPropertyListForGeneration = var_storedArrayPropertyListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mArrayControllerForGeneration = var_arrayControllerListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mTableViewBindingGenerationList = var_tableViewBindingGenerationList ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (void) :
mAttribute_mSimpleStoredPropertyListForGeneration (),
mAttribute_mTransientDefinitionListForGeneration (),
mAttribute_mRegularBindingsGenerationList (),
mAttribute_mMultipleBindingGenerationList (),
mAttribute_mActionBindingListForGeneration (),
mAttribute_mOutletMap (),
mAttribute_mMainXibDescriptorList (),
mAttribute_mExternSwiftFunctionList (),
mAttribute_mStoredArrayPropertyListForGeneration (),
mAttribute_mArrayControllerForGeneration (),
mAttribute_mTableViewBindingGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration::~ GALGAS_preferencesForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (const GALGAS_simpleStoredPropertyListForGeneration & inOperand0,
                                                                  const GALGAS_transientDefinitionListForGeneration & inOperand1,
                                                                  const GALGAS_regularBindingsGenerationList & inOperand2,
                                                                  const GALGAS_multipleBindingGenerationList & inOperand3,
                                                                  const GALGAS_actionBindingListForGeneration & inOperand4,
                                                                  const GALGAS_decoratedOutletMap & inOperand5,
                                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                                  const GALGAS_externSwiftFunctionList & inOperand7,
                                                                  const GALGAS_storedArrayPropertyListForGeneration & inOperand8,
                                                                  const GALGAS_arrayControllerForGeneration & inOperand9,
                                                                  const GALGAS_tableViewBindingGenerationList & inOperand10) :
mAttribute_mSimpleStoredPropertyListForGeneration (inOperand0),
mAttribute_mTransientDefinitionListForGeneration (inOperand1),
mAttribute_mRegularBindingsGenerationList (inOperand2),
mAttribute_mMultipleBindingGenerationList (inOperand3),
mAttribute_mActionBindingListForGeneration (inOperand4),
mAttribute_mOutletMap (inOperand5),
mAttribute_mMainXibDescriptorList (inOperand6),
mAttribute_mExternSwiftFunctionList (inOperand7),
mAttribute_mStoredArrayPropertyListForGeneration (inOperand8),
mAttribute_mArrayControllerForGeneration (inOperand9),
mAttribute_mTableViewBindingGenerationList (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_preferencesForGeneration (GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                          GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                          GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                          GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                          GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                          GALGAS_storedArrayPropertyListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                          GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_new (const GALGAS_simpleStoredPropertyListForGeneration & inOperand0,
                                                                                  const GALGAS_transientDefinitionListForGeneration & inOperand1,
                                                                                  const GALGAS_regularBindingsGenerationList & inOperand2,
                                                                                  const GALGAS_multipleBindingGenerationList & inOperand3,
                                                                                  const GALGAS_actionBindingListForGeneration & inOperand4,
                                                                                  const GALGAS_decoratedOutletMap & inOperand5,
                                                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                                                  const GALGAS_externSwiftFunctionList & inOperand7,
                                                                                  const GALGAS_storedArrayPropertyListForGeneration & inOperand8,
                                                                                  const GALGAS_arrayControllerForGeneration & inOperand9,
                                                                                  const GALGAS_tableViewBindingGenerationList & inOperand10 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_preferencesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_preferencesForGeneration::objectCompare (const GALGAS_preferencesForGeneration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mAttribute_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientDefinitionListForGeneration.objectCompare (inOperand.mAttribute_mTransientDefinitionListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingsGenerationList.objectCompare (inOperand.mAttribute_mRegularBindingsGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMultipleBindingGenerationList.objectCompare (inOperand.mAttribute_mMultipleBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionBindingListForGeneration.objectCompare (inOperand.mAttribute_mActionBindingListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletMap.objectCompare (inOperand.mAttribute_mOutletMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainXibDescriptorList.objectCompare (inOperand.mAttribute_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternSwiftFunctionList.objectCompare (inOperand.mAttribute_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStoredArrayPropertyListForGeneration.objectCompare (inOperand.mAttribute_mStoredArrayPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableViewBindingGenerationList.objectCompare (inOperand.mAttribute_mTableViewBindingGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_preferencesForGeneration::isValid (void) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration.isValid () && mAttribute_mTransientDefinitionListForGeneration.isValid () && mAttribute_mRegularBindingsGenerationList.isValid () && mAttribute_mMultipleBindingGenerationList.isValid () && mAttribute_mActionBindingListForGeneration.isValid () && mAttribute_mOutletMap.isValid () && mAttribute_mMainXibDescriptorList.isValid () && mAttribute_mExternSwiftFunctionList.isValid () && mAttribute_mStoredArrayPropertyListForGeneration.isValid () && mAttribute_mArrayControllerForGeneration.isValid () && mAttribute_mTableViewBindingGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferencesForGeneration::drop (void) {
  mAttribute_mSimpleStoredPropertyListForGeneration.drop () ;
  mAttribute_mTransientDefinitionListForGeneration.drop () ;
  mAttribute_mRegularBindingsGenerationList.drop () ;
  mAttribute_mMultipleBindingGenerationList.drop () ;
  mAttribute_mActionBindingListForGeneration.drop () ;
  mAttribute_mOutletMap.drop () ;
  mAttribute_mMainXibDescriptorList.drop () ;
  mAttribute_mExternSwiftFunctionList.drop () ;
  mAttribute_mStoredArrayPropertyListForGeneration.drop () ;
  mAttribute_mArrayControllerForGeneration.drop () ;
  mAttribute_mTableViewBindingGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferencesForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @preferencesForGeneration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientDefinitionListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionBindingListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStoredArrayPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_preferencesForGeneration::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_preferencesForGeneration::getter_mTransientDefinitionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientDefinitionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingsGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList GALGAS_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMultipleBindingGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration GALGAS_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionBindingListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap GALGAS_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList GALGAS_preferencesForGeneration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainXibDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList GALGAS_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternSwiftFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration GALGAS_preferencesForGeneration::getter_mStoredArrayPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStoredArrayPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_preferencesForGeneration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList GALGAS_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableViewBindingGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @preferencesForGeneration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_preferencesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_preferencesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferencesForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  const GALGAS_preferencesForGeneration * p = (const GALGAS_preferencesForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_preferencesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@observablePropertyAST modelString'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelString (const GALGAS_observablePropertyAST & inObject,
                                           const GALGAS_string & constinArgument_inSelf,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_4999 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4999->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 123)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 123)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_5149 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5149->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_5149->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 125)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 125)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 125)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 125)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_5272 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_5272->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 127)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("observable-property.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 127)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_5362 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5362->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 129)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 129)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_5501 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5501->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_5501->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_5632 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5632->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_5632->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 133)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 133)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_5777 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5777->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 135)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 135)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 135)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_5937 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5937->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_5937->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_6080 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_6080->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6080->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_6293 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_6293->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6293->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_6293->mAssociatedValue2 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("self.signatureObserver ()") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("self.versionObserver ()") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("self.versionShouldChangeObserver ()") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Getter '@observablePropertyAST needs_unwSelf'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_needs_5F_unwSelf (const GALGAS_observablePropertyAST & inObject,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Getter '@observablePropertyAST isPropertyDefined'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isPropertyDefined (const GALGAS_observablePropertyAST & inObject,
                                               const GALGAS_semanticContext & constinArgument_inSemanticContext,
                                               const GALGAS_observablePropertyMap & constinArgument_inRootObservableProperties,
                                               const GALGAS_observablePropertyMap & constinArgument_inObservableProperties,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_7957 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7957->mAssociatedValue0 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 194)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_8113 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8113->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8113->mAssociatedValue1 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 196)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_8254 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_8254->mAssociatedValue0 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_relationshipName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 198)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_8369 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8369->mAssociatedValue0 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 200)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_8521 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8521->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8521->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 202)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_8677 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8677->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_8677->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 204)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_8822 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8822->mAssociatedValue0 ;
      result_outResult = constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 206)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_9004 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9004->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_9004->mAssociatedValue1 ;
      result_outResult = constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 208)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_9158 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9158->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9158->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_controllerName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 210)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_9359 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9359->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9359->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_9359->mAssociatedValue2 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_controllerName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 212)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category Getter '@observablePropertyAST location'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location extensionGetter_location (const GALGAS_observablePropertyAST & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_9818 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9818->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_9910 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_9910->mAssociatedValue1 ;
      result_outResult = extractedValue_optionName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_10008 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10008->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_10092 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10092->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_10188 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10188->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_10279 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10279->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_10364 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10364->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_10461 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10461->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_10553 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10553->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_10674 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_10674->mAssociatedValue2 ;
      result_outResult = extractedValue_secondaryPropertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_signatureProperty * extractPtr_10747 = (const cEnumAssociatedValues_observablePropertyAST_signatureProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_10747->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionProperty * extractPtr_10818 = (const cEnumAssociatedValues_observablePropertyAST_versionProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_10818->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * extractPtr_10901 = (const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_10901->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@observablePropertyAST analyzeObservableProperty'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeObservableProperty (const GALGAS_observablePropertyAST inObject,
                                               const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                               const GALGAS_observablePropertyMap constinArgument_inObservablePropertyMap,
                                               GALGAS_typeKind & outArgument_outType,
                                               GALGAS_propertyKind & outArgument_outKind,
                                               GALGAS_propertyMultiplicity & outArgument_outMultiplicity,
                                               GALGAS_string & outArgument_outSwiftTypeStringForTransientFunctionArgument,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outKind.drop () ; // Release 'out' argument
  outArgument_outMultiplicity.drop () ; // Release 'out' argument
  outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release 'out' argument
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 270)) ;
      outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 271)) ;
      outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 272)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 273)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 275)) ;
      outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 276)) ;
      outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 277)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 278)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 280)) ;
      outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 281)) ;
      outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 282)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 283)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_12477 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12477->mAssociatedValue0 ;
      GALGAS_string joker_12392_2 ; // Joker input parameter
      GALGAS_actionMap joker_12392_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_12392_2, joker_12392_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 285)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 292)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_13182 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13182->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_13182->mAssociatedValue1 ;
      GALGAS_string joker_12677_2 ; // Joker input parameter
      GALGAS_actionMap joker_12677_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_12677_2, joker_12677_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 294)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 301)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a property cannot accept any option")  COMMA_SOURCE_FILE ("observable-property.galgas", 302)) ;
      }else if (kBoolFalse == test_1) {
        outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 304)) ;
        outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 305)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 307)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("empty"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 309)) ;
          }else if (kBoolFalse == test_4) {
            GALGAS_location location_5 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_5, GALGAS_string ("uknown option (accepted : 'count', 'empty')")  COMMA_SOURCE_FILE ("observable-property.galgas", 311)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 314)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_14765 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_14765->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14765->mAssociatedValue1 ;
      GALGAS_typeKind var_relationshipType ;
      GALGAS_string joker_13421_2 ; // Joker input parameter
      GALGAS_actionMap joker_13421_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_relationshipName, var_relationshipType, outArgument_outKind, outArgument_outMultiplicity, joker_13421_2, joker_13421_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 316)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 323)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (extractedValue_relationshipName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 324)) ;
      }
      switch (var_relationshipType.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          GALGAS_location location_8 (extractedValue_relationshipName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 328)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          GALGAS_location location_9 (extractedValue_relationshipName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_9, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 330)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          GALGAS_location location_10 (extractedValue_relationshipName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 332)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          GALGAS_location location_11 (extractedValue_relationshipName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_11, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 334)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
          GALGAS_location location_12 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_12, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 336)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_14624 = (const cEnumAssociatedValues_typeKind_entityType *) (var_relationshipType.unsafePointer ()) ;
          const GALGAS_string extractedValue_entityName = extractPtr_14624->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_entityObservablePropertyMap ;
          constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (extractedValue_entityName.getter_nowhere (SOURCE_FILE ("observable-property.galgas", 339)), var_entityObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 338)) ;
          GALGAS_string joker_14483_2 ; // Joker input parameter
          GALGAS_actionMap joker_14483_1 ; // Joker input parameter
          var_entityObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_14483_2, joker_14483_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 342)) ;
          const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 349)))).boolEnum () ;
          if (kBoolTrue == test_13) {
            GALGAS_location location_14 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_14, GALGAS_string ("the observed property cannot be a collection")  COMMA_SOURCE_FILE ("observable-property.galgas", 350)) ;
          }
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_relationshipType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 353)).add_operation (GALGAS_string (" /* _"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 353)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 354)).add_operation (GALGAS_string (" */]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 354)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_15169 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_15169->mAssociatedValue0 ;
      GALGAS_string joker_14931_2 ; // Joker input parameter
      GALGAS_actionMap joker_14931_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_14931_2, joker_14931_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 356)) ;
      const enumGalgasBool test_15 = outArgument_outMultiplicity.getter_isCollection (SOURCE_FILE ("observable-property.galgas", 363)).boolEnum () ;
      if (kBoolTrue == test_15) {
        outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 364)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 364)) ;
      }else if (kBoolFalse == test_15) {
        outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 366)) ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_15833 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_15833->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_15833->mAssociatedValue1 ;
      GALGAS_string joker_15365_2 ; // Joker input parameter
      GALGAS_actionMap joker_15365_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_15365_2, joker_15365_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 369)) ;
      const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 376)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_location location_17 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_17, GALGAS_string ("a property cannot accept any option")  COMMA_SOURCE_FILE ("observable-property.galgas", 377)) ;
      }else if (kBoolFalse == test_16) {
        const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 378)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 379)) ;
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 380)) ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_19) {
            outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 382)) ;
          }else if (kBoolFalse == test_19) {
            GALGAS_location location_20 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_20, GALGAS_string ("uknown option (accepted : 'count', 'empty')")  COMMA_SOURCE_FILE ("observable-property.galgas", 384)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 387)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_17398 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_17398->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_17398->mAssociatedValue1 ;
      GALGAS_typeKind var_propertyType ;
      GALGAS_string joker_16061_2 ; // Joker input parameter
      GALGAS_actionMap joker_16061_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, var_propertyType, outArgument_outKind, outArgument_outMultiplicity, joker_16061_2, joker_16061_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 389)) ;
      const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 396)))).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_location location_22 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_22, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 397)) ;
      }
      switch (var_propertyType.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          GALGAS_location location_23 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_23, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 401)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          GALGAS_location location_24 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_24, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 403)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          GALGAS_location location_25 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_25, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 405)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          GALGAS_location location_26 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_26, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 407)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
          GALGAS_location location_27 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_27, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 409)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_17254 = (const cEnumAssociatedValues_typeKind_entityType *) (var_propertyType.unsafePointer ()) ;
          const GALGAS_string extractedValue_entityName = extractPtr_17254->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_entityObservablePropertyMap ;
          constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (extractedValue_entityName.getter_nowhere (SOURCE_FILE ("observable-property.galgas", 412)), var_entityObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 411)) ;
          GALGAS_string joker_17106_2 ; // Joker input parameter
          GALGAS_actionMap joker_17106_1 ; // Joker input parameter
          var_entityObservablePropertyMap.method_searchKey (extractedValue_elementPropertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_17106_2, joker_17106_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 415)) ;
          const enumGalgasBool test_28 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 422)))).boolEnum () ;
          if (kBoolTrue == test_28) {
            GALGAS_location location_29 (extractedValue_elementPropertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_29, GALGAS_string ("the observed property cannot be a collection")  COMMA_SOURCE_FILE ("observable-property.galgas", 423)) ;
          }
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_propertyType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 426)).add_operation (GALGAS_string (" /* _"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 426)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 427)).add_operation (GALGAS_string (" */]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 427)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_17678 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_17678->mAssociatedValue0 ;
      GALGAS_string joker_17593_2 ; // Joker input parameter
      GALGAS_actionMap joker_17593_1 ; // Joker input parameter
      constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_17593_2, joker_17593_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 429)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 436)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_18378 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_18378->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_18378->mAssociatedValue1 ;
      GALGAS_string joker_17903_2 ; // Joker input parameter
      GALGAS_actionMap joker_17903_1 ; // Joker input parameter
      constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_17903_2, joker_17903_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 438)) ;
      const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 445)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        GALGAS_location location_31 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_31, GALGAS_string ("a single property cannot accept any option")  COMMA_SOURCE_FILE ("observable-property.galgas", 446)) ;
      }else if (kBoolFalse == test_30) {
        const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 447)))).boolEnum () ;
        if (kBoolTrue == test_32) {
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 448)) ;
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 449)) ;
          const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_33) {
            outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 451)) ;
          }else if (kBoolFalse == test_33) {
            GALGAS_location location_34 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_34, GALGAS_string ("uknown option (accepted : 'count', 'empty')")  COMMA_SOURCE_FILE ("observable-property.galgas", 453)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 456)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_20399 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_20399->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20399->mAssociatedValue1 ;
      GALGAS_typeKind var_type ;
      GALGAS_propertyKind var_propertyKind ;
      GALGAS_propertyMultiplicity joker_18587_3 ; // Joker input parameter
      GALGAS_string joker_18587_2 ; // Joker input parameter
      GALGAS_actionMap joker_18587_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_type, var_propertyKind, joker_18587_3, joker_18587_2, joker_18587_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 458)) ;
      switch (var_propertyKind.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          switch (var_type.enumValue ()) {
          case GALGAS_typeKind::kNotBuilt:
            break ;
          case GALGAS_typeKind::kEnum_stringType:
          case GALGAS_typeKind::kEnum_boolType:
          case GALGAS_typeKind::kEnum_dateType:
          case GALGAS_typeKind::kEnum_doubleType:
          case GALGAS_typeKind::kEnum_integerType:
          case GALGAS_typeKind::kEnum_fontType:
            {
              GALGAS_location location_35 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_35, GALGAS_string ("the bound model should be an entity")  COMMA_SOURCE_FILE ("observable-property.galgas", 468)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_classType:
            {
              GALGAS_location location_36 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_36, GALGAS_string ("the bound model should be an entity")  COMMA_SOURCE_FILE ("observable-property.galgas", 470)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_propertyClassType:
            {
              GALGAS_location location_37 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_37, GALGAS_string ("the bound model should be an entity")  COMMA_SOURCE_FILE ("observable-property.galgas", 472)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_transientPropertyClassType:
            {
              GALGAS_location location_38 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_38, GALGAS_string ("the bound model should be an entity")  COMMA_SOURCE_FILE ("observable-property.galgas", 474)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_enumType:
            {
              GALGAS_location location_39 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_39, GALGAS_string ("the bound model should be an entity")  COMMA_SOURCE_FILE ("observable-property.galgas", 476)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_entityType:
            {
              const cEnumAssociatedValues_typeKind_entityType * extractPtr_19789 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type.unsafePointer ()) ;
              const GALGAS_string extractedValue_entityName = extractPtr_19789->mAssociatedValue0 ;
              GALGAS_observablePropertyMap var_observablePropertyMap ;
              constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (GALGAS_lstring::constructor_new (extractedValue_entityName, extractedValue_controllerName.mAttribute_location  COMMA_SOURCE_FILE ("observable-property.galgas", 479)), var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 478)) ;
              GALGAS_string joker_19777_2 ; // Joker input parameter
              GALGAS_actionMap joker_19777_1 ; // Joker input parameter
              var_observablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_19777_2, joker_19777_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 482)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          GALGAS_bool test_40 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("sortedArray"))) ;
          if (kBoolTrue != test_40.boolEnum ()) {
            test_40 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("selectedArray"))) ;
          }
          const enumGalgasBool test_41 = test_40.boolEnum () ;
          if (kBoolTrue == test_41) {
            outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 492)) ;
            outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 493)) ;
            outArgument_outType = var_type ;
          }else if (kBoolFalse == test_41) {
            GALGAS_location location_42 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_42, GALGAS_string ("uknown option (accepted : 'sortedArray' or 'selectedArray')")  COMMA_SOURCE_FILE ("observable-property.galgas", 496)) ;
            outArgument_outMultiplicity.drop () ; // Release error dropped variable
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outType.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_stored:
      case GALGAS_propertyKind::kEnum_transient:
        {
          GALGAS_location location_43 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_43, GALGAS_string ("this property should be a controller")  COMMA_SOURCE_FILE ("observable-property.galgas", 501)) ;
          outArgument_outMultiplicity.drop () ; // Release error dropped variable
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 503)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_21154 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_21154->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_21154->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_21154->mAssociatedValue2 ;
      GALGAS_typeKind joker_20584_5 ; // Joker input parameter
      GALGAS_propertyKind joker_20584_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_20584_3 ; // Joker input parameter
      GALGAS_string joker_20584_2 ; // Joker input parameter
      GALGAS_actionMap joker_20584_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, joker_20584_5, joker_20584_4, joker_20584_3, joker_20584_2, joker_20584_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 505)) ;
      GALGAS_bool test_44 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("sortedArray"))) ;
      if (kBoolTrue == test_44.boolEnum ()) {
        test_44 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.mAttribute_string.objectCompare (GALGAS_string ("count"))) ;
      }
      const enumGalgasBool test_45 = test_44.boolEnum () ;
      if (kBoolTrue == test_45) {
        outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 510)) ;
        outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 511)) ;
        outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 512)) ;
      }else if (kBoolFalse == test_45) {
        GALGAS_bool test_46 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("selectedArray"))) ;
        if (kBoolTrue == test_46.boolEnum ()) {
          test_46 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.mAttribute_string.objectCompare (GALGAS_string ("count"))) ;
        }
        const enumGalgasBool test_47 = test_46.boolEnum () ;
        if (kBoolTrue == test_47) {
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 514)) ;
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 515)) ;
          outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 516)) ;
        }else if (kBoolFalse == test_47) {
          GALGAS_location location_48 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_48, GALGAS_string ("uknown option")  COMMA_SOURCE_FILE ("observable-property.galgas", 518)) ;
          outArgument_outMultiplicity.drop () ; // Release error dropped variable
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outType.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 522)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Getter '@observablePropertyAST generateAddObserverCall'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_generateAddObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_9561 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9561->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9561->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 246)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 246)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 246)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_9786 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9786->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9786->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_9786->mAssociatedValue2 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 248)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 248)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 248)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 248)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 248)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_9883 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_9883->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 250)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_9992 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_9992->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 252)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_10148 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_10148->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_10148->mAssociatedValue1 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 254)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 254)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_10279 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10279->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_10422 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10422->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_10528 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_10528->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_10683 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_10683->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_10683->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_10858 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_10858->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10858->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)).add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 243 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 245 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 247 >>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category Getter '@observablePropertyAST generateRemoveObserverCall'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_generateRemoveObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_11444 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_11444->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11444->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 279)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 279)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 279)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_11672 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_11672->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11672->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_11672->mAssociatedValue2 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_11772 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_11772->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_11884 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_11884->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 285)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_12043 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_12043->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_12043->mAssociatedValue1 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_12177 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12177->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 289)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 289)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 289)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 289)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_12323 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12323->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 291)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 291)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 291)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 291)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_12432 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_12432->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 293)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 293)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_12590 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_12590->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_12590->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_12768 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_12768->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12768->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)).add_operation (GALGAS_string (".removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 270 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 272 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 274 >>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST::GALGAS_columnBindingAST (void) :
mAttribute_mRunActionName (),
mAttribute_mEnabledBindingDescriptor (),
mAttribute_mHiddenBindingDescriptor (),
mAttribute_mRegularBindingList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST::~ GALGAS_columnBindingAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST::GALGAS_columnBindingAST (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_multipleBindingDescriptor & inOperand1,
                                                  const GALGAS_multipleBindingDescriptor & inOperand2,
                                                  const GALGAS_regularBindingList & inOperand3) :
mAttribute_mRunActionName (inOperand0),
mAttribute_mEnabledBindingDescriptor (inOperand1),
mAttribute_mHiddenBindingDescriptor (inOperand2),
mAttribute_mRegularBindingList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST GALGAS_columnBindingAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_multipleBindingDescriptor & inOperand1,
                                                                  const GALGAS_multipleBindingDescriptor & inOperand2,
                                                                  const GALGAS_regularBindingList & inOperand3 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_columnBindingAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_columnBindingAST (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_columnBindingAST::objectCompare (const GALGAS_columnBindingAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRunActionName.objectCompare (inOperand.mAttribute_mRunActionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnabledBindingDescriptor.objectCompare (inOperand.mAttribute_mEnabledBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHiddenBindingDescriptor.objectCompare (inOperand.mAttribute_mHiddenBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingList.objectCompare (inOperand.mAttribute_mRegularBindingList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_columnBindingAST::isValid (void) const {
  return mAttribute_mRunActionName.isValid () && mAttribute_mEnabledBindingDescriptor.isValid () && mAttribute_mHiddenBindingDescriptor.isValid () && mAttribute_mRegularBindingList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_columnBindingAST::drop (void) {
  mAttribute_mRunActionName.drop () ;
  mAttribute_mEnabledBindingDescriptor.drop () ;
  mAttribute_mHiddenBindingDescriptor.drop () ;
  mAttribute_mRegularBindingList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_columnBindingAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @columnBindingAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRunActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_columnBindingAST::getter_mRunActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRunActionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_columnBindingAST::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnabledBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_columnBindingAST::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHiddenBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList GALGAS_columnBindingAST::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @columnBindingAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_columnBindingAST ("columnBindingAST",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_columnBindingAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_columnBindingAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_columnBindingAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_columnBindingAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST GALGAS_columnBindingAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_columnBindingAST result ;
  const GALGAS_columnBindingAST * p = (const GALGAS_columnBindingAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_columnBindingAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("columnBindingAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Getter '@arrayControllerModel modelString'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelString (const GALGAS_arrayControllerModel & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerModel temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_20251 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_20251->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_storedPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 530)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_20368 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootRelationshipName = extractPtr_20368->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_rootRelationshipName.getter_string (SOURCE_FILE ("array-controller.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 532)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_20500 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_20500->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20500->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 534)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 534)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@arrayControllerModel modelTypeName'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelTypeName (const GALGAS_arrayControllerModel & inObject,
                                             const GALGAS_string & constinArgument_inRootEntityName,
                                             const GALGAS_observablePropertyMap & constinArgument_inObservablePropertyMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerModel temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_20928 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_20928->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("Ligne328_").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 547)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 547)).add_operation (extractedValue_storedPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 547)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_21078 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootRelationshipName = extractPtr_21078->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("ToManyRelationship_").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 549)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 549)).add_operation (extractedValue_rootRelationshipName.getter_string (SOURCE_FILE ("array-controller.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 549)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_21293 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_21293->mAssociatedValue0 ;
      GALGAS_typeKind var_modelType ;
      GALGAS_propertyKind joker_21221_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_21221_3 ; // Joker input parameter
      GALGAS_string joker_21221_2 ; // Joker input parameter
      GALGAS_actionMap joker_21221_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_modelType, joker_21221_4, joker_21221_3, joker_21221_2, joker_21221_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 551)) ;
      result_outResult = GALGAS_string ("TransientArrayOf_").add_operation (extensionGetter_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 556)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Getter '@arrayControllerModel modelTypeName2'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelTypeName_32_ (const GALGAS_arrayControllerModel & inObject,
                                                 const GALGAS_string & constinArgument_inRootEntityName,
                                                 const GALGAS_observablePropertyMap & constinArgument_inObservablePropertyMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerModel temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_22154 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedProprtyName = extractPtr_22154->mAssociatedValue0 ;
      GALGAS_typeKind var_modelType ;
      GALGAS_propertyKind var_kind ;
      GALGAS_propertyMultiplicity joker_21810_3 ; // Joker input parameter
      GALGAS_string joker_21810_2 ; // Joker input parameter
      GALGAS_actionMap joker_21810_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_storedProprtyName, var_modelType, var_kind, joker_21810_3, joker_21810_2, joker_21810_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 569)) ;
      switch (var_kind.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_stored:
        {
          result_outResult = GALGAS_string ("EBClassArray_").add_operation (extensionGetter_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 577)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_transient:
        {
          result_outResult = GALGAS_string ("ReadOnlyArrayOf_").add_operation (extensionGetter_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 579)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          result_outResult = GALGAS_string ("<< arrayController >>") ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          result_outResult = GALGAS_string ("<< selectionController >>") ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_22304 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootRelationshipName = extractPtr_22304->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("ToManyRelationship_").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 586)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 586)).add_operation (extractedValue_rootRelationshipName.getter_string (SOURCE_FILE ("array-controller.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 586)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_22518 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_22518->mAssociatedValue0 ;
      GALGAS_typeKind var_modelType ;
      GALGAS_propertyKind joker_22447_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_22447_3 ; // Joker input parameter
      GALGAS_string joker_22447_2 ; // Joker input parameter
      GALGAS_actionMap joker_22447_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_modelType, joker_22447_4, joker_22447_3, joker_22447_2, joker_22447_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 588)) ;
      result_outResult = GALGAS_string ("ReadOnlyArrayOf_").add_operation (extensionGetter_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 593)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category Getter '@typeKind isComparable'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isComparable (const GALGAS_typeKind & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_propertyClassType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyClassType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract category method '@astDeclaration typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_typeInventory> gCategoryMethodTable_astDeclaration_typeInventory ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_typeInventory (const int32_t inClassIndex,
                                        categoryMethodSignature_astDeclaration_typeInventory inMethod) {
  gCategoryMethodTable_astDeclaration_typeInventory.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_typeInventory (void) {
  gCategoryMethodTable_astDeclaration_typeInventory.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_typeInventory (NULL,
                                                         freeCategoryMethod_astDeclaration_typeInventory) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_typeInventory (const cPtr_astDeclaration * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_typeInventory f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_typeInventory.count ()) {
      f = gCategoryMethodTable_astDeclaration_typeInventory (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_typeInventory.count ()) {
           f = gCategoryMethodTable_astDeclaration_typeInventory (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_typeInventory.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category Getter '@typeKind swiftTypeName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_swiftTypeName (const GALGAS_typeKind & inObject,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_5322 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_entityName = extractPtr_5322->mAssociatedValue0 ;
      result_outResult = extractedValue_entityName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      const cEnumAssociatedValues_typeKind_enumType * extractPtr_5390 = (const cEnumAssociatedValues_typeKind_enumType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_enumTypeName = extractPtr_5390->mAssociatedValue0 ;
      result_outResult = extractedValue_enumTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKind_classType * extractPtr_5459 = (const cEnumAssociatedValues_typeKind_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_classTypeName = extractPtr_5459->mAssociatedValue0 ;
      result_outResult = extractedValue_classTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_propertyClassType:
    {
      const cEnumAssociatedValues_typeKind_propertyClassType * extractPtr_5538 = (const cEnumAssociatedValues_typeKind_propertyClassType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_classTypeName = extractPtr_5538->mAssociatedValue0 ;
      result_outResult = extractedValue_classTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyClassType:
    {
      const cEnumAssociatedValues_typeKind_transientPropertyClassType * extractPtr_5624 = (const cEnumAssociatedValues_typeKind_transientPropertyClassType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_classTypeName = extractPtr_5624->mAssociatedValue0 ;
      result_outResult = extractedValue_classTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("Int") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Abstract category method '@astDeclaration buildObservablePropertyMapsFromStoredProperties'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties> gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildObservablePropertyMapsFromStoredProperties (const int32_t inClassIndex,
                                                                          categoryMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties inMethod) {
  gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties (NULL,
                                                                                           freeCategoryMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                         const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                         GALGAS_semanticContext & io_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.count ()) {
      f = gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.count ()) {
           f = gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUnifiedTypeMap, io_ioSemanticContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@astDeclaration semanticAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_semanticAnalysis> gCategoryMethodTable_astDeclaration_semanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_astDeclaration_semanticAnalysis inMethod) {
  gCategoryMethodTable_astDeclaration_semanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_semanticAnalysis (void) {
  gCategoryMethodTable_astDeclaration_semanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_semanticAnalysis (NULL,
                                                            freeCategoryMethod_astDeclaration_semanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                          const GALGAS_semanticContext constin_inSemanticContext,
                                          GALGAS_structForGeneration & io_ioGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_semanticAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_semanticAnalysis.count ()) {
      f = gCategoryMethodTable_astDeclaration_semanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_semanticAnalysis.count ()) {
           f = gCategoryMethodTable_astDeclaration_semanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_semanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@astDeclaration buildInitialSecondaryPropertyListMap'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap> gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildInitialSecondaryPropertyListMap (const int32_t inClassIndex,
                                                               categoryMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap inMethod) {
  gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_buildInitialSecondaryPropertyListMap (void) {
  gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_buildInitialSecondaryPropertyListMap (NULL,
                                                                                freeCategoryMethod_astDeclaration_buildInitialSecondaryPropertyListMap) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
                                                              GALGAS_secondaryDeclarationListWorkingList & io_ioSecondaryDeclarationListWorkingList,
                                                              GALGAS_uint & io_ioSecondaryDeclarationCount,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.count ()) {
      f = gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.count ()) {
           f = gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSecondaryDeclarationListWorkingList, io_ioSecondaryDeclarationCount, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@astDeclaration solveSecondaryProperty'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_solveSecondaryProperty> gCategoryMethodTable_astDeclaration_solveSecondaryProperty ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_solveSecondaryProperty (const int32_t inClassIndex,
                                                 categoryMethodSignature_astDeclaration_solveSecondaryProperty inMethod) {
  gCategoryMethodTable_astDeclaration_solveSecondaryProperty.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_solveSecondaryProperty (void) {
  gCategoryMethodTable_astDeclaration_solveSecondaryProperty.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_solveSecondaryProperty (NULL,
                                                                  freeCategoryMethod_astDeclaration_solveSecondaryProperty) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                GALGAS_semanticContext & io_ioSemanticContext,
                                                const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                const GALGAS_secondaryPropertyList constin_inPropertiesToSolve,
                                                GALGAS_secondaryPropertyList & out_outUnsolvedProperties,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outUnsolvedProperties.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_solveSecondaryProperty f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_solveSecondaryProperty.count ()) {
      f = gCategoryMethodTable_astDeclaration_solveSecondaryProperty (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_solveSecondaryProperty.count ()) {
           f = gCategoryMethodTable_astDeclaration_solveSecondaryProperty (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_solveSecondaryProperty.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, constin_inUnifiedTypeMap, constin_inPropertiesToSolve, out_outUnsolvedProperties, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::GALGAS_structForGeneration (void) :
mAttribute_mTransientListForGeneration (),
mAttribute_mActionListForGeneration (),
mAttribute_mPreferencesForGeneration (),
mAttribute_mDocumentListForGeneration (),
mAttribute_mEntityListForGeneration (),
mAttribute_mClassListForGeneration (),
mAttribute_mEnumListForGeneration (),
mAttribute_mNeededOutletClasses (),
mAttribute_mAllArrayControllerForGeneration (),
mAttribute_mValidationStubRoutineListForGeneration (),
mAttribute_mSelectionControllerListForGeneration (),
mAttribute_mCustomObjectControllerListForGeneration (),
mAttribute_mPropertyClassList (),
mAttribute_mTransientPropertyClassList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::~ GALGAS_structForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::GALGAS_structForGeneration (const GALGAS_transientDefinitionListForGeneration & inOperand0,
                                                        const GALGAS_actionListForGeneration & inOperand1,
                                                        const GALGAS_preferencesForGeneration & inOperand2,
                                                        const GALGAS_documentListForGeneration & inOperand3,
                                                        const GALGAS_entityListForGeneration & inOperand4,
                                                        const GALGAS_classListForGeneration & inOperand5,
                                                        const GALGAS_enumListForGeneration & inOperand6,
                                                        const GALGAS_stringset & inOperand7,
                                                        const GALGAS_arrayControllerForGeneration & inOperand8,
                                                        const GALGAS_validationStubRoutineListForGeneration & inOperand9,
                                                        const GALGAS_selectionControllerForGeneration & inOperand10,
                                                        const GALGAS_customObjectControllerForGeneration & inOperand11,
                                                        const GALGAS_stringlist & inOperand12,
                                                        const GALGAS_stringlist & inOperand13) :
mAttribute_mTransientListForGeneration (inOperand0),
mAttribute_mActionListForGeneration (inOperand1),
mAttribute_mPreferencesForGeneration (inOperand2),
mAttribute_mDocumentListForGeneration (inOperand3),
mAttribute_mEntityListForGeneration (inOperand4),
mAttribute_mClassListForGeneration (inOperand5),
mAttribute_mEnumListForGeneration (inOperand6),
mAttribute_mNeededOutletClasses (inOperand7),
mAttribute_mAllArrayControllerForGeneration (inOperand8),
mAttribute_mValidationStubRoutineListForGeneration (inOperand9),
mAttribute_mSelectionControllerListForGeneration (inOperand10),
mAttribute_mCustomObjectControllerListForGeneration (inOperand11),
mAttribute_mPropertyClassList (inOperand12),
mAttribute_mTransientPropertyClassList (inOperand13) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_structForGeneration (GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_actionListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_preferencesForGeneration::constructor_default (HERE),
                                     GALGAS_documentListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_entityListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_classListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_enumListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_stringset::constructor_emptySet (HERE),
                                     GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                     GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE),
                                     GALGAS_customObjectControllerForGeneration::constructor_emptyList (HERE),
                                     GALGAS_stringlist::constructor_emptyList (HERE),
                                     GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::constructor_new (const GALGAS_transientDefinitionListForGeneration & inOperand0,
                                                                        const GALGAS_actionListForGeneration & inOperand1,
                                                                        const GALGAS_preferencesForGeneration & inOperand2,
                                                                        const GALGAS_documentListForGeneration & inOperand3,
                                                                        const GALGAS_entityListForGeneration & inOperand4,
                                                                        const GALGAS_classListForGeneration & inOperand5,
                                                                        const GALGAS_enumListForGeneration & inOperand6,
                                                                        const GALGAS_stringset & inOperand7,
                                                                        const GALGAS_arrayControllerForGeneration & inOperand8,
                                                                        const GALGAS_validationStubRoutineListForGeneration & inOperand9,
                                                                        const GALGAS_selectionControllerForGeneration & inOperand10,
                                                                        const GALGAS_customObjectControllerForGeneration & inOperand11,
                                                                        const GALGAS_stringlist & inOperand12,
                                                                        const GALGAS_stringlist & inOperand13 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_structForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structForGeneration::objectCompare (const GALGAS_structForGeneration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTransientListForGeneration.objectCompare (inOperand.mAttribute_mTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionListForGeneration.objectCompare (inOperand.mAttribute_mActionListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreferencesForGeneration.objectCompare (inOperand.mAttribute_mPreferencesForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentListForGeneration.objectCompare (inOperand.mAttribute_mDocumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEntityListForGeneration.objectCompare (inOperand.mAttribute_mEntityListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mClassListForGeneration.objectCompare (inOperand.mAttribute_mClassListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumListForGeneration.objectCompare (inOperand.mAttribute_mEnumListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeededOutletClasses.objectCompare (inOperand.mAttribute_mNeededOutletClasses) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mAllArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValidationStubRoutineListForGeneration.objectCompare (inOperand.mAttribute_mValidationStubRoutineListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionControllerListForGeneration.objectCompare (inOperand.mAttribute_mSelectionControllerListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCustomObjectControllerListForGeneration.objectCompare (inOperand.mAttribute_mCustomObjectControllerListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyClassList.objectCompare (inOperand.mAttribute_mPropertyClassList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientPropertyClassList.objectCompare (inOperand.mAttribute_mTransientPropertyClassList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structForGeneration::isValid (void) const {
  return mAttribute_mTransientListForGeneration.isValid () && mAttribute_mActionListForGeneration.isValid () && mAttribute_mPreferencesForGeneration.isValid () && mAttribute_mDocumentListForGeneration.isValid () && mAttribute_mEntityListForGeneration.isValid () && mAttribute_mClassListForGeneration.isValid () && mAttribute_mEnumListForGeneration.isValid () && mAttribute_mNeededOutletClasses.isValid () && mAttribute_mAllArrayControllerForGeneration.isValid () && mAttribute_mValidationStubRoutineListForGeneration.isValid () && mAttribute_mSelectionControllerListForGeneration.isValid () && mAttribute_mCustomObjectControllerListForGeneration.isValid () && mAttribute_mPropertyClassList.isValid () && mAttribute_mTransientPropertyClassList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structForGeneration::drop (void) {
  mAttribute_mTransientListForGeneration.drop () ;
  mAttribute_mActionListForGeneration.drop () ;
  mAttribute_mPreferencesForGeneration.drop () ;
  mAttribute_mDocumentListForGeneration.drop () ;
  mAttribute_mEntityListForGeneration.drop () ;
  mAttribute_mClassListForGeneration.drop () ;
  mAttribute_mEnumListForGeneration.drop () ;
  mAttribute_mNeededOutletClasses.drop () ;
  mAttribute_mAllArrayControllerForGeneration.drop () ;
  mAttribute_mValidationStubRoutineListForGeneration.drop () ;
  mAttribute_mSelectionControllerListForGeneration.drop () ;
  mAttribute_mCustomObjectControllerListForGeneration.drop () ;
  mAttribute_mPropertyClassList.drop () ;
  mAttribute_mTransientPropertyClassList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @structForGeneration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreferencesForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDocumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mClassListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValidationStubRoutineListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCustomObjectControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyClassList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientPropertyClassList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_structForGeneration::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration GALGAS_structForGeneration::getter_mActionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration GALGAS_structForGeneration::getter_mPreferencesForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreferencesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration GALGAS_structForGeneration::getter_mDocumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration GALGAS_structForGeneration::getter_mEntityListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classListForGeneration GALGAS_structForGeneration::getter_mClassListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mClassListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration GALGAS_structForGeneration::getter_mEnumListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_structForGeneration::getter_mNeededOutletClasses (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeededOutletClasses ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_structForGeneration::getter_mAllArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration GALGAS_structForGeneration::getter_mValidationStubRoutineListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValidationStubRoutineListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration GALGAS_structForGeneration::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionControllerListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration GALGAS_structForGeneration::getter_mCustomObjectControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCustomObjectControllerListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_structForGeneration::getter_mPropertyClassList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyClassList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_structForGeneration::getter_mTransientPropertyClassList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientPropertyClassList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @structForGeneration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structForGeneration ("structForGeneration",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_structForGeneration result ;
  const GALGAS_structForGeneration * p = (const GALGAS_structForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (void) :
mAttribute_mSequenceNumber (),
mAttribute_mMainGroupReference (),
mAttribute_mMainGroupChildrenRefs (),
mAttribute_mProjectObjectReference (),
mAttribute_mGroupList (),
mAttribute_mToolTargetList (),
mAttribute_mAppTargetList (),
mAttribute_mCppFileList (),
mAttribute_m_5F_M_5F_FileList (),
mAttribute_m_5F_MM_5F_FileList (),
mAttribute_m_5F_SwiftFileList (),
mAttribute_mFrameworkFileList (),
mAttribute_mHeaderFileList (),
mAttribute_mBuildFileList (),
mAttribute_mDefaultConfigurationRef (),
mAttribute_mDefaultConfigurationSettingList (),
mAttribute_mProjectBuildConfigurationRef (),
mAttribute_mInfoPlistFileList (),
mAttribute_mXIB_5F_fileList (),
mAttribute_mTIFF_5F_fileList (),
mAttribute_mICNS_5F_fileList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor::~ GALGAS_XcodeProjectDescriptor (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (const GALGAS_uint & inOperand0,
                                                              const GALGAS_string & inOperand1,
                                                              const GALGAS_stringlist & inOperand2,
                                                              const GALGAS_string & inOperand3,
                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                              const GALGAS__32_stringlist & inOperand7,
                                                              const GALGAS__32_stringlist & inOperand8,
                                                              const GALGAS__32_stringlist & inOperand9,
                                                              const GALGAS__32_stringlist & inOperand10,
                                                              const GALGAS__32_stringlist & inOperand11,
                                                              const GALGAS__32_stringlist & inOperand12,
                                                              const GALGAS_BuildFileList & inOperand13,
                                                              const GALGAS_string & inOperand14,
                                                              const GALGAS_stringlist & inOperand15,
                                                              const GALGAS_string & inOperand16,
                                                              const GALGAS__32_stringlist & inOperand17,
                                                              const GALGAS__32_stringlist & inOperand18,
                                                              const GALGAS__32_stringlist & inOperand19,
                                                              const GALGAS__32_stringlist & inOperand20) :
mAttribute_mSequenceNumber (inOperand0),
mAttribute_mMainGroupReference (inOperand1),
mAttribute_mMainGroupChildrenRefs (inOperand2),
mAttribute_mProjectObjectReference (inOperand3),
mAttribute_mGroupList (inOperand4),
mAttribute_mToolTargetList (inOperand5),
mAttribute_mAppTargetList (inOperand6),
mAttribute_mCppFileList (inOperand7),
mAttribute_m_5F_M_5F_FileList (inOperand8),
mAttribute_m_5F_MM_5F_FileList (inOperand9),
mAttribute_m_5F_SwiftFileList (inOperand10),
mAttribute_mFrameworkFileList (inOperand11),
mAttribute_mHeaderFileList (inOperand12),
mAttribute_mBuildFileList (inOperand13),
mAttribute_mDefaultConfigurationRef (inOperand14),
mAttribute_mDefaultConfigurationSettingList (inOperand15),
mAttribute_mProjectBuildConfigurationRef (inOperand16),
mAttribute_mInfoPlistFileList (inOperand17),
mAttribute_mXIB_5F_fileList (inOperand18),
mAttribute_mTIFF_5F_fileList (inOperand19),
mAttribute_mICNS_5F_fileList (inOperand20) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XcodeProjectDescriptor (GALGAS_uint::constructor_default (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_XCodeGroupList::constructor_emptyList (HERE),
                                        GALGAS_XCodeToolTargetList::constructor_emptyList (HERE),
                                        GALGAS_XCodeAppTargetList::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS_BuildFileList::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_new (const GALGAS_uint & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_stringlist & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                                              const GALGAS__32_stringlist & inOperand7,
                                                                              const GALGAS__32_stringlist & inOperand8,
                                                                              const GALGAS__32_stringlist & inOperand9,
                                                                              const GALGAS__32_stringlist & inOperand10,
                                                                              const GALGAS__32_stringlist & inOperand11,
                                                                              const GALGAS__32_stringlist & inOperand12,
                                                                              const GALGAS_BuildFileList & inOperand13,
                                                                              const GALGAS_string & inOperand14,
                                                                              const GALGAS_stringlist & inOperand15,
                                                                              const GALGAS_string & inOperand16,
                                                                              const GALGAS__32_stringlist & inOperand17,
                                                                              const GALGAS__32_stringlist & inOperand18,
                                                                              const GALGAS__32_stringlist & inOperand19,
                                                                              const GALGAS__32_stringlist & inOperand20 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid ()) {
    result = GALGAS_XcodeProjectDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XcodeProjectDescriptor::objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSequenceNumber.objectCompare (inOperand.mAttribute_mSequenceNumber) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainGroupReference.objectCompare (inOperand.mAttribute_mMainGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainGroupChildrenRefs.objectCompare (inOperand.mAttribute_mMainGroupChildrenRefs) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProjectObjectReference.objectCompare (inOperand.mAttribute_mProjectObjectReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGroupList.objectCompare (inOperand.mAttribute_mGroupList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToolTargetList.objectCompare (inOperand.mAttribute_mToolTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAppTargetList.objectCompare (inOperand.mAttribute_mAppTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppFileList.objectCompare (inOperand.mAttribute_mCppFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_m_5F_M_5F_FileList.objectCompare (inOperand.mAttribute_m_5F_M_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_m_5F_MM_5F_FileList.objectCompare (inOperand.mAttribute_m_5F_MM_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_m_5F_SwiftFileList.objectCompare (inOperand.mAttribute_m_5F_SwiftFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworkFileList.objectCompare (inOperand.mAttribute_mFrameworkFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHeaderFileList.objectCompare (inOperand.mAttribute_mHeaderFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildFileList.objectCompare (inOperand.mAttribute_mBuildFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultConfigurationRef.objectCompare (inOperand.mAttribute_mDefaultConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultConfigurationSettingList.objectCompare (inOperand.mAttribute_mDefaultConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProjectBuildConfigurationRef.objectCompare (inOperand.mAttribute_mProjectBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInfoPlistFileList.objectCompare (inOperand.mAttribute_mInfoPlistFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mXIB_5F_fileList.objectCompare (inOperand.mAttribute_mXIB_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTIFF_5F_fileList.objectCompare (inOperand.mAttribute_mTIFF_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mICNS_5F_fileList.objectCompare (inOperand.mAttribute_mICNS_5F_fileList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XcodeProjectDescriptor::isValid (void) const {
  return mAttribute_mSequenceNumber.isValid () && mAttribute_mMainGroupReference.isValid () && mAttribute_mMainGroupChildrenRefs.isValid () && mAttribute_mProjectObjectReference.isValid () && mAttribute_mGroupList.isValid () && mAttribute_mToolTargetList.isValid () && mAttribute_mAppTargetList.isValid () && mAttribute_mCppFileList.isValid () && mAttribute_m_5F_M_5F_FileList.isValid () && mAttribute_m_5F_MM_5F_FileList.isValid () && mAttribute_m_5F_SwiftFileList.isValid () && mAttribute_mFrameworkFileList.isValid () && mAttribute_mHeaderFileList.isValid () && mAttribute_mBuildFileList.isValid () && mAttribute_mDefaultConfigurationRef.isValid () && mAttribute_mDefaultConfigurationSettingList.isValid () && mAttribute_mProjectBuildConfigurationRef.isValid () && mAttribute_mInfoPlistFileList.isValid () && mAttribute_mXIB_5F_fileList.isValid () && mAttribute_mTIFF_5F_fileList.isValid () && mAttribute_mICNS_5F_fileList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XcodeProjectDescriptor::drop (void) {
  mAttribute_mSequenceNumber.drop () ;
  mAttribute_mMainGroupReference.drop () ;
  mAttribute_mMainGroupChildrenRefs.drop () ;
  mAttribute_mProjectObjectReference.drop () ;
  mAttribute_mGroupList.drop () ;
  mAttribute_mToolTargetList.drop () ;
  mAttribute_mAppTargetList.drop () ;
  mAttribute_mCppFileList.drop () ;
  mAttribute_m_5F_M_5F_FileList.drop () ;
  mAttribute_m_5F_MM_5F_FileList.drop () ;
  mAttribute_m_5F_SwiftFileList.drop () ;
  mAttribute_mFrameworkFileList.drop () ;
  mAttribute_mHeaderFileList.drop () ;
  mAttribute_mBuildFileList.drop () ;
  mAttribute_mDefaultConfigurationRef.drop () ;
  mAttribute_mDefaultConfigurationSettingList.drop () ;
  mAttribute_mProjectBuildConfigurationRef.drop () ;
  mAttribute_mInfoPlistFileList.drop () ;
  mAttribute_mXIB_5F_fileList.drop () ;
  mAttribute_mTIFF_5F_fileList.drop () ;
  mAttribute_mICNS_5F_fileList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XcodeProjectDescriptor::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @XcodeProjectDescriptor:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGroupList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_m_5F_SwiftFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_XcodeProjectDescriptor::getter_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mMainGroupReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mMainGroupChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainGroupChildrenRefs ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectObjectReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectObjectReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XcodeProjectDescriptor::getter_mGroupList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XcodeProjectDescriptor::getter_mToolTargetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToolTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XcodeProjectDescriptor::getter_mAppTargetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAppTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mCppFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_M_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_M_5F_FileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_MM_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_MM_5F_FileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_SwiftFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_SwiftFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mFrameworkFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworkFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mHeaderFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHeaderFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_XcodeProjectDescriptor::getter_mBuildFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mInfoPlistFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfoPlistFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mXIB_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXIB_5F_fileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mTIFF_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTIFF_5F_fileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mICNS_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mICNS_5F_fileList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @XcodeProjectDescriptor type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  const GALGAS_XcodeProjectDescriptor * p = (const GALGAS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addTIFF_file'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addTIFF_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 22)) ;
  }
  ioObject.mAttribute_mTIFF_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 23)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@XcodeProjectDescriptor addInfoPlistFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addInfoPlistFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                        const GALGAS_string constinArgument_inFileName,
                                        GALGAS_string & outArgument_outFileRef,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 31)) ;
  }
  ioObject.mAttribute_mInfoPlistFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 32)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@XcodeProjectDescriptor addXIBFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addXIBFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                  const GALGAS_string constinArgument_inFileName,
                                  GALGAS_string & outArgument_outFileRef,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 40)) ;
  }
  ioObject.mAttribute_mXIB_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 41)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@XcodeProjectDescriptor addFrameworkFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addFrameworkFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                        const GALGAS_string constinArgument_inFileName,
                                        GALGAS_string & outArgument_outFileRef,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 49)) ;
  }
  ioObject.mAttribute_mFrameworkFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 50)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@XcodeProjectDescriptor addMFile'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                const GALGAS_string constinArgument_inFileName,
                                GALGAS_string & outArgument_outFileRef,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 58)) ;
  }
  ioObject.mAttribute_m_5F_M_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 59)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addSwiftFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addSwiftFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inFileName,
                                    GALGAS_string & outArgument_outFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 67)) ;
  }
  ioObject.mAttribute_m_5F_SwiftFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 68)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@XcodeProjectDescriptor addMMFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addMMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 76)) ;
  }
  ioObject.mAttribute_m_5F_MM_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 77)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@XcodeProjectDescriptor addCppFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addCppFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                  const GALGAS_string constinArgument_inFileName,
                                  GALGAS_string & outArgument_outFileRef,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 85)) ;
  }
  ioObject.mAttribute_mCppFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 86)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addHeaderFile'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addHeaderFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                     const GALGAS_string constinArgument_inFileName,
                                     GALGAS_string & outArgument_outFileRef,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 94)) ;
  }
  ioObject.mAttribute_mHeaderFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 95)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addBuildFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addBuildFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inFileReference,
                                    const GALGAS_string constinArgument_inFileName,
                                    GALGAS_string & outArgument_outBuildRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 104)) ;
  }
  ioObject.mAttribute_mBuildFileList.addAssign_operation (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 105)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addToolTarget'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addToolTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                     const GALGAS_string constinArgument_inTargetName,
                                     const GALGAS_string constinArgument_inProductFileName,
                                     const GALGAS_stringlist constinArgument_inSourceList,
                                     const GALGAS_stringlist constinArgument_inToolFrameworksFileRefList,
                                     const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                     GALGAS_string & outArgument_outTargetRef,
                                     GALGAS_string & outArgument_outProductFileRef,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 118)) ;
  }
  GALGAS_string var_buildPhaseRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildPhaseRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 119)) ;
  }
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 120)) ;
  }
  GALGAS_string var_buildConfigurationListRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildConfigurationListRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 121)) ;
  }
  GALGAS_string var_buildConfigurationRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 122)) ;
  }
  GALGAS_string var_frameworkBuildRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_frameworkBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 123)) ;
  }
  ioObject.mAttribute_mToolTargetList.addAssign_operation (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef, var_buildConfigurationListRef, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 124)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addAppTarget'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addAppTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inTargetName,
                                    const GALGAS_string constinArgument_inProductFileName,
                                    const GALGAS_stringlist constinArgument_inSourceList,
                                    const GALGAS_stringlist constinArgument_inFrameworksFileRefList,
                                    const GALGAS_stringlist constinArgument_inResourceFileBuildRefs,
                                    const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    const GALGAS_stringlist constinArgument_inDependentTargetRefList,
                                    const GALGAS__32_stringlist constinArgument_inProductCopyList,
                                    const GALGAS_string constinArgument_inInfoPList,
                                    GALGAS_string & outArgument_outProductFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 152)) ;
  }
  GALGAS_string var_buildPhaseRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildPhaseRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 153)) ;
  }
  GALGAS_string var_targetRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_targetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 154)) ;
  }
  GALGAS_string var_buildConfigurationListRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildConfigurationListRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 155)) ;
  }
  GALGAS_string var_buildConfigurationRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 156)) ;
  }
  GALGAS_string var_frameworkBuildRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_frameworkBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 157)) ;
  }
  GALGAS_string var_resourceBuildRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_resourceBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 158)) ;
  }
  GALGAS__32_stringlist var_dependentTargets = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 159)) ;
  cEnumerator_stringlist enumerator_6737 (constinArgument_inDependentTargetRefList, kEnumeration_up) ;
  while (enumerator_6737.hasCurrentObject ()) {
    GALGAS_string var_dependencyBuildRef ;
    {
    categoryModifier_getReferenceKey (ioObject, var_dependencyBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 161)) ;
    }
    var_dependentTargets.addAssign_operation (var_dependencyBuildRef, enumerator_6737.current_mValue (HERE)  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 162)) ;
    enumerator_6737.gotoNextObject () ;
  }
  GALGAS_stringlist var_resourceFileBuildRefs = constinArgument_inResourceFileBuildRefs ;
  cEnumerator__32_stringlist enumerator_6952 (constinArgument_inProductCopyList, kEnumeration_up) ;
  while (enumerator_6952.hasCurrentObject ()) {
    GALGAS_string var_buildRef ;
    {
    categoryModifier_addBuildFile (ioObject, enumerator_6952.current_mValue_30_ (HERE), enumerator_6952.current_mValue_31_ (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 166)) ;
    }
    var_resourceFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 167)) ;
    enumerator_6952.gotoNextObject () ;
  }
  ioObject.mAttribute_mAppTargetList.addAssign_operation (var_targetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef, var_buildConfigurationListRef, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef, var_dependentTargets, var_resourceBuildRef, var_resourceFileBuildRefs, constinArgument_inInfoPList  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 169)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@XcodeProjectDescriptor addGroup'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                                const GALGAS_string constinArgument_inGroupName,
                                const GALGAS_string constinArgument_inGroupPath,
                                const GALGAS_stringlist constinArgument_inChildrenRefs,
                                GALGAS_string & outArgument_outGroupRef,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mDefaultConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 195)) ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mProjectBuildConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 198)) ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mMainGroupReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 201)) ;
    }
  }
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 203)) ;
  }
  ioObject.mAttribute_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 204)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@XcodeProjectDescriptor addGroupWithFiles'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addGroupWithFiles (GALGAS_XcodeProjectDescriptor & ioObject,
                                         const GALGAS_string constinArgument_inGroupName,
                                         const GALGAS_string constinArgument_inGroupPath,
                                         const GALGAS_stringset constinArgument_inFileNames,
                                         GALGAS_stringlist & ioArgument_ioCppFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioMFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioMMFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioSwiftFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioResourceFileBuildRefs,
                                         GALGAS_string & outArgument_outGroupRef,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mDefaultConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 221)) ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mProjectBuildConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 224)) ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mMainGroupReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 227)) ;
    }
  }
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 229)) ;
  }
  GALGAS_stringlist var_childrenRefs = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 231)) ;
  cEnumerator_stringset enumerator_9257 (constinArgument_inFileNames, kEnumeration_up) ;
  while (enumerator_9257.hasCurrentObject ()) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 233)).objectCompare (GALGAS_string ("cpp"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_cppFileRef ;
      {
      categoryModifier_addCppFile (ioObject, enumerator_9257.current_key (HERE), var_cppFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 234)) ;
      }
      var_childrenRefs.addAssign_operation (var_cppFileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 235)) ;
      GALGAS_string var_buildRef ;
      {
      categoryModifier_addBuildFile (ioObject, var_cppFileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 236)) ;
      }
      ioArgument_ioCppFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 237)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 238)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_headerFileRef ;
        {
        categoryModifier_addHeaderFile (ioObject, enumerator_9257.current_key (HERE), var_headerFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 239)) ;
        }
        var_childrenRefs.addAssign_operation (var_headerFileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 240)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 241)).objectCompare (GALGAS_string ("m"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string var_m_5F_FileRef ;
          {
          categoryModifier_addMFile (ioObject, enumerator_9257.current_key (HERE), var_m_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 242)) ;
          }
          GALGAS_string var_buildRef ;
          {
          categoryModifier_addBuildFile (ioObject, var_m_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 243)) ;
          }
          var_childrenRefs.addAssign_operation (var_m_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 244)) ;
          ioArgument_ioMFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 245)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 246)).objectCompare (GALGAS_string ("swift"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_swift_5F_FileRef ;
            {
            categoryModifier_addSwiftFile (ioObject, enumerator_9257.current_key (HERE), var_swift_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 247)) ;
            }
            GALGAS_string var_buildRef ;
            {
            categoryModifier_addBuildFile (ioObject, var_swift_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 248)) ;
            }
            var_childrenRefs.addAssign_operation (var_swift_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 249)) ;
            ioArgument_ioSwiftFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 250)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 251)).objectCompare (GALGAS_string ("mm"))).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_string var_m_5F_FileRef ;
              {
              categoryModifier_addMMFile (ioObject, enumerator_9257.current_key (HERE), var_m_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 252)) ;
              }
              GALGAS_string var_buildRef ;
              {
              categoryModifier_addBuildFile (ioObject, var_m_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 253)) ;
              }
              var_childrenRefs.addAssign_operation (var_m_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 254)) ;
              ioArgument_ioMMFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 255)) ;
            }else if (kBoolFalse == test_7) {
              const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 256)).objectCompare (GALGAS_string ("framework"))).boolEnum () ;
              if (kBoolTrue == test_8) {
                GALGAS_string var_framework_5F_FileRef ;
                {
                categoryModifier_addFrameworkFile (ioObject, enumerator_9257.current_key (HERE), var_framework_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 257)) ;
                }
                GALGAS_string var_buildRef ;
                {
                categoryModifier_addBuildFile (ioObject, var_framework_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 258)) ;
                }
                var_childrenRefs.addAssign_operation (var_framework_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 259)) ;
                ioArgument_ioFrameWorkFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 260)) ;
              }else if (kBoolFalse == test_8) {
                const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 261)).objectCompare (GALGAS_string ("plist"))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_string var_resource_5F_FileRef ;
                  {
                  categoryModifier_addInfoPlistFile (ioObject, enumerator_9257.current_key (HERE), var_resource_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 262)) ;
                  }
                  var_childrenRefs.addAssign_operation (var_resource_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 263)) ;
                }else if (kBoolFalse == test_9) {
                  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 264)).objectCompare (GALGAS_string ("xib"))).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    GALGAS_string var_resource_5F_FileRef ;
                    {
                    categoryModifier_addXIBFile (ioObject, enumerator_9257.current_key (HERE), var_resource_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 265)) ;
                    }
                    var_childrenRefs.addAssign_operation (var_resource_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 266)) ;
                    GALGAS_string var_buildRef ;
                    {
                    categoryModifier_addBuildFile (ioObject, var_resource_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 267)) ;
                    }
                    ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 268)) ;
                  }else if (kBoolFalse == test_10) {
                    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 269)).objectCompare (GALGAS_string ("tiff"))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      GALGAS_string var_resource_5F_FileRef ;
                      {
                      categoryModifier_addTIFF_5F_file (ioObject, enumerator_9257.current_key (HERE), var_resource_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 270)) ;
                      }
                      var_childrenRefs.addAssign_operation (var_resource_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 271)) ;
                      GALGAS_string var_buildRef ;
                      {
                      categoryModifier_addBuildFile (ioObject, var_resource_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 272)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 273)) ;
                    }else if (kBoolFalse == test_11) {
                      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 274)).objectCompare (GALGAS_string ("icns"))).boolEnum () ;
                      if (kBoolTrue == test_12) {
                        GALGAS_string var_resource_5F_FileRef ;
                        {
                        categoryModifier_addICNS_5F_file (ioObject, enumerator_9257.current_key (HERE), var_resource_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 275)) ;
                        }
                        var_childrenRefs.addAssign_operation (var_resource_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 276)) ;
                        GALGAS_string var_buildRef ;
                        {
                        categoryModifier_addBuildFile (ioObject, var_resource_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 277)) ;
                        }
                        ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 278)) ;
                      }else if (kBoolFalse == test_12) {
                        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280)), GALGAS_string ("unhandled extension for file '").add_operation (enumerator_9257.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280))  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_9257.gotoNextObject () ;
  }
  ioObject.mAttribute_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 283)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@XcodeProjectDescriptor placeGroupAsMainGroup'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_placeGroupAsMainGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                                             const GALGAS_string constinArgument_inGroupRef,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mAttribute_mMainGroupChildrenRefs.addAssign_operation (constinArgument_inGroupRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 290)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addSettingsToDefaultConfiguration (GALGAS_XcodeProjectDescriptor & ioObject,
                                                         const GALGAS_stringlist constinArgument_inSettingList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mAttribute_mDefaultConfigurationSettingList.plusAssign_operation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 297)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@XcodeProjectDescriptor getReferenceKey'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_getReferenceKey (GALGAS_XcodeProjectDescriptor & ioObject,
                                       GALGAS_string & outArgument_outRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mProjectObjectReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioObject.mAttribute_mProjectObjectReference = ioObject.mAttribute_mSequenceNumber.getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 358)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 358)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 358)) ;
    ioObject.mAttribute_mSequenceNumber.increment_operation (inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 359)) ;
  }
  outArgument_outRef = ioObject.mAttribute_mSequenceNumber.getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 361)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 361)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 361)) ;
  ioObject.mAttribute_mSequenceNumber.increment_operation (inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 362)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@XcodeProjectDescriptor generateAtPath'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateAtPath (const GALGAS_XcodeProjectDescriptor inObject,
                                    const GALGAS_string constinArgument_inPath,
                                    const GALGAS_string constinArgument_inCacheFilePath,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_contents = GALGAS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, inObject.mAttribute_mProjectObjectReference, inObject.mAttribute_mMainGroupReference, inObject.mAttribute_mGroupList, inObject.mAttribute_mMainGroupChildrenRefs, inObject.mAttribute_mToolTargetList, inObject.mAttribute_mAppTargetList, inObject.mAttribute_mCppFileList, inObject.mAttribute_m_5F_M_5F_FileList, inObject.mAttribute_m_5F_MM_5F_FileList, inObject.mAttribute_m_5F_SwiftFileList, inObject.mAttribute_mFrameworkFileList, inObject.mAttribute_mHeaderFileList, inObject.mAttribute_mInfoPlistFileList, inObject.mAttribute_mTIFF_5F_fileList, inObject.mAttribute_mICNS_5F_fileList, inObject.mAttribute_mXIB_5F_fileList, inObject.mAttribute_mBuildFileList, inObject.mAttribute_mDefaultConfigurationRef, inObject.mAttribute_mDefaultConfigurationSettingList, inObject.mAttribute_mProjectBuildConfigurationRef COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 426))) ;
  GALGAS_string var_projectCoreFile = constinArgument_inPath.add_operation (GALGAS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 448)) ;
  GALGAS_bool test_0 = var_projectCoreFile.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)) ;
  }
  GALGAS_bool test_1 = test_0 ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsNotEqual, GALGAS_string::constructor_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)).objectCompare (var_contents)) ;
  }
  const enumGalgasBool test_2 = test_1.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bool joker_17579 ; // Joker input parameter
    var_contents.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_17579, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 450)) ;
    var_contents.method_makeDirectoryAndWriteToFile (var_projectCoreFile, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 451)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element::GALGAS_astDeclarationList_2D_element (void) :
mAttribute_mDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element::~ GALGAS_astDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element::GALGAS_astDeclarationList_2D_element (const GALGAS_astDeclaration & inOperand0) :
mAttribute_mDeclaration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element GALGAS_astDeclarationList_2D_element::constructor_new (const GALGAS_astDeclaration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astDeclarationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_astDeclarationList_2D_element::objectCompare (const GALGAS_astDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_astDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationList_2D_element::drop (void) {
  mAttribute_mDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @astDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration GALGAS_astDeclarationList_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @astDeclarationList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationList_2D_element ("astDeclarationList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_astDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_astDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element GALGAS_astDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationList_2D_element result ;
  const GALGAS_astDeclarationList_2D_element * p = (const GALGAS_astDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftDelegateList_2D_element::GALGAS_externSwiftDelegateList_2D_element (void) :
mAttribute_mExternSwiftDelegateName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftDelegateList_2D_element::~ GALGAS_externSwiftDelegateList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftDelegateList_2D_element::GALGAS_externSwiftDelegateList_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_mExternSwiftDelegateName (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftDelegateList_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externSwiftDelegateList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externSwiftDelegateList_2D_element::objectCompare (const GALGAS_externSwiftDelegateList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExternSwiftDelegateName.objectCompare (inOperand.mAttribute_mExternSwiftDelegateName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externSwiftDelegateList_2D_element::isValid (void) const {
  return mAttribute_mExternSwiftDelegateName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externSwiftDelegateList_2D_element::drop (void) {
  mAttribute_mExternSwiftDelegateName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externSwiftDelegateList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @externSwiftDelegateList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExternSwiftDelegateName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externSwiftDelegateList_2D_element::getter_mExternSwiftDelegateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternSwiftDelegateName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @externSwiftDelegateList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ("externSwiftDelegateList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externSwiftDelegateList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externSwiftDelegateList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftDelegateList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList_2D_element result ;
  const GALGAS_externSwiftDelegateList_2D_element * p = (const GALGAS_externSwiftDelegateList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftDelegateList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (void) :
mAttribute_mExternSwiftFunctionName (),
mAttribute_mCallerName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element::~ GALGAS_externSwiftFunctionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mExternSwiftFunctionName (inOperand0),
mAttribute_mCallerName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftFunctionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externSwiftFunctionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externSwiftFunctionList_2D_element::objectCompare (const GALGAS_externSwiftFunctionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExternSwiftFunctionName.objectCompare (inOperand.mAttribute_mExternSwiftFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCallerName.objectCompare (inOperand.mAttribute_mCallerName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externSwiftFunctionList_2D_element::isValid (void) const {
  return mAttribute_mExternSwiftFunctionName.isValid () && mAttribute_mCallerName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externSwiftFunctionList_2D_element::drop (void) {
  mAttribute_mExternSwiftFunctionName.drop () ;
  mAttribute_mCallerName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externSwiftFunctionList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @externSwiftFunctionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExternSwiftFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCallerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externSwiftFunctionList_2D_element::getter_mExternSwiftFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternSwiftFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externSwiftFunctionList_2D_element::getter_mCallerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCallerName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @externSwiftFunctionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ("externSwiftFunctionList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externSwiftFunctionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externSwiftFunctionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftFunctionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  const GALGAS_externSwiftFunctionList_2D_element * p = (const GALGAS_externSwiftFunctionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftFunctionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element::~ GALGAS_externFunctionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externFunctionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externFunctionMap_2D_element::objectCompare (const GALGAS_externFunctionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externFunctionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @externFunctionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externFunctionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @externFunctionMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionMap_2D_element ("externFunctionMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externFunctionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externFunctionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  const GALGAS_externFunctionMap_2D_element * p = (const GALGAS_externFunctionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element::GALGAS_toOneRelationshipList_2D_element (void) :
mAttribute_mDestinationEntityName (),
mAttribute_mToOneRelationshipName (),
mAttribute_mInverseRelationshipName (),
mAttribute_mInverseRelationMultiplicity () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element::~ GALGAS_toOneRelationshipList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element::GALGAS_toOneRelationshipList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_propertyMultiplicity & inOperand3) :
mAttribute_mDestinationEntityName (inOperand0),
mAttribute_mToOneRelationshipName (inOperand1),
mAttribute_mInverseRelationshipName (inOperand2),
mAttribute_mInverseRelationMultiplicity (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element GALGAS_toOneRelationshipList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_propertyMultiplicity & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_toOneRelationshipList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toOneRelationshipList_2D_element::objectCompare (const GALGAS_toOneRelationshipList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityName.objectCompare (inOperand.mAttribute_mDestinationEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToOneRelationshipName.objectCompare (inOperand.mAttribute_mToOneRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationshipName.objectCompare (inOperand.mAttribute_mInverseRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationMultiplicity.objectCompare (inOperand.mAttribute_mInverseRelationMultiplicity) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toOneRelationshipList_2D_element::isValid (void) const {
  return mAttribute_mDestinationEntityName.isValid () && mAttribute_mToOneRelationshipName.isValid () && mAttribute_mInverseRelationshipName.isValid () && mAttribute_mInverseRelationMultiplicity.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneRelationshipList_2D_element::drop (void) {
  mAttribute_mDestinationEntityName.drop () ;
  mAttribute_mToOneRelationshipName.drop () ;
  mAttribute_mInverseRelationshipName.drop () ;
  mAttribute_mInverseRelationMultiplicity.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneRelationshipList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @toOneRelationshipList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDestinationEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToOneRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toOneRelationshipList_2D_element::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toOneRelationshipList_2D_element::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToOneRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toOneRelationshipList_2D_element::getter_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMultiplicity GALGAS_toOneRelationshipList_2D_element::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationMultiplicity ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @toOneRelationshipList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipList_2D_element ("toOneRelationshipList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toOneRelationshipList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toOneRelationshipList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element GALGAS_toOneRelationshipList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList_2D_element result ;
  const GALGAS_toOneRelationshipList_2D_element * p = (const GALGAS_toOneRelationshipList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element::GALGAS_toManyRelationshipList_2D_element (void) :
mAttribute_mDestinationEntityName (),
mAttribute_mToManyRelationshipName (),
mAttribute_mInverseRelationshipName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element::~ GALGAS_toManyRelationshipList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element::GALGAS_toManyRelationshipList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mAttribute_mDestinationEntityName (inOperand0),
mAttribute_mToManyRelationshipName (inOperand1),
mAttribute_mInverseRelationshipName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element GALGAS_toManyRelationshipList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyRelationshipList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element GALGAS_toManyRelationshipList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_toManyRelationshipList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toManyRelationshipList_2D_element::objectCompare (const GALGAS_toManyRelationshipList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityName.objectCompare (inOperand.mAttribute_mDestinationEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToManyRelationshipName.objectCompare (inOperand.mAttribute_mToManyRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationshipName.objectCompare (inOperand.mAttribute_mInverseRelationshipName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toManyRelationshipList_2D_element::isValid (void) const {
  return mAttribute_mDestinationEntityName.isValid () && mAttribute_mToManyRelationshipName.isValid () && mAttribute_mInverseRelationshipName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyRelationshipList_2D_element::drop (void) {
  mAttribute_mDestinationEntityName.drop () ;
  mAttribute_mToManyRelationshipName.drop () ;
  mAttribute_mInverseRelationshipName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyRelationshipList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @toManyRelationshipList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDestinationEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToManyRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationshipName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toManyRelationshipList_2D_element::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toManyRelationshipList_2D_element::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToManyRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toManyRelationshipList_2D_element::getter_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationshipName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @toManyRelationshipList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipList_2D_element ("toManyRelationshipList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toManyRelationshipList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toManyRelationshipList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element GALGAS_toManyRelationshipList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList_2D_element result ;
  const GALGAS_toManyRelationshipList_2D_element * p = (const GALGAS_toManyRelationshipList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::GALGAS_toOneEntityRelationshipListForGeneration_2D_element (void) :
mAttribute_mToOneRelationshipName (),
mAttribute_mRelationshipType (),
mAttribute_mOppositeRelationshipName (),
mAttribute_mInverseRelationMultiplicity (),
mAttribute_mDestinationEntityObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::~ GALGAS_toOneEntityRelationshipListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::GALGAS_toOneEntityRelationshipListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_typeKind & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                        const GALGAS_observablePropertyMap & inOperand4) :
mAttribute_mToOneRelationshipName (inOperand0),
mAttribute_mRelationshipType (inOperand1),
mAttribute_mOppositeRelationshipName (inOperand2),
mAttribute_mInverseRelationMultiplicity (inOperand3),
mAttribute_mDestinationEntityObservablePropertyMap (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element GALGAS_toOneEntityRelationshipListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_typeKind & inOperand1,
                                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                                        const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                                        const GALGAS_observablePropertyMap & inOperand4 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toOneEntityRelationshipListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toOneEntityRelationshipListForGeneration_2D_element::objectCompare (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mToOneRelationshipName.objectCompare (inOperand.mAttribute_mToOneRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRelationshipType.objectCompare (inOperand.mAttribute_mRelationshipType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOppositeRelationshipName.objectCompare (inOperand.mAttribute_mOppositeRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationMultiplicity.objectCompare (inOperand.mAttribute_mInverseRelationMultiplicity) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityObservablePropertyMap.objectCompare (inOperand.mAttribute_mDestinationEntityObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toOneEntityRelationshipListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mToOneRelationshipName.isValid () && mAttribute_mRelationshipType.isValid () && mAttribute_mOppositeRelationshipName.isValid () && mAttribute_mInverseRelationMultiplicity.isValid () && mAttribute_mDestinationEntityObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneEntityRelationshipListForGeneration_2D_element::drop (void) {
  mAttribute_mToOneRelationshipName.drop () ;
  mAttribute_mRelationshipType.drop () ;
  mAttribute_mOppositeRelationshipName.drop () ;
  mAttribute_mInverseRelationMultiplicity.drop () ;
  mAttribute_mDestinationEntityObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneEntityRelationshipListForGeneration_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @toOneEntityRelationshipListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mToOneRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRelationshipType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToOneRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRelationshipType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOppositeRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMultiplicity GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationMultiplicity ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @toOneEntityRelationshipListForGeneration-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration_2D_element ("toOneEntityRelationshipListForGeneration-element",
                                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toOneEntityRelationshipListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toOneEntityRelationshipListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneEntityRelationshipListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element GALGAS_toOneEntityRelationshipListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration_2D_element result ;
  const GALGAS_toOneEntityRelationshipListForGeneration_2D_element * p = (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneEntityRelationshipListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneEntityRelationshipListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::GALGAS_toManyEntityRelationshipListForGeneration_2D_element (void) :
mAttribute_mToManyRelationshipName (),
mAttribute_mRelationshipType (),
mAttribute_mOppositeRelationshipName (),
mAttribute_mDestinationEntityObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::~ GALGAS_toManyEntityRelationshipListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::GALGAS_toManyEntityRelationshipListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                          const GALGAS_typeKind & inOperand1,
                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                          const GALGAS_observablePropertyMap & inOperand3) :
mAttribute_mToManyRelationshipName (inOperand0),
mAttribute_mRelationshipType (inOperand1),
mAttribute_mOppositeRelationshipName (inOperand2),
mAttribute_mDestinationEntityObservablePropertyMap (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element GALGAS_toManyEntityRelationshipListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                          const GALGAS_typeKind & inOperand1,
                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                          const GALGAS_observablePropertyMap & inOperand3 
                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_toManyEntityRelationshipListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toManyEntityRelationshipListForGeneration_2D_element::objectCompare (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mToManyRelationshipName.objectCompare (inOperand.mAttribute_mToManyRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRelationshipType.objectCompare (inOperand.mAttribute_mRelationshipType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOppositeRelationshipName.objectCompare (inOperand.mAttribute_mOppositeRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityObservablePropertyMap.objectCompare (inOperand.mAttribute_mDestinationEntityObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toManyEntityRelationshipListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mToManyRelationshipName.isValid () && mAttribute_mRelationshipType.isValid () && mAttribute_mOppositeRelationshipName.isValid () && mAttribute_mDestinationEntityObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyEntityRelationshipListForGeneration_2D_element::drop (void) {
  mAttribute_mToManyRelationshipName.drop () ;
  mAttribute_mRelationshipType.drop () ;
  mAttribute_mOppositeRelationshipName.drop () ;
  mAttribute_mDestinationEntityObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyEntityRelationshipListForGeneration_2D_element::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "<struct @toManyEntityRelationshipListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mToManyRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRelationshipType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration_2D_element::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToManyRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_toManyEntityRelationshipListForGeneration_2D_element::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRelationshipType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration_2D_element::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOppositeRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_toManyEntityRelationshipListForGeneration_2D_element::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @toManyEntityRelationshipListForGeneration-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration_2D_element ("toManyEntityRelationshipListForGeneration-element",
                                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toManyEntityRelationshipListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toManyEntityRelationshipListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyEntityRelationshipListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element GALGAS_toManyEntityRelationshipListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration_2D_element result ;
  const GALGAS_toManyEntityRelationshipListForGeneration_2D_element * p = (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyEntityRelationshipListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyEntityRelationshipListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element::GALGAS_classObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element::~ GALGAS_classObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element::GALGAS_classObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element GALGAS_classObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_classObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element GALGAS_classObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_observablePropertyMap & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_classObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_classObservablePropertyMap_2D_element::objectCompare (const GALGAS_classObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_classObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @classObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_classObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @classObservablePropertyMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classObservablePropertyMap_2D_element ("classObservablePropertyMap-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element GALGAS_classObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_classObservablePropertyMap_2D_element result ;
  const GALGAS_classObservablePropertyMap_2D_element * p = (const GALGAS_classObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element::GALGAS_entityObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element::~ GALGAS_entityObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element::GALGAS_entityObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_observablePropertyMap & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_entityObservablePropertyMap_2D_element::objectCompare (const GALGAS_entityObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_entityObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @entityObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_entityObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_entityObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @entityObservablePropertyMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityObservablePropertyMap_2D_element ("entityObservablePropertyMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap_2D_element result ;
  const GALGAS_entityObservablePropertyMap_2D_element * p = (const GALGAS_entityObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element::GALGAS_documentObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element::~ GALGAS_documentObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element::GALGAS_documentObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_observablePropertyMap & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_documentObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_documentObservablePropertyMap_2D_element::objectCompare (const GALGAS_documentObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_documentObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @documentObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_documentObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_documentObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @documentObservablePropertyMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentObservablePropertyMap_2D_element ("documentObservablePropertyMap-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_documentObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_documentObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap_2D_element result ;
  const GALGAS_documentObservablePropertyMap_2D_element * p = (const GALGAS_documentObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element::GALGAS_prefsObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element::~ GALGAS_prefsObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element::GALGAS_prefsObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element GALGAS_prefsObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefsObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element GALGAS_prefsObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_observablePropertyMap & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefsObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_prefsObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefsObservablePropertyMap_2D_element::objectCompare (const GALGAS_prefsObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefsObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefsObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefsObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @prefsObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefsObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_prefsObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @prefsObservablePropertyMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsObservablePropertyMap_2D_element ("prefsObservablePropertyMap-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefsObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefsObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element GALGAS_prefsObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_prefsObservablePropertyMap_2D_element result ;
  const GALGAS_prefsObservablePropertyMap_2D_element * p = (const GALGAS_prefsObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::GALGAS_outletClassDeclarationList_2D_element (void) :
mAttribute_mUserDefined (),
mAttribute_mOutletClassName (),
mAttribute_mHasRunAction (),
mAttribute_mHasEnabled (),
mAttribute_mHandlesTableViewBinding () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::~ GALGAS_outletClassDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::GALGAS_outletClassDeclarationList_2D_element (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_bool & inOperand4) :
mAttribute_mUserDefined (inOperand0),
mAttribute_mOutletClassName (inOperand1),
mAttribute_mHasRunAction (inOperand2),
mAttribute_mHasEnabled (inOperand3),
mAttribute_mHandlesTableViewBinding (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassDeclarationList_2D_element (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_bool & inOperand2,
                                                                                                            const GALGAS_bool & inOperand3,
                                                                                                            const GALGAS_bool & inOperand4 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_outletClassDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassDeclarationList_2D_element::objectCompare (const GALGAS_outletClassDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mUserDefined.objectCompare (inOperand.mAttribute_mUserDefined) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassName.objectCompare (inOperand.mAttribute_mOutletClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasRunAction.objectCompare (inOperand.mAttribute_mHasRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasEnabled.objectCompare (inOperand.mAttribute_mHasEnabled) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHandlesTableViewBinding.objectCompare (inOperand.mAttribute_mHandlesTableViewBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mUserDefined.isValid () && mAttribute_mOutletClassName.isValid () && mAttribute_mHasRunAction.isValid () && mAttribute_mHasEnabled.isValid () && mAttribute_mHandlesTableViewBinding.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassDeclarationList_2D_element::drop (void) {
  mAttribute_mUserDefined.drop () ;
  mAttribute_mOutletClassName.drop () ;
  mAttribute_mHasRunAction.drop () ;
  mAttribute_mHasEnabled.drop () ;
  mAttribute_mHandlesTableViewBinding.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassDeclarationList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @outletClassDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mUserDefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasEnabled.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHandlesTableViewBinding.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassDeclarationList_2D_element::getter_mOutletClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasEnabled ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::getter_mHandlesTableViewBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHandlesTableViewBinding ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outletClassDeclarationList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationList_2D_element ("outletClassDeclarationList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList_2D_element result ;
  const GALGAS_outletClassDeclarationList_2D_element * p = (const GALGAS_outletClassDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHandlesRunAction (),
mAttribute_mHandlesTableViewBinding (),
mAttribute_mUserDefined () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::~ GALGAS_outletClassMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_bool & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mHandlesRunAction (inOperand1),
mAttribute_mHandlesTableViewBinding (inOperand2),
mAttribute_mUserDefined (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_bool & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_bool & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_outletClassMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassMap_2D_element::objectCompare (const GALGAS_outletClassMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHandlesRunAction.objectCompare (inOperand.mAttribute_mHandlesRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHandlesTableViewBinding.objectCompare (inOperand.mAttribute_mHandlesTableViewBinding) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUserDefined.objectCompare (inOperand.mAttribute_mUserDefined) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHandlesRunAction.isValid () && mAttribute_mHandlesTableViewBinding.isValid () && mAttribute_mUserDefined.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHandlesRunAction.drop () ;
  mAttribute_mHandlesTableViewBinding.drop () ;
  mAttribute_mUserDefined.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @outletClassMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHandlesRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHandlesTableViewBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUserDefined.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandlesRunAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHandlesRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandlesTableViewBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHandlesTableViewBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUserDefined ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @outletClassMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassMap_2D_element ("outletClassMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  const GALGAS_outletClassMap_2D_element * p = (const GALGAS_outletClassMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (void) :
mAttribute_mOptionName (),
mAttribute_mOptionTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element::~ GALGAS_controllerBindingOptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mAttribute_mOptionName (inOperand0),
mAttribute_mOptionTypeName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controllerBindingOptionList_2D_element::objectCompare (const GALGAS_controllerBindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionTypeName.objectCompare (inOperand.mAttribute_mOptionTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controllerBindingOptionList_2D_element::isValid (void) const {
  return mAttribute_mOptionName.isValid () && mAttribute_mOptionTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionList_2D_element::drop (void) {
  mAttribute_mOptionName.drop () ;
  mAttribute_mOptionTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::getter_mOptionTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @controllerBindingOptionList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ("controllerBindingOptionList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controllerBindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  const GALGAS_controllerBindingOptionList_2D_element * p = (const GALGAS_controllerBindingOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (void) :
mAttribute_mModelTypeName (),
mAttribute_mModelShouldBeWritableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element::~ GALGAS_outletClassBindingSpecificationModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_bool & inOperand1) :
mAttribute_mModelTypeName (inOperand0),
mAttribute_mModelShouldBeWritableProperty (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationModelList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                        const GALGAS_bool & inOperand1 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName.objectCompare (inOperand.mAttribute_mModelTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelShouldBeWritableProperty.objectCompare (inOperand.mAttribute_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassBindingSpecificationModelList_2D_element::isValid (void) const {
  return mAttribute_mModelTypeName.isValid () && mAttribute_mModelShouldBeWritableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::drop (void) {
  mAttribute_mModelTypeName.drop () ;
  mAttribute_mModelShouldBeWritableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassBindingSpecificationModelList_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelShouldBeWritableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @outletClassBindingSpecificationModelList-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ("outletClassBindingSpecificationModelList-element",
                                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletClassBindingSpecificationModelList_2D_element * p = (const GALGAS_outletClassBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (void) :
mAttribute_mIsUserDefined (),
mAttribute_mBindingName (),
mAttribute_mOutletClassBindingSpecificationModelList (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element::~ GALGAS_outletClassBindingSpecificationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (const GALGAS_bool & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                              const GALGAS_controllerBindingOptionList & inOperand3) :
mAttribute_mIsUserDefined (inOperand0),
mAttribute_mBindingName (inOperand1),
mAttribute_mOutletClassBindingSpecificationModelList (inOperand2),
mAttribute_mBindingOptionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationList_2D_element (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (HERE),
                                                                GALGAS_controllerBindingOptionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                              const GALGAS_controllerBindingOptionList & inOperand3 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassBindingSpecificationList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsUserDefined.objectCompare (inOperand.mAttribute_mIsUserDefined) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassBindingSpecificationModelList.objectCompare (inOperand.mAttribute_mOutletClassBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassBindingSpecificationList_2D_element::isValid (void) const {
  return mAttribute_mIsUserDefined.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mOutletClassBindingSpecificationModelList.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationList_2D_element::drop (void) {
  mAttribute_mIsUserDefined.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mOutletClassBindingSpecificationModelList.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsUserDefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassBindingSpecificationList_2D_element::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationList_2D_element::getter_mOutletClassBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassBindingSpecificationModelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList GALGAS_outletClassBindingSpecificationList_2D_element::getter_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @outletClassBindingSpecificationList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ("outletClassBindingSpecificationList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  const GALGAS_outletClassBindingSpecificationList_2D_element * p = (const GALGAS_outletClassBindingSpecificationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBindingMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element::~ GALGAS_bindingSpecificationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mBindingMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_outletBindingSpecificationMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingSpecificationMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingSpecificationMap_2D_element::objectCompare (const GALGAS_bindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingMap.objectCompare (inOperand.mAttribute_mBindingMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingSpecificationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBindingMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBindingMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @bindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bindingSpecificationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap GALGAS_bindingSpecificationMap_2D_element::getter_mBindingMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @bindingSpecificationMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ("bindingSpecificationMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap_2D_element result ;
  const GALGAS_bindingSpecificationMap_2D_element * p = (const GALGAS_bindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mAttribute_mModelType (),
mAttribute_mModelShouldBeWritableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mAttribute_mModelType (inOperand0),
mAttribute_mModelShouldBeWritableProperty (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelType.objectCompare (inOperand.mAttribute_mModelType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelShouldBeWritableProperty.objectCompare (inOperand.mAttribute_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mAttribute_mModelType.isValid () && mAttribute_mModelShouldBeWritableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mAttribute_mModelType.drop () ;
  mAttribute_mModelShouldBeWritableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelShouldBeWritableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @outletBindingSpecificationModelList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ("outletBindingSpecificationModelList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletBindingSpecificationModelList_2D_element * p = (const GALGAS_outletBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (void) :
mAttribute_mOptionType (),
mAttribute_mOptionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::~ GALGAS_controllerBindingOptionDecoratedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1) :
mAttribute_mOptionType (inOperand0),
mAttribute_mOptionName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                                const GALGAS_lstring & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionDecoratedList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controllerBindingOptionDecoratedList_2D_element::objectCompare (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionType.objectCompare (inOperand.mAttribute_mOptionType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controllerBindingOptionDecoratedList_2D_element::isValid (void) const {
  return mAttribute_mOptionType.isValid () && mAttribute_mOptionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::drop (void) {
  mAttribute_mOptionType.drop () ;
  mAttribute_mOptionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionDecoratedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_controllerBindingOptionDecoratedList_2D_element::getter_mOptionType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionDecoratedList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @controllerBindingOptionDecoratedList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ("controllerBindingOptionDecoratedList-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionDecoratedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controllerBindingOptionDecoratedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionDecoratedList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList_2D_element result ;
  const GALGAS_controllerBindingOptionDecoratedList_2D_element * p = (const GALGAS_controllerBindingOptionDecoratedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionDecoratedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionDecoratedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOutletBindingSpecificationModelList (),
mAttribute_mControllerBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element::~ GALGAS_outletBindingSpecificationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mOutletBindingSpecificationModelList (inOperand1),
mAttribute_mControllerBindingOptionList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_outletBindingSpecificationModelList::constructor_emptyList (HERE),
                                                          GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_outletBindingSpecificationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingSpecificationMap_2D_element::objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletBindingSpecificationModelList.objectCompare (inOperand.mAttribute_mOutletBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerBindingOptionList.objectCompare (inOperand.mAttribute_mControllerBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingSpecificationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOutletBindingSpecificationModelList.isValid () && mAttribute_mControllerBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOutletBindingSpecificationModelList.drop () ;
  mAttribute_mControllerBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletBindingSpecificationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationMap_2D_element::getter_mOutletBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletBindingSpecificationModelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList GALGAS_outletBindingSpecificationMap_2D_element::getter_mControllerBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @outletBindingSpecificationMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ("outletBindingSpecificationMap-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap_2D_element result ;
  const GALGAS_outletBindingSpecificationMap_2D_element * p = (const GALGAS_outletBindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (void) :
mAttribute_mOptionName (),
mAttribute_mOptionValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element::~ GALGAS_bindingOptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_abstractDefaultValue & inOperand1) :
mAttribute_mOptionName (inOperand0),
mAttribute_mOptionValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element GALGAS_bindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_abstractDefaultValue & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingOptionList_2D_element::objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionValue.objectCompare (inOperand.mAttribute_mOptionValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingOptionList_2D_element::isValid (void) const {
  return mAttribute_mOptionName.isValid () && mAttribute_mOptionValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingOptionList_2D_element::drop (void) {
  mAttribute_mOptionName.drop () ;
  mAttribute_mOptionValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingOptionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @bindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bindingOptionList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_bindingOptionList_2D_element::getter_mOptionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @bindingOptionList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingOptionList_2D_element ("bindingOptionList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element GALGAS_bindingOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bindingOptionList_2D_element result ;
  const GALGAS_bindingOptionList_2D_element * p = (const GALGAS_bindingOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (void) :
mAttribute_mOutletTypeName (),
mAttribute_mOutletName (),
mAttribute_mTableValueBindingDescriptor (),
mAttribute_mRunDescriptor (),
mAttribute_mEnabledBindingDescriptor (),
mAttribute_mHiddenBindingDescriptor (),
mAttribute_mRegularBindingList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::~ GALGAS_outletDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_tableValueBinding & inOperand2,
                                                                                  const GALGAS_runActionDescriptor & inOperand3,
                                                                                  const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                  const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                  const GALGAS_regularBindingList & inOperand6) :
mAttribute_mOutletTypeName (inOperand0),
mAttribute_mOutletName (inOperand1),
mAttribute_mTableValueBindingDescriptor (inOperand2),
mAttribute_mRunDescriptor (inOperand3),
mAttribute_mEnabledBindingDescriptor (inOperand4),
mAttribute_mHiddenBindingDescriptor (inOperand5),
mAttribute_mRegularBindingList (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_tableValueBinding & inOperand2,
                                                                                                  const GALGAS_runActionDescriptor & inOperand3,
                                                                                                  const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                                  const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                                  const GALGAS_regularBindingList & inOperand6 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_outletDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletDeclarationList_2D_element::objectCompare (const GALGAS_outletDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletTypeName.objectCompare (inOperand.mAttribute_mOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableValueBindingDescriptor.objectCompare (inOperand.mAttribute_mTableValueBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRunDescriptor.objectCompare (inOperand.mAttribute_mRunDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnabledBindingDescriptor.objectCompare (inOperand.mAttribute_mEnabledBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHiddenBindingDescriptor.objectCompare (inOperand.mAttribute_mHiddenBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingList.objectCompare (inOperand.mAttribute_mRegularBindingList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mOutletTypeName.isValid () && mAttribute_mOutletName.isValid () && mAttribute_mTableValueBindingDescriptor.isValid () && mAttribute_mRunDescriptor.isValid () && mAttribute_mEnabledBindingDescriptor.isValid () && mAttribute_mHiddenBindingDescriptor.isValid () && mAttribute_mRegularBindingList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletDeclarationList_2D_element::drop (void) {
  mAttribute_mOutletTypeName.drop () ;
  mAttribute_mOutletName.drop () ;
  mAttribute_mTableValueBindingDescriptor.drop () ;
  mAttribute_mRunDescriptor.drop () ;
  mAttribute_mEnabledBindingDescriptor.drop () ;
  mAttribute_mHiddenBindingDescriptor.drop () ;
  mAttribute_mRegularBindingList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletDeclarationList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @outletDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableValueBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRunDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::getter_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableValueBinding GALGAS_outletDeclarationList_2D_element::getter_mTableValueBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableValueBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor GALGAS_outletDeclarationList_2D_element::getter_mRunDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRunDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList_2D_element::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnabledBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList_2D_element::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHiddenBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList GALGAS_outletDeclarationList_2D_element::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @outletDeclarationList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ("outletDeclarationList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  const GALGAS_outletDeclarationList_2D_element * p = (const GALGAS_outletDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mAttribute_mModelType (),
mAttribute_mKind (),
mAttribute_mErrorLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                    const GALGAS_propertyKind & inOperand1,
                                                                                    const GALGAS_location & inOperand2) :
mAttribute_mModelType (inOperand0),
mAttribute_mKind (inOperand1),
mAttribute_mErrorLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                    const GALGAS_propertyKind & inOperand1,
                                                                                                    const GALGAS_location & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_outletBindingModelList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingModelList_2D_element::objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelType.objectCompare (inOperand.mAttribute_mModelType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorLocation.objectCompare (inOperand.mAttribute_mErrorLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mAttribute_mModelType.isValid () && mAttribute_mKind.isValid () && mAttribute_mErrorLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mAttribute_mModelType.drop () ;
  mAttribute_mKind.drop () ;
  mAttribute_mErrorLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @outletBindingModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_outletBindingModelList_2D_element::getter_mModelType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyKind GALGAS_outletBindingModelList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_outletBindingModelList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @outletBindingModelList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ("outletBindingModelList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  const GALGAS_outletBindingModelList_2D_element * p = (const GALGAS_outletBindingModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

