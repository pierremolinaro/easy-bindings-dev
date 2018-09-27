#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-2.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Extension Getter '@transientDependencyListForGeneration transientComputeFunctionCall'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_transientComputeFunctionCall (const GALGAS_transientDependencyListForGeneration & inObject,
                                                            const GALGAS_string & constinArgument_inOwnerName,
                                                            const GALGAS_string & constinArgument_inTransientName,
                                                            const GALGAS_string & constinArgument_inExternFunctionName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  GALGAS_string var_ident_13374 = GALGAS_string ("        ") ;
  result_outResult = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_transientDependencyListForGeneration temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_length (SOURCE_FILE ("transient-property.galgas", 337)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_observablePropertyAST var_first_13483 ;
      const GALGAS_transientDependencyListForGeneration temp_2 = inObject ;
      GALGAS_string joker_13485_2 ; // Joker input parameter
      GALGAS_string joker_13485_1 ; // Joker input parameter
      temp_2.method_first (var_first_13483, joker_13485_2, joker_13485_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 338)) ;
      result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("let kind = "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 339)).add_operation (extensionGetter_modelStringForSelf (var_first_13483, GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 339)).add_operation (GALGAS_string ("_selection.kind ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 339)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_transientDependencyListForGeneration temp_3 = inObject ;
    GALGAS_transientDependencyListForGeneration var_dependencies_13620 = temp_3 ;
    GALGAS_observablePropertyAST var_first_13690 ;
    {
    GALGAS_string joker_13692 ; // Joker input parameter
    GALGAS_string joker_13695 ; // Joker input parameter
    var_dependencies_13620.setter_popFirst (var_first_13690, joker_13692, joker_13695, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 342)) ;
    }
    result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("var kind = "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 343)).add_operation (extensionGetter_modelStringForSelf (var_first_13690, GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 343)).add_operation (GALGAS_string ("_selection.kind ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 343)) ;
    cEnumerator_transientDependencyListForGeneration enumerator_13828 (var_dependencies_13620, kENUMERATION_UP) ;
    while (enumerator_13828.hasCurrentObject ()) {
      result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("kind &= "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 345)).add_operation (extensionGetter_modelStringForSelf (enumerator_13828.current_mDependency (HERE), GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 345)).add_operation (GALGAS_string ("_selection.kind ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 345)) ;
      enumerator_13828.gotoNextObject () ;
    }
  }
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("switch kind {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 348)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("case .noSelectionKind :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 349)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 350)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("case .multipleSelectionKind :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 351)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("  return .multiple\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 352)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("case .singleSelectionKind :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 353)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("  switch ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 354)) ;
  const GALGAS_transientDependencyListForGeneration temp_4 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_14300 (temp_4, kENUMERATION_UP) ;
  while (enumerator_14300.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(extensionGetter_modelStringForSelf (enumerator_14300.current_mDependency (HERE), GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 356)).add_operation (GALGAS_string ("_selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 356)) ;
    if (enumerator_14300.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 357)) ;
    }
    enumerator_14300.gotoNextObject () ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 359)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("  case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 360)) ;
  const GALGAS_transientDependencyListForGeneration temp_5 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_14485 (temp_5, kENUMERATION_UP) ;
  GALGAS_uint index_14474 ((uint32_t) 0) ;
  while (enumerator_14485.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (".single (let v").add_operation (index_14474.getter_string (SOURCE_FILE ("transient-property.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 362)) ;
    if (enumerator_14485.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 363)) ;
    }
    enumerator_14485.gotoNextObject () ;
    index_14474.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 361)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 365)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("    return .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 366)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, constinArgument_inExternFunctionName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      result_outResult.plusAssign_operation(GALGAS_string ("transient_").add_operation (constinArgument_inOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 368)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 368)).add_operation (constinArgument_inTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 368)) ;
    }
  }
  if (kBoolFalse == test_6) {
    result_outResult.plusAssign_operation(GALGAS_string ("transient_").add_operation (constinArgument_inExternFunctionName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 370)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 372)) ;
  const GALGAS_transientDependencyListForGeneration temp_7 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_14849 (temp_7, kENUMERATION_UP) ;
  GALGAS_uint index_14838 ((uint32_t) 0) ;
  while (enumerator_14849.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("v").add_operation (index_14838.getter_string (SOURCE_FILE ("transient-property.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 374)) ;
    if (enumerator_14849.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 375)) ;
    }
    enumerator_14849.gotoNextObject () ;
    index_14838.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 373)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string ("))\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 377)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("  default :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 378)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("    return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 379)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("  }\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 380)) ;
  result_outResult.plusAssign_operation(var_ident_13374.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 381)) ;
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension Getter '@transientDependencyListForGeneration needs_unwSelf'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_needs_5F_unwSelf (const GALGAS_transientDependencyListForGeneration & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
  const GALGAS_transientDependencyListForGeneration temp_0 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_15333 (temp_0, kENUMERATION_UP) ;
  bool bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 390)).isValidAndTrue () ;
  if (enumerator_15333.hasCurrentObject () && bool_1) {
    while (enumerator_15333.hasCurrentObject () && bool_1) {
      result_outResult = extensionGetter_needs_5F_unwSelf (enumerator_15333.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 391)) ;
      enumerator_15333.gotoNextObject () ;
      if (enumerator_15333.hasCurrentObject ()) {
        bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 390)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension Getter '@observablePropertyAST generateAddObserverCall'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_generateAddObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_15956 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_15956->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_15956->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 402)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 402)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 402)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 402)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_16213 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_16213->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_16213->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_16213->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 404)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 404)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 404)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 404)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 404)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 404)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_16329 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_16329->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 406)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 406)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_16457 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_16457->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 408)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 408)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_16632 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_16632->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_16632->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 410)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 410)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 410)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_16808 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_16808->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_16808->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_16928 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_16928->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 414)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 414)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_17068 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_17068->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 416)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 416)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 416)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 416)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_17220 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_17220->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 418)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 418)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 418)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 418)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_17340 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_17340->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 420)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 420)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_17464 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_17464->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 422)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 422)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_17642 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_17642->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_17642->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 424)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 424)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 424)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 424)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_17826 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_17826->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_17826->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 426)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 426)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 426)) ;
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




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension Getter '@observablePropertyAST generateRemoveObserverCall'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_generateRemoveObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_18435 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_18435->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_18435->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 441)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 441)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 441)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 441)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_18695 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_18695->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_18695->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_18695->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 443)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 443)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 443)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 443)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 443)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 443)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_18814 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_18814->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 445)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 445)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_18945 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_18945->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 447)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 447)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_19123 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_19123->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_19123->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 449)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 449)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 449)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_19302 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_19302->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_19302->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 451)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 451)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 451)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_19425 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_19425->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_19568 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_19568->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 455)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 455)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 455)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 455)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_19723 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_19723->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_19846 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_19846->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 459)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 459)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_20027 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_20027->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_20027->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 461)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 461)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 461)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 461)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_20154 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_20154->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 463)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 463)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_20341 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_20341->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20341->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 465)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 465)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 465)) ;
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




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_ptransientRoutineGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientName.objectCompare (p->mProperty_mTransientName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientType.objectCompare (p->mProperty_mTransientType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternFunctionName.objectCompare (p->mProperty_mExternFunctionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_ptransientRoutineGeneration::objectCompare (const GALGAS_ptransientRoutineGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ptransientRoutineGeneration::GALGAS_ptransientRoutineGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ptransientRoutineGeneration::GALGAS_ptransientRoutineGeneration (const cPtr_ptransientRoutineGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ptransientRoutineGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ptransientRoutineGeneration GALGAS_ptransientRoutineGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                        const GALGAS_string & inAttribute_mTransientName,
                                                                                        const GALGAS_typeKind & inAttribute_mTransientType,
                                                                                        const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList,
                                                                                        const GALGAS_string & inAttribute_mExternFunctionName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ptransientRoutineGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mTransientType.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mExternFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ptransientRoutineGeneration (inAttribute_mOwnerName, inAttribute_mTransientName, inAttribute_mTransientType, inAttribute_mDependencyList, inAttribute_mExternFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ptransientRoutineGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_ptransientRoutineGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ptransientRoutineGeneration::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mTransientName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_ptransientRoutineGeneration::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_ptransientRoutineGeneration::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mTransientType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_ptransientRoutineGeneration::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_ptransientRoutineGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration cPtr_ptransientRoutineGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ptransientRoutineGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mExternFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_ptransientRoutineGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @ptransientRoutineGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_ptransientRoutineGeneration::cPtr_ptransientRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                                                    const GALGAS_string & in_mTransientName,
                                                                    const GALGAS_typeKind & in_mTransientType,
                                                                    const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                    const GALGAS_string & in_mExternFunctionName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mTransientName (in_mTransientName),
mProperty_mTransientType (in_mTransientType),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mExternFunctionName (in_mExternFunctionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_ptransientRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ptransientRoutineGeneration ;
}

void cPtr_ptransientRoutineGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@ptransientRoutineGeneration:" ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_ptransientRoutineGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ptransientRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mDependencyList, mProperty_mExternFunctionName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @ptransientRoutineGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ptransientRoutineGeneration ("ptransientRoutineGeneration",
                                                    & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ptransientRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ptransientRoutineGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ptransientRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ptransientRoutineGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ptransientRoutineGeneration GALGAS_ptransientRoutineGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ptransientRoutineGeneration result ;
  const GALGAS_ptransientRoutineGeneration * p = (const GALGAS_ptransientRoutineGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ptransientRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ptransientRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_atomicPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNeedsValidation.objectCompare (p->mProperty_mNeedsValidation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsProxy.objectCompare (p->mProperty_mIsProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValueInSwift.objectCompare (p->mProperty_mDefaultValueInSwift) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInPreferences.objectCompare (p->mProperty_mInPreferences) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_atomicPropertyGeneration::objectCompare (const GALGAS_atomicPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGeneration::GALGAS_atomicPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGeneration::GALGAS_atomicPropertyGeneration (const cPtr_atomicPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                  const GALGAS_bool & inAttribute_mNeedsValidation,
                                                                                  const GALGAS_typeKind & inAttribute_mType,
                                                                                  const GALGAS_bool & inAttribute_mIsProxy,
                                                                                  const GALGAS_string & inAttribute_mDefaultValueInSwift,
                                                                                  const GALGAS_bool & inAttribute_mInPreferences
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mNeedsValidation.isValid () && inAttribute_mType.isValid () && inAttribute_mIsProxy.isValid () && inAttribute_mDefaultValueInSwift.isValid () && inAttribute_mInPreferences.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicPropertyGeneration (inAttribute_mPropertyName, inAttribute_mNeedsValidation, inAttribute_mType, inAttribute_mIsProxy, inAttribute_mDefaultValueInSwift, inAttribute_mInPreferences COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_atomicPropertyGeneration::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mNeedsValidation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_atomicPropertyGeneration::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_atomicPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_atomicPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_atomicPropertyGeneration::getter_mIsProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mIsProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_atomicPropertyGeneration::getter_mIsProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_atomicPropertyGeneration::getter_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mDefaultValueInSwift ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_atomicPropertyGeneration::getter_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValueInSwift ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_atomicPropertyGeneration::getter_mInPreferences (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mInPreferences ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_atomicPropertyGeneration::getter_mInPreferences (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInPreferences ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @atomicPropertyGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_atomicPropertyGeneration::cPtr_atomicPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                              const GALGAS_bool & in_mNeedsValidation,
                                                              const GALGAS_typeKind & in_mType,
                                                              const GALGAS_bool & in_mIsProxy,
                                                              const GALGAS_string & in_mDefaultValueInSwift,
                                                              const GALGAS_bool & in_mInPreferences
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mNeedsValidation (in_mNeedsValidation),
mProperty_mType (in_mType),
mProperty_mIsProxy (in_mIsProxy),
mProperty_mDefaultValueInSwift (in_mDefaultValueInSwift),
mProperty_mInPreferences (in_mInPreferences) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_atomicPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

void cPtr_atomicPropertyGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@atomicPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInPreferences.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_atomicPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicPropertyGeneration (mProperty_mPropertyName, mProperty_mNeedsValidation, mProperty_mType, mProperty_mIsProxy, mProperty_mDefaultValueInSwift, mProperty_mInPreferences COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @atomicPropertyGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGeneration ("atomicPropertyGeneration",
                                                 & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration result ;
  const GALGAS_atomicPropertyGeneration * p = (const GALGAS_atomicPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@atomicPropertyGenerationList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_atomicPropertyGenerationList : public cCollectionElement {
  public : GALGAS_atomicPropertyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGeneration & in_mProperty
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGeneration & in_mProperty
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_atomicPropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_atomicPropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_atomicPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_atomicPropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_atomicPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_atomicPropertyGenerationList * operand = (cCollectionElement_atomicPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_atomicPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList::GALGAS_atomicPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList::GALGAS_atomicPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_atomicPropertyGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::constructor_listWithValue (const GALGAS_atomicPropertyGeneration & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_atomicPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_atomicPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicPropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::addAssign_operation (const GALGAS_atomicPropertyGeneration & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::setter_append (GALGAS_atomicPropertyGenerationList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::setter_insertAtIndex (const GALGAS_atomicPropertyGeneration inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::setter_removeAtIndex (GALGAS_atomicPropertyGeneration & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::setter_popFirst (GALGAS_atomicPropertyGeneration & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::setter_popLast (GALGAS_atomicPropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::method_first (GALGAS_atomicPropertyGeneration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::method_last (GALGAS_atomicPropertyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::add_operation (const GALGAS_atomicPropertyGenerationList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList::plusAssign_operation (const GALGAS_atomicPropertyGenerationList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  GALGAS_atomicPropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_atomicPropertyGenerationList::cEnumerator_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element cEnumerator_atomicPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGeneration cEnumerator_atomicPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @atomicPropertyGenerationList type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGenerationList ("atomicPropertyGenerationList",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList result ;
  const GALGAS_atomicPropertyGenerationList * p = (const GALGAS_atomicPropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@simpleStoredPropertyList typeInventory'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_simpleStoredPropertyList inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_10067 (temp_0, kENUMERATION_UP) ;
  while (enumerator_10067.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_10165 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_10067.current_mPropertyTypeName (HERE), joker_10165 COMMA_SOURCE_FILE ("simple-stored-property.galgas", 244)) ;
    }
    enumerator_10067.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@simpleStoredPropertyList buildObservablePropertyMap'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_simpleStoredPropertyList inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_10636 (temp_0, kENUMERATION_UP) ;
  while (enumerator_10636.hasCurrentObject ()) {
    GALGAS_typeKind var_type_10721 ;
    GALGAS_actionMap var_actionMap_10736 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_10636.current_mPropertyTypeName (HERE), var_type_10721, var_actionMap_10736, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 262)) ;
    GALGAS_typeKindList var_typeList_10782 ;
    switch (var_type_10721.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 267)) ;
        temp_1.addAssign_operation (var_type_10721  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)) ;
        var_typeList_10782 = temp_1 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 269)) ;
        temp_2.addAssign_operation (var_type_10721  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 269)) ;
        var_typeList_10782 = temp_2 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10636.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 271)), GALGAS_string ("a class cannot be used as simple property type"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 271)) ;
        var_typeList_10782.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        GALGAS_typeKindList temp_4 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 273)) ;
        temp_4.addAssign_operation (var_type_10721  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 273)) ;
        var_typeList_10782 = temp_4 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_10636.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 275)), GALGAS_string ("an entity cannot be used as simple property type"), fixItArray5  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 275)) ;
        var_typeList_10782.drop () ; // Release error dropped variable
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_10636.current_mPropertyName (HERE), GALGAS_propertyKind::constructor_property (var_type_10721, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("simple-stored-property.galgas", 280))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 280)), GALGAS_string::makeEmptyString (), var_actionMap_10736, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 278)) ;
    }
    enumerator_10636.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@simpleStoredPropertyList simpleStoredPropertySemanticAnalysis'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_simpleStoredPropertySemanticAnalysis (const GALGAS_simpleStoredPropertyList inObject,
                                                           const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                           GALGAS_simpleStoredPropertyListForGenerationEX & outArgument_outSimpleStoredPropertyListForGeneration,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSimpleStoredPropertyListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSimpleStoredPropertyListForGeneration = GALGAS_simpleStoredPropertyListForGenerationEX::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 294)) ;
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_11860 (temp_0, kENUMERATION_UP) ;
  while (enumerator_11860.hasCurrentObject ()) {
    GALGAS_typeKind var_type_11945 ;
    GALGAS_actionMap joker_11947 ; // Joker input parameter
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_11860.current_mPropertyTypeName (HERE), var_type_11945, joker_11947, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 297)) ;
    GALGAS_typeKindList var_typeList_11994 ;
    switch (var_type_11945.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 302)) ;
        temp_1.addAssign_operation (var_type_11945  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 302)) ;
        var_typeList_11994 = temp_1 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 304)) ;
        temp_2.addAssign_operation (var_type_11945  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 304)) ;
        var_typeList_11994 = temp_2 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_11860.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 306)), GALGAS_string ("a class cannot be used as simple property type"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 306)) ;
        var_typeList_11994.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_11860.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 308)), GALGAS_string ("a transient property class cannot be used as simple property type"), fixItArray4  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 308)) ;
        var_typeList_11994.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_11860.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 310)), GALGAS_string ("an entity cannot be used as simple property type"), fixItArray5  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 310)) ;
        var_typeList_11994.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_string var_swiftDefaultValueAsString_12690 ;
    callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_11860.current_mDefaultValue (HERE).ptr (), var_typeList_11994, var_swiftDefaultValueAsString_12690, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 313)) ;
    outArgument_outSimpleStoredPropertyListForGeneration.addAssign_operation (var_type_11945, enumerator_11860.current_mPropertyName (HERE).getter_string (HERE), GALGAS_bool (false), var_swiftDefaultValueAsString_12690, enumerator_11860.current_mNeedsValidation (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 315)) ;
    enumerator_11860.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Class for element of '@simpleStoredPropertyListForGenerationEX' list                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_simpleStoredPropertyListForGenerationEX : public cCollectionElement {
  public : GALGAS_simpleStoredPropertyListForGenerationEX_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_simpleStoredPropertyListForGenerationEX (const GALGAS_typeKind & in_mType,
                                                                       const GALGAS_string & in_mStoredOrProxyPropertyName,
                                                                       const GALGAS_bool & in_mIsProxy,
                                                                       const GALGAS_string & in_mDefaultValueInSwift,
                                                                       const GALGAS_bool & in_mNeedsValidation
                                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_simpleStoredPropertyListForGenerationEX (const GALGAS_simpleStoredPropertyListForGenerationEX_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_simpleStoredPropertyListForGenerationEX::cCollectionElement_simpleStoredPropertyListForGenerationEX (const GALGAS_typeKind & in_mType,
                                                                                                                        const GALGAS_string & in_mStoredOrProxyPropertyName,
                                                                                                                        const GALGAS_bool & in_mIsProxy,
                                                                                                                        const GALGAS_string & in_mDefaultValueInSwift,
                                                                                                                        const GALGAS_bool & in_mNeedsValidation
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mStoredOrProxyPropertyName, in_mIsProxy, in_mDefaultValueInSwift, in_mNeedsValidation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_simpleStoredPropertyListForGenerationEX::cCollectionElement_simpleStoredPropertyListForGenerationEX (const GALGAS_simpleStoredPropertyListForGenerationEX_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mStoredOrProxyPropertyName, inElement.mProperty_mIsProxy, inElement.mProperty_mDefaultValueInSwift, inElement.mProperty_mNeedsValidation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_simpleStoredPropertyListForGenerationEX::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_simpleStoredPropertyListForGenerationEX::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_simpleStoredPropertyListForGenerationEX (mObject.mProperty_mType, mObject.mProperty_mStoredOrProxyPropertyName, mObject.mProperty_mIsProxy, mObject.mProperty_mDefaultValueInSwift, mObject.mProperty_mNeedsValidation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_simpleStoredPropertyListForGenerationEX::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStoredOrProxyPropertyName" ":" ;
  mObject.mProperty_mStoredOrProxyPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsProxy" ":" ;
  mObject.mProperty_mIsProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValueInSwift" ":" ;
  mObject.mProperty_mDefaultValueInSwift.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNeedsValidation" ":" ;
  mObject.mProperty_mNeedsValidation.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_simpleStoredPropertyListForGenerationEX::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_simpleStoredPropertyListForGenerationEX * operand = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX::GALGAS_simpleStoredPropertyListForGenerationEX (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX::GALGAS_simpleStoredPropertyListForGenerationEX (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX GALGAS_simpleStoredPropertyListForGenerationEX::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_simpleStoredPropertyListForGenerationEX  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX GALGAS_simpleStoredPropertyListForGenerationEX::constructor_listWithValue (const GALGAS_typeKind & inOperand0,
                                                                                                                          const GALGAS_string & inOperand1,
                                                                                                                          const GALGAS_bool & inOperand2,
                                                                                                                          const GALGAS_string & inOperand3,
                                                                                                                          const GALGAS_bool & inOperand4
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGenerationEX result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_simpleStoredPropertyListForGenerationEX (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_simpleStoredPropertyListForGenerationEX::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_typeKind & in_mType,
                                                                                const GALGAS_string & in_mStoredOrProxyPropertyName,
                                                                                const GALGAS_bool & in_mIsProxy,
                                                                                const GALGAS_string & in_mDefaultValueInSwift,
                                                                                const GALGAS_bool & in_mNeedsValidation
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = NULL ;
  macroMyNew (p, cCollectionElement_simpleStoredPropertyListForGenerationEX (in_mType,
                                                                             in_mStoredOrProxyPropertyName,
                                                                             in_mIsProxy,
                                                                             in_mDefaultValueInSwift,
                                                                             in_mNeedsValidation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::addAssign_operation (const GALGAS_typeKind & inOperand0,
                                                                          const GALGAS_string & inOperand1,
                                                                          const GALGAS_bool & inOperand2,
                                                                          const GALGAS_string & inOperand3,
                                                                          const GALGAS_bool & inOperand4
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyListForGenerationEX (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::setter_append (GALGAS_simpleStoredPropertyListForGenerationEX_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyListForGenerationEX (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                                           const GALGAS_string inOperand1,
                                                                           const GALGAS_bool inOperand2,
                                                                           const GALGAS_string inOperand3,
                                                                           const GALGAS_bool inOperand4,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyListForGenerationEX (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           GALGAS_bool & outOperand2,
                                                                           GALGAS_string & outOperand3,
                                                                           GALGAS_bool & outOperand4,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mStoredOrProxyPropertyName ;
      outOperand2 = p->mObject.mProperty_mIsProxy ;
      outOperand3 = p->mObject.mProperty_mDefaultValueInSwift ;
      outOperand4 = p->mObject.mProperty_mNeedsValidation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::setter_popFirst (GALGAS_typeKind & outOperand0,
                                                                      GALGAS_string & outOperand1,
                                                                      GALGAS_bool & outOperand2,
                                                                      GALGAS_string & outOperand3,
                                                                      GALGAS_bool & outOperand4,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mStoredOrProxyPropertyName ;
    outOperand2 = p->mObject.mProperty_mIsProxy ;
    outOperand3 = p->mObject.mProperty_mDefaultValueInSwift ;
    outOperand4 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::setter_popLast (GALGAS_typeKind & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     GALGAS_bool & outOperand2,
                                                                     GALGAS_string & outOperand3,
                                                                     GALGAS_bool & outOperand4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mStoredOrProxyPropertyName ;
    outOperand2 = p->mObject.mProperty_mIsProxy ;
    outOperand3 = p->mObject.mProperty_mDefaultValueInSwift ;
    outOperand4 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::method_first (GALGAS_typeKind & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   GALGAS_bool & outOperand2,
                                                                   GALGAS_string & outOperand3,
                                                                   GALGAS_bool & outOperand4,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mStoredOrProxyPropertyName ;
    outOperand2 = p->mObject.mProperty_mIsProxy ;
    outOperand3 = p->mObject.mProperty_mDefaultValueInSwift ;
    outOperand4 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::method_last (GALGAS_typeKind & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_bool & outOperand2,
                                                                  GALGAS_string & outOperand3,
                                                                  GALGAS_bool & outOperand4,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mStoredOrProxyPropertyName ;
    outOperand2 = p->mObject.mProperty_mIsProxy ;
    outOperand3 = p->mObject.mProperty_mDefaultValueInSwift ;
    outOperand4 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX GALGAS_simpleStoredPropertyListForGenerationEX::add_operation (const GALGAS_simpleStoredPropertyListForGenerationEX & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyListForGenerationEX result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX GALGAS_simpleStoredPropertyListForGenerationEX::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyListForGenerationEX result = GALGAS_simpleStoredPropertyListForGenerationEX::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX GALGAS_simpleStoredPropertyListForGenerationEX::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyListForGenerationEX result = GALGAS_simpleStoredPropertyListForGenerationEX::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX GALGAS_simpleStoredPropertyListForGenerationEX::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyListForGenerationEX result = GALGAS_simpleStoredPropertyListForGenerationEX::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX::plusAssign_operation (const GALGAS_simpleStoredPropertyListForGenerationEX inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_simpleStoredPropertyListForGenerationEX::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_simpleStoredPropertyListForGenerationEX::getter_mStoredOrProxyPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
    result = p->mObject.mProperty_mStoredOrProxyPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyListForGenerationEX::getter_mIsProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
    result = p->mObject.mProperty_mIsProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_simpleStoredPropertyListForGenerationEX::getter_mDefaultValueInSwiftAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
    result = p->mObject.mProperty_mDefaultValueInSwift ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyListForGenerationEX::getter_mNeedsValidationAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (cCollectionElement_simpleStoredPropertyListForGenerationEX *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
    result = p->mObject.mProperty_mNeedsValidation ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_simpleStoredPropertyListForGenerationEX::cEnumerator_simpleStoredPropertyListForGenerationEX (const GALGAS_simpleStoredPropertyListForGenerationEX & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX_2D_element cEnumerator_simpleStoredPropertyListForGenerationEX::current (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (const cCollectionElement_simpleStoredPropertyListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_simpleStoredPropertyListForGenerationEX::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (const cCollectionElement_simpleStoredPropertyListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
  return p->mObject.mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_simpleStoredPropertyListForGenerationEX::current_mStoredOrProxyPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (const cCollectionElement_simpleStoredPropertyListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
  return p->mObject.mProperty_mStoredOrProxyPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_simpleStoredPropertyListForGenerationEX::current_mIsProxy (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (const cCollectionElement_simpleStoredPropertyListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
  return p->mObject.mProperty_mIsProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_simpleStoredPropertyListForGenerationEX::current_mDefaultValueInSwift (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (const cCollectionElement_simpleStoredPropertyListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
  return p->mObject.mProperty_mDefaultValueInSwift ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_simpleStoredPropertyListForGenerationEX::current_mNeedsValidation (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGenerationEX * p = (const cCollectionElement_simpleStoredPropertyListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGenerationEX) ;
  return p->mObject.mProperty_mNeedsValidation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @simpleStoredPropertyListForGenerationEX type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyListForGenerationEX ("simpleStoredPropertyListForGenerationEX",
                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyListForGenerationEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyListForGenerationEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_simpleStoredPropertyListForGenerationEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyListForGenerationEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX GALGAS_simpleStoredPropertyListForGenerationEX::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGenerationEX result ;
  const GALGAS_simpleStoredPropertyListForGenerationEX * p = (const GALGAS_simpleStoredPropertyListForGenerationEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyListForGenerationEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyListForGenerationEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity::GALGAS_propertyMultiplicity (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::constructor_single (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  result.mEnum = kEnum_single ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::constructor_collection (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  result.mEnum = kEnum_collection ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_propertyMultiplicity [3] = {
  "(not built)",
  "single",
  "collection"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMultiplicity::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_single == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMultiplicity::getter_isCollection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_collection == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMultiplicity::description (C_String & ioString,
                                               const int32_t /* inIndentation */) const {
  ioString << "<enum @propertyMultiplicity: " << gEnumNameArrayFor_propertyMultiplicity [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyMultiplicity::objectCompare (const GALGAS_propertyMultiplicity & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @propertyMultiplicity type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMultiplicity ("propertyMultiplicity",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyMultiplicity::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyMultiplicity::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMultiplicity (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  const GALGAS_propertyMultiplicity * p = (const GALGAS_propertyMultiplicity *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMultiplicity *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMultiplicity", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_propertyMap::cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_propertyKind & in_mKind,
                                                  const GALGAS_actionMap & in_mActionMap
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mActionMap (in_mActionMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mActionMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mKind, mProperty_mActionMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_propertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_propertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyMap * operand = (cMapElement_propertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap::GALGAS_propertyMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap::GALGAS_propertyMap (const GALGAS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap & GALGAS_propertyMap::operator = (const GALGAS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::constructor_mapWithMapToOverride (const GALGAS_propertyMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_propertyKind & inArgument0,
                                              const GALGAS_actionMap & inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_propertyKind inArgument0,
                                           GALGAS_actionMap inArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_propertyMap_searchKey = "there is no '%K' property" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_propertyKind & outArgument0,
                                           GALGAS_actionMap & outArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mActionMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_propertyMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_propertyMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::setter_setMKindForKey (GALGAS_propertyKind inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mActionMap) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_propertyMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap cEnumerator_propertyMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mActionMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @propertyMap type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  const GALGAS_propertyMap * p = (const GALGAS_propertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@toOnePropertyGenerationList' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toOnePropertyGenerationList : public cCollectionElement {
  public : GALGAS_toOnePropertyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGeneration & in_mProperty
                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGeneration & in_mProperty
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toOnePropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toOnePropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toOnePropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toOnePropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toOnePropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOnePropertyGenerationList * operand = (cCollectionElement_toOnePropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOnePropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList::GALGAS_toOnePropertyGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList::GALGAS_toOnePropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOnePropertyGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::constructor_listWithValue (const GALGAS_toOnePropertyGeneration & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toOnePropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toOnePropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_toOnePropertyGeneration & in_mProperty
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::addAssign_operation (const GALGAS_toOnePropertyGeneration & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::setter_append (GALGAS_toOnePropertyGenerationList_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::setter_insertAtIndex (const GALGAS_toOnePropertyGeneration inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::setter_removeAtIndex (GALGAS_toOnePropertyGeneration & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::setter_popFirst (GALGAS_toOnePropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::setter_popLast (GALGAS_toOnePropertyGeneration & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::method_first (GALGAS_toOnePropertyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::method_last (GALGAS_toOnePropertyGeneration & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::add_operation (const GALGAS_toOnePropertyGenerationList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList::plusAssign_operation (const GALGAS_toOnePropertyGenerationList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  GALGAS_toOnePropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toOnePropertyGenerationList::cEnumerator_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element cEnumerator_toOnePropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration cEnumerator_toOnePropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @toOnePropertyGenerationList type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGenerationList ("toOnePropertyGenerationList",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOnePropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOnePropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList result ;
  const GALGAS_toOnePropertyGenerationList * p = (const GALGAS_toOnePropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOnePropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@toOneRelationshipListEX typeInventory'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_toOneRelationshipListEX inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipListEX temp_0 = inObject ;
  cEnumerator_toOneRelationshipListEX enumerator_9773 (temp_0, kENUMERATION_UP) ;
  while (enumerator_9773.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_9876 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_9773.current_mDestinationEntityName (HERE), joker_9876 COMMA_SOURCE_FILE ("to-one-relationship.galgas", 248)) ;
    }
    enumerator_9773.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@toOneRelationshipListEX buildObservablePropertyMap'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_toOneRelationshipListEX inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipListEX temp_0 = inObject ;
  cEnumerator_toOneRelationshipListEX enumerator_10346 (temp_0, kENUMERATION_UP) ;
  while (enumerator_10346.hasCurrentObject ()) {
    GALGAS_typeKind var_type_10436 ;
    GALGAS_actionMap var_actionMap_10451 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_10346.current_mDestinationEntityName (HERE), var_type_10436, var_actionMap_10451, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 266)) ;
    GALGAS_bool var_graphic_10488 ;
    switch (var_type_10436.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_10346.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 271)), GALGAS_string ("a simple type cannot be used as entitytype"), fixItArray1  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 271)) ;
        var_graphic_10488.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_10346.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 273)), GALGAS_string ("an enumeration type cannot be used as entitytype"), fixItArray2  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 273)) ;
        var_graphic_10488.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10346.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 275)), GALGAS_string ("a class type cannot be used as entitytype"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 275)) ;
        var_graphic_10488.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_10346.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 277)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 277)) ;
        var_graphic_10488.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_11130 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type_10436.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isGraphic = extractPtr_11130->mAssociatedValue1 ;
        var_graphic_10488 = extractedValue_isGraphic ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_10346.current_mToOneRelationshipName (HERE), GALGAS_propertyKind::constructor_toOne (enumerator_10346.current_mDestinationEntityName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.galgas", 284)), var_graphic_10488  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 284)), enumerator_10346.current_mOppositeRelationshipName (HERE).getter_string (HERE), var_actionMap_10451, enumerator_10346.current_mCascading (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 282)) ;
    }
    enumerator_10346.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@toOneRelationshipListEX semanticAnalysis'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_toOneRelationshipListEX inObject,
                                       const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                       GALGAS_toOneEntityRelationshipListForGeneration & outArgument_outToOneEntityRelationshipListForGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToOneEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToOneEntityRelationshipListForGeneration = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("to-one-relationship.galgas", 300)) ;
  const GALGAS_toOneRelationshipListEX temp_0 = inObject ;
  cEnumerator_toOneRelationshipListEX enumerator_11957 (temp_0, kENUMERATION_UP) ;
  while (enumerator_11957.hasCurrentObject ()) {
    GALGAS_typeKind var_type_12043 ;
    GALGAS_actionMap joker_12045 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (enumerator_11957.current_mDestinationEntityName (HERE), var_type_12043, joker_12045, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 302)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap_12208 ;
    GALGAS_objectKind joker_12216 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (enumerator_11957.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap_12208, joker_12216, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 303)) ;
    outArgument_outToOneEntityRelationshipListForGeneration.addAssign_operation (enumerator_11957.current_mToOneRelationshipName (HERE).getter_string (HERE), var_type_12043, enumerator_11957.current_mOppositeRelationshipName (HERE).getter_string (HERE), enumerator_11957.current_mInverseRelationMultiplicity (HERE), var_destinationEntityObservablePropertyMap_12208, enumerator_11957.current_mCascading (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 308)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_11957.current_mOppositeRelationshipName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_propertyKind var_oppositeKind_12700 ;
        GALGAS_string var_oppositeOfOpposite_12741 ;
        GALGAS_actionMap joker_12752_2 ; // Joker input parameter
        GALGAS_bool joker_12752_1 ; // Joker input parameter
        var_destinationEntityObservablePropertyMap_12208.method_searchForInverseRelationship (enumerator_11957.current_mOppositeRelationshipName (HERE), var_oppositeKind_12700, var_oppositeOfOpposite_12741, joker_12752_2, joker_12752_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 317)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (var_oppositeKind_12700, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 324)).objectCompare (enumerator_11957.current_mCurrentEntityName (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 325)), GALGAS_string ("the type of the opposite property '").add_operation (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_string (SOURCE_FILE ("to-one-relationship.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 326)).add_operation (GALGAS_string ("' should be '"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 326)).add_operation (enumerator_11957.current_mCurrentEntityName (HERE).getter_string (SOURCE_FILE ("to-one-relationship.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 327)).add_operation (GALGAS_string ("' (found '"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 327)).add_operation (extensionGetter_swiftTypeName (var_oppositeKind_12700, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 327)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 327)), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 325)) ;
          }
        }
        switch (var_oppositeKind_12700.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 331)), GALGAS_string ("a property cannot be an opposite of a relationship"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 331)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_13611 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_oppositeKind_12700.unsafePointer ()) ;
            const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_13611->mAssociatedValue1 ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("to-one-relationship.galgas", 333)).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 334)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 334)) ;
              }
            }
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsNotEqual, enumerator_11957.current_mInverseRelationMultiplicity (HERE).objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("to-one-relationship.galgas", 336)))).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 337)), GALGAS_string ("inverse relationship multiplicity error (toMany <-> toOne)"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 337)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const cEnumAssociatedValues_propertyKind_toOne * extractPtr_13974 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_oppositeKind_12700.unsafePointer ()) ;
            const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_13974->mAssociatedValue1 ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("to-one-relationship.galgas", 340)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 341)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray10  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 341)) ;
              }
            }
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsNotEqual, enumerator_11957.current_mInverseRelationMultiplicity (HERE).objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("to-one-relationship.galgas", 343)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 344)), GALGAS_string ("inverse relationship multiplicity error (toMany <-> toOne)"), fixItArray12  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 344)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 347)), GALGAS_string ("an array controller cannot be an opposite of a relationship"), fixItArray13  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 347)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 349)), GALGAS_string ("a selection controller cannot be an opposite of a relationship"), fixItArray14  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 349)) ;
          }
          break ;
        }
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite_12741.objectCompare (enumerator_11957.current_mToOneRelationshipName (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_11957.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 352)), GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_11957.current_mToOneRelationshipName (HERE).getter_string (SOURCE_FILE ("to-one-relationship.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 352)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 353)), fixItArray16  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 352)) ;
          }
        }
      }
    }
    enumerator_11957.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Class for element of '@toOneEntityRelationshipListForGeneration' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toOneEntityRelationshipListForGeneration : public cCollectionElement {
  public : GALGAS_toOneEntityRelationshipListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_string & in_mToOneRelationshipName,
                                                                        const GALGAS_typeKind & in_mRelationshipType,
                                                                        const GALGAS_string & in_mOppositeRelationshipName,
                                                                        const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                        const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                        const GALGAS_bool & in_mCascading
                                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneEntityRelationshipListForGeneration::cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_string & in_mToOneRelationshipName,
                                                                                                                          const GALGAS_typeKind & in_mRelationshipType,
                                                                                                                          const GALGAS_string & in_mOppositeRelationshipName,
                                                                                                                          const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                                                          const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                                                          const GALGAS_bool & in_mCascading
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mToOneRelationshipName, in_mRelationshipType, in_mOppositeRelationshipName, in_mInverseRelationMultiplicity, in_mDestinationEntityObservablePropertyMap, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneEntityRelationshipListForGeneration::cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mToOneRelationshipName, inElement.mProperty_mRelationshipType, inElement.mProperty_mOppositeRelationshipName, inElement.mProperty_mInverseRelationMultiplicity, inElement.mProperty_mDestinationEntityObservablePropertyMap, inElement.mProperty_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toOneEntityRelationshipListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toOneEntityRelationshipListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toOneEntityRelationshipListForGeneration (mObject.mProperty_mToOneRelationshipName, mObject.mProperty_mRelationshipType, mObject.mProperty_mOppositeRelationshipName, mObject.mProperty_mInverseRelationMultiplicity, mObject.mProperty_mDestinationEntityObservablePropertyMap, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toOneEntityRelationshipListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToOneRelationshipName" ":" ;
  mObject.mProperty_mToOneRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRelationshipType" ":" ;
  mObject.mProperty_mRelationshipType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOppositeRelationshipName" ":" ;
  mObject.mProperty_mOppositeRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationMultiplicity" ":" ;
  mObject.mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityObservablePropertyMap" ":" ;
  mObject.mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toOneEntityRelationshipListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOneEntityRelationshipListForGeneration * operand = (cCollectionElement_toOneEntityRelationshipListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration::GALGAS_toOneEntityRelationshipListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration::GALGAS_toOneEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOneEntityRelationshipListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                            const GALGAS_typeKind & inOperand1,
                                                                                                                            const GALGAS_string & inOperand2,
                                                                                                                            const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                            const GALGAS_observablePropertyMap & inOperand4,
                                                                                                                            const GALGAS_bool & inOperand5
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_toOneEntityRelationshipListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toOneEntityRelationshipListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_string & in_mToOneRelationshipName,
                                                                                 const GALGAS_typeKind & in_mRelationshipType,
                                                                                 const GALGAS_string & in_mOppositeRelationshipName,
                                                                                 const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                 const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                 const GALGAS_bool & in_mCascading
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (in_mToOneRelationshipName,
                                                                              in_mRelationshipType,
                                                                              in_mOppositeRelationshipName,
                                                                              in_mInverseRelationMultiplicity,
                                                                              in_mDestinationEntityObservablePropertyMap,
                                                                              in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                           const GALGAS_typeKind & inOperand1,
                                                                           const GALGAS_string & inOperand2,
                                                                           const GALGAS_propertyMultiplicity & inOperand3,
                                                                           const GALGAS_observablePropertyMap & inOperand4,
                                                                           const GALGAS_bool & inOperand5
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_append (GALGAS_toOneEntityRelationshipListForGeneration_2D_element inElement,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                            const GALGAS_typeKind inOperand1,
                                                                            const GALGAS_string inOperand2,
                                                                            const GALGAS_propertyMultiplicity inOperand3,
                                                                            const GALGAS_observablePropertyMap inOperand4,
                                                                            const GALGAS_bool inOperand5,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                            GALGAS_typeKind & outOperand1,
                                                                            GALGAS_string & outOperand2,
                                                                            GALGAS_propertyMultiplicity & outOperand3,
                                                                            GALGAS_observablePropertyMap & outOperand4,
                                                                            GALGAS_bool & outOperand5,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
      outOperand1 = p->mObject.mProperty_mRelationshipType ;
      outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
      outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
      outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
      outOperand5 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_propertyMultiplicity & outOperand3,
                                                                       GALGAS_observablePropertyMap & outOperand4,
                                                                       GALGAS_bool & outOperand5,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                      GALGAS_typeKind & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_propertyMultiplicity & outOperand3,
                                                                      GALGAS_observablePropertyMap & outOperand4,
                                                                      GALGAS_bool & outOperand5,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                    GALGAS_typeKind & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_propertyMultiplicity & outOperand3,
                                                                    GALGAS_observablePropertyMap & outOperand4,
                                                                    GALGAS_bool & outOperand5,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                   GALGAS_typeKind & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   GALGAS_propertyMultiplicity & outOperand3,
                                                                   GALGAS_observablePropertyMap & outOperand4,
                                                                   GALGAS_bool & outOperand5,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::add_operation (const GALGAS_toOneEntityRelationshipListForGeneration & inOperand,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::plusAssign_operation (const GALGAS_toOneEntityRelationshipListForGeneration inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration::getter_mToOneRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toOneEntityRelationshipListForGeneration::getter_mRelationshipTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration::getter_mOppositeRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneEntityRelationshipListForGeneration::getter_mInverseRelationMultiplicityAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_propertyMultiplicity result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toOneEntityRelationshipListForGeneration::getter_mDestinationEntityObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneEntityRelationshipListForGeneration::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toOneEntityRelationshipListForGeneration::cEnumerator_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element cEnumerator_toOneEntityRelationshipListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toOneEntityRelationshipListForGeneration::current_mToOneRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_toOneEntityRelationshipListForGeneration::current_mRelationshipType (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toOneEntityRelationshipListForGeneration::current_mOppositeRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cEnumerator_toOneEntityRelationshipListForGeneration::current_mInverseRelationMultiplicity (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_toOneEntityRelationshipListForGeneration::current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toOneEntityRelationshipListForGeneration::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @toOneEntityRelationshipListForGeneration type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration ("toOneEntityRelationshipListForGeneration",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneEntityRelationshipListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneEntityRelationshipListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneEntityRelationshipListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  const GALGAS_toOneEntityRelationshipListForGeneration * p = (const GALGAS_toOneEntityRelationshipListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneEntityRelationshipListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneEntityRelationshipListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_toManyPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRelationshipType.objectCompare (p->mProperty_mRelationshipType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOppositeRelationshipName.objectCompare (p->mProperty_mOppositeRelationshipName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_toManyPropertyGeneration::objectCompare (const GALGAS_toManyPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGeneration::GALGAS_toManyPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGeneration::GALGAS_toManyPropertyGeneration (const cPtr_toManyPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyPropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                  const GALGAS_propertyKind & inAttribute_mRelationshipType,
                                                                                  const GALGAS_string & inAttribute_mOppositeRelationshipName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mRelationshipType.isValid () && inAttribute_mOppositeRelationshipName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyPropertyGeneration (inAttribute_mPropertyName, inAttribute_mRelationshipType, inAttribute_mOppositeRelationshipName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_toManyPropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    result = p->mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cPtr_toManyPropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyPropertyGeneration::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    result = p->mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_toManyPropertyGeneration::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @toManyPropertyGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toManyPropertyGeneration::cPtr_toManyPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                              const GALGAS_propertyKind & in_mRelationshipType,
                                                              const GALGAS_string & in_mOppositeRelationshipName
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mRelationshipType (in_mRelationshipType),
mProperty_mOppositeRelationshipName (in_mOppositeRelationshipName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_toManyPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

void cPtr_toManyPropertyGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@toManyPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toManyPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyPropertyGeneration (mProperty_mPropertyName, mProperty_mRelationshipType, mProperty_mOppositeRelationshipName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @toManyPropertyGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGeneration ("toManyPropertyGeneration",
                                                 & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration result ;
  const GALGAS_toManyPropertyGeneration * p = (const GALGAS_toManyPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@toManyRelationshipListEX typeInventory'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_toManyRelationshipListEX inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipListEX temp_0 = inObject ;
  cEnumerator_toManyRelationshipListEX enumerator_9345 (temp_0, kENUMERATION_UP) ;
  while (enumerator_9345.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_9448 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_9345.current_mDestinationEntityName (HERE), joker_9448 COMMA_SOURCE_FILE ("to-many-relationship.galgas", 238)) ;
    }
    enumerator_9345.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@toManyRelationshipListEX buildObservablePropertyMap'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_toManyRelationshipListEX inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipListEX temp_0 = inObject ;
  cEnumerator_toManyRelationshipListEX enumerator_9919 (temp_0, kENUMERATION_UP) ;
  while (enumerator_9919.hasCurrentObject ()) {
    GALGAS_typeKind var_type_10009 ;
    GALGAS_actionMap var_actionMap_10024 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_9919.current_mDestinationEntityName (HERE), var_type_10009, var_actionMap_10024, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 256)) ;
    GALGAS_bool var_graphic_10061 ;
    switch (var_type_10009.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_9919.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 261)), GALGAS_string ("a simple type cannot be used as entitytype"), fixItArray1  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 261)) ;
        var_graphic_10061.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9919.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 263)), GALGAS_string ("an enumeration type cannot be used as entitytype"), fixItArray2  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 263)) ;
        var_graphic_10061.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9919.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 265)), GALGAS_string ("a class type cannot be used as entitytype"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 265)) ;
        var_graphic_10061.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_9919.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 267)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 267)) ;
        var_graphic_10061.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_10703 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type_10009.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isGraphic = extractPtr_10703->mAssociatedValue1 ;
        var_graphic_10061 = extractedValue_isGraphic ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_9919.current_mToManyRelationshipName (HERE), GALGAS_propertyKind::constructor_toMany (enumerator_9919.current_mDestinationEntityName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-many-relationship.galgas", 274)), var_graphic_10061, GALGAS_bool (true)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 274)), enumerator_9919.current_mOppositeRelationshipName (HERE).getter_string (HERE), var_actionMap_10024, enumerator_9919.current_mCascading (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 272)) ;
    }
    enumerator_9919.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@toManyRelationshipListEX semanticAnalysis'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_toManyRelationshipListEX inObject,
                                       const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                       GALGAS_toManyEntityRelationshipListForGeneration & outArgument_outToManyEntityRelationshipListForGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToManyEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToManyEntityRelationshipListForGeneration = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("to-many-relationship.galgas", 290)) ;
  const GALGAS_toManyRelationshipListEX temp_0 = inObject ;
  cEnumerator_toManyRelationshipListEX enumerator_11552 (temp_0, kENUMERATION_UP) ;
  while (enumerator_11552.hasCurrentObject ()) {
    GALGAS_typeKind var_type_11638 ;
    GALGAS_actionMap joker_11640 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (enumerator_11552.current_mDestinationEntityName (HERE), var_type_11638, joker_11640, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 292)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap_11803 ;
    GALGAS_objectKind joker_11811 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (enumerator_11552.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap_11803, joker_11811, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 293)) ;
    outArgument_outToManyEntityRelationshipListForGeneration.addAssign_operation (enumerator_11552.current_mToManyRelationshipName (HERE).getter_string (HERE), var_type_11638, enumerator_11552.current_mOppositeRelationshipName (HERE).getter_string (HERE), var_destinationEntityObservablePropertyMap_11803, enumerator_11552.current_mCascading (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 298)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_11552.current_mOppositeRelationshipName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_propertyKind var_oppositeKind_12261 ;
        GALGAS_string var_oppositeOfOpposite_12302 ;
        GALGAS_actionMap joker_12313_2 ; // Joker input parameter
        GALGAS_bool joker_12313_1 ; // Joker input parameter
        var_destinationEntityObservablePropertyMap_11803.method_searchForInverseRelationship (enumerator_11552.current_mOppositeRelationshipName (HERE), var_oppositeKind_12261, var_oppositeOfOpposite_12302, joker_12313_2, joker_12313_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 306)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (var_oppositeKind_12261, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 312)).objectCompare (enumerator_11552.current_mCurrentEntityName (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_11552.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 313)), GALGAS_string ("the type of the opposite property '").add_operation (enumerator_11552.current_mOppositeRelationshipName (HERE).getter_string (SOURCE_FILE ("to-many-relationship.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 314)).add_operation (GALGAS_string ("' should be '"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 314)).add_operation (enumerator_11552.current_mCurrentEntityName (HERE).getter_string (SOURCE_FILE ("to-many-relationship.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 315)).add_operation (GALGAS_string ("' (found '"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 315)).add_operation (extensionGetter_swiftTypeName (var_oppositeKind_12261, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 315)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 315)), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 313)) ;
          }
        }
        switch (var_oppositeKind_12261.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_11552.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 319)), GALGAS_string ("a property cannot be an opposite of a relationship"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 319)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_12964 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_oppositeKind_12261.unsafePointer ()) ;
            const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_12964->mAssociatedValue1 ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("to-many-relationship.galgas", 321)).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (enumerator_11552.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 322)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 322)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const cEnumAssociatedValues_propertyKind_toOne * extractPtr_13154 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_oppositeKind_12261.unsafePointer ()) ;
            const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_13154->mAssociatedValue1 ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("to-many-relationship.galgas", 325)).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (enumerator_11552.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 326)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 326)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_11552.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 329)), GALGAS_string ("an array controller cannot be an opposite of a relationship"), fixItArray9  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 329)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_11552.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 331)), GALGAS_string ("a selection controller cannot be an opposite of a relationship"), fixItArray10  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 331)) ;
          }
          break ;
        }
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite_12302.objectCompare (enumerator_11552.current_mToManyRelationshipName (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_11552.current_mOppositeRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 334)), GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_11552.current_mToManyRelationshipName (HERE).getter_string (SOURCE_FILE ("to-many-relationship.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 334)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 335)), fixItArray12  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 334)) ;
          }
        }
      }
    }
    enumerator_11552.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Class for element of '@toManyEntityRelationshipListForGeneration' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toManyEntityRelationshipListForGeneration : public cCollectionElement {
  public : GALGAS_toManyEntityRelationshipListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_string & in_mToManyRelationshipName,
                                                                         const GALGAS_typeKind & in_mRelationshipType,
                                                                         const GALGAS_string & in_mOppositeRelationshipName,
                                                                         const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                         const GALGAS_bool & in_mCascading
                                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyEntityRelationshipListForGeneration::cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_string & in_mToManyRelationshipName,
                                                                                                                            const GALGAS_typeKind & in_mRelationshipType,
                                                                                                                            const GALGAS_string & in_mOppositeRelationshipName,
                                                                                                                            const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                                                            const GALGAS_bool & in_mCascading
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mToManyRelationshipName, in_mRelationshipType, in_mOppositeRelationshipName, in_mDestinationEntityObservablePropertyMap, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyEntityRelationshipListForGeneration::cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mToManyRelationshipName, inElement.mProperty_mRelationshipType, inElement.mProperty_mOppositeRelationshipName, inElement.mProperty_mDestinationEntityObservablePropertyMap, inElement.mProperty_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toManyEntityRelationshipListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toManyEntityRelationshipListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyEntityRelationshipListForGeneration (mObject.mProperty_mToManyRelationshipName, mObject.mProperty_mRelationshipType, mObject.mProperty_mOppositeRelationshipName, mObject.mProperty_mDestinationEntityObservablePropertyMap, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toManyEntityRelationshipListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToManyRelationshipName" ":" ;
  mObject.mProperty_mToManyRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRelationshipType" ":" ;
  mObject.mProperty_mRelationshipType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOppositeRelationshipName" ":" ;
  mObject.mProperty_mOppositeRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityObservablePropertyMap" ":" ;
  mObject.mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toManyEntityRelationshipListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyEntityRelationshipListForGeneration * operand = (cCollectionElement_toManyEntityRelationshipListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration::GALGAS_toManyEntityRelationshipListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration::GALGAS_toManyEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyEntityRelationshipListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_typeKind & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_observablePropertyMap & inOperand3,
                                                                                                                              const GALGAS_bool & inOperand4
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toManyEntityRelationshipListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyEntityRelationshipListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GALGAS_string & in_mToManyRelationshipName,
                                                                                  const GALGAS_typeKind & in_mRelationshipType,
                                                                                  const GALGAS_string & in_mOppositeRelationshipName,
                                                                                  const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                  const GALGAS_bool & in_mCascading
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (in_mToManyRelationshipName,
                                                                               in_mRelationshipType,
                                                                               in_mOppositeRelationshipName,
                                                                               in_mDestinationEntityObservablePropertyMap,
                                                                               in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                            const GALGAS_typeKind & inOperand1,
                                                                            const GALGAS_string & inOperand2,
                                                                            const GALGAS_observablePropertyMap & inOperand3,
                                                                            const GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_append (GALGAS_toManyEntityRelationshipListForGeneration_2D_element inElement,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                             const GALGAS_typeKind inOperand1,
                                                                             const GALGAS_string inOperand2,
                                                                             const GALGAS_observablePropertyMap inOperand3,
                                                                             const GALGAS_bool inOperand4,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                             GALGAS_typeKind & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             GALGAS_observablePropertyMap & outOperand3,
                                                                             GALGAS_bool & outOperand4,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
      outOperand1 = p->mObject.mProperty_mRelationshipType ;
      outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
      outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
      outOperand4 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                        GALGAS_typeKind & outOperand1,
                                                                        GALGAS_string & outOperand2,
                                                                        GALGAS_observablePropertyMap & outOperand3,
                                                                        GALGAS_bool & outOperand4,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_observablePropertyMap & outOperand3,
                                                                       GALGAS_bool & outOperand4,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                     GALGAS_typeKind & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     GALGAS_observablePropertyMap & outOperand3,
                                                                     GALGAS_bool & outOperand4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                    GALGAS_typeKind & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_observablePropertyMap & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::add_operation (const GALGAS_toManyEntityRelationshipListForGeneration & inOperand,
                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::plusAssign_operation (const GALGAS_toManyEntityRelationshipListForGeneration inOperand,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration::getter_mToManyRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toManyEntityRelationshipListForGeneration::getter_mRelationshipTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration::getter_mOppositeRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toManyEntityRelationshipListForGeneration::getter_mDestinationEntityObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyEntityRelationshipListForGeneration::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toManyEntityRelationshipListForGeneration::cEnumerator_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element cEnumerator_toManyEntityRelationshipListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toManyEntityRelationshipListForGeneration::current_mToManyRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_toManyEntityRelationshipListForGeneration::current_mRelationshipType (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toManyEntityRelationshipListForGeneration::current_mOppositeRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_toManyEntityRelationshipListForGeneration::current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toManyEntityRelationshipListForGeneration::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @toManyEntityRelationshipListForGeneration type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration ("toManyEntityRelationshipListForGeneration",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyEntityRelationshipListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyEntityRelationshipListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyEntityRelationshipListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  const GALGAS_toManyEntityRelationshipListForGeneration * p = (const GALGAS_toManyEntityRelationshipListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyEntityRelationshipListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyEntityRelationshipListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_atomicArrayGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicArrayGeneration * p = (const cPtr_atomicArrayGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicArrayGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_atomicArrayGeneration::objectCompare (const GALGAS_atomicArrayGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicArrayGeneration::GALGAS_atomicArrayGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicArrayGeneration GALGAS_atomicArrayGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_atomicArrayGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                        GALGAS_string::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicArrayGeneration::GALGAS_atomicArrayGeneration (const cPtr_atomicArrayGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicArrayGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicArrayGeneration GALGAS_atomicArrayGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                            const GALGAS_string & inAttribute_mElementTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_atomicArrayGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mElementTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicArrayGeneration (inAttribute_mPropertyName, inAttribute_mElementTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_atomicArrayGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicArrayGeneration * p = (const cPtr_atomicArrayGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicArrayGeneration) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_atomicArrayGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @atomicArrayGeneration class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_atomicArrayGeneration::cPtr_atomicArrayGeneration (const GALGAS_string & in_mPropertyName,
                                                        const GALGAS_string & in_mElementTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mElementTypeName (in_mElementTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_atomicArrayGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicArrayGeneration ;
}

void cPtr_atomicArrayGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@atomicArrayGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_atomicArrayGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicArrayGeneration (mProperty_mPropertyName, mProperty_mElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @atomicArrayGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicArrayGeneration ("atomicArrayGeneration",
                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicArrayGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicArrayGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicArrayGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicArrayGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicArrayGeneration GALGAS_atomicArrayGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicArrayGeneration result ;
  const GALGAS_atomicArrayGeneration * p = (const GALGAS_atomicArrayGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicArrayGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicArrayGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Class for element of '@validationStubRoutineListForGeneration' list                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_validationStubRoutineListForGeneration : public cCollectionElement {
  public : GALGAS_validationStubRoutineListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_string & in_mObjectTypeName,
                                                                      const GALGAS_string & in_mModelName,
                                                                      const GALGAS_string & in_mModelTypeName
                                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_string & in_mObjectTypeName,
                                                                                                                      const GALGAS_string & in_mModelName,
                                                                                                                      const GALGAS_string & in_mModelTypeName
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mObjectTypeName, in_mModelName, in_mModelTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mObjectTypeName, inElement.mProperty_mModelName, inElement.mProperty_mModelTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_validationStubRoutineListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_validationStubRoutineListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_validationStubRoutineListForGeneration (mObject.mProperty_mObjectTypeName, mObject.mProperty_mModelName, mObject.mProperty_mModelTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_validationStubRoutineListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectTypeName" ":" ;
  mObject.mProperty_mObjectTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelName" ":" ;
  mObject.mProperty_mModelName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelTypeName" ":" ;
  mObject.mProperty_mModelTypeName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_validationStubRoutineListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_validationStubRoutineListForGeneration * operand = (cCollectionElement_validationStubRoutineListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_validationStubRoutineListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_validationStubRoutineListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_validationStubRoutineListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_string & in_mObjectTypeName,
                                                                               const GALGAS_string & in_mModelName,
                                                                               const GALGAS_string & in_mModelTypeName
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (in_mObjectTypeName,
                                                                            in_mModelName,
                                                                            in_mModelTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_string & inOperand1,
                                                                         const GALGAS_string & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::setter_append (GALGAS_validationStubRoutineListForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                          const GALGAS_string inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mObjectTypeName ;
      outOperand1 = p->mObject.mProperty_mModelName ;
      outOperand2 = p->mObject.mProperty_mModelTypeName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::add_operation (const GALGAS_validationStubRoutineListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::plusAssign_operation (const GALGAS_validationStubRoutineListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mObjectTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mObjectTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mModelNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mModelName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mModelTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mModelTypeName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_validationStubRoutineListForGeneration::cEnumerator_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element cEnumerator_validationStubRoutineListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mObjectTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mObjectTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelTypeName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @validationStubRoutineListForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ("validationStubRoutineListForGeneration",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration result ;
  const GALGAS_validationStubRoutineListForGeneration * p = (const GALGAS_validationStubRoutineListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_validationStubRoutineListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_actionMap::cMapElement_actionMap (const GALGAS_lstring & inKey
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_actionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_actionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_actionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_actionMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_actionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_actionMap * operand = (cMapElement_actionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap::GALGAS_actionMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap::GALGAS_actionMap (const GALGAS_actionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap & GALGAS_actionMap::operator = (const GALGAS_actionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_actionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_actionMap::constructor_mapWithMapToOverride (const GALGAS_actionMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_actionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_actionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = NULL ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@actionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionMap::setter_insertKey (GALGAS_lstring inKey,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = NULL ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' action" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_actionMap_searchKey = "the '%K' action is not defined" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionMap::method_searchKey (GALGAS_lstring inKey,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_actionMap_searchKey
                                                                                   COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_actionMap) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_actionMap * GALGAS_actionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * result = (cMapElement_actionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_actionMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_actionMap::cEnumerator_actionMap (const GALGAS_actionMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element cEnumerator_actionMap::current (LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actionMap) ;
  return GALGAS_actionMap_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_actionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @actionMap type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionMap ("actionMap",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_actionMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionMap result ;
  const GALGAS_actionMap * p = (const GALGAS_actionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_actionFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_actionFileGeneration * p = (const cPtr_actionFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_actionFileGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionName.objectCompare (p->mProperty_mActionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_actionFileGeneration::objectCompare (const GALGAS_actionFileGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionFileGeneration::GALGAS_actionFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_actionFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionFileGeneration::GALGAS_actionFileGeneration (const cPtr_actionFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actionFileGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::constructor_new (const GALGAS_string & inAttribute_mClassName,
                                                                          const GALGAS_string & inAttribute_mActionName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mActionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_actionFileGeneration (inAttribute_mClassName, inAttribute_mActionName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionFileGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_actionFileGeneration * p = (const cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_actionFileGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionFileGeneration::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_actionFileGeneration * p = (const cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    result = p->mProperty_mActionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_actionFileGeneration::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @actionFileGeneration class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_actionFileGeneration::cPtr_actionFileGeneration (const GALGAS_string & in_mClassName,
                                                      const GALGAS_string & in_mActionName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mClassName (in_mClassName),
mProperty_mActionName (in_mActionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_actionFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

void cPtr_actionFileGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@actionFileGeneration:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_actionFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_actionFileGeneration (mProperty_mClassName, mProperty_mActionName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @actionFileGeneration type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionFileGeneration ("actionFileGeneration",
                                             & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionFileGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration result ;
  const GALGAS_actionFileGeneration * p = (const GALGAS_actionFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST::GALGAS_multipleBindingComparisonAST (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lower (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lower ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greater (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greater ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_multipleBindingComparisonAST [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lower",
  "lowerOrEqual",
  "greater",
  "greaterOrEqual"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lower == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greater == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingComparisonAST::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @multipleBindingComparisonAST: " << gEnumNameArrayFor_multipleBindingComparisonAST [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_multipleBindingComparisonAST::objectCompare (const GALGAS_multipleBindingComparisonAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @multipleBindingComparisonAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingComparisonAST ("multipleBindingComparisonAST",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multipleBindingComparisonAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multipleBindingComparisonAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingComparisonAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  const GALGAS_multipleBindingComparisonAST * p = (const GALGAS_multipleBindingComparisonAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingComparisonAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingComparisonAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (const cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Pointer class for @abstractBooleanMultipleBindingExpressionAST class                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractBooleanMultipleBindingExpressionAST::cPtr_abstractBooleanMultipleBindingExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @abstractBooleanMultipleBindingExpressionAST type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ("abstractBooleanMultipleBindingExpressionAST",
                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_abstractBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionAST * p = (const GALGAS_abstractBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionAST (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_negateBooleanMultipleBindingExpressionAST::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @negateBooleanMultipleBindingExpressionAST class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mBinding
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mBinding (in_mBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

void cPtr_negateBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionAST:" ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionAST (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @negateBooleanMultipleBindingExpressionAST type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ("negateBooleanMultipleBindingExpressionAST",
                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST * p = (const GALGAS_negateBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_comparisonMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionAST::objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (const cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_comparisonMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingComparisonAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST cPtr_comparisonMultipleBindingExpressionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_comparisonMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @comparisonMultipleBindingExpressionAST class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

void cPtr_comparisonMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@comparisonMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_comparisonMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @comparisonMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ("comparisonMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  const GALGAS_comparisonMultipleBindingExpressionAST * p = (const GALGAS_comparisonMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_andBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_andBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_andBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @andBooleanMultipleBindingExpressionAST class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

void cPtr_andBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@andBooleanMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_andBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @andBooleanMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ("andBooleanMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  const GALGAS_andBooleanMultipleBindingExpressionAST * p = (const GALGAS_andBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_orBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_orBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_orBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @orBooleanMultipleBindingExpressionAST class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

void cPtr_orBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@orBooleanMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_orBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @orBooleanMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ("orBooleanMultipleBindingExpressionAST",
                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  const GALGAS_orBooleanMultipleBindingExpressionAST * p = (const GALGAS_orBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_xorBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorBooleanMultipleBindingExpressionAST * p = (const cPtr_xorBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (const cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionAST * p = (const cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_xorBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionAST * p = (const cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_xorBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @xorBooleanMultipleBindingExpressionAST class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_xorBooleanMultipleBindingExpressionAST::cPtr_xorBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

void cPtr_xorBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@xorBooleanMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @xorBooleanMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ("xorBooleanMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST * p = (const GALGAS_xorBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_observablePropertyInMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mProperty.objectCompare (p->mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_observablePropertyInMultipleBindingExpressionAST::objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (const GALGAS_observablePropertyAST & inAttribute_mProperty
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  if (inAttribute_mProperty.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyInMultipleBindingExpressionAST (inAttribute_mProperty COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST GALGAS_observablePropertyInMultipleBindingExpressionAST::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    result = p->mProperty_mProperty ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST cPtr_observablePropertyInMultipleBindingExpressionAST::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @observablePropertyInMultipleBindingExpressionAST class                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (const GALGAS_observablePropertyAST & in_mProperty
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mProperty (in_mProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@observablePropertyInMultipleBindingExpressionAST:" ;
  mProperty_mProperty.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyInMultipleBindingExpressionAST (mProperty_mProperty COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @observablePropertyInMultipleBindingExpressionAST type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyInMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyInMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST * p = (const GALGAS_observablePropertyInMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyInMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                   Pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractBooleanMultipleBindingExpressionForGeneration::cPtr_abstractBooleanMultipleBindingExpressionForGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @abstractBooleanMultipleBindingExpressionForGeneration type                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ("abstractBooleanMultipleBindingExpressionForGeneration",
                                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mObservedModel.objectCompare (p->mProperty_mObservedModel) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string::constructor_default (HERE)
                                                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_string & inAttribute_mObservedModel
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mObservedModel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (inAttribute_mObservedModel COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_mObservedModel (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mObservedModel ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_mObservedModel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedModel ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModel
                                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mObservedModel (in_mObservedModel) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString << "[@observablePropertyAsBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mObservedModel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (mProperty_mObservedModel COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       @observablePropertyAsBooleanMultipleBindingExpressionForGeneration type                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mBinding
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_negateBooleanMultipleBindingExpressionForGeneration::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                    Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mBinding (in_mBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @negateBooleanMultipleBindingExpressionForGeneration type                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ("negateBooleanMultipleBindingExpressionForGeneration",
                                                                            & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_negateBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_orBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @orBooleanMultipleBindingExpressionForGeneration class                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_orBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@orBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_orBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @orBooleanMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ("orBooleanMultipleBindingExpressionForGeneration",
                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_xorBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (const cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @xorBooleanMultipleBindingExpressionForGeneration class                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_xorBooleanMultipleBindingExpressionForGeneration::cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@xorBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @xorBooleanMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ("xorBooleanMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_andBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @andBooleanMultipleBindingExpressionForGeneration class                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_andBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@andBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_andBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @andBooleanMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ("andBooleanMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_comparisonMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (const cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_comparisonMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionForGeneration::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingComparisonAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST cPtr_comparisonMultipleBindingExpressionForGeneration::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_comparisonMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @comparisonMultipleBindingExpressionForGeneration class                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

void cPtr_comparisonMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@comparisonMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_comparisonMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @comparisonMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ("comparisonMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration * p = (const GALGAS_comparisonMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//   Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBindingEX'    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX> gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeExpressionForMultipleBindingEX (const int32_t inClassIndex,
                                                                 extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX inMethod) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (void) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (NULL,
                                                                                                              freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeExpressionForMultipleBindingEX (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                const GALGAS_observablePropertyMap constin_inRootObservablePropertyMap,
                                                                const GALGAS_semanticContextEX constin_inSemanticContext,
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
    extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.count ()) {
      f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.count ()) {
          f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding> gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeExpressionForMultipleBinding (const int32_t inClassIndex,
                                                               extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding inMethod) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (NULL,
                                                                                                            freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                              const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                                              const GALGAS_semanticContext constin_inSemanticContext,
                                                              const GALGAS_propertyMap constin_inCurrentObservablePropertyMap,
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
    extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
      f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
          f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration observedModelSet'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet> gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_observedModelSet (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet inGetter) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (NULL,
                                                                                                   freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset callExtensionGetter_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_stringset result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.count ()) {
      f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.count ()) {
           f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString> gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_expressionString (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString inGetter) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (NULL,
                                                                                                   freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
      f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
           f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Class for element of '@arrayControllerBoundColumnListAST' list                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerBoundColumnListAST : public cCollectionElement {
  public : GALGAS_arrayControllerBoundColumnListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                 const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                 const GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                                 const GALGAS_lstring & in_mSortPropertyName
                                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_arrayControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerBoundColumnListAST::cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                                                            const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                                                            const GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                                                                            const GALGAS_lstring & in_mSortPropertyName
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mColumnBindingAST, in_mSortPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerBoundColumnListAST::cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_arrayControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mColumnOutletTypeName, inElement.mProperty_mColumnBindingAST, inElement.mProperty_mSortPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerBoundColumnListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerBoundColumnListAST (mObject.mProperty_mColumnName, mObject.mProperty_mColumnOutletTypeName, mObject.mProperty_mColumnBindingAST, mObject.mProperty_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerBoundColumnListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mProperty_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnBindingAST" ":" ;
  mObject.mProperty_mColumnBindingAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyName" ":" ;
  mObject.mProperty_mSortPropertyName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerBoundColumnListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerBoundColumnListAST * operand = (cCollectionElement_arrayControllerBoundColumnListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST::GALGAS_arrayControllerBoundColumnListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST::GALGAS_arrayControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBoundColumnListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_columnBindingAST & inOperand2,
                                                                                                              const GALGAS_lstring & inOperand3
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerBoundColumnListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mColumnName,
                                                                          const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                          const GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                                          const GALGAS_lstring & in_mSortPropertyName
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBoundColumnListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (in_mColumnName,
                                                                       in_mColumnOutletTypeName,
                                                                       in_mColumnBindingAST,
                                                                       in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_columnBindingAST & inOperand2,
                                                                    const GALGAS_lstring & inOperand3
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_append (GALGAS_arrayControllerBoundColumnListAST_2D_element inElement,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_lstring inOperand1,
                                                                     const GALGAS_columnBindingAST inOperand2,
                                                                     const GALGAS_lstring inOperand3,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_lstring & outOperand1,
                                                                     GALGAS_columnBindingAST & outOperand2,
                                                                     GALGAS_lstring & outOperand3,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
      outOperand0 = p->mObject.mProperty_mColumnName ;
      outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
      outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
      outOperand3 = p->mObject.mProperty_mSortPropertyName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_columnBindingAST & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_columnBindingAST & outOperand2,
                                                               GALGAS_lstring & outOperand3,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_columnBindingAST & outOperand2,
                                                             GALGAS_lstring & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_columnBindingAST & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::add_operation (const GALGAS_arrayControllerBoundColumnListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::plusAssign_operation (const GALGAS_arrayControllerBoundColumnListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnOutletTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST GALGAS_arrayControllerBoundColumnListAST::getter_mColumnBindingASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_columnBindingAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnBindingAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerBoundColumnListAST::cEnumerator_arrayControllerBoundColumnListAST (const GALGAS_arrayControllerBoundColumnListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST_2D_element cEnumerator_arrayControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_arrayControllerBoundColumnListAST::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_arrayControllerBoundColumnListAST::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST cEnumerator_arrayControllerBoundColumnListAST::current_mColumnBindingAST (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnBindingAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_arrayControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mSortPropertyName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @arrayControllerBoundColumnListAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST ("arrayControllerBoundColumnListAST",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST result ;
  const GALGAS_arrayControllerBoundColumnListAST * p = (const GALGAS_arrayControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@arrayControllerAttributListAST' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerAttributListAST : public cCollectionElement {
  public : GALGAS_arrayControllerAttributListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                              const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerAttributListAST (const GALGAS_arrayControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerAttributListAST::cCollectionElement_arrayControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                      const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerAttributListAST::cCollectionElement_arrayControllerAttributListAST (const GALGAS_arrayControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerAttributListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerAttributListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerAttributListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeValue" ":" ;
  mObject.mProperty_mAttributeValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerAttributListAST * operand = (cCollectionElement_arrayControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST::GALGAS_arrayControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST::GALGAS_arrayControllerAttributListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerAttributListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_abstractDefaultValue & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerAttributListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerAttributListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_lstring & in_mAttributeName,
                                                                       const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerAttributListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (in_mAttributeName,
                                                                    in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_abstractDefaultValue & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_append (GALGAS_arrayControllerAttributListAST_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_abstractDefaultValue inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_abstractDefaultValue & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
      outOperand0 = p->mObject.mProperty_mAttributeName ;
      outOperand1 = p->mObject.mProperty_mAttributeValue ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                             GALGAS_abstractDefaultValue & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                            GALGAS_abstractDefaultValue & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::method_first (GALGAS_lstring & outOperand0,
                                                          GALGAS_abstractDefaultValue & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::method_last (GALGAS_lstring & outOperand0,
                                                         GALGAS_abstractDefaultValue & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::add_operation (const GALGAS_arrayControllerAttributListAST & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::plusAssign_operation (const GALGAS_arrayControllerAttributListAST inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_arrayControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerAttributListAST::cEnumerator_arrayControllerAttributListAST (const GALGAS_arrayControllerAttributListAST & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST_2D_element cEnumerator_arrayControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_arrayControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cEnumerator_arrayControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @arrayControllerAttributListAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerAttributListAST ("arrayControllerAttributListAST",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerAttributListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerAttributListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST result ;
  const GALGAS_arrayControllerAttributListAST * p = (const GALGAS_arrayControllerAttributListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_arrayControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesManagedObjectContext.objectCompare (p->mProperty_mUsesManagedObjectContext) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_arrayControllerPropertyGeneration::objectCompare (const GALGAS_arrayControllerPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (const cPtr_arrayControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerPropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                    const GALGAS_string & inAttribute_mModelString,
                                                                                                    const GALGAS_string & inAttribute_mOwnerName,
                                                                                                    const GALGAS_bool & inAttribute_mUsesManagedObjectContext
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mOwnerName.isValid () && inAttribute_mUsesManagedObjectContext.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mModelString, inAttribute_mOwnerName, inAttribute_mUsesManagedObjectContext COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    result = p->mProperty_mModelString ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerPropertyGeneration::getter_mUsesManagedObjectContext (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    result = p->mProperty_mUsesManagedObjectContext ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_arrayControllerPropertyGeneration::getter_mUsesManagedObjectContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsesManagedObjectContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @arrayControllerPropertyGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                const GALGAS_string & in_mModelString,
                                                                                const GALGAS_string & in_mOwnerName,
                                                                                const GALGAS_bool & in_mUsesManagedObjectContext
                                                                                COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mUsesManagedObjectContext (in_mUsesManagedObjectContext) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_arrayControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

void cPtr_arrayControllerPropertyGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@arrayControllerPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsesManagedObjectContext.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_arrayControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName, mProperty_mUsesManagedObjectContext COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @arrayControllerPropertyGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ("arrayControllerPropertyGeneration",
                                                          & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration result ;
  const GALGAS_arrayControllerPropertyGeneration * p = (const GALGAS_arrayControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind::GALGAS_arrayControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_classArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_classArray ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_arrayControllerModelKind [4] = {
  "(not built)",
  "entityArray",
  "classArray",
  "transientArray"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isClassArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classArray == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerModelKind::description (C_String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString << "<enum @arrayControllerModelKind: " << gEnumNameArrayFor_arrayControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_arrayControllerModelKind::objectCompare (const GALGAS_arrayControllerModelKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @arrayControllerModelKind type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerModelKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  const GALGAS_arrayControllerModelKind * p = (const GALGAS_arrayControllerModelKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Class for element of '@arrayControllerFilterListForGeneration' list                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerFilterListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerFilterListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_string & in_mFilterPropertyName,
                                                                      const GALGAS_propertyKind & in_mFilterPropertyKind
                                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_arrayControllerFilterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerFilterListForGeneration::cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_string & in_mFilterPropertyName,
                                                                                                                      const GALGAS_propertyKind & in_mFilterPropertyKind
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilterPropertyName, in_mFilterPropertyKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerFilterListForGeneration::cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_arrayControllerFilterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFilterPropertyName, inElement.mProperty_mFilterPropertyKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerFilterListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerFilterListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerFilterListForGeneration (mObject.mProperty_mFilterPropertyName, mObject.mProperty_mFilterPropertyKind COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerFilterListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilterPropertyName" ":" ;
  mObject.mProperty_mFilterPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilterPropertyKind" ":" ;
  mObject.mProperty_mFilterPropertyKind.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerFilterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerFilterListForGeneration * operand = (cCollectionElement_arrayControllerFilterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration::GALGAS_arrayControllerFilterListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration::GALGAS_arrayControllerFilterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerFilterListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_propertyKind & inOperand1
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerFilterListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerFilterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_string & in_mFilterPropertyName,
                                                                               const GALGAS_propertyKind & in_mFilterPropertyKind
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerFilterListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (in_mFilterPropertyName,
                                                                            in_mFilterPropertyKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_propertyKind & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_append (GALGAS_arrayControllerFilterListForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                          const GALGAS_propertyKind inOperand1,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                          GALGAS_propertyKind & outOperand1,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
      outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                     GALGAS_propertyKind & outOperand1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
    outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                    GALGAS_propertyKind & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
    outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                  GALGAS_propertyKind & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
    outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                 GALGAS_propertyKind & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
    outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::add_operation (const GALGAS_arrayControllerFilterListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::plusAssign_operation (const GALGAS_arrayControllerFilterListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerFilterListForGeneration::getter_mFilterPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    result = p->mObject.mProperty_mFilterPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_arrayControllerFilterListForGeneration::getter_mFilterPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    result = p->mObject.mProperty_mFilterPropertyKind ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerFilterListForGeneration::cEnumerator_arrayControllerFilterListForGeneration (const GALGAS_arrayControllerFilterListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element cEnumerator_arrayControllerFilterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerFilterListForGeneration::current_mFilterPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject.mProperty_mFilterPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_arrayControllerFilterListForGeneration::current_mFilterPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject.mProperty_mFilterPropertyKind ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @arrayControllerFilterListForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration ("arrayControllerFilterListForGeneration",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerFilterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerFilterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerFilterListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration result ;
  const GALGAS_arrayControllerFilterListForGeneration * p = (const GALGAS_arrayControllerFilterListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerFilterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerFilterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Class for element of '@arrayControllerBoundColumnListForGeneration' list                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerBoundColumnListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerBoundColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                           const GALGAS_string & in_mColumnOutletTypeName,
                                                                           const GALGAS_string & in_mRunAction,
                                                                           const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerBoundColumnListForGeneration::cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                const GALGAS_string & in_mColumnOutletTypeName,
                                                                                                                                const GALGAS_string & in_mRunAction,
                                                                                                                                const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mRunAction, in_mRegularBindingsGenerationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerBoundColumnListForGeneration::cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mColumnOutletTypeName, inElement.mProperty_mRunAction, inElement.mProperty_mRegularBindingsGenerationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerBoundColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerBoundColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerBoundColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mColumnOutletTypeName, mObject.mProperty_mRunAction, mObject.mProperty_mRegularBindingsGenerationList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerBoundColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mProperty_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunAction" ":" ;
  mObject.mProperty_mRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingsGenerationList" ":" ;
  mObject.mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerBoundColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerBoundColumnListForGeneration * operand = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration::GALGAS_arrayControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration::GALGAS_arrayControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBoundColumnListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                                  const GALGAS_regularBindingsGenerationList & inOperand3
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                    const GALGAS_string & in_mColumnName,
                                                                                    const GALGAS_string & in_mColumnOutletTypeName,
                                                                                    const GALGAS_string & in_mRunAction,
                                                                                    const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (in_mColumnName,
                                                                                 in_mColumnOutletTypeName,
                                                                                 in_mRunAction,
                                                                                 in_mRegularBindingsGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_regularBindingsGenerationList & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_append (GALGAS_arrayControllerBoundColumnListForGeneration_2D_element inElement,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                               const GALGAS_string inOperand1,
                                                                               const GALGAS_string inOperand2,
                                                                               const GALGAS_regularBindingsGenerationList inOperand3,
                                                                               const GALGAS_uint inInsertionIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                               GALGAS_string & outOperand1,
                                                                               GALGAS_string & outOperand2,
                                                                               GALGAS_regularBindingsGenerationList & outOperand3,
                                                                               const GALGAS_uint inRemoveIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mColumnName ;
      outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
      outOperand2 = p->mObject.mProperty_mRunAction ;
      outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          GALGAS_regularBindingsGenerationList & outOperand3,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         GALGAS_string & outOperand2,
                                                                         GALGAS_regularBindingsGenerationList & outOperand3,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                       GALGAS_string & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_regularBindingsGenerationList & outOperand3,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                      GALGAS_string & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_regularBindingsGenerationList & outOperand3,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::add_operation (const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand,
                                                                                                                      C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::plusAssign_operation (const GALGAS_arrayControllerBoundColumnListForGeneration inOperand,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnOutletTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRunAction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_arrayControllerBoundColumnListForGeneration::getter_mRegularBindingsGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerBoundColumnListForGeneration::cEnumerator_arrayControllerBoundColumnListForGeneration (const GALGAS_arrayControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element cEnumerator_arrayControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList cEnumerator_arrayControllerBoundColumnListForGeneration::current_mRegularBindingsGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRegularBindingsGenerationList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @arrayControllerBoundColumnListForGeneration type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration ("arrayControllerBoundColumnListForGeneration",
                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  const GALGAS_arrayControllerBoundColumnListForGeneration * p = (const GALGAS_arrayControllerBoundColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Class for element of '@arrayControllerSortedColumnListForGeneration' list                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerSortedColumnListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerSortedColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                            const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                            const GALGAS_string & in_mObservablePropertyForSorting
                                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerSortedColumnListForGeneration::cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                  const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                                                                  const GALGAS_string & in_mObservablePropertyForSorting
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mSortPropertyKind, in_mObservablePropertyForSorting) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerSortedColumnListForGeneration::cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mSortPropertyKind, inElement.mProperty_mObservablePropertyForSorting) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerSortedColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerSortedColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerSortedColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mSortPropertyKind, mObject.mProperty_mObservablePropertyForSorting COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerSortedColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyKind" ":" ;
  mObject.mProperty_mSortPropertyKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyForSorting" ":" ;
  mObject.mProperty_mObservablePropertyForSorting.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerSortedColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerSortedColumnListForGeneration * operand = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration::GALGAS_arrayControllerSortedColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration::GALGAS_arrayControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerSortedColumnListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_propertyKind & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_arrayControllerSortedColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerSortedColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_string & in_mColumnName,
                                                                                     const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                     const GALGAS_string & in_mObservablePropertyForSorting
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (in_mColumnName,
                                                                                  in_mSortPropertyKind,
                                                                                  in_mObservablePropertyForSorting COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                               const GALGAS_propertyKind & inOperand1,
                                                                               const GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_append (GALGAS_arrayControllerSortedColumnListForGeneration_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                const GALGAS_propertyKind inOperand1,
                                                                                const GALGAS_string inOperand2,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                GALGAS_propertyKind & outOperand1,
                                                                                GALGAS_string & outOperand2,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mColumnName ;
      outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
      outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                           GALGAS_propertyKind & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                          GALGAS_propertyKind & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                        GALGAS_propertyKind & outOperand1,
                                                                        GALGAS_string & outOperand2,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                       GALGAS_propertyKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::add_operation (const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::plusAssign_operation (const GALGAS_arrayControllerSortedColumnListForGeneration inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_arrayControllerSortedColumnListForGeneration::getter_mSortPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mSortPropertyKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration::getter_mObservablePropertyForSortingAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerSortedColumnListForGeneration::cEnumerator_arrayControllerSortedColumnListForGeneration (const GALGAS_arrayControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element cEnumerator_arrayControllerSortedColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerSortedColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_arrayControllerSortedColumnListForGeneration::current_mSortPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mSortPropertyKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerSortedColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mObservablePropertyForSorting ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @arrayControllerSortedColumnListForGeneration type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration ("arrayControllerSortedColumnListForGeneration",
                                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerSortedColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerSortedColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerSortedColumnListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  const GALGAS_arrayControllerSortedColumnListForGeneration * p = (const GALGAS_arrayControllerSortedColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerSortedColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerSortedColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension Getter '@arrayControllerFilterListForGeneration filterCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_filterCode (const GALGAS_arrayControllerFilterListForGeneration & inObject,
                                          const GALGAS_string & constinArgument_inFilterFunction,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerFilterListForGeneration temp_0 = inObject ;
  GALGAS_arrayControllerFilterListForGeneration var_filterProperties_19869 = temp_0 ;
  GALGAS_string var_firstFilterProperty_19932 ;
  {
  GALGAS_propertyKind joker_19934 ; // Joker input parameter
  var_filterProperties_19869.setter_popFirst (var_firstFilterProperty_19932, joker_19934, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 528)) ;
  }
  GALGAS_string var_indent_19953 = GALGAS_string ("            ") ;
  result_outResult = var_indent_19953.add_operation (GALGAS_string ("switch object."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 530)).add_operation (var_firstFilterProperty_19932, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 530)).add_operation (GALGAS_string ("_property_selection {\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 530)) ;
  result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("case .empty :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 531)) ;
  result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 532)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 532)) ;
  result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("case .multiple :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 533)) ;
  result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("  isMultiple = true\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 534)) ;
  result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("case .single (let v1) :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 535)) ;
  GALGAS_uint var_idx_20304 = GALGAS_uint ((uint32_t) 2U) ;
  GALGAS_string var_args_20323 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_blockEnd_20347 = var_indent_19953.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 538)) ;
  cEnumerator_arrayControllerFilterListForGeneration enumerator_20393 (var_filterProperties_19869, kENUMERATION_UP) ;
  while (enumerator_20393.hasCurrentObject ()) {
    var_indent_19953.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 540)) ;
    result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("switch object."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 541)).add_operation (enumerator_20393.current_mFilterPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 541)).add_operation (GALGAS_string ("_property_selection {\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 541)) ;
    result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("case .empty :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 542)) ;
    result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 543)) ;
    result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("case .multiple :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 544)) ;
    result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("  isMultiple = true\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 545)) ;
    result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("case .single (let v"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 546)).add_operation (var_idx_20304.getter_string (SOURCE_FILE ("array-controller.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 546)).add_operation (GALGAS_string (") :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 546)) ;
    var_blockEnd_20347 = var_indent_19953.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 547)).add_operation (var_blockEnd_20347, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 547)) ;
    var_args_20323.plusAssign_operation(GALGAS_string (", v").add_operation (var_idx_20304.getter_string (SOURCE_FILE ("array-controller.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 548)) ;
    var_idx_20304.increment_operation (inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 549)) ;
    enumerator_20393.gotoNextObject () ;
  }
  var_indent_19953.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 551)) ;
  result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("if "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 552)).add_operation (constinArgument_inFilterFunction, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 552)).add_operation (GALGAS_string (" (v1"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 552)).add_operation (var_args_20323, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 552)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 552)) ;
  result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("  filteredArray.append (object)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 553)) ;
  result_outResult.plusAssign_operation(var_indent_19953.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 554)) ;
  result_outResult.plusAssign_operation(var_blockEnd_20347, inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 555)) ;
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_selectionControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectionControllerPropertyGeneration * p = (const cPtr_selectionControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerName.objectCompare (p->mProperty_mModelControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerPropertyName.objectCompare (p->mProperty_mModelControllerPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_selectionControllerPropertyGeneration::objectCompare (const GALGAS_selectionControllerPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerPropertyGeneration::GALGAS_selectionControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectionControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerPropertyGeneration::GALGAS_selectionControllerPropertyGeneration (const cPtr_selectionControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerPropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                            const GALGAS_string & inAttribute_mOwnerName,
                                                                                                            const GALGAS_string & inAttribute_mModelControllerName,
                                                                                                            const GALGAS_string & inAttribute_mModelControllerPropertyName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mOwnerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mOwnerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerPropertyGeneration * p = (const cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerPropertyGeneration::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerPropertyGeneration * p = (const cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    result = p->mProperty_mModelControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerPropertyGeneration::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerPropertyGeneration * p = (const cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    result = p->mProperty_mModelControllerPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @selectionControllerPropertyGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_selectionControllerPropertyGeneration::cPtr_selectionControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                        const GALGAS_string & in_mOwnerName,
                                                                                        const GALGAS_string & in_mModelControllerName,
                                                                                        const GALGAS_string & in_mModelControllerPropertyName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mModelControllerName (in_mModelControllerName),
mProperty_mModelControllerPropertyName (in_mModelControllerPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_selectionControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;
}

void cPtr_selectionControllerPropertyGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@selectionControllerPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selectionControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectionControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mOwnerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @selectionControllerPropertyGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ("selectionControllerPropertyGeneration",
                                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selectionControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selectionControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration result ;
  const GALGAS_selectionControllerPropertyGeneration * p = (const GALGAS_selectionControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Class for element of '@selectionControllerForGeneration' list                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_selectionControllerForGeneration : public cCollectionElement {
  public : GALGAS_selectionControllerForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_selectionControllerForGeneration (const GALGAS_string & in_mOwnerName,
                                                                const GALGAS_string & in_mSelectionControllerName,
                                                                const GALGAS_string & in_mBoundControllerName,
                                                                const GALGAS_string & in_mBoundControllerPropertyName,
                                                                const GALGAS_string & in_mSelectionTypeName,
                                                                const GALGAS_observablePropertyMap & in_mSelectionObservablePropertyMap
                                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GALGAS_string & in_mOwnerName,
                                                                                                          const GALGAS_string & in_mSelectionControllerName,
                                                                                                          const GALGAS_string & in_mBoundControllerName,
                                                                                                          const GALGAS_string & in_mBoundControllerPropertyName,
                                                                                                          const GALGAS_string & in_mSelectionTypeName,
                                                                                                          const GALGAS_observablePropertyMap & in_mSelectionObservablePropertyMap
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOwnerName, in_mSelectionControllerName, in_mBoundControllerName, in_mBoundControllerPropertyName, in_mSelectionTypeName, in_mSelectionObservablePropertyMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOwnerName, inElement.mProperty_mSelectionControllerName, inElement.mProperty_mBoundControllerName, inElement.mProperty_mBoundControllerPropertyName, inElement.mProperty_mSelectionTypeName, inElement.mProperty_mSelectionObservablePropertyMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_selectionControllerForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_selectionControllerForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_selectionControllerForGeneration (mObject.mProperty_mOwnerName, mObject.mProperty_mSelectionControllerName, mObject.mProperty_mBoundControllerName, mObject.mProperty_mBoundControllerPropertyName, mObject.mProperty_mSelectionTypeName, mObject.mProperty_mSelectionObservablePropertyMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_selectionControllerForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOwnerName" ":" ;
  mObject.mProperty_mOwnerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionControllerName" ":" ;
  mObject.mProperty_mSelectionControllerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundControllerName" ":" ;
  mObject.mProperty_mBoundControllerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundControllerPropertyName" ":" ;
  mObject.mProperty_mBoundControllerPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionTypeName" ":" ;
  mObject.mProperty_mSelectionTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionObservablePropertyMap" ":" ;
  mObject.mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_selectionControllerForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_selectionControllerForGeneration * operand = (cCollectionElement_selectionControllerForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_selectionControllerForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration::GALGAS_selectionControllerForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration::GALGAS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                            const GALGAS_string & inOperand1,
                                                                                                            const GALGAS_string & inOperand2,
                                                                                                            const GALGAS_string & inOperand3,
                                                                                                            const GALGAS_string & inOperand4,
                                                                                                            const GALGAS_observablePropertyMap & inOperand5
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_selectionControllerForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_selectionControllerForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_string & in_mOwnerName,
                                                                         const GALGAS_string & in_mSelectionControllerName,
                                                                         const GALGAS_string & in_mBoundControllerName,
                                                                         const GALGAS_string & in_mBoundControllerPropertyName,
                                                                         const GALGAS_string & in_mSelectionTypeName,
                                                                         const GALGAS_observablePropertyMap & in_mSelectionObservablePropertyMap
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_selectionControllerForGeneration (in_mOwnerName,
                                                                      in_mSelectionControllerName,
                                                                      in_mBoundControllerName,
                                                                      in_mBoundControllerPropertyName,
                                                                      in_mSelectionTypeName,
                                                                      in_mSelectionObservablePropertyMap COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                   const GALGAS_string & inOperand1,
                                                                   const GALGAS_string & inOperand2,
                                                                   const GALGAS_string & inOperand3,
                                                                   const GALGAS_string & inOperand4,
                                                                   const GALGAS_observablePropertyMap & inOperand5
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_append (GALGAS_selectionControllerForGeneration_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                    const GALGAS_string inOperand1,
                                                                    const GALGAS_string inOperand2,
                                                                    const GALGAS_string inOperand3,
                                                                    const GALGAS_string inOperand4,
                                                                    const GALGAS_observablePropertyMap inOperand5,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_string & outOperand3,
                                                                    GALGAS_string & outOperand4,
                                                                    GALGAS_observablePropertyMap & outOperand5,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
      outOperand0 = p->mObject.mProperty_mOwnerName ;
      outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
      outOperand2 = p->mObject.mProperty_mBoundControllerName ;
      outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
      outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
      outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               GALGAS_string & outOperand3,
                                                               GALGAS_string & outOperand4,
                                                               GALGAS_observablePropertyMap & outOperand5,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              GALGAS_string & outOperand4,
                                                              GALGAS_observablePropertyMap & outOperand5,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::method_first (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            GALGAS_observablePropertyMap & outOperand5,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::method_last (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           GALGAS_string & outOperand4,
                                                           GALGAS_observablePropertyMap & outOperand5,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::add_operation (const GALGAS_selectionControllerForGeneration & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::plusAssign_operation (const GALGAS_selectionControllerForGeneration inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mOwnerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mSelectionControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBoundControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBoundControllerPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mSelectionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_selectionControllerForGeneration::getter_mSelectionObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_selectionControllerForGeneration::cEnumerator_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element cEnumerator_selectionControllerForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mOwnerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mSelectionControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mSelectionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_selectionControllerForGeneration::current_mSelectionObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionObservablePropertyMap ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @selectionControllerForGeneration type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration ("selectionControllerForGeneration",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selectionControllerForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration result ;
  const GALGAS_selectionControllerForGeneration * p = (const GALGAS_selectionControllerForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@defaultValueList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_defaultValueList : public cCollectionElement {
  public : GALGAS_defaultValueList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_defaultValueList (const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_defaultValueList (const GALGAS_defaultValueList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_defaultValueList::cCollectionElement_defaultValueList (const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDefaultValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_defaultValueList::cCollectionElement_defaultValueList (const GALGAS_defaultValueList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDefaultValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_defaultValueList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_defaultValueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_defaultValueList (mObject.mProperty_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_defaultValueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mObject.mProperty_mDefaultValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_defaultValueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_defaultValueList * operand = (cCollectionElement_defaultValueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_defaultValueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList::GALGAS_defaultValueList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList::GALGAS_defaultValueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_defaultValueList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::constructor_listWithValue (const GALGAS_abstractDefaultValue & inOperand0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_defaultValueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_defaultValueList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_defaultValueList * p = NULL ;
  macroMyNew (p, cCollectionElement_defaultValueList (in_mDefaultValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::addAssign_operation (const GALGAS_abstractDefaultValue & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_append (GALGAS_defaultValueList_2D_element inElement,
                                             C_Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_insertAtIndex (const GALGAS_abstractDefaultValue inOperand0,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_removeAtIndex (GALGAS_abstractDefaultValue & outOperand0,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
      outOperand0 = p->mObject.mProperty_mDefaultValue ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_popFirst (GALGAS_abstractDefaultValue & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mProperty_mDefaultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_popLast (GALGAS_abstractDefaultValue & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mProperty_mDefaultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::method_first (GALGAS_abstractDefaultValue & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mProperty_mDefaultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::method_last (GALGAS_abstractDefaultValue & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mProperty_mDefaultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::add_operation (const GALGAS_defaultValueList & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_defaultValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::plusAssign_operation (const GALGAS_defaultValueList inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_defaultValueList::getter_mDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    result = p->mObject.mProperty_mDefaultValue ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_defaultValueList::cEnumerator_defaultValueList (const GALGAS_defaultValueList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element cEnumerator_defaultValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_defaultValueList * p = (const cCollectionElement_defaultValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cEnumerator_defaultValueList::current_mDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_defaultValueList * p = (const cCollectionElement_defaultValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
  return p->mObject.mProperty_mDefaultValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @defaultValueList type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList ("defaultValueList",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_defaultValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_defaultValueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList result ;
  const GALGAS_defaultValueList * p = (const GALGAS_defaultValueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultValueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultValueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_listAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listAsDefaultValue * p = (const cPtr_listAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mStartLocation.objectCompare (p->mProperty_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValueList.objectCompare (p->mProperty_mDefaultValueList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_listAsDefaultValue::objectCompare (const GALGAS_listAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listAsDefaultValue::GALGAS_listAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listAsDefaultValue GALGAS_listAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_listAsDefaultValue::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_defaultValueList::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listAsDefaultValue::GALGAS_listAsDefaultValue (const cPtr_listAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listAsDefaultValue GALGAS_listAsDefaultValue::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                      const GALGAS_defaultValueList & inAttribute_mDefaultValueList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_listAsDefaultValue result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mDefaultValueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listAsDefaultValue (inAttribute_mStartLocation, inAttribute_mDefaultValueList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_listAsDefaultValue::getter_mStartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_listAsDefaultValue * p = (const cPtr_listAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listAsDefaultValue) ;
    result = p->mProperty_mStartLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_listAsDefaultValue::getter_mStartLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_listAsDefaultValue::getter_mDefaultValueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_defaultValueList result ;
  if (NULL != mObjectPtr) {
    const cPtr_listAsDefaultValue * p = (const cPtr_listAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listAsDefaultValue) ;
    result = p->mProperty_mDefaultValueList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList cPtr_listAsDefaultValue::getter_mDefaultValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @listAsDefaultValue class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_listAsDefaultValue::cPtr_listAsDefaultValue (const GALGAS_location & in_mStartLocation,
                                                  const GALGAS_defaultValueList & in_mDefaultValueList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mStartLocation (in_mStartLocation),
mProperty_mDefaultValueList (in_mDefaultValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_listAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listAsDefaultValue ;
}

void cPtr_listAsDefaultValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@listAsDefaultValue:" ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_listAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listAsDefaultValue (mProperty_mStartLocation, mProperty_mDefaultValueList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @listAsDefaultValue type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listAsDefaultValue ("listAsDefaultValue",
                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_listAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_listAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listAsDefaultValue GALGAS_listAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listAsDefaultValue result ;
  const GALGAS_listAsDefaultValue * p = (const GALGAS_listAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType> gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeDefaultValueType (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType inMethod) {
  gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDefaultValue_analyzeDefaultValueType (void) {
  gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDefaultValue_analyzeDefaultValueType (NULL,
                                                                         freeExtensionMethod_abstractDefaultValue_analyzeDefaultValueType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
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
    extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.count ()) {
      f = gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.count ()) {
          f = gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAttributeActualTypeList, out_outSwiftDefaultValueAsString, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Extension Getter '@typeKind isComparable'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  case GALGAS_typeKind::kEnum_colorType:
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
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Extension Getter '@typeKind isGraphic'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_isGraphic (const GALGAS_typeKind & inObject,
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
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
  case GALGAS_typeKind::kEnum_colorType:
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
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_1092 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_isGraphic = extractPtr_1092->mAssociatedValue1 ;
      result_outResult = extractedValue_isGraphic ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_typeKind & in_mTypeKind,
                                                        const GALGAS_actionMap & in_mActionMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTypeKind (in_mTypeKind),
mProperty_mActionMap (in_mActionMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTypeKind.isValid () && mProperty_mActionMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_mTypeKind, mProperty_mActionMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeKind" ":" ;
  mProperty_mTypeKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeKind.objectCompare (operand->mProperty_mTypeKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton states                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton state names                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton actions                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton transitions                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton final state issues                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_typeKind inArgument0,
                                              GALGAS_actionMap inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type is already declared" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     0,
                     NULL,
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "the '%K' type is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_typeKind & outArgument0,
                                              GALGAS_actionMap & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mProperty_mTypeKind ;
    outArgument1 = p->mProperty_mActionMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_unifiedTypeMap::getter_mTypeKindForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mTypeKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_unifiedTypeMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_setMTypeKindForKey (GALGAS_typeKind inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_mTypeKind = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_unifiedTypeMap::current_mTypeKind (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_mTypeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap cEnumerator_unifiedTypeMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_mActionMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

