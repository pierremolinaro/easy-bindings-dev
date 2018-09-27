#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-6.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'generateOutletClasses'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateOutletClasses (const GALGAS_stringset constinArgument_inNeededOutletClasses,
                                    const GALGAS_string constinArgument_inOutputDirectory,
                                    GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapper var_w_8668 = GALGAS_filewrapper (gWrapperDirectory_0_outletClassGeneration) ;
  cEnumerator_stringset enumerator_8741 (constinArgument_inNeededOutletClasses, kENUMERATION_UP) ;
  while (enumerator_8741.hasCurrentObject ()) {
    GALGAS_string var_s_8754 = var_w_8668.getter_textFileContentsAtPath (GALGAS_string ("/").add_operation (enumerator_8741.current (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 273)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 273)) ;
    GALGAS_string var_fileName_8822 = enumerator_8741.current (HERE).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 274)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_8822  COMMA_SOURCE_FILE ("outlet-class.galgas", 275)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_8822, var_s_8754, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 276)) ;
    }
    enumerator_8741.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'buildBindingSpecificationMapEX'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildBindingSpecificationMapEX (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                             const GALGAS_outletClassMap constinArgument_inOutletClassMap,
                                             const GALGAS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                             GALGAS_bindingSpecificationMap & ioArgument_ioBindingSpecificationMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_outletClassBindingSpecificationList enumerator_4696 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_4696.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4776 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 136)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4837 (enumerator_4696.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4837.hasCurrentObject ()) {
      GALGAS_typeKind var_type_4910 ;
      GALGAS_actionMap joker_4912 ; // Joker input parameter
      constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_4837.current_mModelTypeName (HERE), var_type_4910, joker_4912, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 138)) ;
      var_outletBindingSpecificationModelList_4776.addAssign_operation (var_type_4910, enumerator_4837.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 139)) ;
      enumerator_4837.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5084 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 141)) ;
    cEnumerator_controllerBindingOptionList enumerator_5122 (enumerator_4696.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5122.hasCurrentObject ()) {
      GALGAS_typeKind var_type_5196 ;
      GALGAS_actionMap joker_5198 ; // Joker input parameter
      constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_5122.current_mOptionTypeName (HERE), var_type_5196, joker_5198, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 143)) ;
      var_controllerBindingOptionDecoratedList_5084.addAssign_operation (var_type_5196, enumerator_5122.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 144)) ;
      enumerator_5122.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_5348 ;
    GALGAS_lstring var_outletSuperClassName_5382 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = ioArgument_ioBindingSpecificationMap.getter_hasKey (enumerator_4696.current_mOutletClassName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("binding-specification.galgas", 149)).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        ioArgument_ioBindingSpecificationMap.setter_removeKey (enumerator_4696.current_mOutletClassName (HERE), var_outletSuperClassName_5382, var_bindingMap_5348, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 150)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      var_bindingMap_5348 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("binding-specification.galgas", 152)) ;
      GALGAS_bool joker_5659_6 ; // Joker input parameter
      GALGAS_bool joker_5659_5 ; // Joker input parameter
      GALGAS_bool joker_5659_4 ; // Joker input parameter
      GALGAS_bool joker_5659_3 ; // Joker input parameter
      GALGAS_bool joker_5659_2 ; // Joker input parameter
      GALGAS_bool joker_5659_1 ; // Joker input parameter
      constinArgument_inOutletClassMap.method_searchKey (enumerator_4696.current_mOutletClassName (HERE), var_outletSuperClassName_5382, joker_5659_6, joker_5659_5, joker_5659_4, joker_5659_3, joker_5659_2, joker_5659_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 153)) ;
    }
    {
    var_bindingMap_5348.setter_insertKey (enumerator_4696.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4776, var_controllerBindingOptionDecoratedList_5084, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 155)) ;
    }
    {
    ioArgument_ioBindingSpecificationMap.setter_insertKey (enumerator_4696.current_mOutletClassName (HERE), var_outletSuperClassName_5382, var_bindingMap_5348, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 160)) ;
    }
    enumerator_4696.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'buildBindingSpecificationMap'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildBindingSpecificationMap (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                           const GALGAS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_outletClassBindingSpecificationList enumerator_6229 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_6229.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_6309 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 171)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_6370 (enumerator_6229.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_6370.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_6460 ;
      GALGAS_propertyMap joker_6462_3 ; // Joker input parameter
      GALGAS_actionMap joker_6462_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6462_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (enumerator_6370.current_mModelTypeName (HERE), var_classKind_6460, joker_6462_3, joker_6462_2, joker_6462_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 173)) ;
      GALGAS_typeKind var_typeKind_6490 ;
      switch (var_classKind_6460.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
      case GALGAS_classKind::kEnum_simpleClass:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (enumerator_6370.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 177)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("binding-specification.galgas", 177)) ;
          var_typeKind_6490.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_6683 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6460.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_kind = extractPtr_6683->mAssociatedValue0 ;
          var_typeKind_6490 = extractedValue_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_6370.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 181)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("binding-specification.galgas", 181)) ;
          var_typeKind_6490.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_6370.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 183)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("binding-specification.galgas", 183)) ;
          var_typeKind_6490.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_outletBindingSpecificationModelList_6309.addAssign_operation (var_typeKind_6490, enumerator_6370.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 185)) ;
      enumerator_6370.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_7071 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 187)) ;
    cEnumerator_controllerBindingOptionList enumerator_7109 (enumerator_6229.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7109.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_7200 ;
      GALGAS_propertyMap joker_7202_3 ; // Joker input parameter
      GALGAS_actionMap joker_7202_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_7202_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (enumerator_7109.current_mOptionTypeName (HERE), var_classKind_7200, joker_7202_3, joker_7202_2, joker_7202_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 189)) ;
      GALGAS_typeKind var_typeKind_7230 ;
      switch (var_classKind_7200.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
      case GALGAS_classKind::kEnum_simpleClass:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_7109.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 193)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("binding-specification.galgas", 193)) ;
          var_typeKind_7230.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_7424 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7200.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_kind = extractPtr_7424->mAssociatedValue0 ;
          var_typeKind_7230 = extractedValue_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_7109.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 197)), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("binding-specification.galgas", 197)) ;
          var_typeKind_7230.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_7109.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 199)), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("binding-specification.galgas", 199)) ;
          var_typeKind_7230.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_7071.addAssign_operation (var_typeKind_7230, enumerator_7109.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 201)) ;
      enumerator_7109.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_7792 ;
    GALGAS_lstring var_outletSuperClassName_7826 ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = ioArgument_ioSemanticContext.getter_mBindingSpecificationMap (HERE).getter_hasKey (enumerator_6229.current_mOutletClassName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("binding-specification.galgas", 206)).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_6229.current_mOutletClassName (HERE), var_outletSuperClassName_7826, var_bindingMap_7792, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 207)) ;
        }
      }
    }
    if (kBoolFalse == test_6) {
      var_bindingMap_7792 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("binding-specification.galgas", 209)) ;
      GALGAS_bool joker_8154_6 ; // Joker input parameter
      GALGAS_bool joker_8154_5 ; // Joker input parameter
      GALGAS_bool joker_8154_4 ; // Joker input parameter
      GALGAS_bool joker_8154_3 ; // Joker input parameter
      GALGAS_bool joker_8154_2 ; // Joker input parameter
      GALGAS_bool joker_8154_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mOutletClassMap (HERE).method_searchKey (enumerator_6229.current_mOutletClassName (HERE), var_outletSuperClassName_7826, joker_8154_6, joker_8154_5, joker_8154_4, joker_8154_3, joker_8154_2, joker_8154_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 210)) ;
    }
    {
    var_bindingMap_7792.setter_insertKey (enumerator_6229.current_mBindingName (HERE), var_outletBindingSpecificationModelList_6309, var_controllerBindingOptionDecoratedList_7071, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 212)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_6229.current_mOutletClassName (HERE), var_outletSuperClassName_7826, var_bindingMap_7792, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 217)) ;
    }
    enumerator_6229.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'analyzeOutlets'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeOutlets (const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
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
  outArgument_outRegularBindingsGenerationList = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 186)) ;
  outArgument_outTargetActionList = GALGAS_actionBindingListForGeneration::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 187)) ;
  outArgument_outMultipleBindingGenerationList = GALGAS_multipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 188)) ;
  outArgument_outletMap = GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("outlet-declaration.galgas", 189)) ;
  outArgument_outTableViewBindingGenerationList = GALGAS_tableViewBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 190)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 191)) ;
  cEnumerator_outletDeclarationList enumerator_6989 (constinArgument_inOutletDeclarationList, kENUMERATION_UP) ;
  while (enumerator_6989.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_6989.current_mOutletName (HERE), enumerator_6989.current_mOutletTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 193)) ;
    }
    GALGAS_bool var_handlesRunAction_7193 ;
    GALGAS_bool var_handlesTableViewBinding_7234 ;
    GALGAS_bool var_handlesEnabledBinding_7273 ;
    GALGAS_bool var_handlesHiddenBinding_7311 ;
    GALGAS_bool var_handleGraphicControllerBinding_7359 ;
    GALGAS_bool var_outletClassIsUserDefined_7401 ;
    GALGAS_lstring joker_7158 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mOutletClassMap (HERE).method_searchKey (enumerator_6989.current_mOutletTypeName (HERE), joker_7158, var_handlesRunAction_7193, var_handlesTableViewBinding_7234, var_handlesEnabledBinding_7273, var_handlesHiddenBinding_7311, var_handleGraphicControllerBinding_7359, var_outletClassIsUserDefined_7401, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 194)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_outletClassIsUserDefined_7401.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 204)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_6989.current_mOutletTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 205)) ;
      }
    }
    switch (enumerator_6989.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_9867 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_6989.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_9867->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_9867->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_handleGraphicControllerBinding_7359.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 211)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_6989.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 212)), GALGAS_string ("the '").add_operation (enumerator_6989.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 212)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 212)), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 212)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_propertyKind var_kind_7969 ;
          GALGAS_actionMap joker_7981 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_kind_7969, joker_7981, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 214)) ;
          switch (var_kind_7969.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 221)), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 221)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 223)), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 223)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 225)), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 225)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_9616 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_7969.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_entityName = extractPtr_9616->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_graphic = extractPtr_9616->mAssociatedValue1 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = extractedValue_graphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 228)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 229)), GALGAS_string ("the controlled entity (").add_operation (extractedValue_entityName.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 229)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 229)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 229)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                GALGAS_propertyMap var_observablePropertyMap_8743 ;
                GALGAS_classKind joker_8701 ; // Joker input parameter
                GALGAS_actionMap joker_8759_2 ; // Joker input parameter
                GALGAS_propertyGenerationList joker_8759_1 ; // Joker input parameter
                constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_entityName, joker_8701, var_observablePropertyMap_8743, joker_8759_2, joker_8759_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 232)) ;
                GALGAS_propertyKind var_propertyKind_8852 ;
                GALGAS_actionMap joker_8854 ; // Joker input parameter
                var_observablePropertyMap_8743.method_searchKey (extractedValue_propertyName, var_propertyKind_8852, joker_8854, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 238)) ;
                switch (var_propertyKind_8852.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <C_FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 241)), GALGAS_string ("the bound model should be a toMany property"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 241)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_9225 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_8852.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_kEntityName = extractPtr_9225->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_isGraphic = extractPtr_9225->mAssociatedValue2 ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = extractedValue_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 243)).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        TC_Array <C_FixItDescription> fixItArray11 ;
                        inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 244)), GALGAS_string ("the controlled entity (").add_operation (extractedValue_kEntityName.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)) ;
                      }
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 247)), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 247)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 249)), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 249)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 251)), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 251)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 255)), GALGAS_string ("the bound model should be an array controller"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 255)) ;
            }
            break ;
          }
          outArgument_outEBViewGraphicControllerBindingGenerationList.addAssign_operation (enumerator_6989.current_mOutletName (HERE).getter_string (HERE), extractedValue_controllerName.getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 257)) ;
        }
      }
      break ;
    }
    switch (enumerator_6989.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_10577 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_6989.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_10577->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_handlesTableViewBinding_7234.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 264)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_6989.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 265)), GALGAS_string ("the '").add_operation (enumerator_6989.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 265)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 265)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 265)) ;
          }
        }
        if (kBoolFalse == test_16) {
          GALGAS_propertyKind var_kind_10311 ;
          GALGAS_actionMap joker_10323 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_kind_10311, joker_10323, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 267)) ;
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_kind_10311.getter_isArrayController (SOURCE_FILE ("outlet-declaration.galgas", 272)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 272)).boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 273)), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 273)) ;
            }
          }
          outArgument_outTableViewBindingGenerationList.addAssign_operation (enumerator_6989.current_mOutletName (HERE).getter_string (HERE), extractedValue_controllerName.getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 275)) ;
        }
      }
      break ;
    }
    switch (enumerator_6989.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_11483 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_6989.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_target = extractPtr_11483->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_action = extractPtr_11483->mAssociatedValue1 ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_handlesRunAction_7193.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 282)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_6989.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 283)), GALGAS_string ("the '").add_operation (enumerator_6989.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 283)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 283)), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 283)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, extractedValue_target.getter_string (HERE).objectCompare (GALGAS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              constinArgument_inActionMap.method_searchKey (extractedValue_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 285)) ;
              outArgument_outTargetActionList.addAssign_operation (enumerator_6989.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("self"), extractedValue_action.getter_string (HERE), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 286)) ;
            }
          }
          if (kBoolFalse == test_22) {
            GALGAS_actionMap var_controllerActionMap_11226 ;
            GALGAS_propertyKind joker_11179 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_target, joker_11179, var_controllerActionMap_11226, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 292)) ;
            var_controllerActionMap_11226.method_searchKey (extractedValue_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 297)) ;
            outArgument_outTargetActionList.addAssign_operation (enumerator_6989.current_mOutletName (HERE).getter_string (HERE), extractedValue_target.getter_string (HERE), extractedValue_action.getter_string (HERE), GALGAS_string ("ArrayController_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 302)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 302)).add_operation (extractedValue_target.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 302))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 298)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_6989.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_12310 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_6989.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_expression = extractPtr_12310->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_11884 ;
        GALGAS_typeKind var_type_11912 ;
        GALGAS_location var_errorLocation_11949 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_expression.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_enableExpression_11884, var_type_11912, var_errorLocation_11949, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 309)) ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = var_handlesEnabledBinding_7273.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 317)).boolEnum () ;
          if (kBoolTrue == test_23) {
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (var_errorLocation_11949, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 318)) ;
          }
        }
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_type_11912.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 320)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 320)).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (var_errorLocation_11949, GALGAS_string ("expression is not boolean"), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 321)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_6989.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("enabled"), var_enableExpression_11884  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 323)) ;
      }
      break ;
    }
    switch (enumerator_6989.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_13132 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_6989.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_expression = extractPtr_13132->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_12709 ;
        GALGAS_typeKind var_type_12737 ;
        GALGAS_location var_errorLocation_12774 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_expression.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_12709, var_type_12737, var_errorLocation_12774, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 332)) ;
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          test_27 = var_type_12737.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 340)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 340)).boolEnum () ;
          if (kBoolTrue == test_27) {
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (var_errorLocation_12774, GALGAS_string ("expression is not boolean"), fixItArray28  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 341)) ;
          }
        }
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = var_handlesHiddenBinding_7311.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 343)).boolEnum () ;
          if (kBoolTrue == test_29) {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (var_errorLocation_12774, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray30  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 344)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_6989.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("hidden"), var_hiddenExpression_12709  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 346)) ;
      }
      break ;
    }
    {
    routine_analyzeRegularBinding (constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_6989.current_mOutletTypeName (HERE), enumerator_6989.current_mOutletName (HERE).getter_string (HERE), enumerator_6989.current_mRegularBindingList (HERE), GALGAS_string ("self"), outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 352)) ;
    }
    enumerator_6989.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'analyzeRegularBinding'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeRegularBinding (const GALGAS_propertyMap constinArgument_inRootPropertyMap,
                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                    const GALGAS_propertyMap constinArgument_inBoundModelPropertyMap,
                                    const GALGAS_lstring constinArgument_inOutletTypeName,
                                    const GALGAS_string constinArgument_inOutletName,
                                    const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                    const GALGAS_string constinArgument_inSelfSwiftName,
                                    GALGAS_regularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_13996 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_13996.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_14067 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 379)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_14121 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 380)) ;
    cEnumerator_observablePropertyList enumerator_14164 (enumerator_13996.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_14164.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_14335 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_14407 ;
      extensionMethod_analyzeObservableProperty (enumerator_14164.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_14335, var_swiftTypeStringForTransientFunctionArgument_14407, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 382)) ;
      switch (var_kind_14335.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14164.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 392)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 392)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14164.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 394)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 394)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14164.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 396)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 396)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14164.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 398)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 398)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_14121.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_14164.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 400)), var_kind_14335  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 400)) ;
      var_boundModelTypeList_14067.addAssign_operation (var_kind_14335, extensionGetter_location (enumerator_14164.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 401))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 401)) ;
      enumerator_14164.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_15208 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 404)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_15292 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 405)) ;
    GALGAS_lstring var_outletTypeName_15320 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_15357 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 408)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 408)).isValid ()) {
      uint32_t variant_15373 = constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 408)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 408)).uintValue () ;
      bool loop_15373 = true ;
      while (loop_15373) {
        loop_15373 = GALGAS_bool (kIsNotEqual, var_outletTypeName_15320.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_15357 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 408)).isValid () ;
        if (loop_15373) {
          loop_15373 = GALGAS_bool (kIsNotEqual, var_outletTypeName_15320.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_15357 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 408)).boolValue () ;
        }
        if (loop_15373 && (0 == variant_15373)) {
          loop_15373 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.galgas", 408)) ;
        }
        if (loop_15373) {
          variant_15373 -- ;
          var_continues_15357 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_15623 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_15678 ;
          constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).method_searchKey (var_outletTypeName_15320, var_superOutletClassName_15623, var_bindingMap_15678, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 410)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_bindingMap_15678.getter_hasKey (enumerator_13996.current_mBindingName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("outlet-declaration.galgas", 415)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_bindingMap_15678.method_searchKey (enumerator_13996.current_mBindingName (HERE), var_outletBindingSpecificationModelList_15208, var_controllerBindingOptionDecoratedList_15292, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 416)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_continues_15357 = GALGAS_bool (true) ;
            var_outletTypeName_15320 = var_superOutletClassName_15623 ;
          }
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_continues_15357.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_13996.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 427)), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 427)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_14067.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 428)).objectCompare (var_outletBindingSpecificationModelList_15208.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 428)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_13996.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 429)), var_outletBindingSpecificationModelList_15208.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 430)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 430)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 430)).add_operation (var_boundModelTypeList_14067.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 432)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 431)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 432)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 429)) ;
        }
      }
      if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_16429 (var_outletBindingSpecificationModelList_15208, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_16462 (var_boundModelTypeList_14067, kENUMERATION_UP) ;
        while (enumerator_16429.hasCurrentObject () && enumerator_16462.hasCurrentObject ()) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            GALGAS_bool test_10 = enumerator_16429.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_isTransient (enumerator_16462.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 435)) ;
            }
            test_9 = test_10.boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_16462.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 436)) ;
            }
          }
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            GALGAS_bool test_13 = enumerator_16429.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.galgas", 438)) ;
            if (kBoolTrue == test_13.boolEnum ()) {
              test_13 = extensionGetter_isEnumType (enumerator_16462.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 438)) ;
            }
            test_12 = test_13.boolEnum () ;
            if (kBoolTrue == test_12) {
            }
          }
          if (kBoolFalse == test_12) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_16429.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 439)).objectCompare (extensionGetter_swiftTypeName (enumerator_16462.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 439)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_16462.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_16429.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 440)), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 440)) ;
              }
            }
          }
          enumerator_16429.gotoNextObject () ;
          enumerator_16462.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_17021 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_15292.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 446)).objectCompare (enumerator_13996.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("outlet-declaration.galgas", 446)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_s_17131 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_15292.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 448)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_s_17131 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_17) {
          var_s_17131 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_17363 (var_controllerBindingOptionDecoratedList_15292, kENUMERATION_UP) ;
          while (enumerator_17363.hasCurrentObject ()) {
            var_s_17131.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_17363.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 453)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 453)).add_operation (extensionGetter_swiftTypeName (enumerator_17363.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 453)) ;
            enumerator_17363.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_13996.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 456)), var_s_17131, fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 456)) ;
      }
    }
    if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_17567 (var_controllerBindingOptionDecoratedList_15292, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_17602 (enumerator_13996.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_17567.hasCurrentObject () && enumerator_17602.hasCurrentObject ()) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsNotEqual, enumerator_17567.current_mOptionName (HERE).getter_string (HERE).objectCompare (enumerator_17602.current_mOptionName (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_17602.current_mOptionName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 460)), GALGAS_string ("the option name should be '").add_operation (enumerator_17567.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)) ;
          }
        }
        GALGAS_string var_optionValueAsString_17927 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 463)) ;
        temp_21.addAssign_operation (enumerator_17567.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 463)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_17602.current_mOptionValue (HERE).ptr (), temp_21, var_optionValueAsString_17927, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 462)) ;
        var_bindingOptionString_17021.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_17567.current_mOptionName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 466)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 466)).add_operation (var_optionValueAsString_17927, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 466)) ;
        enumerator_17567.gotoNextObject () ;
        enumerator_17602.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_13996.current_mBindingName (HERE).getter_string (HERE), var_boundModelListForGeneration_14121, var_bindingOptionString_17021  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 470)) ;
    enumerator_13996.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@transientDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  GALGAS_lstring var_node_707 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 16)).add_operation (object->mProperty_mTransientName.getter_string (SOURCE_FILE ("transient-property.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 16)), object->mProperty_mTransientName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 16)) ;
  {
  const GALGAS_transientDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_707, temp_0, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 17)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_707, object->mProperty_mClassName COMMA_SOURCE_FILE ("transient-property.galgas", 18)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_707, object->mProperty_mTransientTypeName COMMA_SOURCE_FILE ("transient-property.galgas", 19)) ;
  }
  cEnumerator_observablePropertyList enumerator_949 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_949.hasCurrentObject ()) {
    switch (enumerator_949.current (HERE).getter_mObservableProperty (HERE).enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1196 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1196->mAssociatedValue0 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 24)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 24)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 24)) COMMA_SOURCE_FILE ("transient-property.galgas", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1410 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1410->mAssociatedValue0 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 28)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 28)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 28)) COMMA_SOURCE_FILE ("transient-property.galgas", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1638 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_1638->mAssociatedValue0 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 32)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 32)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 32)) COMMA_SOURCE_FILE ("transient-property.galgas", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1856 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_1856->mAssociatedValue0 ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 36)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 36)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 36)) COMMA_SOURCE_FILE ("transient-property.galgas", 36)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_1998 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1998->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 39)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 39)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 39)) COMMA_SOURCE_FILE ("transient-property.galgas", 39)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2161 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2161->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 41)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 41)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 41)) COMMA_SOURCE_FILE ("transient-property.galgas", 41)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2319 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2319->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 43)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 43)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 43)) COMMA_SOURCE_FILE ("transient-property.galgas", 43)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2478 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2478->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 45)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 45)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 45)) COMMA_SOURCE_FILE ("transient-property.galgas", 45)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2633 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2633->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 47)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 47)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 47)) COMMA_SOURCE_FILE ("transient-property.galgas", 47)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2786 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2786->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 49)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 49)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 49)) COMMA_SOURCE_FILE ("transient-property.galgas", 49)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_2951 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2951->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 51)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 51)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 51)) COMMA_SOURCE_FILE ("transient-property.galgas", 51)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3139 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3139->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3139->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 53)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 53)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 53)) COMMA_SOURCE_FILE ("transient-property.galgas", 53)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3365 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_949.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3365->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3365->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_3365->mAssociatedValue2 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_707, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 55)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 55)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 55)) COMMA_SOURCE_FILE ("transient-property.galgas", 55)) ;
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
    }
    enumerator_949.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                               extensionMethod_transientDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_transientDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Overriding extension getter '@transientDeclarationAST lkey'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_transientDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 66)).add_operation (object->mProperty_mTransientName.getter_string (SOURCE_FILE ("transient-property.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 66)), object->mProperty_mTransientName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 66)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_transientDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                             extensionGetter_transientDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_transientDeclarationAST_lkey (defineExtensionGetter_transientDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@transientDeclarationAST firstAnalysisPhase'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  cMapElement_classMap * objectArray_5563 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 120)) ;
  if (NULL != objectArray_5563) {
      macroValidSharedObject (objectArray_5563, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_5719 ;
    GALGAS_propertyMap joker_5721_3 ; // Joker input parameter
    GALGAS_actionMap joker_5721_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5721_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mTransientTypeName, var_classKind_5719, joker_5721_3, joker_5721_2, joker_5721_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 123)) ;
    switch (var_classKind_5719.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 126)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("transient-property.galgas", 126)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_simpleClass:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 128)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("transient-property.galgas", 128)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_6051 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5719.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_6051->mAssociatedValue0 ;
        {
        objectArray_5563->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mTransientName, GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("transient-property.galgas", 130))  COMMA_SOURCE_FILE ("transient-property.galgas", 130)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 130)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 132)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 132)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 134)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.galgas", 134)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                           extensionMethod_transientDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientDeclarationAST_firstAnalysisPhase (defineExtensionMethod_transientDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@transientDeclarationAST secondAnalysisPhase'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  GALGAS_classKind var_classKind_6761 ;
  GALGAS_propertyMap joker_6763_3 ; // Joker input parameter
  GALGAS_actionMap joker_6763_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_6763_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mTransientTypeName, var_classKind_6761, joker_6763_3, joker_6763_2, joker_6763_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 148)) ;
  GALGAS_typeKind var_typeKind_6803 ;
  switch (var_classKind_6761.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
  case GALGAS_classKind::kEnum_simpleClass:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 153)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("transient-property.galgas", 153)) ;
      var_typeKind_6803.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_6979 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6761.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_kind = extractPtr_6979->mAssociatedValue0 ;
      var_typeKind_6803 = extractedValue_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 157)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("transient-property.galgas", 157)) ;
      var_typeKind_6803.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 159)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 159)) ;
      var_typeKind_6803.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_7230 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_rootProperties_7230 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 164)) ;
    }
  }
  if (kBoolFalse == test_3) {
    GALGAS_classKind joker_7362 ; // Joker input parameter
    GALGAS_actionMap joker_7381_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7381_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_7362, var_rootProperties_7230, joker_7381_2, joker_7381_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 166)) ;
  }
  GALGAS_classKind var_currentClassKind_7495 ;
  GALGAS_propertyMap var_properties_7511 ;
  GALGAS_actionMap joker_7513_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_7513_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, var_currentClassKind_7495, var_properties_7511, joker_7513_2, joker_7513_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 169)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_7600 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 171)) ;
  cEnumerator_observablePropertyList enumerator_7633 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_7633.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_7792 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_7855 ;
    extensionMethod_analyzeObservableProperty (enumerator_7633.current_mObservableProperty (HERE), var_rootProperties_7230, ioArgument_ioSemanticContext, var_properties_7511, var_dependencyKind_7792, var_swiftTypeStringForTransientFunctionArgument_7855, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 173)) ;
    switch (var_dependencyKind_7792.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_7633.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 183)), GALGAS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.galgas", 183)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_7633.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 185)), GALGAS_string ("only an atomic property can be observed"), fixItArray5  COMMA_SOURCE_FILE ("transient-property.galgas", 185)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_7633.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 187)), GALGAS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.galgas", 187)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_7633.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 189)), GALGAS_string ("only an atomic property can be observed"), fixItArray7  COMMA_SOURCE_FILE ("transient-property.galgas", 189)) ;
      }
      break ;
    }
    var_dependencies_7600.addAssign_operation (enumerator_7633.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_7633.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 193)), var_swiftTypeStringForTransientFunctionArgument_7855  COMMA_SOURCE_FILE ("transient-property.galgas", 191)) ;
    enumerator_7633.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_ptransientRoutineGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("transient-property.galgas", 197)), object->mProperty_mTransientName.getter_string (HERE), var_typeKind_6803, var_dependencies_7600, object->mProperty_mExternFunctionName.getter_string (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 196))  COMMA_SOURCE_FILE ("transient-property.galgas", 196)) ;
  cMapElement_classMap * objectArray_8734 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 203)) ;
  if (NULL != objectArray_8734) {
      macroValidSharedObject (objectArray_8734, cMapElement_classMap) ;
    GALGAS_bool var_generate_8831 ;
    switch (var_currentClassKind_7495.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
    case GALGAS_classKind::kEnum_simpleClass:
      {
        var_generate_8831 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_8831 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_8831 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_9205 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_7495.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_9205->mAssociatedValue0 ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = extractedValue_graphic.boolEnum () ;
          if (kBoolTrue == test_8) {
            var_generate_8831 = GALGAS_bool (kIsNotEqual, object->mProperty_mTransientName.getter_string (HERE).objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mTransientName.getter_string (HERE).objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.galgas", 216)) ;
          }
        }
        if (kBoolFalse == test_8) {
          var_generate_8831 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    objectArray_8734->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_transientPropertyGeneration::constructor_new (object->mProperty_mTransientName.getter_string (HERE), object->mProperty_mClassName.getter_string (HERE), var_typeKind_6803, var_dependencies_7600, object->mProperty_mExternFunctionName.getter_string (HERE), var_generate_8831  COMMA_SOURCE_FILE ("transient-property.galgas", 221))  COMMA_SOURCE_FILE ("transient-property.galgas", 221)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                            extensionMethod_transientDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientDeclarationAST_secondAnalysisPhase (defineExtensionMethod_transientDeclarationAST_secondAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@transientPropertyGeneration declarationCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_transientPropertyGeneration_declarationCode (const cPtr_propertyGeneration * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mGenerate.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 255)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 256)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 257)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 257)) ;
      result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (GALGAS_string (" ()\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 258)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 259)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 259)) ;
      result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)).add_operation (GALGAS_string ("_property_selection : EBSelection <"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 260)) ;
      result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 261)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 261)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 262)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 263)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 263)) ;
      result_result.plusAssign_operation(GALGAS_string ("    var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 264)) ;
      result_result.plusAssign_operation(GALGAS_string ("    switch self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 265)).add_operation (GALGAS_string ("_property_selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 265)) ;
      result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 266)) ;
      result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 267)) ;
      result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 268)) ;
      result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 269)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 270)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 271)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_transientPropertyGeneration_declarationCode (void) {
  enterExtensionGetter_declarationCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                        extensionGetter_transientPropertyGeneration_declarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_transientPropertyGeneration_declarationCode (defineExtensionGetter_transientPropertyGeneration_declarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension getter '@transientPropertyGeneration configurationCode'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_transientPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 278)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 278)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 279)).add_operation (GALGAS_string ("_property.readModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 279)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 280)) ;
  result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (object->mProperty_mDependencyList, object->mProperty_mClassName, object->mProperty_mPropertyName, object->mProperty_mExternFunctionName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 281)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 282)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 283)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 284)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 285)) ;
  cEnumerator_transientDependencyListForGeneration enumerator_12108 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_12108.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_generateAddObserverCall (enumerator_12108.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 287)) ;
    enumerator_12108.gotoNextObject () ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_transientPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                          extensionGetter_transientPropertyGeneration_configurationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_transientPropertyGeneration_configurationCode (defineExtensionGetter_transientPropertyGeneration_configurationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@transientPropertyGeneration terminationCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_transientPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_transientDependencyListForGeneration enumerator_12464 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_12464.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_generateRemoveObserverCall (enumerator_12464.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 296)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 296)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 296)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 296)) ;
    enumerator_12464.gotoNextObject () ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_transientPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                        extensionGetter_transientPropertyGeneration_terminationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_transientPropertyGeneration_terminationCode (defineExtensionGetter_transientPropertyGeneration_terminationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@ptransientRoutineGeneration generateCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ptransientRoutineGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                                      const GALGAS_string constinArgument_inOutputDirectory,
                                                                      GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ptransientRoutineGeneration * object = (const cPtr_ptransientRoutineGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_ptransientRoutineGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mDependencyList.getter_length (SOURCE_FILE ("transient-property.galgas", 493)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, object->mProperty_mExternFunctionName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("transient-property.galgas", 493)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_21398 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, object->mProperty_mOwnerName, object->mProperty_mTransientName, object->mProperty_mDependencyList, object->mProperty_mTransientType COMMA_SOURCE_FILE ("transient-property.galgas", 494))) ;
      GALGAS_string var_fileName_21572 = GALGAS_string ("transient-").add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 500)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 500)).add_operation (object->mProperty_mTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 500)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 500)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_21572  COMMA_SOURCE_FILE ("transient-property.galgas", 501)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_21572, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_s_21398, GALGAS_string ("\n"), GALGAS_string ("}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 502)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ptransientRoutineGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ptransientRoutineGeneration.mSlotID,
                                     extensionMethod_ptransientRoutineGeneration_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ptransientRoutineGeneration_generateCode (defineExtensionMethod_ptransientRoutineGeneration_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Filewrapper 'transientManager'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_1 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_1_transientManager (
  "controllers",
  0,
  gWrapperAllFiles_transientManager_1,
  0,
  gWrapperAllDirectories_transientManager_1
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_2 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_2_transientManager (
  "outlet-classes",
  0,
  gWrapperAllFiles_transientManager_2,
  0,
  gWrapperAllDirectories_transientManager_2
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_3 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_3_transientManager (
  "standard-properties",
  0,
  gWrapperAllFiles_transientManager_3,
  0,
  gWrapperAllDirectories_transientManager_3
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_4 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_4_transientManager (
  "swift-sources",
  0,
  gWrapperAllFiles_transientManager_4,
  0,
  gWrapperAllDirectories_transientManager_4
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_5 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_5_transientManager (
  "xcode-project",
  0,
  gWrapperAllFiles_transientManager_5,
  0,
  gWrapperAllDirectories_transientManager_5
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_0 [6] = {
  & gWrapperDirectory_1_transientManager,
  & gWrapperDirectory_2_transientManager,
  & gWrapperDirectory_3_transientManager,
  & gWrapperDirectory_4_transientManager,
  & gWrapperDirectory_5_transientManager,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_transientManager (
  "",
  0,
  gWrapperAllFiles_transientManager_0,
  5,
  gWrapperAllDirectories_transientManager_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Filewrapper template 'transientManager transientComputationFunctionFile'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & in_OWNER_5F_NAME,
                                                                                     const GALGAS_string & in_TRANSIENT_5F_NAME,
                                                                                     const GALGAS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                     const GALGAS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "func transient_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_TRANSIENT_5F_NAME.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_539_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    cEnumerator_transientDependencyListForGeneration enumerator_539 (in_DEPENDENCY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_539.hasCurrentObject ()) {
      result << "\n"
        "       _ " ;
      result << enumerator_539.current_mFunctionArgumentName (HERE).stringValue () ;
      result << " : " ;
      result << enumerator_539.current_mFunctionArgumentTypeString (HERE).stringValue () ;
      if (enumerator_539.hasNextObject ()) {
        result << "," ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_539_.increment () ;
      enumerator_539.gotoNextObject () ;
    }
  }
  result << "\n"
    ") -> " ;
  result << extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("transient-computation-function.swift.galgasTemplate", 16)).stringValue () ;
  result << " {\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@atomicPropertyDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_atomicPropertyDeclarationAST * object = (const cPtr_atomicPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyDeclarationAST) ;
  GALGAS_lstring var_node_953 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 24)).add_operation (object->mProperty_mPropertyName.getter_string (SOURCE_FILE ("simple-stored-property.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 24)), object->mProperty_mPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 24)) ;
  {
  const GALGAS_atomicPropertyDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_953, temp_0, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 25)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_953, object->mProperty_mClassName COMMA_SOURCE_FILE ("simple-stored-property.galgas", 26)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_953, object->mProperty_mPropertyTypeName COMMA_SOURCE_FILE ("simple-stored-property.galgas", 27)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST.mSlotID,
                                               extensionMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension getter '@atomicPropertyDeclarationAST lkey'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_atomicPropertyDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_atomicPropertyDeclarationAST * object = (const cPtr_atomicPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 33)).add_operation (object->mProperty_mPropertyName.getter_string (SOURCE_FILE ("simple-stored-property.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 33)), object->mProperty_mPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 33)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST.mSlotID,
                             extensionGetter_atomicPropertyDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyDeclarationAST_lkey (defineExtensionGetter_atomicPropertyDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@atomicPropertyDeclarationAST firstAnalysisPhase'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_atomicPropertyDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_atomicPropertyDeclarationAST * object = (const cPtr_atomicPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyDeclarationAST) ;
  cMapElement_classMap * objectArray_3893 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 105)) ;
  if (NULL != objectArray_3893) {
      macroValidSharedObject (objectArray_3893, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4048 ;
    GALGAS_propertyMap joker_4050_3 ; // Joker input parameter
    GALGAS_actionMap joker_4050_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4050_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mPropertyTypeName, var_classKind_4048, joker_4050_3, joker_4050_2, joker_4050_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 108)) ;
    switch (var_classKind_4048.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mPropertyTypeName.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 111)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 111)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_simpleClass:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mPropertyTypeName.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 113)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 113)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_4986 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4048.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_4986->mAssociatedValue0 ;
        {
        objectArray_3893->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mPropertyName, GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("simple-stored-property.galgas", 115))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 115)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("simple-stored-property.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 115)) ;
        }
        GALGAS_string var_swiftDefaultValueAsString_4498 ;
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 117)) ;
        temp_2.addAssign_operation (extractedValue_kind  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 117)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) object->mProperty_mDefaultValue.ptr (), temp_2, var_swiftDefaultValueAsString_4498, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 117)) ;
        objectArray_3893->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicPropertyGeneration::constructor_new (object->mProperty_mPropertyName.getter_string (HERE), object->mProperty_mNeedsValidation, extractedValue_kind, GALGAS_bool (false), var_swiftDefaultValueAsString_4498, GALGAS_bool (kIsEqual, object->mProperty_mClassName.getter_string (HERE).objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 125))))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 119))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 119)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = object->mProperty_mNeedsValidation.boolEnum () ;
          if (kBoolTrue == test_3) {
            ioArgument_ioGeneration.mProperty_mValidationStubRoutineListForGeneration.addAssign_operation (object->mProperty_mClassName.getter_string (SOURCE_FILE ("simple-stored-property.galgas", 130)), object->mProperty_mPropertyName.getter_string (HERE), extensionGetter_swiftTypeName (extractedValue_kind, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 132))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 129)) ;
          }
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mPropertyTypeName.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 135)), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 135)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mPropertyTypeName.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 137)), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 137)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_atomicPropertyDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST.mSlotID,
                                           extensionMethod_atomicPropertyDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_atomicPropertyDeclarationAST_firstAnalysisPhase (defineExtensionMethod_atomicPropertyDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension getter '@atomicPropertyGeneration prefKeyDefinitionCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("let Preferences_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 163)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 163)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 163)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 163)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_prefKeyDefinitionCode (void) {
  enterExtensionGetter_prefKeyDefinitionCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                              extensionGetter_atomicPropertyGeneration_prefKeyDefinitionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_prefKeyDefinitionCode (defineExtensionGetter_atomicPropertyGeneration_prefKeyDefinitionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension getter '@atomicPropertyGeneration declarationCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_declarationCode (const cPtr_propertyGeneration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)).add_operation (GALGAS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)).add_operation (object->mProperty_mDefaultValueInSwift, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mInPreferences.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string (", prefKey: Preferences_").add_operation (object->mProperty_mPropertyName.getter_identifierRepresentation (SOURCE_FILE ("simple-stored-property.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 175)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string (")\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 178)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 178)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)) ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)).add_operation (GALGAS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 182)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 183)) ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 184)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 184)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 185)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 186)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)).add_operation (GALGAS_string ("_property_selection : EBSelection <"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 189)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 189)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 190)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = object->mProperty_mNeedsValidation.boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 192)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 192)) ;
      result_result.plusAssign_operation(GALGAS_string ("  func ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)).add_operation (GALGAS_string ("_validateAndSetProp (_ inCandidateValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)).add_operation (GALGAS_string (", windowForSheet inWindow:NSWindow\?) -> Bool {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)) ;
      result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 194)).add_operation (GALGAS_string ("_property.validateAndSetProp (inCandidateValue, windowForSheet:inWindow)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 194)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 195)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_declarationCode (void) {
  enterExtensionGetter_declarationCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                        extensionGetter_atomicPropertyGeneration_declarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_declarationCode (defineExtensionGetter_atomicPropertyGeneration_declarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension getter '@atomicPropertyGeneration configurationCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 202)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 202)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 203)).add_operation (GALGAS_string ("_property.undoManager = self.undoManager\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 203)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mNeedsValidation.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 205)).add_operation (GALGAS_string ("_property.validationFunction = self.validate_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 205)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 205)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 205)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                          extensionGetter_atomicPropertyGeneration_configurationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_configurationCode (defineExtensionGetter_atomicPropertyGeneration_configurationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@atomicPropertyGeneration setupFromDictionaryCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_setupFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 212)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 213)).add_operation (GALGAS_string ("_property.readFrom (dictionary: inDictionary, forKey:\""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 213)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 213)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 213)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_setupFromDictionaryCode (void) {
  enterExtensionGetter_setupFromDictionaryCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                extensionGetter_atomicPropertyGeneration_setupFromDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_setupFromDictionaryCode (defineExtensionGetter_atomicPropertyGeneration_setupFromDictionaryCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@atomicPropertyGeneration saveIntoDictionaryCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 219)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 219)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 220)).add_operation (GALGAS_string ("_property.storeIn (dictionary: ioDictionary, forKey:\""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 220)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 220)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 220)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_saveIntoDictionaryCode (void) {
  enterExtensionGetter_saveIntoDictionaryCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                               extensionGetter_atomicPropertyGeneration_saveIntoDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_saveIntoDictionaryCode (defineExtensionGetter_atomicPropertyGeneration_saveIntoDictionaryCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@atomicPropertyGeneration clearObjectExplorerCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 226)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 227)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 227)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 228)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 228)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                extensionGetter_atomicPropertyGeneration_clearObjectExplorerCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_clearObjectExplorerCode (defineExtensionGetter_atomicPropertyGeneration_clearObjectExplorerCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toOneRelationshipAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  GALGAS_lstring var_node_1174 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 27)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 27)), object->mProperty_mToOneRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 27)) ;
  {
  const GALGAS_toOneRelationshipAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_1174, temp_0, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 28)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_1174, object->mProperty_mClassName COMMA_SOURCE_FILE ("to-one-relationship.galgas", 29)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_1174, object->mProperty_mDestinationEntityName COMMA_SOURCE_FILE ("to-one-relationship.galgas", 30)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_toOneRelationshipAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                               extensionMethod_toOneRelationshipAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_toOneRelationshipAST_enterInPrecedenceGraph (defineExtensionMethod_toOneRelationshipAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Overriding extension getter '@toOneRelationshipAST lkey'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_toOneRelationshipAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 36)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 36)), object->mProperty_mToOneRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 36)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOneRelationshipAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                             extensionGetter_toOneRelationshipAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOneRelationshipAST_lkey (defineExtensionGetter_toOneRelationshipAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@toOneRelationshipAST firstAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toOneRelationshipAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  cMapElement_classMap * objectArray_4238 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 114)) ;
  if (NULL != objectArray_4238) {
      macroValidSharedObject (objectArray_4238, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4398 ;
    GALGAS_propertyMap var_destinationEntityPropertyMap_4432 ;
    GALGAS_actionMap joker_4434_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4434_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mDestinationEntityName, var_classKind_4398, var_destinationEntityPropertyMap_4432, joker_4434_2, joker_4434_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 117)) ;
    switch (var_classKind_4398.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 120)), GALGAS_string ("an entity is required here"), fixItArray0  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 120)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_simpleClass:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 122)), GALGAS_string ("an entity is required here"), fixItArray1  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 122)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 124)), GALGAS_string ("an entity is required here"), fixItArray2  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 124)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 126)), GALGAS_string ("an entity is required here"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 126)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_5352 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4398.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_5352->mAssociatedValue0 ;
        GALGAS_propertyKind var_kind_4851 = GALGAS_propertyKind::constructor_toOne (object->mProperty_mDestinationEntityName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.galgas", 130)), extractedValue_graphic  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 128)) ;
        {
        objectArray_4238->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mToOneRelationshipName, var_kind_4851, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-one-relationship.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 133)) ;
        }
        objectArray_4238->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toOnePropertyGeneration::constructor_new (object->mProperty_mToOneRelationshipName.getter_string (HERE), object->mProperty_mClassName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 137)), var_kind_4851, object->mProperty_mOppositeRelationshipName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 139)), object->mProperty_mInverseRelationMultiplicity, var_destinationEntityPropertyMap_4432, object->mProperty_mCascading  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 135))  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 135)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_toOneRelationshipAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                           extensionMethod_toOneRelationshipAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_toOneRelationshipAST_firstAnalysisPhase (defineExtensionMethod_toOneRelationshipAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension getter '@toOnePropertyGeneration declarationCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toOnePropertyGeneration_declarationCode (const cPtr_propertyGeneration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 170)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 171)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 171)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 172)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 172)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)).add_operation (GALGAS_string ("_property = ToOneRelationship_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)).add_operation (object->mProperty_mClassName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)).add_operation (GALGAS_string ("_property_selection : EBSelection <Bool> {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return .single (self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 177)).add_operation (GALGAS_string ("_property.propval == nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 177)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 178)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOnePropertyGeneration_declarationCode (void) {
  enterExtensionGetter_declarationCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                        extensionGetter_toOnePropertyGeneration_declarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOnePropertyGeneration_declarationCode (defineExtensionGetter_toOnePropertyGeneration_declarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension getter '@toOnePropertyGeneration configurationCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toOnePropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 184)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 184)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 185)).add_operation (GALGAS_string ("_property.owner = self\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 185)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOnePropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                          extensionGetter_toOnePropertyGeneration_configurationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOnePropertyGeneration_configurationCode (defineExtensionGetter_toOnePropertyGeneration_configurationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@toOnePropertyGeneration setupFromDictionaryCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toOnePropertyGeneration_setupFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mInverseRelationMultiplicity.getter_isSingle (SOURCE_FILE ("to-one-relationship.galgas", 192)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 193)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 193)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 194)).add_operation (GALGAS_string ("_property.setProp (readEntityFromDictionary (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 194)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inRelationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 195)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 195)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 196)) ;
      result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 197)) ;
      result_result.plusAssign_operation(GALGAS_string ("    ) as\? ").add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOnePropertyGeneration_setupFromDictionaryCode (void) {
  enterExtensionGetter_setupFromDictionaryCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                extensionGetter_toOnePropertyGeneration_setupFromDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOnePropertyGeneration_setupFromDictionaryCode (defineExtensionGetter_toOnePropertyGeneration_setupFromDictionaryCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension getter '@toOnePropertyGeneration saveIntoDictionaryCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toOnePropertyGeneration_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mInverseRelationMultiplicity.getter_isSingle (SOURCE_FILE ("to-one-relationship.galgas", 206)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 207)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 207)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (managedObject:self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 208)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 208)) ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 209)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 209)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 210)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOnePropertyGeneration_saveIntoDictionaryCode (void) {
  enterExtensionGetter_saveIntoDictionaryCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                               extensionGetter_toOnePropertyGeneration_saveIntoDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOnePropertyGeneration_saveIntoDictionaryCode (defineExtensionGetter_toOnePropertyGeneration_saveIntoDictionaryCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@toOnePropertyGeneration objectAccessibilityCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toOnePropertyGeneration_objectAccessibilityCode (const cPtr_propertyGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 217)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 217)) ;
  result_result.plusAssign_operation(GALGAS_string ("    if let managedObject = self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 218)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 218)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 219)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 220)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOnePropertyGeneration_objectAccessibilityCode (void) {
  enterExtensionGetter_objectAccessibilityCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                extensionGetter_toOnePropertyGeneration_objectAccessibilityCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOnePropertyGeneration_objectAccessibilityCode (defineExtensionGetter_toOnePropertyGeneration_objectAccessibilityCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@toOnePropertyGeneration clearObjectExplorerCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toOnePropertyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 226)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 227)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 227)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 228)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 228)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOnePropertyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                extensionGetter_toOnePropertyGeneration_clearObjectExplorerCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOnePropertyGeneration_clearObjectExplorerCode (defineExtensionGetter_toOnePropertyGeneration_clearObjectExplorerCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@toManyRelationshipAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toManyRelationshipAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toManyRelationshipAST * object = (const cPtr_toManyRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toManyRelationshipAST) ;
  GALGAS_lstring var_node_985 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 25)).add_operation (object->mProperty_mToManyRelationshipName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 25)), object->mProperty_mToManyRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 25)) ;
  {
  const GALGAS_toManyRelationshipAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_985, temp_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 26)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_985, object->mProperty_mClassName COMMA_SOURCE_FILE ("to-many-relationship.galgas", 27)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_985, object->mProperty_mDestinationEntityName COMMA_SOURCE_FILE ("to-many-relationship.galgas", 28)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_toManyRelationshipAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_toManyRelationshipAST.mSlotID,
                                               extensionMethod_toManyRelationshipAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_toManyRelationshipAST_enterInPrecedenceGraph (defineExtensionMethod_toManyRelationshipAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Overriding extension getter '@toManyRelationshipAST lkey'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_toManyRelationshipAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_toManyRelationshipAST * object = (const cPtr_toManyRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toManyRelationshipAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 34)).add_operation (object->mProperty_mToManyRelationshipName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 34)), object->mProperty_mToManyRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 34)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyRelationshipAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_toManyRelationshipAST.mSlotID,
                             extensionGetter_toManyRelationshipAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyRelationshipAST_lkey (defineExtensionGetter_toManyRelationshipAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@toManyRelationshipAST firstAnalysisPhase'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toManyRelationshipAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toManyRelationshipAST * object = (const cPtr_toManyRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toManyRelationshipAST) ;
  cMapElement_classMap * objectArray_4160 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 112)) ;
  if (NULL != objectArray_4160) {
      macroValidSharedObject (objectArray_4160, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4320 ;
    GALGAS_propertyMap joker_4322_3 ; // Joker input parameter
    GALGAS_actionMap joker_4322_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4322_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mDestinationEntityName, var_classKind_4320, joker_4322_3, joker_4322_2, joker_4322_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 115)) ;
    switch (var_classKind_4320.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 118)), GALGAS_string ("an entity is required here"), fixItArray0  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 118)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_simpleClass:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 120)), GALGAS_string ("an entity is required here"), fixItArray1  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 120)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 122)), GALGAS_string ("an entity is required here"), fixItArray2  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 122)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 124)), GALGAS_string ("an entity is required here"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 124)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_5173 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4320.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_5173->mAssociatedValue0 ;
        GALGAS_propertyKind var_kind_4739 = GALGAS_propertyKind::constructor_toMany (object->mProperty_mDestinationEntityName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-many-relationship.galgas", 128)), extractedValue_graphic, GALGAS_bool (true)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 126)) ;
        {
        objectArray_4160->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mToManyRelationshipName, var_kind_4739, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-many-relationship.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 132)) ;
        }
        objectArray_4160->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyPropertyGeneration::constructor_new (object->mProperty_mToManyRelationshipName.getter_string (HERE), var_kind_4739, object->mProperty_mOppositeRelationshipName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 137))  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 134))  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 134)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_toManyRelationshipAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_toManyRelationshipAST.mSlotID,
                                           extensionMethod_toManyRelationshipAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_toManyRelationshipAST_firstAnalysisPhase (defineExtensionMethod_toManyRelationshipAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension getter '@toManyPropertyGeneration declarationCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_declarationCode (const cPtr_propertyGeneration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 155)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 155)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 156)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 156)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 157)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 157)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 158)).add_operation (GALGAS_string ("_property = StoredArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 158)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 158)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 158)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 159)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 159)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 160)).add_operation (GALGAS_string ("_property_selection : EBSelection < ["), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 160)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 160)).add_operation (GALGAS_string ("] > {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 160)) ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 162)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_declarationCode (void) {
  enterExtensionGetter_declarationCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                        extensionGetter_toManyPropertyGeneration_declarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_declarationCode (defineExtensionGetter_toManyPropertyGeneration_declarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension getter '@toManyPropertyGeneration configurationCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 169)).add_operation (GALGAS_string ("_property.undoManager = self.undoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 169)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOppositeRelationshipName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 171)).add_operation (GALGAS_string ("_property.setOppositeRelationship ="), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 171)).add_operation (GALGAS_string (" { [weak self] (_ inManagedObject :"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 171)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 172)).add_operation (GALGAS_string ("\?) in\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 171)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inManagedObject\?.").add_operation (object->mProperty_mOppositeRelationshipName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 173)).add_operation (GALGAS_string ("_property.setProp (self)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 173)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 174)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                          extensionGetter_toManyPropertyGeneration_configurationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_configurationCode (defineExtensionGetter_toManyPropertyGeneration_configurationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@toManyPropertyGeneration setupFromDictionaryCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_setupFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 181)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 181)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 182)).add_operation (GALGAS_string ("_property.setProp (readEntityArrayFromDictionary (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 182)) ;
  result_result.plusAssign_operation(GALGAS_string ("      inRelationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 183)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 183)) ;
  result_result.plusAssign_operation(GALGAS_string ("      inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 184)) ;
  result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 185)) ;
  result_result.plusAssign_operation(GALGAS_string ("    ) as! [").add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 186)).add_operation (GALGAS_string ("])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 186)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_setupFromDictionaryCode (void) {
  enterExtensionGetter_setupFromDictionaryCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                extensionGetter_toManyPropertyGeneration_setupFromDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_setupFromDictionaryCode (defineExtensionGetter_toManyPropertyGeneration_setupFromDictionaryCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@toManyPropertyGeneration saveIntoDictionaryCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 192)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 192)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.store (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 193)) ;
  result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 194)).add_operation (GALGAS_string ("_property.propval as NSArray,\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 194)) ;
  result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 195)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 195)) ;
  result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 196)) ;
  result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 197)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_saveIntoDictionaryCode (void) {
  enterExtensionGetter_saveIntoDictionaryCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                               extensionGetter_toManyPropertyGeneration_saveIntoDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_saveIntoDictionaryCode (defineExtensionGetter_toManyPropertyGeneration_saveIntoDictionaryCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@toManyPropertyGeneration objectAccessibilityCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_objectAccessibilityCode (const cPtr_propertyGeneration * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 203)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 203)) ;
  result_result.plusAssign_operation(GALGAS_string ("    for managedObject : EBManagedObject in self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 206)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_objectAccessibilityCode (void) {
  enterExtensionGetter_objectAccessibilityCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                extensionGetter_toManyPropertyGeneration_objectAccessibilityCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_objectAccessibilityCode (defineExtensionGetter_toManyPropertyGeneration_objectAccessibilityCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@toManyPropertyGeneration clearObjectExplorerCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 212)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 213)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 213)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                extensionGetter_toManyPropertyGeneration_clearObjectExplorerCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_clearObjectExplorerCode (defineExtensionGetter_toManyPropertyGeneration_clearObjectExplorerCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@propertyArrayDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_propertyArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_propertyArrayDeclarationAST * object = (const cPtr_propertyArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_propertyArrayDeclarationAST) ;
  GALGAS_lstring var_node_849 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 20)).add_operation (object->mProperty_mStoredArrayPropertyName.getter_string (SOURCE_FILE ("stored-array-property.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 20)), object->mProperty_mStoredArrayPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 20)) ;
  {
  const GALGAS_propertyArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_849, temp_0, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 21)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_849, object->mProperty_mClassName COMMA_SOURCE_FILE ("stored-array-property.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_849, object->mProperty_mElementClassName COMMA_SOURCE_FILE ("stored-array-property.galgas", 23)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_propertyArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_propertyArrayDeclarationAST.mSlotID,
                                               extensionMethod_propertyArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_propertyArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_propertyArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension getter '@propertyArrayDeclarationAST lkey'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_propertyArrayDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_propertyArrayDeclarationAST * object = (const cPtr_propertyArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_propertyArrayDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 29)).add_operation (object->mProperty_mStoredArrayPropertyName.getter_string (SOURCE_FILE ("stored-array-property.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 29)), object->mProperty_mStoredArrayPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 29)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_propertyArrayDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_propertyArrayDeclarationAST.mSlotID,
                             extensionGetter_propertyArrayDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_propertyArrayDeclarationAST_lkey (defineExtensionGetter_propertyArrayDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@propertyArrayDeclarationAST firstAnalysisPhase'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_propertyArrayDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_propertyArrayDeclarationAST * object = (const cPtr_propertyArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_propertyArrayDeclarationAST) ;
  cMapElement_classMap * objectArray_2919 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("stored-array-property.galgas", 69)) ;
  if (NULL != objectArray_2919) {
      macroValidSharedObject (objectArray_2919, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_3074 ;
    GALGAS_propertyMap joker_3076_3 ; // Joker input parameter
    GALGAS_actionMap joker_3076_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3076_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mElementClassName, var_classKind_3074, joker_3076_3, joker_3076_2, joker_3076_1, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 72)) ;
    switch (var_classKind_3074.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mElementClassName.getter_location (SOURCE_FILE ("stored-array-property.galgas", 75)), GALGAS_string ("a simple class is required here"), fixItArray0  COMMA_SOURCE_FILE ("stored-array-property.galgas", 75)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_simpleClass:
      {
        GALGAS_propertyKind var_kind_3221 = GALGAS_propertyKind::constructor_toMany (object->mProperty_mElementClassName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("stored-array-property.galgas", 79)), GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 77)) ;
        {
        objectArray_2919->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mStoredArrayPropertyName, var_kind_3221, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("stored-array-property.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 83)) ;
        }
        objectArray_2919->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicArrayGeneration::constructor_new (object->mProperty_mStoredArrayPropertyName.getter_string (SOURCE_FILE ("stored-array-property.galgas", 86)), object->mProperty_mElementClassName.getter_string (SOURCE_FILE ("stored-array-property.galgas", 87))  COMMA_SOURCE_FILE ("stored-array-property.galgas", 85))  COMMA_SOURCE_FILE ("stored-array-property.galgas", 85)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mElementClassName.getter_location (SOURCE_FILE ("stored-array-property.galgas", 90)), GALGAS_string ("a simple class is required here"), fixItArray1  COMMA_SOURCE_FILE ("stored-array-property.galgas", 90)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mElementClassName.getter_location (SOURCE_FILE ("stored-array-property.galgas", 92)), GALGAS_string ("a simple class is required here"), fixItArray2  COMMA_SOURCE_FILE ("stored-array-property.galgas", 92)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mElementClassName.getter_location (SOURCE_FILE ("stored-array-property.galgas", 94)), GALGAS_string ("a simple class is required here"), fixItArray3  COMMA_SOURCE_FILE ("stored-array-property.galgas", 94)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_propertyArrayDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_propertyArrayDeclarationAST.mSlotID,
                                           extensionMethod_propertyArrayDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_propertyArrayDeclarationAST_firstAnalysisPhase (defineExtensionMethod_propertyArrayDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@atomicArrayGeneration prefKeyDefinitionCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicArrayGeneration_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicArrayGeneration * object = (const cPtr_atomicArrayGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicArrayGeneration) ;
  result_result = GALGAS_string ("let Preferences_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 110)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 110)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 110)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 110)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicArrayGeneration_prefKeyDefinitionCode (void) {
  enterExtensionGetter_prefKeyDefinitionCode (kTypeDescriptor_GALGAS_atomicArrayGeneration.mSlotID,
                                              extensionGetter_atomicArrayGeneration_prefKeyDefinitionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicArrayGeneration_prefKeyDefinitionCode (defineExtensionGetter_atomicArrayGeneration_prefKeyDefinitionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension getter '@atomicArrayGeneration declarationCode'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicArrayGeneration_declarationCode (const cPtr_propertyGeneration * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicArrayGeneration * object = (const cPtr_atomicArrayGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicArrayGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 116)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 116)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Property array: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 117)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 117)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 118)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 118)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 119)).add_operation (GALGAS_string ("_property = StoredArrayOf_"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 119)).add_operation (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 119)).add_operation (GALGAS_string ("(Preferences_"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 119)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 120)).add_operation (GALGAS_string (")\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 119)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 121)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 121)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 122)).add_operation (GALGAS_string ("_property_selection : EBSelection < ["), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 122)).add_operation (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 122)).add_operation (GALGAS_string ("] > {\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 122)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 123)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 123)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 124)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicArrayGeneration_declarationCode (void) {
  enterExtensionGetter_declarationCode (kTypeDescriptor_GALGAS_atomicArrayGeneration.mSlotID,
                                        extensionGetter_atomicArrayGeneration_declarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicArrayGeneration_declarationCode (defineExtensionGetter_atomicArrayGeneration_declarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension getter '@atomicArrayGeneration configurationCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicArrayGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicArrayGeneration * object = (const cPtr_atomicArrayGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicArrayGeneration) ;
  result_result = GALGAS_string ("  //--- Property array: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 130)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 130)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 131)).add_operation (GALGAS_string ("_property.undoManager = self.undoManager\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 131)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicArrayGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_atomicArrayGeneration.mSlotID,
                                          extensionGetter_atomicArrayGeneration_configurationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicArrayGeneration_configurationCode (defineExtensionGetter_atomicArrayGeneration_configurationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'validationStubExtension'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_1 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension (
  "controllers",
  0,
  gWrapperAllFiles_validationStubExtension_1,
  0,
  gWrapperAllDirectories_validationStubExtension_1
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_2 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension (
  "outlet-classes",
  0,
  gWrapperAllFiles_validationStubExtension_2,
  0,
  gWrapperAllDirectories_validationStubExtension_2
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "standard-properties",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  0,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_4 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_4_validationStubExtension (
  "swift-sources",
  0,
  gWrapperAllFiles_validationStubExtension_4,
  0,
  gWrapperAllDirectories_validationStubExtension_4
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_5 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_5_validationStubExtension (
  "xcode-project",
  0,
  gWrapperAllFiles_validationStubExtension_5,
  0,
  gWrapperAllDirectories_validationStubExtension_5
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [6] = {
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
  & gWrapperDirectory_3_validationStubExtension,
  & gWrapperDirectory_4_validationStubExtension,
  & gWrapperDirectory_5_validationStubExtension,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension (
  "",
  0,
  gWrapperAllFiles_validationStubExtension_0,
  5,
  gWrapperAllDirectories_validationStubExtension_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Filewrapper template 'validationStubExtension actionGeneration'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_validationStubExtension_actionGeneration (C_Compiler * /* inCompiler */,
                                                                            const GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_MODEL_5F_NAME,
                                                                            const GALGAS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "extension " ;
  result << in_OBJECT_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n"
    "  func validate_" ;
  result << in_MODEL_5F_NAME.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "currentValue : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ",\n"
    "                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "proposedValue : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ") -> EBValidationResult <" ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << "> {\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateValidationRoutineStubs'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateValidationRoutineStubs (const GALGAS_string constinArgument_inOutputDirectory,
                                             const GALGAS_validationStubRoutineListForGeneration constinArgument_inValidationStubRoutineListForGeneration,
                                             GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_validationStubRoutineListForGeneration enumerator_1297 (constinArgument_inValidationStubRoutineListForGeneration, kENUMERATION_UP) ;
  while (enumerator_1297.hasCurrentObject ()) {
    GALGAS_string var_s_1310 = GALGAS_string (filewrapperTemplate_validationStubExtension_actionGeneration (inCompiler, enumerator_1297.current_mObjectTypeName (HERE), enumerator_1297.current_mModelName (HERE), enumerator_1297.current_mModelTypeName (HERE) COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 32))) ;
    GALGAS_string var_fileName_1452 = GALGAS_string ("validation-").add_operation (enumerator_1297.current_mObjectTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 37)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 37)).add_operation (enumerator_1297.current_mModelName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 37)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 37)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_1452  COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 38)) ;
    GALGAS_string var_defaultUserZone_32__1577 = GALGAS_string ("    var result : EBValidationResult <").add_operation (enumerator_1297.current_mModelTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 40)).add_operation (GALGAS_string (">\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 40)).add_operation (GALGAS_string ("    let validates = false // Add your validation condition here\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 40)).add_operation (GALGAS_string ("    if validates {\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 41)).add_operation (GALGAS_string ("      result = .ok (proposedValue)\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 42)).add_operation (GALGAS_string ("    }else{\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 43)).add_operation (GALGAS_string ("      result = .rejectWithAlert (\"Rejected in \\(#file), line \\(#line)\")\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 44)).add_operation (GALGAS_string ("    }\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 45)).add_operation (GALGAS_string ("    return result\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 46)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_1452, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_1310, var_defaultUserZone_32__1577, GALGAS_string ("  }\n"
      "}\n"
      "\n"
      "//---------------------------------------------------------------------------------------------------------------------*\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 48)) ;
    }
    enumerator_1297.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'buildActionMap'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildActionMap (const GALGAS_lstringlist constinArgument_inActionDeclarationList,
                             GALGAS_actionMap & outArgument_outActionMap,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActionMap.drop () ; // Release 'out' argument
  outArgument_outActionMap = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("run-action.galgas", 47)) ;
  cEnumerator_lstringlist enumerator_1949 (constinArgument_inActionDeclarationList, kENUMERATION_UP) ;
  while (enumerator_1949.hasCurrentObject ()) {
    {
    outArgument_outActionMap.setter_insertKey (enumerator_1949.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 49)) ;
    }
    enumerator_1949.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@actionFileGeneration generateCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_actionFileGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                               const GALGAS_string constinArgument_inOutputDirectory,
                                                               GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_actionFileGeneration * object = (const cPtr_actionFileGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_actionFileGeneration) ;
  GALGAS_string var_s_2635 = GALGAS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, object->mProperty_mClassName, object->mProperty_mActionName COMMA_SOURCE_FILE ("run-action.galgas", 68))) ;
  GALGAS_string var_fileName_2744 = GALGAS_string ("action-").add_operation (object->mProperty_mClassName, inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 72)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 72)).add_operation (object->mProperty_mActionName, inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 72)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 72)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_2744  COMMA_SOURCE_FILE ("run-action.galgas", 73)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2744, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), var_s_2635, GALGAS_string ("    ENTER USER CODE HERE\n"), GALGAS_string ("  }\n"
    "}\n"
    "\n"
    "//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("run-action.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 82)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 82)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 74)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_actionFileGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_actionFileGeneration.mSlotID,
                                     extensionMethod_actionFileGeneration_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_actionFileGeneration_generateCode (defineExtensionMethod_actionFileGeneration_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Filewrapper 'actionGenerationTemplate'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_actionGenerationTemplate_1,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_1
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_2_actionGenerationTemplate (
  "outlet-classes",
  0,
  gWrapperAllFiles_actionGenerationTemplate_2,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_2
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_3 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_actionGenerationTemplate_3,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_3
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_4_actionGenerationTemplate (
  "swift-sources",
  0,
  gWrapperAllFiles_actionGenerationTemplate_4,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_4
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_5_actionGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_actionGenerationTemplate_5,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_5
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_0 [6] = {
  & gWrapperDirectory_1_actionGenerationTemplate,
  & gWrapperDirectory_2_actionGenerationTemplate,
  & gWrapperDirectory_3_actionGenerationTemplate,
  & gWrapperDirectory_4_actionGenerationTemplate,
  & gWrapperDirectory_5_actionGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_actionGenerationTemplate_0,
  5,
  gWrapperAllDirectories_actionGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Filewrapper template 'actionGenerationTemplate actionGeneration'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (C_Compiler * /* inCompiler */,
                                                                             const GALGAS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                             const GALGAS_string & in_ACTION_5F_NAME
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "extension " ;
  result << in_EXTENDED_5F_CLASS_5F_NAME.stringValue () ;
  result << " {\n"
    "  @objc func " ;
  result << in_ACTION_5F_NAME.stringValue () ;
  result << " (_ sender : NSObject\?) {\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBindingEX'     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                          const GALGAS_observablePropertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                                          const GALGAS_semanticContextEX /* constinArgument_inSemanticContext */,
                                                                                                          const GALGAS_observablePropertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                                          GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                          GALGAS_typeKind & outArgument_outType,
                                                                                                          GALGAS_location & outArgument_outErrorLocation,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntMultipleBindingExpressionAST * object = (const cPtr_literalIntMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntMultipleBindingExpressionAST) ;
  outArgument_outEnableExpression = GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (object->mProperty_mValue.getter_uint (HERE)  COMMA_SOURCE_FILE ("multiple-binding.galgas", 245)) ;
  outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("multiple-binding.galgas", 246)) ;
  outArgument_outErrorLocation = object->mProperty_mValue.getter_location (HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBindingEX (kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST.mSlotID,
                                                              extensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (defineExtensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBindingEX'*
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                    const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                    const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                                                                                    const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                                    GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                                    GALGAS_typeKind & outArgument_outType,
                                                                                                                    GALGAS_location & outArgument_outErrorLocation,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_observablePropertyInMultipleBindingExpressionAST * object = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  GALGAS_propertyKind var_kind_11321 ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument_11389 ;
  extensionMethod_analyzeObservablePropertyEX (object->mProperty_mProperty, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_kind_11321, var_swiftTypeStringForTransientFunctionArgument_11389, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 260)) ;
  switch (var_kind_11321.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_11453 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_11321.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_11453->mAssociatedValue0 ;
      outArgument_outType = extractedValue_type ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 271)), GALGAS_string ("only an atomic property can be observed"), fixItArray0  COMMA_SOURCE_FILE ("multiple-binding.galgas", 271)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 273)), GALGAS_string ("only an atomic property can be observed"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 273)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 275)), GALGAS_string ("only an atomic property can be observed"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 275)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 277)), GALGAS_string ("only an atomic property can be observed"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 277)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (extensionGetter_modelStringForSelf (object->mProperty_mProperty, GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 280))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 279)) ;
  outArgument_outErrorLocation = extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 282)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBindingEX (kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST.mSlotID,
                                                              extensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (defineExtensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//   Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBindingEX'    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                             const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                             const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                                                                             const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                             GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                             GALGAS_typeKind & outArgument_outType,
                                                                                                             GALGAS_location & outArgument_outErrorLocation,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_negateBooleanMultipleBindingExpressionAST * object = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_12823 ;
  callExtensionMethod_analyzeExpressionForMultipleBindingEX ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression_12823, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 295)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 303)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 303)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 304)) ;
    }
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression_12823  COMMA_SOURCE_FILE ("multiple-binding.galgas", 306)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBindingEX (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST.mSlotID,
                                                              extensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (defineExtensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBindingEX'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                         const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                         const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                                                                         const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                         GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                         GALGAS_typeKind & outArgument_outType,
                                                                                                         GALGAS_location & outArgument_outErrorLocation,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orBooleanMultipleBindingExpressionAST * object = (const cPtr_orBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_13812 ;
  GALGAS_typeKind var_outLeftType_13833 ;
  GALGAS_location var_outLeftLocation_13858 ;
  callExtensionMethod_analyzeExpressionForMultipleBindingEX ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_13812, var_outLeftType_13833, var_outLeftLocation_13858, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 319)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_13833.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 327)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 327)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_13858, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 328)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_14211 ;
  GALGAS_typeKind var_outRightType_14233 ;
  GALGAS_location var_outRightLocation_14259 ;
  callExtensionMethod_analyzeExpressionForMultipleBindingEX ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_14211, var_outRightType_14233, var_outRightLocation_14259, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 330)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_14233.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 338)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 338)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_14259, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 339)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 341)) ;
  outArgument_outErrorLocation = var_outRightLocation_14259 ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_13812, var_rightExpression_14211  COMMA_SOURCE_FILE ("multiple-binding.galgas", 343)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBindingEX (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST.mSlotID,
                                                              extensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (defineExtensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBindingEX'     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                          const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                          GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                          GALGAS_typeKind & outArgument_outType,
                                                                                                          GALGAS_location & outArgument_outErrorLocation,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorBooleanMultipleBindingExpressionAST * object = (const cPtr_xorBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15299 ;
  GALGAS_typeKind var_outLeftType_15320 ;
  GALGAS_location var_outLeftLocation_15345 ;
  callExtensionMethod_analyzeExpressionForMultipleBindingEX ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_15299, var_outLeftType_15320, var_outLeftLocation_15345, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 356)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_15320.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 364)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 364)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15345, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 365)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15698 ;
  GALGAS_typeKind var_outRightType_15720 ;
  GALGAS_location var_outRightLocation_15746 ;
  callExtensionMethod_analyzeExpressionForMultipleBindingEX ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_15698, var_outRightType_15720, var_outRightLocation_15746, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 367)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_15720.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 375)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 375)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_15746, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 376)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 378)) ;
  outArgument_outErrorLocation = var_outRightLocation_15746 ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_15299, var_rightExpression_15698  COMMA_SOURCE_FILE ("multiple-binding.galgas", 380)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBindingEX (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST.mSlotID,
                                                              extensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (defineExtensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBindingEX'     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                          const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                          GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                          GALGAS_typeKind & outArgument_outType,
                                                                                                          GALGAS_location & outArgument_outErrorLocation,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andBooleanMultipleBindingExpressionAST * object = (const cPtr_andBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16787 ;
  GALGAS_typeKind var_outLeftType_16808 ;
  GALGAS_location var_outLeftLocation_16833 ;
  callExtensionMethod_analyzeExpressionForMultipleBindingEX ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_16787, var_outLeftType_16808, var_outLeftLocation_16833, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 393)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_16808.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 401)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 401)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_16833, GALGAS_string ("cannot apply 'and': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 402)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17187 ;
  GALGAS_typeKind var_outRightType_17209 ;
  GALGAS_location var_outRightLocation_17235 ;
  callExtensionMethod_analyzeExpressionForMultipleBindingEX ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_17187, var_outRightType_17209, var_outRightLocation_17235, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 404)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_17209.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 412)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 412)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_17235, GALGAS_string ("cannot apply 'and': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 413)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 415)) ;
  outArgument_outErrorLocation = var_outRightLocation_17235 ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_16787, var_rightExpression_17187  COMMA_SOURCE_FILE ("multiple-binding.galgas", 417)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBindingEX (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST.mSlotID,
                                                              extensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (defineExtensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBindingEX'     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                          const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                          GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                          GALGAS_typeKind & outArgument_outType,
                                                                                                          GALGAS_location & outArgument_outErrorLocation,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonMultipleBindingExpressionAST * object = (const cPtr_comparisonMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18277 ;
  GALGAS_typeKind var_outLeftType_18298 ;
  GALGAS_location var_outLeftLocation_18323 ;
  callExtensionMethod_analyzeExpressionForMultipleBindingEX ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_18277, var_outLeftType_18298, var_outLeftLocation_18323, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 430)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_18554 ;
  GALGAS_typeKind var_outRightType_18576 ;
  GALGAS_location var_outRightLocation_18602 ;
  callExtensionMethod_analyzeExpressionForMultipleBindingEX ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_18554, var_outRightType_18576, var_outRightLocation_18602, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 438)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = var_outLeftType_18298.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 446)) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = var_outLeftType_18298.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas", 446)) ;
    }
    test_0 = test_1.operator_not (SOURCE_FILE ("multiple-binding.galgas", 446)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_18323, GALGAS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 447)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_outRightType_18576.objectCompare (var_outLeftType_18298)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outRightLocation_18602, GALGAS_string ("cannot compare: right operand type is different than left operand type"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas", 450)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 452)) ;
  outArgument_outErrorLocation = var_outRightLocation_18602 ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_18277, object->mProperty_mOperator, var_rightExpression_18554  COMMA_SOURCE_FILE ("multiple-binding.galgas", 454)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBindingEX (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST.mSlotID,
                                                              extensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (defineExtensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//      Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                                        const GALGAS_propertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GALGAS_typeKind & outArgument_outType,
                                                                                                        GALGAS_location & outArgument_outErrorLocation,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntMultipleBindingExpressionAST * object = (const cPtr_literalIntMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntMultipleBindingExpressionAST) ;
  outArgument_outEnableExpression = GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (object->mProperty_mValue.getter_uint (HERE)  COMMA_SOURCE_FILE ("multiple-binding.galgas", 483)) ;
  outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("multiple-binding.galgas", 484)) ;
  outArgument_outErrorLocation = object->mProperty_mValue.getter_location (HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
// Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding' *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                  const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                                  const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                                  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                                  GALGAS_typeKind & outArgument_outType,
                                                                                                                  GALGAS_location & outArgument_outErrorLocation,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_observablePropertyInMultipleBindingExpressionAST * object = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  GALGAS_propertyKind var_kind_21095 ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument_21163 ;
  extensionMethod_analyzeObservableProperty (object->mProperty_mProperty, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_kind_21095, var_swiftTypeStringForTransientFunctionArgument_21163, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 498)) ;
  switch (var_kind_21095.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_21227 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_21095.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_21227->mAssociatedValue0 ;
      outArgument_outType = extractedValue_type ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 509)), GALGAS_string ("only an atomic property can be observed"), fixItArray0  COMMA_SOURCE_FILE ("multiple-binding.galgas", 509)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 511)), GALGAS_string ("only an atomic property can be observed"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 511)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 513)), GALGAS_string ("only an atomic property can be observed"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 513)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 515)), GALGAS_string ("only an atomic property can be observed"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 515)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (extensionGetter_modelStringForSelf (object->mProperty_mProperty, GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 518))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 517)) ;
  outArgument_outErrorLocation = extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 520)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                           const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                           const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                           GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                           GALGAS_typeKind & outArgument_outType,
                                                                                                           GALGAS_location & outArgument_outErrorLocation,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_negateBooleanMultipleBindingExpressionAST * object = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_22571 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression_22571, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 533)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 541)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 541)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 542)) ;
    }
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression_22571  COMMA_SOURCE_FILE ("multiple-binding.galgas", 544)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//      Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                       const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                       GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                       GALGAS_typeKind & outArgument_outType,
                                                                                                       GALGAS_location & outArgument_outErrorLocation,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orBooleanMultipleBindingExpressionAST * object = (const cPtr_orBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_23534 ;
  GALGAS_typeKind var_outLeftType_23555 ;
  GALGAS_location var_outLeftLocation_23580 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_23534, var_outLeftType_23555, var_outLeftLocation_23580, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 557)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_23555.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 565)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 565)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_23580, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 566)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_23931 ;
  GALGAS_typeKind var_outRightType_23953 ;
  GALGAS_location var_outRightLocation_23979 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_23931, var_outRightType_23953, var_outRightLocation_23979, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_23953.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 576)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 576)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_23979, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 577)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 579)) ;
  outArgument_outErrorLocation = var_outRightLocation_23979 ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_23534, var_rightExpression_23931  COMMA_SOURCE_FILE ("multiple-binding.galgas", 581)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//      Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GALGAS_typeKind & outArgument_outType,
                                                                                                        GALGAS_location & outArgument_outErrorLocation,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorBooleanMultipleBindingExpressionAST * object = (const cPtr_xorBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_24993 ;
  GALGAS_typeKind var_outLeftType_25014 ;
  GALGAS_location var_outLeftLocation_25039 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_24993, var_outLeftType_25014, var_outLeftLocation_25039, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 594)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_25014.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 602)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 602)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_25039, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 603)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_25390 ;
  GALGAS_typeKind var_outRightType_25412 ;
  GALGAS_location var_outRightLocation_25438 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_25390, var_outRightType_25412, var_outRightLocation_25438, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 605)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_25412.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 613)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 613)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_25438, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 614)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 616)) ;
  outArgument_outErrorLocation = var_outRightLocation_25438 ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_24993, var_rightExpression_25390  COMMA_SOURCE_FILE ("multiple-binding.galgas", 618)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//      Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GALGAS_typeKind & outArgument_outType,
                                                                                                        GALGAS_location & outArgument_outErrorLocation,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andBooleanMultipleBindingExpressionAST * object = (const cPtr_andBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_26453 ;
  GALGAS_typeKind var_outLeftType_26474 ;
  GALGAS_location var_outLeftLocation_26499 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_26453, var_outLeftType_26474, var_outLeftLocation_26499, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 631)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_26474.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 639)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 639)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_26499, GALGAS_string ("cannot apply 'and': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 640)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_26851 ;
  GALGAS_typeKind var_outRightType_26873 ;
  GALGAS_location var_outRightLocation_26899 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_26851, var_outRightType_26873, var_outRightLocation_26899, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 642)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_26873.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 650)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 650)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_26899, GALGAS_string ("cannot apply 'and': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 651)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 653)) ;
  outArgument_outErrorLocation = var_outRightLocation_26899 ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_26453, var_rightExpression_26851  COMMA_SOURCE_FILE ("multiple-binding.galgas", 655)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//      Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GALGAS_typeKind & outArgument_outType,
                                                                                                        GALGAS_location & outArgument_outErrorLocation,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonMultipleBindingExpressionAST * object = (const cPtr_comparisonMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_27915 ;
  GALGAS_typeKind var_outLeftType_27936 ;
  GALGAS_location var_outLeftLocation_27961 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_27915, var_outLeftType_27936, var_outLeftLocation_27961, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 668)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_28190 ;
  GALGAS_typeKind var_outRightType_28212 ;
  GALGAS_location var_outRightLocation_28238 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_28190, var_outRightType_28212, var_outRightLocation_28238, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 676)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = var_outLeftType_27936.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 684)) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = var_outLeftType_27936.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas", 684)) ;
    }
    test_0 = test_1.operator_not (SOURCE_FILE ("multiple-binding.galgas", 684)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_27961, GALGAS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 685)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_outRightType_28212.objectCompare (var_outLeftType_27936)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outRightLocation_28238, GALGAS_string ("cannot compare: right operand type is different than left operand type"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas", 688)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 690)) ;
  outArgument_outErrorLocation = var_outRightLocation_28238 ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_27915, object->mProperty_mOperator, var_rightExpression_28190  COMMA_SOURCE_FILE ("multiple-binding.galgas", 692)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration observedModelSet'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset extensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * /* inObject */,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  result_outObservedModelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 709)) ;
//---
  return result_outObservedModelSet ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                         extensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet (defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//  Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration observedModelSet'  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                            C_Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 717)) ;
  temp_0.addAssign_operation (object->mProperty_mObservedModel  COMMA_SOURCE_FILE ("multiple-binding.galgas", 717)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration observedModelSet'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelSet = callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 725)) ;
//---
  return result_outObservedModelSet ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset extensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 733)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 733)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 733)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 733)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 733)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 741)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 741)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 741)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset extensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 749)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 749)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 749)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 749)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 749)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset extensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 757)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 757)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 757)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration expressionString'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * object = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  result_outExpressionString = GALGAS_string ("EBSelection.single (").add_operation (object->mProperty_mValue.getter_string (SOURCE_FILE ("multiple-binding.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 769)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 769)) ;
//---
  return result_outExpressionString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                         extensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//  Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = object->mProperty_mObservedModel.add_operation (GALGAS_string ("_selection"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 776)) ;
//---
  return result_outExpressionString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration expressionString'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("!").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 783)) ;
//---
  return result_outExpressionString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 790)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 790)).add_operation (GALGAS_string (" || "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 790)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 790)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 790)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 790)) ;
//---
  return result_outExpressionString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 797)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 797)).add_operation (GALGAS_string (" ^ "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 797)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 797)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 797)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 797)) ;
//---
  return result_outExpressionString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 804)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 804)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 804)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 804)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 804)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 804)) ;
//---
  return result_outExpressionString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 811)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 811)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 811)) ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_multipleBindingComparisonAST::kNotBuilt:
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_equal:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 813)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_notEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("!="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 814)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lower:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 815)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lowerOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("<="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 816)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greater:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 817)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greaterOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (">="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 818)) ;
    }
    break ;
  }
  result_outExpressionString.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 820)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 820)) ;
//---
  return result_outExpressionString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@arrayControllerDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  GALGAS_lstring var_node_1714 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 43)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 43)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 43)) ;
  {
  const GALGAS_arrayControllerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_1714, temp_0, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 44)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_1714, object->mProperty_mClassName COMMA_SOURCE_FILE ("array-controller.galgas", 45)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = object->mProperty_mIsRoot.operator_not (SOURCE_FILE ("array-controller.galgas", 46)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1714, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 47)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 47)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 47)) COMMA_SOURCE_FILE ("array-controller.galgas", 47)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1714, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 49)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 49)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 49)) COMMA_SOURCE_FILE ("array-controller.galgas", 49)) ;
        }
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                               extensionMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension getter '@arrayControllerDeclarationAST lkey'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_arrayControllerDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 56)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 56)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 56)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_arrayControllerDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                             extensionGetter_arrayControllerDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_arrayControllerDeclarationAST_lkey (defineExtensionGetter_arrayControllerDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@arrayControllerDeclarationAST firstAnalysisPhase'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayControllerDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  cMapElement_classMap * objectArray_7376 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("array-controller.galgas", 214)) ;
  if (NULL != objectArray_7376) {
      macroValidSharedObject (objectArray_7376, cMapElement_classMap) ;
    GALGAS_actionMap temp_0 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 217)) ;
    temp_0.addAssign_operation (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 217)) ;
    temp_0.addAssign_operation (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 217)) ;
    GALGAS_actionMap var_controllerActions_7491 = temp_0 ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = object->mProperty_mIsRoot.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_propertyMap var_rootProperties_7639 ;
        GALGAS_classKind joker_7618 ; // Joker input parameter
        GALGAS_actionMap joker_7641_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_7641_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_7618, var_rootProperties_7639, joker_7641_2, joker_7641_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 219)) ;
        GALGAS_propertyKind var_classKind_7712 ;
        GALGAS_actionMap joker_7714 ; // Joker input parameter
        var_rootProperties_7639.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_7712, joker_7714, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 220)) ;
        switch (var_classKind_7712.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 223)), GALGAS_string ("a tomany relationship is required here"), fixItArray2  COMMA_SOURCE_FILE ("array-controller.galgas", 223)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8334 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_7712.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_8334->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_graphic = extractPtr_8334->mAssociatedValue2 ;
            const GALGAS_bool extractedValue_isEntity = extractPtr_8334->mAssociatedValue3 ;
            GALGAS_propertyKind var_kind_7906 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 225)) ;
            {
            objectArray_7376->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_7906, var_controllerActions_7491, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 230)) ;
            }
            objectArray_7376->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), GALGAS_string ("rootObject.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 234)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 235)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("array-controller.galgas", 232))  COMMA_SOURCE_FILE ("array-controller.galgas", 232)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 239)), GALGAS_string ("a tomany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas", 239)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 241)), GALGAS_string ("a tomany relationship is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas", 241)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 243)), GALGAS_string ("a tomany relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("array-controller.galgas", 243)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_propertyKind var_classKind_8733 ;
      GALGAS_actionMap joker_8735 ; // Joker input parameter
      objectArray_7376->mProperty_mPropertyMap.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_8733, joker_8735, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 246)) ;
      switch (var_classKind_8733.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 249)), GALGAS_string ("a tomany relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("array-controller.galgas", 249)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_9343 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_8733.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_9343->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_graphic = extractPtr_9343->mAssociatedValue2 ;
          const GALGAS_bool extractedValue_isEntity = extractPtr_9343->mAssociatedValue3 ;
          GALGAS_propertyKind var_kind_8927 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 251)) ;
          {
          objectArray_7376->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_8927, var_controllerActions_7491, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 256)) ;
          }
          objectArray_7376->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 260)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 261)), extractedValue_isEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 258))  COMMA_SOURCE_FILE ("array-controller.galgas", 258)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 265)), GALGAS_string ("a tomany relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("array-controller.galgas", 265)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 267)), GALGAS_string ("a tomany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas", 267)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 269)), GALGAS_string ("a tomany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas", 269)) ;
        }
        break ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayControllerDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                           extensionMethod_arrayControllerDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayControllerDeclarationAST_firstAnalysisPhase (defineExtensionMethod_arrayControllerDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@arrayControllerDeclarationAST secondAnalysisPhase'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayControllerDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 284)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 284)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 284)) ;
  GALGAS_stringset var_attributes_10219 = temp_0 ;
  GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 285)) ;
  temp_1.addAssign_operation (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("array-controller.galgas", 285))  COMMA_SOURCE_FILE ("array-controller.galgas", 285)) ;
  GALGAS_typeKindList var_allowedTypes_10305 = temp_1 ;
  GALGAS_stringset var_definedAttributes_10365 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 286)) ;
  GALGAS__32_stringlist var_attributeListForGeneration_10412 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 287)) ;
  cEnumerator_arrayControllerAttributListAST enumerator_10471 (object->mProperty_mArrayControllerAttributListAST, kENUMERATION_UP) ;
  while (enumerator_10471.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_attributes_10219.getter_hasKey (enumerator_10471.current_mAttributeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 289)).operator_not (SOURCE_FILE ("array-controller.galgas", 289)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10471.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 290)), GALGAS_string ("unknown attribute"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas", 290)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_definedAttributes_10365.getter_hasKey (enumerator_10471.current_mAttributeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 291)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_10471.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 292)), GALGAS_string ("attribute multiply defined"), fixItArray5  COMMA_SOURCE_FILE ("array-controller.galgas", 292)) ;
        }
      }
      if (kBoolFalse == test_4) {
        var_definedAttributes_10365.addAssign_operation (enumerator_10471.current_mAttributeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 294)) ;
      }
    }
    GALGAS_string var_valueAsString_10790 ;
    callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_10471.current_mAttributeValue (HERE).ptr (), var_allowedTypes_10305, var_valueAsString_10790, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 296)) ;
    var_attributeListForGeneration_10412.addAssign_operation (enumerator_10471.current_mAttributeName (HERE).getter_string (HERE), var_valueAsString_10790  COMMA_SOURCE_FILE ("array-controller.galgas", 297)) ;
    enumerator_10471.gotoNextObject () ;
  }
  cEnumerator_stringset enumerator_10881 (var_attributes_10219, kENUMERATION_UP) ;
  while (enumerator_10881.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_definedAttributes_10365.getter_hasKey (enumerator_10881.current (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 300)).operator_not (SOURCE_FILE ("array-controller.galgas", 300)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("array-controller.galgas", 301)), GALGAS_string ("attribute '").add_operation (enumerator_10881.current (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 301)).add_operation (GALGAS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 301)), fixItArray7  COMMA_SOURCE_FILE ("array-controller.galgas", 301)) ;
      }
    }
    enumerator_10881.gotoNextObject () ;
  }
  GALGAS_propertyMap var_boundModelPropertyMap_11055 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = object->mProperty_mIsRoot.boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_classKind joker_11149 ; // Joker input parameter
      GALGAS_actionMap joker_11190_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_11190_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_11149, var_boundModelPropertyMap_11055, joker_11190_2, joker_11190_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 307)) ;
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_classKind joker_11277 ; // Joker input parameter
    GALGAS_actionMap joker_11318_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_11318_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_11277, var_boundModelPropertyMap_11055, joker_11318_2, joker_11318_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 314)) ;
  }
  GALGAS_propertyKind var_boundModelClassKind_11440 ;
  GALGAS_actionMap joker_11447 ; // Joker input parameter
  var_boundModelPropertyMap_11055.method_searchKey (object->mProperty_mToManyPropertyName, var_boundModelClassKind_11440, joker_11447, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 321)) ;
  GALGAS_actionMap var_actionMap_11562 ;
  GALGAS_propertyMap var_propertyMap_11589 ;
  GALGAS_arrayControllerModelKind var_arrayControllerModelKind_11642 ;
  GALGAS_bool var_graphic_11658 ;
  GALGAS_string var_elementTypeName_11684 ;
  switch (var_boundModelClassKind_11440.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 334)), GALGAS_string ("a tomany property is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas", 334)) ;
      var_graphic_11658.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_11642.drop () ; // Release error dropped variable
      var_propertyMap_11589.drop () ; // Release error dropped variable
      var_actionMap_11562.drop () ; // Release error dropped variable
      var_elementTypeName_11684.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_12252 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_boundModelClassKind_11440.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_12252->mAssociatedValue0 ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_12252->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isGraphic = extractPtr_12252->mAssociatedValue2 ;
      const GALGAS_bool extractedValue_isEntity = extractPtr_12252->mAssociatedValue3 ;
      var_elementTypeName_11684 = extractedValue_typeName.getter_string (SOURCE_FILE ("array-controller.galgas", 338)) ;
      var_graphic_11658 = extractedValue_isGraphic ;
      GALGAS_arrayControllerModelKind temp_10 ;
      const enumGalgasBool test_11 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("array-controller.galgas", 340)).boolEnum () ;
      if (kBoolTrue == test_11) {
        temp_10 = GALGAS_arrayControllerModelKind::constructor_transientArray (SOURCE_FILE ("array-controller.galgas", 341)) ;
      }else if (kBoolFalse == test_11) {
        GALGAS_arrayControllerModelKind temp_12 ;
        const enumGalgasBool test_13 = extractedValue_isEntity.boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = GALGAS_arrayControllerModelKind::constructor_entityArray (SOURCE_FILE ("array-controller.galgas", 342)) ;
        }else if (kBoolFalse == test_13) {
          temp_12 = GALGAS_arrayControllerModelKind::constructor_classArray (SOURCE_FILE ("array-controller.galgas", 342)) ;
        }
        temp_10 = temp_12 ;
      }
      var_arrayControllerModelKind_11642 = temp_10 ;
      GALGAS_classKind joker_12223 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_12250 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_12223, var_propertyMap_11589, var_actionMap_11562, joker_12250, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 344)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 346)), GALGAS_string ("a tomany property is required here"), fixItArray14  COMMA_SOURCE_FILE ("array-controller.galgas", 346)) ;
      var_graphic_11658.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_11642.drop () ; // Release error dropped variable
      var_propertyMap_11589.drop () ; // Release error dropped variable
      var_actionMap_11562.drop () ; // Release error dropped variable
      var_elementTypeName_11684.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 350)), GALGAS_string ("a tomany property is required here"), fixItArray15  COMMA_SOURCE_FILE ("array-controller.galgas", 350)) ;
      var_graphic_11658.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_11642.drop () ; // Release error dropped variable
      var_propertyMap_11589.drop () ; // Release error dropped variable
      var_actionMap_11562.drop () ; // Release error dropped variable
      var_elementTypeName_11684.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 354)), GALGAS_string ("a tomany property is required here"), fixItArray16  COMMA_SOURCE_FILE ("array-controller.galgas", 354)) ;
      var_graphic_11658.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_11642.drop () ; // Release error dropped variable
      var_propertyMap_11589.drop () ; // Release error dropped variable
      var_actionMap_11562.drop () ; // Release error dropped variable
      var_elementTypeName_11684.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_arrayControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_12906 = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 358)) ;
  GALGAS_arrayControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_13004 = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 359)) ;
  cEnumerator_arrayControllerBoundColumnListAST enumerator_13056 (object->mProperty_mArrayControllerBoundColumnListAST, kENUMERATION_UP) ;
  while (enumerator_13056.hasCurrentObject ()) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (kIsNotEqual, enumerator_13056.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_17) {
        var_actionMap_11562.method_searchKey (enumerator_13056.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 363)) ;
      }
    }
    GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_13330 = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 366)) ;
    {
    routine_analyzeRegularBinding (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 368)), ioArgument_ioSemanticContext, var_propertyMap_11589, enumerator_13056.current_mColumnOutletTypeName (HERE), GALGAS_string ("<<not used>>"), enumerator_13056.current_mColumnBindingAST (HERE).getter_mRegularBindingList (HERE), GALGAS_string ("object"), var_regularBindingsGenerationList_13330, inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 367)) ;
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = GALGAS_bool (kIsNotEqual, enumerator_13056.current_mSortPropertyName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_propertyKind var_sortPropertyKind_13762 ;
        GALGAS_actionMap joker_13772 ; // Joker input parameter
        var_propertyMap_11589.method_searchKey (enumerator_13056.current_mSortPropertyName (HERE), var_sortPropertyKind_13762, joker_13772, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 379)) ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extensionGetter_isComparable (var_sortPropertyKind_13762, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 384)).operator_not (SOURCE_FILE ("array-controller.galgas", 384)).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_13056.current_mSortPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 385)), GALGAS_string ("this property is not comparable"), fixItArray20  COMMA_SOURCE_FILE ("array-controller.galgas", 385)) ;
          }
        }
        var_arrayControllerSortedColumnListForGeneration_13004.addAssign_operation (enumerator_13056.current_mColumnName (HERE).getter_string (HERE), var_sortPropertyKind_13762, enumerator_13056.current_mSortPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 387)) ;
      }
    }
    var_arrayControllerBoundColumnListForGeneration_12906.addAssign_operation (enumerator_13056.current_mColumnName (HERE).getter_string (HERE), enumerator_13056.current_mColumnOutletTypeName (HERE).getter_string (HERE), enumerator_13056.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE).getter_string (HERE), var_regularBindingsGenerationList_13330  COMMA_SOURCE_FILE ("array-controller.galgas", 393)) ;
    ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_13056.current_mColumnOutletTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 398)) ;
    enumerator_13056.gotoNextObject () ;
  }
  GALGAS_arrayControllerFilterListForGeneration var_arrayControllerFilterListForGeneration_14536 = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 401)) ;
  cEnumerator_lstringlist enumerator_14589 (object->mProperty_mFilterProperties, kENUMERATION_UP) ;
  while (enumerator_14589.hasCurrentObject ()) {
    GALGAS_propertyKind var_columnKind_14681 ;
    GALGAS_actionMap joker_14689 ; // Joker input parameter
    var_propertyMap_11589.method_searchKey (enumerator_14589.current_mValue (HERE), var_columnKind_14681, joker_14689, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 403)) ;
    var_arrayControllerFilterListForGeneration_14536.addAssign_operation (enumerator_14589.current_mValue (HERE).getter_string (HERE), var_columnKind_14681  COMMA_SOURCE_FILE ("array-controller.galgas", 408)) ;
    enumerator_14589.gotoNextObject () ;
  }
  GALGAS_string temp_21 ;
  const enumGalgasBool test_22 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_string ("self.rootObject.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 411)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 411)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_string ("self.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 412)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 412)) ;
  }
  GALGAS_string var_modelString_14805 = temp_21 ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_arrayControllerGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 416)), object->mProperty_mControllerName, var_arrayControllerFilterListForGeneration_14536, var_modelString_14805, var_arrayControllerBoundColumnListForGeneration_12906, var_arrayControllerSortedColumnListForGeneration_13004, GALGAS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_11684, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 422)), var_arrayControllerModelKind_11642, var_elementTypeName_11684, var_graphic_11658, var_attributeListForGeneration_10412  COMMA_SOURCE_FILE ("array-controller.galgas", 415))  COMMA_SOURCE_FILE ("array-controller.galgas", 415)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayControllerDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                            extensionMethod_arrayControllerDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayControllerDeclarationAST_secondAnalysisPhase (defineExtensionMethod_arrayControllerDeclarationAST_secondAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@arrayControllerPropertyGeneration declarationCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_declarationCode (const cPtr_propertyGeneration * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 444)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 444)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Array controller: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 445)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 445)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 445)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 446)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 446)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 447)).add_operation (GALGAS_string (" = ArrayController_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 447)).add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 447)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 447)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 447)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 447)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_arrayControllerPropertyGeneration_declarationCode (void) {
  enterExtensionGetter_declarationCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                        extensionGetter_arrayControllerPropertyGeneration_declarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_declarationCode (defineExtensionGetter_arrayControllerPropertyGeneration_declarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension getter '@arrayControllerPropertyGeneration configurationCode'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 453)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 453)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mUsesManagedObjectContext.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 455)).add_operation (GALGAS_string (".setManagedObjectContext (self.managedObjectContext ())\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 455)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 457)).add_operation (GALGAS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 457)).add_operation (object->mProperty_mModelString, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 457)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 457)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_arrayControllerPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                          extensionGetter_arrayControllerPropertyGeneration_configurationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_configurationCode (defineExtensionGetter_arrayControllerPropertyGeneration_configurationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@arrayControllerPropertyGeneration populateExplorerWindowCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 463)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 463)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 464)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode (void) {
  enterExtensionGetter_populateExplorerWindowCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                                   extensionGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode (defineExtensionGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@arrayControllerPropertyGeneration terminationCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 470)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 470)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 471)).add_operation (GALGAS_string (".unbind_model ()\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 471)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_arrayControllerPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                        extensionGetter_arrayControllerPropertyGeneration_terminationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_terminationCode (defineExtensionGetter_arrayControllerPropertyGeneration_terminationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Filewrapper 'collectionControllerGenerationTemplate'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_collectionControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_collectionControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_collectionControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_collectionControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_collectionControllerGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Filewrapper template 'collectionControllerGenerationTemplate arrayControllerImplementationInSwift'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_collectionControllerGenerationTemplate_arrayControllerImplementationInSwift (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                               const GALGAS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                               const GALGAS_arrayControllerFilterListForGeneration & in_FILTER_5F_PROPERTIES,
                                                                                                               const GALGAS_string & /* in_MODEL_5F_STRING */,
                                                                                                               const GALGAS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                               const GALGAS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                               const GALGAS_arrayControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                               const GALGAS_arrayControllerSortedColumnListForGeneration & in_SORTED_5F_COLUMNS,
                                                                                                               const GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const GALGAS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC,
                                                                                                               const GALGAS_stringset & in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING,
                                                                                                               const GALGAS__32_stringlist & in_ATTRIBUTE_5F_VALUES
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
    "private let DEBUG_EVENT = false\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("ArrayController_").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 12)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 12)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 12)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "final class ArrayController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " : EBObject, EBTableViewDelegate, EBTableViewDataSource" ;
  const enumGalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ", EBViewControllerProtocol" ;
  }else if (kBoolFalse == test_0) {
  }
  result << " {\n"
    " \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    init\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    mSelectedSet = SelectedSet_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " (\n"
    "      allowsEmptySelection:allowsEmptySelection,\n"
    "      allowsMultipleSelection:allowsMultipleSelection,\n"
    "      sortedArray:self.sortedArray_property\n"
    "    )\n"
    "    super.init ()\n" ;
  const enumGalgasBool test_1 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "    self.mSelectedSet.set (callBack: { [weak self] in self\?.computeSelectionShape () } )\n"
      "  //--- Selection observers\n"
      "    self.canBringForward_property.readModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canBringForward)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.mSelectedSet.addEBObserver (self.canBringToFront_property)\n"
      "    self.canBringToFront_property.readModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canBringToFront)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.mSelectedSet.addEBObserver (self.canBringToFront_property)\n"
      "    self.canSendBackward_property.readModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canSendBackward)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.mSelectedSet.addEBObserver (self.canSendBackward_property)\n"
      "    self.canSendToBack_property.readModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canSendToBack)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.mSelectedSet.addEBObserver (self.canSendToBack_property)\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "  //--- Set selected array compute function\n"
    "    setSelectedArrayComputeFunction ()\n"
    "  //--- Set sorted array compute function\n"
    "    setFilterAndSortFunction ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Sort Array\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  let sortedArray_property = TransientArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mSortDescriptorArray = [(String, Bool)] () { // Key, ascending\n"
    "    didSet {\n"
    "      self.sortedArray_property.postEvent ()\n"
    "      for tableView in mTableViewArray {\n"
    "        var first = true\n"
    "        for (key, ascending) in mSortDescriptorArray {\n"
    "          if let column = sw34_tableColumn (tableView, withIdentifier: key) {\n"
    "            tableView.setIndicatorImage (\n"
    "              first \? (ascending \? sw34_imageNamed (\"NSAscendingSortIndicator\") : sw34_imageNamed (\"NSDescendingSortIndicator\")) : nil,\n"
    "              in:column\n"
    "            )\n"
    "            first = false\n"
    "          }\n"
    "        }\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Attributes\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_4410_ (0) ;
  if (in_ATTRIBUTE_5F_VALUES.isValid ()) {
    cEnumerator__32_stringlist enumerator_4410 (in_ATTRIBUTE_5F_VALUES, kENUMERATION_UP) ;
    while (enumerator_4410.hasCurrentObject ()) {
      result << "  private let " ;
      result << enumerator_4410.current_mValue_30_ (HERE).stringValue () ;
      result << " = " ;
      result << enumerator_4410.current_mValue_31_ (HERE).stringValue () ;
      result << "\n" ;
      index_4410_.increment () ;
      enumerator_4410.gotoNextObject () ;
    }
  }
  result << "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Model\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mModel : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var objectCount : Int {\n"
    "    let objects = mModel\?.propval \?\? []\n"
    "    return objects.count\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func bind_model (_ inModel:" ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n"
    "    self.mModel = inModel\n"
    "    inModel.addEBObserver (self.sortedArray_property)\n"
    "    self.sortedArray_property.addEBObserver (mSelectedSet)\n"
    "    mSelectedSet.addEBObserver (self.selectedArray_property)\n"
    "  //--- Add observed properties (for filtering and sorting)\n" ;
  GALGAS_uint index_5478_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING.isValid ()) {
    cEnumerator_stringset enumerator_5478 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING, kENUMERATION_UP) ;
    while (enumerator_5478.hasCurrentObject ()) {
      result << "    inModel.addEBObserverOf_" ;
      result << enumerator_5478.current_key (HERE).stringValue () ;
      result << " (self.sortedArray_property)\n" ;
      index_5478_.increment () ;
      enumerator_5478.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "    inModel.addEBObserverOf_objectDisplay (self.mObjectDisplayObserver)\n"
      "    self.mObjectDisplayObserver.eventCallBack = { [weak self] in self\?.updateObjectDisplay () }\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func unbind_model () {\n" ;
  const enumGalgasBool test_3 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "    self.mModel\?.removeEBObserverOf_objectDisplay (self.mObjectDisplayObserver)\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "    self.mModel\?.removeEBObserver (self.sortedArray_property)\n"
    "    self.sortedArray_property.removeEBObserver (mSelectedSet)\n"
    "    self.mSelectedSet.removeEBObserver (self.selectedArray_property)\n"
    "  //--- Remove observed properties (for filtering and sorting)\n" ;
  GALGAS_uint index_6356_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING.isValid ()) {
    cEnumerator_stringset enumerator_6356 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING, kENUMERATION_UP) ;
    while (enumerator_6356.hasCurrentObject ()) {
      result << "//    mModel\?.removeEBObserverOf_" ;
      result << enumerator_6356.current_key (HERE).stringValue () ;
      result << " (self.sortedArray_property)\n" ;
      index_6356_.increment () ;
      enumerator_6356.gotoNextObject () ;
    }
  }
  result << "    for tvc in mTableViewDataSourceControllerArray {\n"
    "      self.sortedArray_property.removeEBObserver (tvc)\n"
    "    }\n"
    "    for tvc in mTableViewSelectionControllerArray {\n"
    "      mSelectedSet.removeEBObserver (tvc)\n"
    "    }\n"
    "  //---\n"
    "    mSelectedSet.mSet = Set ()\n"
    "    mModel = nil\n"
    " }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Managed object context\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private weak var mManagedObjectContext : EBManagedObjectContext\? = nil\n"
    "\n"
    "  func setManagedObjectContext (_ inManagedObjectContext : EBManagedObjectContext\?) {\n"
    "    self.mManagedObjectContext = inManagedObjectContext\n"
    "  }\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Undo manager\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var undoManager : EBUndoManager\? {\n"
    "    return self.mModel\?.undoManager\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   SELECTION\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  let selectedArray_property = TransientArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private let mSelectedSet : SelectedSet_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << "\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedSet : Set <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> { return mSelectedSet.mSet }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedIndexesSet : Set <Int> {\n"
    "    var result = Set <Int> ()\n"
    "    var idx = 0\n"
    "    for object in self.mModel\?.propval \?\? [] {\n"
    "      if mSelectedSet.mSet.contains (object) {\n"
    "        result.insert (idx)\n"
    "      }\n"
    "      idx += 1\n"
    "    }\n"
    "    return result\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func setSelection (_ inObjects : [" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "]) {\n"
    "    mSelectedSet.mSet = Set (inObjects)\n"
    "  }\n" ;
  const enumGalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  //  EBView interface\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private var mObjectDisplayObserver = EBOutletEvent ()\n"
      "  private var mEBViews = [EBView] ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var selectedGraphicObjectSet : Set <EBGraphicManagedObject> {\n"
      "    return self.selectedSet\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func computeSelectionShape () {\n"
      "    var selectionDisplayArray = [EBShape] ()\n"
      "    for object in self.mSelectedSet.mSet {\n"
      "      if let shape = object.selectionDisplay {\n"
      "        selectionDisplayArray.append (shape)\n"
      "      }else{\n"
      "        selectionDisplayArray.append (EBShape ())\n"
      "      }\n"
      "    }\n"
      "    for view in self.mEBViews {\n"
      "      view.updateSelectionShape (selectionDisplayArray)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func updateObjectDisplay () {\n"
      "    var displayArray = [EBShape] ()\n"
      "    for object in self.mModel\?.propval \?\? [] {\n"
      "      if let shape = object.objectDisplay {\n"
      "        displayArray.append (shape)\n"
      "      }else{\n"
      "        displayArray.append (EBShape ())\n"
      "      }\n"
      "    }\n"
      "    for view in self.mEBViews {\n"
      "      view.updateObjectDisplay (displayArray)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func bind_ebView (_ inEBView : EBView\?) {\n"
      "    if let ebView = inEBView {\n"
      "      self.mEBViews.append (ebView)\n"
      "      ebView.set (controller: self)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func unbind_ebView (_ inEBView : EBView\?) {\n"
      "    if let ebView = inEBView, let idx = self.mEBViews.index (of: ebView) {\n"
      "      ebView.updateObjectDisplay ([])\n"
      "      ebView.updateSelectionShape ([])\n"
      "      self.mEBViews.remove (at: idx)\n"
      "    }\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private final func setSelectedArrayComputeFunction () {\n"
    "    self.selectedArray_property.readModelFunction = { [weak self] in\n"
    "      if let me = self {\n"
    "        switch me.sortedArray_property.prop {\n"
    "        case .empty :\n"
    "          return .empty\n"
    "        case .multiple :\n"
    "          return .multiple\n"
    "        case .single (let v) :\n"
    "          var result = [" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "] ()\n"
    "          for object in v {\n"
    "            if me.mSelectedSet.mSet.contains (object) {\n"
    "              result.append (object)\n"
    "            }\n"
    "          }\n"
    "          return .single (result)\n"
    "        }\n"
    "      }else{\n"
    "        return .empty\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_SORTED_5F_COLUMNS.getter_length (SOURCE_FILE ("array-controller.swift.galgasTemplate", 307)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func isOrderedBefore (left : " ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << ", right : " ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << ") -> Bool {\n"
      "    var order = ComparisonResult.orderedSame\n"
      "    for (column, ascending) in mSortDescriptorArray {\n" ;
    GALGAS_uint index_12294_ (0) ;
    if (in_SORTED_5F_COLUMNS.isValid ()) {
      cEnumerator_arrayControllerSortedColumnListForGeneration enumerator_12294 (in_SORTED_5F_COLUMNS, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_12294 = enumerator_12294.hasCurrentObject () ;
      if (nonEmpty_enumerator_12294) {
        result << "      " ;
      }
      while (enumerator_12294.hasCurrentObject ()) {
        result << "if column == \"" ;
        result << enumerator_12294.current_mColumnName (HERE).stringValue () ;
        result << "\" {\n"
          "        order = compare_" ;
        result << extensionGetter_swiftTypeName (enumerator_12294.current_mSortPropertyKind (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 318)).stringValue () ;
        result << " (left: left." ;
        result << enumerator_12294.current_mObservablePropertyForSorting (HERE).stringValue () ;
        result << "_property, right:right." ;
        result << enumerator_12294.current_mObservablePropertyForSorting (HERE).stringValue () ;
        result << "_property)\n" ;
        if (enumerator_12294.hasNextObject ()) {
          result << "      }else " ;
        }
        index_12294_.increment () ;
        enumerator_12294.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_12294) {
        result << "      }\n" ;
      }
    }
    result << "      if !ascending {\n"
      "        switch order {\n"
      "        case .orderedAscending : order = .orderedDescending\n"
      "        case .orderedDescending : order = .orderedAscending\n"
      "        case .orderedSame : break // Exit from switch\n"
      "        }\n"
      "      }\n"
      "      if order != .orderedSame {\n"
      "        break // Exit from for\n"
      "      }\n"
      "    }\n"
      "    return order == .orderedAscending\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_5) {
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private final func setFilterAndSortFunction () {\n"
    "    self.sortedArray_property.readModelFunction = { [weak self] in\n"
    "      if let me = self, let model = me.mModel {\n"
    "        switch model.prop {\n"
    "        case .empty :\n"
    "          return .empty\n"
    "        case .multiple :\n"
    "          return .multiple\n"
    "        case .single (let modelArray) :\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, in_FILTER_5F_PROPERTIES.getter_length (SOURCE_FILE ("array-controller.swift.galgasTemplate", 351)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_SORTED_5F_COLUMNS.getter_length (SOURCE_FILE ("array-controller.swift.galgasTemplate", 352)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      result << "          return .single (modelArray)\n" ;
    }else if (kBoolFalse == test_7) {
      result << "          let sortedArray = modelArray.sorted (by: {me.isOrderedBefore (left: $0, right: $1)})\n"
        "          return .single (sortedArray)\n" ;
    }
  }else if (kBoolFalse == test_6) {
    result << "          var filteredArray = [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "] ()\n"
      "          var isMultiple = false\n"
      "          for object in modelArray {\n" ;
    result << extensionGetter_filterCode (in_FILTER_5F_PROPERTIES, GALGAS_string ("arrayControllerFilter_").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 362)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 362)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 362)), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 362)).stringValue () ;
    result << "          }\n"
      "          if isMultiple {\n"
      "            return .multiple\n"
      "          }else{\n" ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_SORTED_5F_COLUMNS.getter_length (SOURCE_FILE ("array-controller.swift.galgasTemplate", 367)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      result << "            return .single (filteredArray)\n" ;
    }else if (kBoolFalse == test_8) {
      result << "            let sortedFilteredArray = filteredArray.sorted (by: {me.isOrderedBefore (left: $0, right: $1)})\n"
        "            return .single (sortedFilteredArray)\n" ;
    }
    result << "          }\n" ;
  }
  result << "        }\n"
    "      }else{\n"
    "        return .empty\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Explorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func addExplorer (name : String, y : inout CGFloat, view : NSView) {\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    bind_tableView\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mTableViewDataSourceControllerArray = [DataSource_EBTableView_controller] ()\n"
    "  private var mTableViewSelectionControllerArray = [Selection_EBTableView_controller] ()\n"
    "  private var mTableViewArray = [EBTableView] ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func bind_tableView (_ inTableView : EBTableView\?, file : String, line : Int) {\n"
    "    if DEBUG_EVENT {\n"
    "      print (\"\\(#function)\")\n"
    "    }\n"
    "    if let tableView = inTableView {\n"
    "      tableView.allowsEmptySelection = allowsEmptySelection\n"
    "      tableView.allowsMultipleSelection = allowsMultipleSelection\n"
    "      tableView.dataSource = self\n"
    "      tableView.delegate = self\n"
    "    //--- Set table view data source controller\n"
    "      let dataSourceTableViewController = DataSource_EBTableView_controller (delegate:self, tableView:tableView)\n"
    "      self.sortedArray_property.addEBObserver (dataSourceTableViewController)\n"
    "      mTableViewDataSourceControllerArray.append (dataSourceTableViewController)\n"
    "    //--- Set table view selection controller\n"
    "      let selectionTableViewController = Selection_EBTableView_controller (delegate:self, tableView:tableView)\n"
    "       mSelectedSet.addEBObserver (selectionTableViewController)\n"
    "      mTableViewSelectionControllerArray.append (selectionTableViewController)\n" ;
  GALGAS_uint index_16370_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    cEnumerator_arrayControllerBoundColumnListForGeneration enumerator_16370 (in_BOUND_5F_COLUMNS, kENUMERATION_UP) ;
    while (enumerator_16370.hasCurrentObject ()) {
      result << "    //--- Check '" ;
      result << enumerator_16370.current_mColumnName (HERE).stringValue () ;
      result << "' column\n"
        "      if let column : NSTableColumn = sw34_tableColumn (tableView, withIdentifier: \"" ;
      result << enumerator_16370.current_mColumnName (HERE).stringValue () ;
      result << "\") {\n"
        "        column.sortDescriptorPrototype = nil\n"
        "      }else{\n"
        "        presentErrorWindow (file: file, line: line, errorMessage:\"\\\"" ;
      result << enumerator_16370.current_mColumnName (HERE).stringValue () ;
      result << "\\\" column view unknown\")\n"
        "      }\n" ;
      index_16370_.increment () ;
      enumerator_16370.gotoNextObject () ;
    }
  }
  result << "    //--- Set descriptors from first column of table view\n"
    "      var newSortDescriptorArray = [(String, Bool)] ()\n"
    "      for column in tableView.tableColumns {\n"
    "        newSortDescriptorArray.append ((sw34_columnIdentifier (column), true)) // Ascending\n"
    "      }\n"
    "      mSortDescriptorArray = newSortDescriptorArray\n"
    "      mTableViewArray.append (tableView)\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    " \n"
    "  func unbind_tableView (_ inTableView : EBTableView\?) {\n"
    "    if DEBUG_EVENT {\n"
    "      print (\"\\(#function)\")\n"
    "    }\n"
    "    if let tableView = inTableView, let idx = self.mTableViewArray.index (of:tableView) {\n"
    "      self.sortedArray_property.removeEBObserver (self.mTableViewDataSourceControllerArray [idx])\n"
    "      self.mSelectedSet.removeEBObserver (self.mTableViewSelectionControllerArray [idx])\n"
    "      self.mTableViewArray.remove (at: idx)\n"
    "      self.mTableViewDataSourceControllerArray.remove (at: idx)\n"
    "      self.mTableViewSelectionControllerArray.remove (at: idx)\n"
    "    }\n"
    "  }\n"
    "\n"
    " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func selectedObjectIndexSet () -> NSIndexSet {\n"
    "    switch self.sortedArray_property.prop {\n"
    "    case .empty, .multiple :\n"
    "       return NSIndexSet ()\n"
    "    case .single (let v) :\n"
    "    //--- Dictionary of object indexes\n"
    "      var objectDictionary = [" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " : Int] ()\n"
    "      for (index, object) in v.enumerated () {\n"
    "        objectDictionary [object] = index\n"
    "      }\n"
    "      let indexSet = NSMutableIndexSet ()\n"
    "      for object in mSelectedSet.mSet {\n"
    "        if let index = objectDictionary [object] {\n"
    "          indexSet.add (index)\n"
    "        }\n"
    "      }\n"
    "      return indexSet\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    T A B L E V I E W    D A T A S O U R C E : numberOfRows (in:)\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func numberOfRows (in _ : NSTableView) -> Int {\n"
    "    if DEBUG_EVENT {\n"
    "      print (\"\\(#function)\")\n"
    "    }\n"
    "    switch self.sortedArray_property.prop {\n"
    "    case .empty, .multiple :\n"
    "      return 0\n"
    "    case .single (let v) :\n"
    "      return v.count\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    T A B L E V I E W    D E L E G A T E : tableViewSelectionDidChange:\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func tableViewSelectionDidChange (_ notification : Notification) {\n"
    "    if DEBUG_EVENT {\n"
    "      print (\"\\(#function)\")\n"
    "    }\n"
    "    switch self.sortedArray_property.prop {\n"
    "    case .empty, .multiple :\n"
    "      break\n"
    "    case .single (let v) :\n"
    "      let tableView = notification.object as! EBTableView\n"
    "      var newSelectedObjectSet = Set <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> ()\n"
    "      for index in tableView.selectedRowIndexes {\n"
    "        newSelectedObjectSet.insert (v.objectAtIndex (index, file: #file, line: #line))\n"
    "      }\n"
    "      mSelectedSet.mSet = newSelectedObjectSet\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    T A B L E V I E W    D E L E G A T E : tableView:viewForTableColumn:mouseDownInHeaderOfTableColumn:\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func tableView (_ tableView: NSTableView, mouseDownInHeaderOf inTableColumn: NSTableColumn) {\n"
    "    var newSortDescriptorArray = [(String, Bool)] ()\n"
    "    for (columnName, ascending) in mSortDescriptorArray {\n"
    "      if sw34_isColumn (inTableColumn, hasIdentifier: columnName) {\n"
    "        newSortDescriptorArray.insert ((columnName, !ascending), at:0)\n"
    "      }else{\n"
    "        newSortDescriptorArray.append ((columnName, !ascending))\n"
    "      }\n"
    "    }\n"
    "    mSortDescriptorArray = newSortDescriptorArray\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    T A B L E V I E W    D E L E G A T E : tableView:viewForTableColumn:row:\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func tableView (_ tableView : NSTableView,\n"
    "                  viewFor inTableColumn: NSTableColumn\?,\n"
    "                  row inRowIndex: Int) -> NSView\? {\n"
    "    if DEBUG_EVENT {\n"
    "      print (\"\\(#function)\")\n"
    "    }\n" ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_BOUND_5F_COLUMNS.getter_length (SOURCE_FILE ("array-controller.swift.galgasTemplate", 535)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "    return nil \n" ;
  }else if (kBoolFalse == test_9) {
    result << "    switch self.sortedArray_property.prop {\n"
      "    case .empty, .multiple :\n"
      "      return nil\n"
      "    case .single (let v) :\n"
      "      #if swift(>=4)\n"
      "        let result : NSTableCellView = tableView.makeView (withIdentifier: (inTableColumn\?.identifier)!, owner:self) as! NSTableCellView\n"
      "      #else\n"
      "        let result : NSTableCellView = tableView.make (withIdentifier: (inTableColumn\?.identifier)!, owner:self) as! NSTableCellView\n"
      "      #endif\n"
      "      if !reuseTableViewCells () {\n"
      "        result.identifier = nil // So result cannot be reused, will be freed\n"
      "      }\n"
      "      let object = v.objectAtIndex (inRowIndex, file: #file, line: #line)\n"
      "      " ;
    GALGAS_uint index_22015_ (0) ;
    if (in_BOUND_5F_COLUMNS.isValid ()) {
      cEnumerator_arrayControllerBoundColumnListForGeneration enumerator_22015 (in_BOUND_5F_COLUMNS, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_22015 = enumerator_22015.hasCurrentObject () ;
      while (enumerator_22015.hasCurrentObject ()) {
        result << "if sw34_isColumn (inTableColumn, hasIdentifier: \"" ;
        result << enumerator_22015.current_mColumnName (HERE).stringValue () ;
        result << "\") {\n"
          "        if let cell : " ;
        result << enumerator_22015.current_mColumnOutletTypeName (HERE).stringValue () ;
        result << "_TableViewCell = result as\? " ;
        result << enumerator_22015.current_mColumnOutletTypeName (HERE).stringValue () ;
        result << "_TableViewCell {\n"
          "          cell.mUnbindFunction = { [weak cell] in\n" ;
        const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_22015.current_mRunAction (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_10) {
          result << "            cell\?.mCellOutlet\?.target = nil\n"
            "            cell\?.mCellOutlet\?.action = nil\n" ;
        }else if (kBoolFalse == test_10) {
        }
        GALGAS_uint index_22461_ (0) ;
        if (enumerator_22015.current_mRegularBindingsGenerationList (HERE).isValid ()) {
          cEnumerator_regularBindingsGenerationList enumerator_22461 (enumerator_22015.current_mRegularBindingsGenerationList (HERE), kENUMERATION_UP) ;
          while (enumerator_22461.hasCurrentObject ()) {
            result << "            cell\?.mCellOutlet\?.unbind_" ;
            result << enumerator_22461.current_mBindingName (HERE).stringValue () ;
            result << " ()\n" ;
            index_22461_.increment () ;
            enumerator_22461.gotoNextObject () ;
          }
        }
        result << "          }\n"
          "          cell.mUnbindFunction\? ()\n" ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_22015.current_mRunAction (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          result << "          cell.mCellOutlet\?.target = object\n"
            "          cell.mCellOutlet\?.action = #selector (" ;
          result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
          result << "." ;
          result << enumerator_22015.current_mRunAction (HERE).stringValue () ;
          result << "(_:))\n" ;
        }else if (kBoolFalse == test_11) {
        }
        GALGAS_uint index_22830_ (0) ;
        if (enumerator_22015.current_mRegularBindingsGenerationList (HERE).isValid ()) {
          cEnumerator_regularBindingsGenerationList enumerator_22830 (enumerator_22015.current_mRegularBindingsGenerationList (HERE), kENUMERATION_UP) ;
          while (enumerator_22830.hasCurrentObject ()) {
            result << "          cell.mCellOutlet\?.bind_" ;
            result << enumerator_22830.current_mBindingName (HERE).stringValue () ;
            result << " (" ;
            GALGAS_uint index_22923_ (0) ;
            if (enumerator_22830.current_mBoundObjectList (HERE).isValid ()) {
              cEnumerator_boundObjectList enumerator_22923 (enumerator_22830.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
              while (enumerator_22923.hasCurrentObject ()) {
                result << enumerator_22923.current_mBoundObjectString (HERE).stringValue () ;
                result << ", " ;
                index_22923_.increment () ;
                enumerator_22923.gotoNextObject () ;
              }
            }
            result << "file: #file, line: #line" ;
            result << enumerator_22830.current_mBindingOptionsString (HERE).stringValue () ;
            result << ")\n" ;
            index_22830_.increment () ;
            enumerator_22830.gotoNextObject () ;
          }
        }
        result << "        }\n"
          "      " ;
        if (enumerator_22015.hasNextObject ()) {
          result << "}else " ;
        }
        index_22015_.increment () ;
        enumerator_22015.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_22015) {
        result << "}else{\n"
          "        NSLog (\"Unknown column '\\(String (describing: inTableColumn\?.identifier))'\")\n"
          "      }\n" ;
      }
    }
    result << "      return result\n"
      "    } \n" ;
  }
  result << "  }\n"
    " \n" ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GALGAS_arrayControllerModelKind::kNotBuilt :
    break ;
  case GALGAS_arrayControllerModelKind::kEnum_transientArray :
    {
    }
    break ;
  case GALGAS_arrayControllerModelKind::kEnum_classArray :
    {
      result << " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    select\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  func select (object inObject: " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ") {\n"
        "    if let model = mModel {\n"
        "      switch model.prop {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let objectArray) :\n"
        "        if objectArray.contains (inObject) {\n"
        "          var newSelectedObjectSet = Set <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "> ()\n"
        "          newSelectedObjectSet.insert (inObject)\n"
        "          mSelectedSet.mSet = newSelectedObjectSet\n"
        "        }\n"
        "      }\n"
        "    }\n"
        "  }\n"
        " \n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    add\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "   @objc func add (_ sender : Any) {\n"
        "    if DEBUG_EVENT {\n"
        "      print (\"\\(#function)\")\n"
        "    }\n"
        "    if let model = mModel {\n"
        "      switch model.prop {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let v) :\n"
        "        let newObject : " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " = " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " ()\n"
        "        var array = v\n"
        "        array.append (newObject)\n"
        "      //--- New object is the selection\n"
        "        var newSelectedObjectSet = Set <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "> ()\n"
        "        newSelectedObjectSet.insert (newObject)\n"
        "        mSelectedSet.mSet = newSelectedObjectSet\n"
        "        model.setProp (array)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    remove\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  @objc func remove (_ sender : Any) {\n"
        "    if DEBUG_EVENT {\n"
        "      print (\"\\(#function)\")\n"
        "    }\n"
        "    if let model = mModel {\n"
        "      switch model.prop {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let model_prop) :\n"
        "        switch self.sortedArray_property.prop {\n"
        "        case .empty, .multiple :\n"
        "          break\n"
        "        case .single (let sortedArray_prop) :\n"
        "        //------------- Find the object to be selected after selected object removing\n"
        "        //--- Dictionary of object sorted indexes\n"
        "          var sortedObjectDictionary = [" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " : Int] ()\n"
        "          for (index, object) in sortedArray_prop.enumerated () {\n"
        "            sortedObjectDictionary [object] = index\n"
        "          }\n"
        "          var indexArrayOfSelectedObjects = [Int] ()\n"
        "          for object in mSelectedSet.mSet {\n"
        "            let index = sortedObjectDictionary [object]\n"
        "            if let idx = index {\n"
        "              indexArrayOfSelectedObjects.append (idx)\n"
        "            }\n"
        "          }\n"
        "        //--- Sort\n"
        "          indexArrayOfSelectedObjects.sort (by: { $0 < $1 })\n"
        "        //--- Find the first index of a non selected object\n"
        "          var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n"
        "          for index in indexArrayOfSelectedObjects {\n"
        "            if newSelectionIndex < index {\n"
        "              break\n"
        "            }else{\n"
        "              newSelectionIndex = index + 1\n"
        "            }\n"
        "          }\n"
        "          var newSelectedObject : " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "\? = nil\n"
        "          if (newSelectionIndex >= 0) && (newSelectionIndex < sortedArray_prop.count) {\n"
        "            newSelectedObject = sortedArray_prop [newSelectionIndex]\n"
        "          }\n"
        "        //----------------------------------------- Remove selected object\n"
        "        //--- Dictionary of object absolute indexes\n"
        "          var objectDictionary = [" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " : Int] ()\n"
        "          for (index, object) in model_prop.enumerated () {\n"
        "            objectDictionary [object] = index\n"
        "          }\n"
        "        //--- Build selected objects index array\n"
        "          var selectedObjectIndexArray = [Int] ()\n"
        "          for object in mSelectedSet.mSet {\n"
        "            let index = objectDictionary [object]\n"
        "            if let idx = index {\n"
        "              selectedObjectIndexArray.append (idx)\n"
        "            }\n"
        "          }\n"
        "        //--- Sort in reverse order\n"
        "          selectedObjectIndexArray.sort (by: { $1 < $0 })\n"
        "        //--- Remove objects, in reverse of order of their index\n"
        "          var newObjectArray = model_prop\n"
        "          for index in selectedObjectIndexArray {\n"
        "            newObjectArray.remove (at: index)\n"
        "          }\n"
        "        //----------------------------------------- Set new selection\n"
        "          var newSelectionSet = Set <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "> ()\n"
        "          if let object = newSelectedObject {\n"
        "            newSelectionSet.insert (object)\n"
        "          }\n"
        "          mSelectedSet.mSet = newSelectionSet\n"
        "        //----------------------------------------- Set new object array\n"
        "          model.setProp (newObjectArray)\n"
        "        }\n"
        "      }\n"
        "    }\n"
        "  }\n" ;
    }
    break ;
  case GALGAS_arrayControllerModelKind::kEnum_entityArray :
    {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    select\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  func select (object inObject: " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ") {\n"
        "    if let model = mModel {\n"
        "      switch model.prop {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let objectArray) :\n"
        "        if objectArray.contains (inObject) {\n"
        "          var newSelectedObjectSet = Set <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "> ()\n"
        "          newSelectedObjectSet.insert (inObject)\n"
        "          mSelectedSet.mSet = newSelectedObjectSet\n"
        "        }\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    add\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "   @objc func add (_ sender : Any) {\n"
        "    if DEBUG_EVENT {\n"
        "      print (\"\\(#function)\")\n"
        "    }\n"
        "    if let model = mModel, let managedObjectContext = self.mManagedObjectContext {\n"
        "      switch model.prop {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let v) :\n"
        "        let newObject : " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " = " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " (managedObjectContext:managedObjectContext)\n"
        "        var array = v\n"
        "        array.append (newObject)\n"
        "      //--- New object is the selection\n"
        "        var newSelectedObjectSet = Set <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "> ()\n"
        "        newSelectedObjectSet.insert (newObject)\n"
        "        mSelectedSet.mSet = newSelectedObjectSet\n"
        "        model.setProp (array)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    remove\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  @objc func remove (_ sender : Any) {\n"
        "    if DEBUG_EVENT {\n"
        "      print (\"\\(#function)\")\n"
        "    }\n"
        "    if let model = mModel, let managedObjectContext = self.mManagedObjectContext {\n"
        "      switch model.prop {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let model_prop) :\n"
        "        switch self.sortedArray_property.prop {\n"
        "        case .empty, .multiple :\n"
        "          break\n"
        "        case .single (let sortedArray_prop) :\n"
        "        //------------- Find the object to be selected after selected object removing\n"
        "        //--- Dictionary of object sorted indexes\n"
        "          var sortedObjectDictionary = [" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " : Int] ()\n"
        "          for (index, object) in sortedArray_prop.enumerated () {\n"
        "            sortedObjectDictionary [object] = index\n"
        "          }\n"
        "          var indexArrayOfSelectedObjects = [Int] ()\n"
        "          for object in mSelectedSet.mSet {\n"
        "            managedObjectContext.removeManagedObject (object)\n"
        "            let index = sortedObjectDictionary [object]\n"
        "            if let idx = index {\n"
        "              indexArrayOfSelectedObjects.append (idx)\n"
        "            }\n"
        "          }\n"
        "        //--- Sort\n"
        "          indexArrayOfSelectedObjects.sort (by: { $0 < $1 })\n"
        "        //--- Find the first index of a non selected object\n"
        "          var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n"
        "          for index in indexArrayOfSelectedObjects {\n"
        "            if newSelectionIndex < index {\n"
        "              break\n"
        "            }else{\n"
        "              newSelectionIndex = index + 1\n"
        "            }\n"
        "          }\n"
        "          var newSelectedObject : " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "\? = nil\n"
        "          if (newSelectionIndex >= 0) && (newSelectionIndex < sortedArray_prop.count) {\n"
        "            newSelectedObject = sortedArray_prop [newSelectionIndex]\n"
        "          }\n"
        "        //----------------------------------------- Remove selected object\n"
        "        //--- Dictionary of object absolute indexes\n"
        "          var objectDictionary = [" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " : Int] ()\n"
        "          for (index, object) in model_prop.enumerated () {\n"
        "            objectDictionary [object] = index\n"
        "          }\n"
        "        //--- Build selected objects index array\n"
        "          var selectedObjectIndexArray = [Int] ()\n"
        "          for object in mSelectedSet.mSet {\n"
        "            let index = objectDictionary [object]\n"
        "            if let idx = index {\n"
        "              selectedObjectIndexArray.append (idx)\n"
        "            }\n"
        "          }\n"
        "        //--- Sort in reverse order\n"
        "          selectedObjectIndexArray.sort (by: { $1 < $0 })\n"
        "        //--- Remove objects, in reverse of order of their index\n"
        "          var newObjectArray = model_prop\n"
        "          for index in selectedObjectIndexArray {\n"
        "            newObjectArray.remove (at: index)\n"
        "          }\n"
        "        //----------------------------------------- Set new selection\n"
        "          var newSelectionSet = Set <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "> ()\n"
        "          if let object = newSelectedObject {\n"
        "            newSelectionSet.insert (object)\n"
        "          }\n"
        "          mSelectedSet.mSet = newSelectionSet\n"
        "        //----------------------------------------- Set new object array\n"
        "          model.setProp (newObjectArray)\n"
        "        }\n"
        "      }\n"
        "    }\n"
        "  }\n" ;
    }
    break ;
  }
  const enumGalgasBool test_12 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_12) {
    result << "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  //  SELECTION OPERATIONS\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private func sortedIndexArrayOfSelectedObjects () -> [Int] {\n"
      "    var result = [Int] ()\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    for object in mSelectedSet.mSet {\n"
      "      let idx = objects.index (of:object)!\n"
      "      result.append (idx)\n"
      "    }\n"
      "    return result.sorted ()\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "   func deleteSelectionAndRemoveDeletedObjectsFromManagedObjectContext () {\n"
      "    var objects = mModel\?.propval \?\? []\n"
      "    for object in mSelectedSet.mSet {\n"
      "      if let idx = objects.index (of: object) {\n"
      "        objects.remove(at: idx)\n"
      "        self.mManagedObjectContext\?.removeManagedObject (object)\n"
      "      }\n"
      "    }\n"
      "    mModel\?.setProp (objects)\n"
      "    mSelectedSet.mSet = Set ()\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func selectAllObjects () {\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    mSelectedSet.mSet = Set (objects)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // BRING FORWARD\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canBringForward_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canBringForward : Bool {\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    var result = (objects.count > 1) && (mSelectedSet.mSet.count > 0)\n"
      "    if result {\n"
      "      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "      result = sortedIndexArray.last! < (objects.count - 1)\n"
      "    }\n"
      "    return result\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func bringForward () {\n"
      "    var objects = mModel\?.propval \?\? []\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    for idx in sortedIndexArray.reversed () {\n"
      "       let object = objects [idx]\n"
      "       objects.remove (at: idx)\n"
      "       objects.insert (object, at:idx+1)\n"
      "    }\n"
      "    mModel\?.setProp (objects)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // BRING TO FRONT\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canBringToFront_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canBringToFront : Bool {\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    if (objects.count > 1) && (mSelectedSet.mSet.count > 0) {\n"
      "      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "      var top = objects.count - 1\n"
      "      for idx in sortedIndexArray.reversed () {\n"
      "        if idx < top {\n"
      "          return true\n"
      "        }\n"
      "        top -= 1\n"
      "      }\n"
      "    }\n"
      "    return false\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func bringToFront () {\n"
      "    var objects = mModel\?.propval \?\? []\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    for idx in sortedIndexArray {\n"
      "      let object = objects [idx]\n"
      "      objects.remove (at: idx)\n"
      "      objects.append (object)\n"
      "    }\n"
      "    mModel\?.setProp (objects)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // SEND BACKWARD\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canSendBackward_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canSendBackward : Bool {\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    var result = (objects.count > 1) && (mSelectedSet.mSet.count > 0)\n"
      "    if result {\n"
      "      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "      result = sortedIndexArray [0] > 0\n"
      "    }\n"
      "    return result\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func sendBackward () {\n"
      "    var objects = mModel\?.propval \?\? []\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    for idx in sortedIndexArray.reversed () {\n"
      "      let object = objects [idx]\n"
      "      objects.remove (at: idx)\n"
      "      objects.insert (object, at:idx-1)\n"
      "    }\n"
      "    mModel\?.setProp (objects)\n"
      "  }\n"
      "  \n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // SEND TO BACK\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canSendToBack_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func sendToBack () {\n"
      "    var objects = mModel\?.propval \?\? []\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    for idx in sortedIndexArray.reversed () {\n"
      "      let object = objects [idx]\n"
      "      objects.remove (at: idx)\n"
      "      objects.insert (object, at:0)\n"
      "    }\n"
      "    mModel\?.setProp (objects)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canSendToBack : Bool {\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    if (objects.count > 1) && (mSelectedSet.mSet.count > 0) {\n"
      "      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "      var bottom = 0\n"
      "      for idx in sortedIndexArray {\n"
      "        if idx > bottom {\n"
      "          return true\n"
      "        }\n"
      "        bottom += 1\n"
      "      }\n"
      "    }\n"
      "    return false\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func addToSelection (objectsWithIndex inIndexes : [Int]) {\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    var newSelectedSet = self.mSelectedSet.mSet\n"
      "    for idx in inIndexes {\n"
      "      let newSelectedObject = objects [idx]\n"
      "      newSelectedSet.insert (newSelectedObject)\n"
      "    }\n"
      "    self.mSelectedSet.mSet = newSelectedSet\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func removeFromSelection (objectWithIndex inIndex : Int) {\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    let object = objects [inIndex]\n"
      "    var newSelectedSet = self.mSelectedSet.mSet\n"
      "    newSelectedSet.remove (object)\n"
      "    self.mSelectedSet.mSet = newSelectedSet\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func clearSelection () {\n"
      "    self.mSelectedSet.mSet = []\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func setSelection (objectsWithIndexes inIndexes : [Int]) {\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    var selectedObjects = [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "] ()\n"
      "    for index in inIndexes {\n"
      "      let newSelectedObject = objects [index]\n"
      "      selectedObjects.append (newSelectedObject)\n"
      "    }\n"
      "    self.mSelectedSet.mSet = Set (selectedObjects)\n"
      "  }\n"
      "\n"
      "\n" ;
  }else if (kBoolFalse == test_12) {
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("SelectedSet_").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 1064)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 1064)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 1064)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "final class SelectedSet_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " : EBAbstractProperty {\n"
    "  private let mAllowsEmptySelection : Bool\n"
    "  private let mAllowsMultipleSelection : Bool\n"
    "  private let mSortedArray : TransientArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "\n" ;
  const enumGalgasBool test_13 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "  private var mObserverOfSelectionLayerOfSelectedObjects = EBOutletEvent ()\n" ;
  }else if (kBoolFalse == test_13) {
  }
  result << " \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  init (allowsEmptySelection : Bool,\n"
    "        allowsMultipleSelection : Bool,\n"
    "        sortedArray : TransientArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n"
    "    mAllowsMultipleSelection = allowsMultipleSelection\n"
    "    mAllowsEmptySelection = allowsEmptySelection\n"
    "    mSortedArray = sortedArray\n"
    "    super.init ()\n"
    "  }\n"
    "\n" ;
  const enumGalgasBool test_14 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_14) {
    result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func set (callBack : @escaping () -> Void) {\n"
      "    mObserverOfSelectionLayerOfSelectedObjects.eventCallBack = callBack\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_14) {
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mPrivateSet = Set<" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> () {\n"
    "    didSet {\n"
    "      if mPrivateSet != oldValue {\n"
    "        postEvent ()\n" ;
  const enumGalgasBool test_15 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "        let addedSet = mPrivateSet.subtracting (oldValue)\n"
      "        for object in addedSet {\n"
      "          object.selectionDisplay_property.addEBObserver (mObserverOfSelectionLayerOfSelectedObjects)\n"
      "        }\n"
      "        let removedSet = oldValue.subtracting (mPrivateSet)\n"
      "        for object in removedSet {\n"
      "          object.selectionDisplay_property.removeEBObserver (mObserverOfSelectionLayerOfSelectedObjects)\n"
      "        }\n"
      "        mObserverOfSelectionLayerOfSelectedObjects.postEvent ()\n" ;
  }else if (kBoolFalse == test_15) {
  }
  result << "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var mSet : Set<" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> {\n"
    "    set {\n"
    "      var newSelectedSet = newValue\n"
    "      switch mSortedArray.prop {\n"
    "      case .empty, .multiple :\n"
    "        break ;\n"
    "      case .single (let sortedArray) :\n"
    "        if !mAllowsEmptySelection && (newSelectedSet.count == 0) && (sortedArray.count > 0) {\n"
    "          newSelectedSet = Set (arrayLiteral: sortedArray [0])\n"
    "        }else if !mAllowsMultipleSelection && (newSelectedSet.count > 1) {\n"
    "          newSelectedSet = Set (arrayLiteral: newSelectedSet.first!)\n"
    "        }\n"
    "      }\n"
    "      mPrivateSet = newSelectedSet\n"
    "    }\n"
    "    get {\n"
    "      return mPrivateSet\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Filewrapper template 'collectionControllerGenerationTemplate filterFunction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_collectionControllerGenerationTemplate_filterFunction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & in_OWNER_5F_NAME,
                                                                                         const GALGAS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                         const GALGAS_arrayControllerFilterListForGeneration & in_FILTER_5F_PROPERTIES
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "func arrayControllerFilter_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_541_ (0) ;
  if (in_FILTER_5F_PROPERTIES.isValid ()) {
    cEnumerator_arrayControllerFilterListForGeneration enumerator_541 (in_FILTER_5F_PROPERTIES, kENUMERATION_UP) ;
    while (enumerator_541.hasCurrentObject ()) {
      result << "_ " ;
      result << enumerator_541.current_mFilterPropertyName (HERE).stringValue () ;
      result << ": " ;
      result << extensionGetter_swiftTypeName (enumerator_541.current_mFilterPropertyKind (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller-filter-function.swift.galgasTemplate", 11)).stringValue () ;
      if (enumerator_541.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_541_.increment () ;
      enumerator_541.gotoNextObject () ;
    }
  }
  result << ") -> Bool {\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@arrayControllerGeneration generateCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayControllerGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                                    const GALGAS_string constinArgument_inOutputDirectory,
                                                                    GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerGeneration * object = (const cPtr_arrayControllerGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerGeneration) ;
  GALGAS_stringset var_observedProperties_22567 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 592)) ;
  cEnumerator_arrayControllerSortedColumnListForGeneration enumerator_22630 (object->mProperty_mArrayControllerSortedColumnListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22630.hasCurrentObject ()) {
    var_observedProperties_22567.addAssign_operation (enumerator_22630.current_mObservablePropertyForSorting (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 594)) ;
    enumerator_22630.gotoNextObject () ;
  }
  cEnumerator_arrayControllerFilterListForGeneration enumerator_22748 (object->mProperty_mArrayControllerFilterListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22748.hasCurrentObject ()) {
    var_observedProperties_22567.addAssign_operation (enumerator_22748.current_mFilterPropertyName (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 597)) ;
    enumerator_22748.gotoNextObject () ;
  }
  GALGAS_string var_s_22812 = GALGAS_string (filewrapperTemplate_collectionControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, object->mProperty_mOwnerName, object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 601)), object->mProperty_mArrayControllerFilterListForGeneration, object->mProperty_mModelString, object->mProperty_mArrayControllerModelKind, object->mProperty_mModelTypeName, object->mProperty_mArrayControllerBoundColumnListForGeneration, object->mProperty_mArrayControllerSortedColumnListForGeneration, object->mProperty_mElementTypeName, object->mProperty_mElementTypeIsGraphic, var_observedProperties_22567, object->mProperty_mAttributeListForGeneration COMMA_SOURCE_FILE ("array-controller.galgas", 599))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, GALGAS_string ("arrayController-").add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 615)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 615)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 615)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 615)), var_s_22812, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 613)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mArrayControllerFilterListForGeneration.getter_length (SOURCE_FILE ("array-controller.galgas", 618)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_23469 = GALGAS_string (filewrapperTemplate_collectionControllerGenerationTemplate_filterFunction (inCompiler, object->mProperty_mOwnerName, object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 621)), object->mProperty_mArrayControllerFilterListForGeneration COMMA_SOURCE_FILE ("array-controller.galgas", 619))) ;
      GALGAS_string var_fileName_23649 = GALGAS_string ("arrayControllerFilter-").add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 624)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 624)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 624)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 624)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_23649  COMMA_SOURCE_FILE ("array-controller.galgas", 625)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_23649, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_s_23469, GALGAS_string ("  return WHAT \?\n"), GALGAS_string ("}\n"
        "\n"
        "//").add_operation (GALGAS_string::makeEmptyString ().getter_stringByRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (8212)) COMMA_SOURCE_FILE ("array-controller.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 634)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 634)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 626)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayControllerGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_arrayControllerGeneration.mSlotID,
                                     extensionMethod_arrayControllerGeneration_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayControllerGeneration_generateCode (defineExtensionMethod_arrayControllerGeneration_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@selectionControllerDeclarationAST enterInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectionControllerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                      GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclarationAST * object = (const cPtr_selectionControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclarationAST) ;
  GALGAS_lstring var_node_679 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 14)).add_operation (object->mProperty_mSelectionControllerName.getter_string (SOURCE_FILE ("selection-controller.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 14)), object->mProperty_mSelectionControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("selection-controller.galgas", 14)) ;
  {
  const GALGAS_selectionControllerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_679, temp_0, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 15)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_679, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 16)).add_operation (object->mProperty_mModelControllerName.getter_string (SOURCE_FILE ("selection-controller.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 16)), object->mProperty_mModelControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("selection-controller.galgas", 16)) COMMA_SOURCE_FILE ("selection-controller.galgas", 16)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectionControllerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_selectionControllerDeclarationAST.mSlotID,
                                               extensionMethod_selectionControllerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectionControllerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_selectionControllerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension getter '@selectionControllerDeclarationAST lkey'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_selectionControllerDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_selectionControllerDeclarationAST * object = (const cPtr_selectionControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 22)).add_operation (object->mProperty_mSelectionControllerName.getter_string (SOURCE_FILE ("selection-controller.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 22)), object->mProperty_mSelectionControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("selection-controller.galgas", 22)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_selectionControllerDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_selectionControllerDeclarationAST.mSlotID,
                             extensionGetter_selectionControllerDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_selectionControllerDeclarationAST_lkey (defineExtensionGetter_selectionControllerDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@selectionControllerDeclarationAST firstAnalysisPhase'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectionControllerDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclarationAST * object = (const cPtr_selectionControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclarationAST) ;
  cMapElement_classMap * objectArray_2833 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("selection-controller.galgas", 67)) ;
  if (NULL != objectArray_2833) {
      macroValidSharedObject (objectArray_2833, cMapElement_classMap) ;
    GALGAS_propertyKind var_classKind_2976 ;
    GALGAS_actionMap joker_2978 ; // Joker input parameter
    objectArray_2833->mProperty_mPropertyMap.method_searchKey (object->mProperty_mModelControllerName, var_classKind_2976, joker_2978, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 70)) ;
    switch (var_classKind_2976.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 73)), GALGAS_string ("an array controller is required here"), fixItArray0  COMMA_SOURCE_FILE ("selection-controller.galgas", 73)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 75)), GALGAS_string ("an array controller is required here"), fixItArray1  COMMA_SOURCE_FILE ("selection-controller.galgas", 75)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 77)), GALGAS_string ("an array controller is required here"), fixItArray2  COMMA_SOURCE_FILE ("selection-controller.galgas", 77)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_3881 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_classKind_2976.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3881->mAssociatedValue0 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mModelControllerPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 80)), GALGAS_string ("'selectedArray' is required here"), fixItArray4  COMMA_SOURCE_FILE ("selection-controller.galgas", 80)) ;
          }
        }
        GALGAS_propertyKind var_kind_3508 = GALGAS_propertyKind::constructor_selectionController (extractedValue_typeName.getter_string (SOURCE_FILE ("selection-controller.galgas", 83))  COMMA_SOURCE_FILE ("selection-controller.galgas", 82)) ;
        {
        objectArray_2833->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mSelectionControllerName, var_kind_3508, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("selection-controller.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 85)) ;
        }
        objectArray_2833->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_selectionControllerPropertyGeneration::constructor_new (object->mProperty_mSelectionControllerName.getter_string (HERE), object->mProperty_mClassName.getter_string (SOURCE_FILE ("selection-controller.galgas", 88)), object->mProperty_mModelControllerName.getter_string (HERE), object->mProperty_mModelControllerPropertyName.getter_string (HERE)  COMMA_SOURCE_FILE ("selection-controller.galgas", 86))  COMMA_SOURCE_FILE ("selection-controller.galgas", 86)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 93)), GALGAS_string ("an array controller is required here"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.galgas", 93)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectionControllerDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_selectionControllerDeclarationAST.mSlotID,
                                           extensionMethod_selectionControllerDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectionControllerDeclarationAST_firstAnalysisPhase (defineExtensionMethod_selectionControllerDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@selectionControllerPropertyGeneration declarationCode'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_selectionControllerPropertyGeneration_declarationCode (const cPtr_propertyGeneration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_selectionControllerPropertyGeneration * object = (const cPtr_selectionControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("selection-controller.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 120)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 120)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection controller: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 121)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 121)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("selection-controller.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 122)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 122)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 123)).add_operation (GALGAS_string (" = SelectionController_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 123)).add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 123)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 123)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 123)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 123)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_selectionControllerPropertyGeneration_declarationCode (void) {
  enterExtensionGetter_declarationCode (kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration.mSlotID,
                                        extensionGetter_selectionControllerPropertyGeneration_declarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_selectionControllerPropertyGeneration_declarationCode (defineExtensionGetter_selectionControllerPropertyGeneration_declarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@selectionControllerPropertyGeneration configurationCode'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_selectionControllerPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_selectionControllerPropertyGeneration * object = (const cPtr_selectionControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Selection controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 129)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 129)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 130)).add_operation (GALGAS_string (".bind_selection (model: self."), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 130)).add_operation (object->mProperty_mModelControllerName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 130)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 130)).add_operation (object->mProperty_mModelControllerPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 131)).add_operation (GALGAS_string ("_property, file: #file, line: #line)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 130)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_selectionControllerPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration.mSlotID,
                                          extensionGetter_selectionControllerPropertyGeneration_configurationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_selectionControllerPropertyGeneration_configurationCode (defineExtensionGetter_selectionControllerPropertyGeneration_configurationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@selectionControllerPropertyGeneration populateExplorerWindowCode'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_selectionControllerPropertyGeneration * object = (const cPtr_selectionControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Selection controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 137)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 137)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 138)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 138)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 138)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 138)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode (void) {
  enterExtensionGetter_populateExplorerWindowCode (kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration.mSlotID,
                                                   extensionGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode (defineExtensionGetter_selectionControllerPropertyGeneration_populateExplorerWindowCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@selectionControllerPropertyGeneration terminationCode'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_selectionControllerPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_selectionControllerPropertyGeneration * object = (const cPtr_selectionControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Selection controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 144)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 144)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 145)).add_operation (GALGAS_string (".unbind_selection ()\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas", 145)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_selectionControllerPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration.mSlotID,
                                        extensionGetter_selectionControllerPropertyGeneration_terminationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_selectionControllerPropertyGeneration_terminationCode (defineExtensionGetter_selectionControllerPropertyGeneration_terminationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Filewrapper 'selectionControllerGenerationTemplate'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Filewrapper template 'selectionControllerGenerationTemplate selectionControllerImplementation'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_selectionControllerGenerationTemplate_selectionControllerImplementation (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                           const GALGAS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                           const GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                           const GALGAS_observablePropertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("SelectionController_").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 8)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 8)).add_operation (in_SELECTION_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 8)).getter_stringByRightPadding (GALGAS_uint ((uint32_t) 113U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 8)).stringValue () ;
  result << "*\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "@objc(SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << ")\n"
    "final class SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " : EBObject {\n"
    "  private var mModel : ReadOnlyArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "\?\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   SELECTION OBSERVABLE PROPERTIES\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_1223_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_observablePropertyMap enumerator_1223 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1223.hasCurrentObject ()) {
      const enumGalgasBool test_0 = extensionGetter_isEntityType (enumerator_1223.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 20)).operator_not (SOURCE_FILE ("selection-controller.swift.galgasTemplate", 20)).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = extensionGetter_isTransient (enumerator_1223.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 21)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "  var " ;
          result << enumerator_1223.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property = EBTransientProperty_" ;
          result << extensionGetter_swiftTypeName (enumerator_1223.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 22)).stringValue () ;
          result << " ()\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
          result << "  var " ;
          result << enumerator_1223.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property = EBPropertyProxy_" ;
          result << extensionGetter_swiftTypeName (enumerator_1223.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 24)).stringValue () ;
          result << " ()\n"
            "\n" ;
        }
        result << "  var " ;
        result << enumerator_1223.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property_selection : EBSelection <" ;
        result << extensionGetter_swiftTypeName (enumerator_1223.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 26)).stringValue () ;
        result << "> {\n"
          "    get {\n"
          "      return self." ;
        result << enumerator_1223.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.prop\n"
          "    }\n"
          "  }\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_1223_.increment () ;
      enumerator_1223.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   BIND SELECTION\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func bind_selection (model : ReadOnlyArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << ", file:String, line:Int) {\n"
    "    mModel = model\n" ;
  GALGAS_uint index_2124_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_observablePropertyMap enumerator_2124 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2124.hasCurrentObject ()) {
      const enumGalgasBool test_2 = extensionGetter_isEntityType (enumerator_2124.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 40)).operator_not (SOURCE_FILE ("selection-controller.swift.galgasTemplate", 40)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    bind_property_" ;
        result << enumerator_2124.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " (model: model)\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_2124_.increment () ;
      enumerator_2124.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Explorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mValueExplorer : NSButton\?\n"
    "  private var mExplorerWindow : NSWindow\?\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func addExplorer (name : String, y : inout CGFloat, view : NSView) {\n"
    "    let font = NSFont.boldSystemFont (ofSize: sw34_smallSystemFontSize)\n"
    "    let tf = NSTextField (frame:secondColumn (y))\n"
    "    tf.isEnabled = true\n"
    "    tf.isEditable = false\n"
    "    tf.stringValue = name\n"
    "    tf.font = font\n"
    "    view.addSubview (tf)\n"
    "    let valueExplorer = NSButton (frame:thirdColumn (y))\n"
    "    valueExplorer.font = font\n"
    "    valueExplorer.title = explorerIndexString (mEasyBindingsObjectIndex) + className\n"
    "    valueExplorer.target = self\n"
    "    valueExplorer.action = #selector(SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << ".showObjectWindowFromExplorerButton(_:))\n"
    "    view.addSubview (valueExplorer)\n"
    "    mValueExplorer = valueExplorer\n"
    "    y += EXPLORER_ROW_HEIGHT\n"
    "  }\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func buildExplorerWindow () {\n"
    "  //-------------------------------------------------- Create Window\n"
    "    let r = NSRect (x:20.0, y:20.0, width:10.0, height:10.0)\n"
    "    mExplorerWindow = NSWindow (contentRect: r, styleMask: [.titled, .closable], backing: .buffered, defer: true, screen: nil)\n"
    "  //-------------------------------------------------- Adding properties\n"
    "    let view = NSView (frame:r)\n"
    "    var y : CGFloat = 0.0\n" ;
  GALGAS_uint index_4056_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_observablePropertyMap enumerator_4056 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4056.hasCurrentObject ()) {
      const enumGalgasBool test_3 = extensionGetter_isEntityType (enumerator_4056.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 82)).operator_not (SOURCE_FILE ("selection-controller.swift.galgasTemplate", 82)).operator_and (extensionGetter_isTransient (enumerator_4056.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 82)).operator_not (SOURCE_FILE ("selection-controller.swift.galgasTemplate", 82)) COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 82)).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "    createEntryForPropertyNamed (\n"
          "      \"" ;
        result << enumerator_4056.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "\",\n"
          "      idx:self." ;
        result << enumerator_4056.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.mEasyBindingsObjectIndex,\n"
          "      y:&y,\n"
          "      view:view,\n"
          "      observerExplorer:&self." ;
        result << enumerator_4056.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.mObserverExplorer,\n"
          "      valueExplorer:&self." ;
        result << enumerator_4056.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.mValueExplorer\n"
          "    )\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_4056_.increment () ;
      enumerator_4056.gotoNextObject () ;
    }
  }
  result << "  //-------------------------------------------------- Finish Window construction\n"
    "  //--- Resize View\n"
    "    let viewFrame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)\n"
    "    view.frame = viewFrame\n"
    "  //--- Set content size\n"
    "    mExplorerWindow\?.setContentSize (NSSize (width:EXPLORER_ROW_WIDTH + 16.0, height:fmin (600.0, y)))\n"
    "  //--- Set close button as 'remove window' button\n"
    "    let closeButton : NSButton\? = mExplorerWindow\?.standardWindowButton (.closeButton)\n"
    "    closeButton\?.target = self\n"
    "    closeButton\?.action = #selector(SelectionController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << ".deleteSelectionControllerWindowAction(_:))\n"
    "  //--- Set window title\n"
    "    let windowTitle = explorerIndexString (mEasyBindingsObjectIndex) + className\n"
    "    mExplorerWindow!.title = windowTitle\n"
    "  //--- Add Scroll view\n"
    "    let frame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)\n"
    "    let sw = NSScrollView (frame:frame)\n"
    "    sw.hasVerticalScroller = true\n"
    "    sw.documentView = view\n"
    "    mExplorerWindow!.contentView = sw\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   showObjectWindowFromExplorerButton\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  @objc func showObjectWindowFromExplorerButton (_ : Any) {\n"
    "    if mExplorerWindow == nil {\n"
    "      buildExplorerWindow ()\n"
    "    }\n"
    "    mExplorerWindow\?.makeKeyAndOrderFront(nil)\n"
    "  }\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   deleteSelectionControllerWindowAction\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  @objc func deleteSelectionControllerWindowAction (_ : Any) {\n"
    "    clearObjectExplorer ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   clearObjectExplorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func clearObjectExplorer () {\n"
    "    let closeButton = mExplorerWindow\?.standardWindowButton (.closeButton)\n"
    "    closeButton!.target = nil\n"
    "    mExplorerWindow\?.orderOut (nil)\n"
    "    mExplorerWindow = nil\n"
    "  }\n"
    "\n" ;
  GALGAS_uint index_6873_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_observablePropertyMap enumerator_6873 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_6873.hasCurrentObject ()) {
      const enumGalgasBool test_4 = extensionGetter_isEntityType (enumerator_6873.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 145)).operator_not (SOURCE_FILE ("selection-controller.swift.galgasTemplate", 145)).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
          "\n"
          "  private final func bind_property_" ;
        result << enumerator_6873.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " (model : ReadOnlyArrayOf_" ;
        result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
        result << ") {\n"
          "    model.addEBObserverOf_" ;
        result << enumerator_6873.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " (self." ;
        result << enumerator_6873.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property)\n"
          "    self." ;
        result << enumerator_6873.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.readModelFunction = {\n"
          "      if let model = self.mModel {\n"
          "        switch model.prop {\n"
          "        case .empty :\n"
          "          return .empty\n"
          "        case .multiple :\n"
          "          return .multiple\n"
          "        case .single (let v) :\n"
          "          var s = Set<" ;
        result << extensionGetter_swiftTypeName (enumerator_6873.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 157)).stringValue () ;
        result << "> ()\n"
          "          var isMultipleSelection = false\n"
          "          for object in v {\n"
          "            switch object." ;
        result << enumerator_6873.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property_selection {\n"
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
        const enumGalgasBool test_5 = extensionGetter_isTransient (enumerator_6873.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 183)).operator_not (SOURCE_FILE ("selection-controller.swift.galgasTemplate", 183)).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "    self." ;
          result << enumerator_6873.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.writeModelFunction = { (inValue : " ;
          result << extensionGetter_swiftTypeName (enumerator_6873.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 184)).stringValue () ;
          result << ") in\n"
            "      if let model = self.mModel {\n"
            "        switch model.prop {\n"
            "        case .empty, .multiple :\n"
            "          break\n"
            "        case .single (let v) :\n"
            "          for object in v {\n"
            "            object." ;
          result << enumerator_6873.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.setProp (inValue)\n"
            "          }\n"
            "        }\n"
            "      }\n"
            "    }\n"
            "    self." ;
          result << enumerator_6873.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.validateAndWriteModelFunction = { (candidateValue : " ;
          result << extensionGetter_swiftTypeName (enumerator_6873.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 196)).stringValue () ;
          result << ", windowForSheet : NSWindow\?) in\n"
            "      if let model = self.mModel {\n"
            "        switch model.prop {\n"
            "        case .empty, .multiple :\n"
            "          return false\n"
            "        case .single (let v) :\n"
            "          for object in v {\n"
            "            let result = object." ;
          result << enumerator_6873.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)\n"
            "            if !result {\n"
            "              return false\n"
            "            }\n"
            "          }\n"
            "          return true\n"
            "        }\n"
            "      }else{\n"
            "        return false\n"
            "      }\n"
            "    }\n" ;
        }else if (kBoolFalse == test_5) {
        }
        result << "  }\n"
          "\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_6873_.increment () ;
      enumerator_6873.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   UNBIND SELECTION\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func unbind_selection () {\n" ;
  GALGAS_uint index_9797_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_observablePropertyMap enumerator_9797 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_9797.hasCurrentObject ()) {
      const enumGalgasBool test_6 = extensionGetter_isEntityType (enumerator_9797.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 225)).operator_not (SOURCE_FILE ("selection-controller.swift.galgasTemplate", 225)).boolEnum () ;
      if (kBoolTrue == test_6) {
        result << "  //--- " ;
        result << enumerator_9797.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "\n"
          "    self." ;
        result << enumerator_9797.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.readModelFunction = nil \n" ;
        const enumGalgasBool test_7 = extensionGetter_isTransient (enumerator_9797.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.swift.galgasTemplate", 228)).operator_not (SOURCE_FILE ("selection-controller.swift.galgasTemplate", 228)).boolEnum () ;
        if (kBoolTrue == test_7) {
          result << "    self." ;
          result << enumerator_9797.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.writeModelFunction = nil \n"
            "    self." ;
          result << enumerator_9797.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.validateAndWriteModelFunction = nil \n" ;
        }else if (kBoolFalse == test_7) {
        }
        result << "    self.mModel\?.removeEBObserverOf_" ;
        result << enumerator_9797.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " (self." ;
        result << enumerator_9797.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property)\n" ;
      }else if (kBoolFalse == test_6) {
      }
      index_9797_.increment () ;
      enumerator_9797.gotoNextObject () ;
    }
  }
  result << "  //---\n"
    "    mModel = nil    \n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'generateSelectionControllers'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateSelectionControllers (const GALGAS_selectionControllerForGeneration constinArgument_inArrayControllerListForGeneration,
                                           const GALGAS_string constinArgument_inOutputDirectory,
                                           GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_selectionControllerForGeneration enumerator_8095 (constinArgument_inArrayControllerListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8095.hasCurrentObject ()) {
    GALGAS_string var_s_8108 = GALGAS_string (filewrapperTemplate_selectionControllerGenerationTemplate_selectionControllerImplementation (inCompiler, enumerator_8095.current_mOwnerName (HERE), enumerator_8095.current_mSelectionControllerName (HERE), enumerator_8095.current_mSelectionTypeName (HERE), enumerator_8095.current_mSelectionObservablePropertyMap (HERE) COMMA_SOURCE_FILE ("selection-controller.galgas", 182))) ;
    GALGAS_string var_fileName_8333 = GALGAS_string ("selectionController-").add_operation (enumerator_8095.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 188)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 188)).add_operation (enumerator_8095.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 188)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 188)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_8333  COMMA_SOURCE_FILE ("selection-controller.galgas", 189)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_8333, var_s_8108, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 190)) ;
    }
    enumerator_8095.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@proxyDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_proxyDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_proxyDeclarationAST * object = (const cPtr_proxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_proxyDeclarationAST) ;
  GALGAS_lstring var_node_614 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 14)).add_operation (object->mProperty_mProxyName.getter_string (SOURCE_FILE ("proxy.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 14)), object->mProperty_mProxyName.getter_location (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 14)) ;
  {
  const GALGAS_proxyDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_614, temp_0, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 15)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_614, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 16)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("proxy.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 16)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 16)) COMMA_SOURCE_FILE ("proxy.galgas", 16)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_proxyDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_proxyDeclarationAST.mSlotID,
                                               extensionMethod_proxyDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_proxyDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_proxyDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Overriding extension getter '@proxyDeclarationAST lkey'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_proxyDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_proxyDeclarationAST * object = (const cPtr_proxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_proxyDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 22)).add_operation (object->mProperty_mProxyName.getter_string (SOURCE_FILE ("proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 22)), object->mProperty_mProxyName.getter_location (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 22)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_proxyDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_proxyDeclarationAST.mSlotID,
                             extensionGetter_proxyDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_proxyDeclarationAST_lkey (defineExtensionGetter_proxyDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@proxyDeclarationAST firstAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_proxyDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_proxyDeclarationAST * object = (const cPtr_proxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_proxyDeclarationAST) ;
  cMapElement_classMap * objectArray_2708 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.galgas", 68)) ;
  if (NULL != objectArray_2708) {
      macroValidSharedObject (objectArray_2708, cMapElement_classMap) ;
    GALGAS_propertyKind var_classKind_2846 ;
    GALGAS_actionMap joker_2848 ; // Joker input parameter
    objectArray_2708->mProperty_mPropertyMap.method_searchKey (object->mProperty_mControllerName, var_classKind_2846, joker_2848, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 71)) ;
    switch (var_classKind_2846.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 74)), GALGAS_string ("an array controller is required here"), fixItArray0  COMMA_SOURCE_FILE ("proxy.galgas", 74)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 76)), GALGAS_string ("an array controller is required here"), fixItArray1  COMMA_SOURCE_FILE ("proxy.galgas", 76)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 78)), GALGAS_string ("an array controller is required here"), fixItArray2  COMMA_SOURCE_FILE ("proxy.galgas", 78)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_3318 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_classKind_2846.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3318->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_3264 ;
        GALGAS_classKind joker_3246 ; // Joker input parameter
        GALGAS_actionMap joker_3266_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_3266_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_3246, var_propertyMap_3264, joker_3266_2, joker_3266_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 80)) ;
        GALGAS_propertyKind joker_3315_2 ; // Joker input parameter
        GALGAS_actionMap joker_3315_1 ; // Joker input parameter
        var_propertyMap_3264.method_searchKey (object->mProperty_mPropertyName, joker_3315_2, joker_3315_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 81)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 83)), GALGAS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.galgas", 83)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_proxyDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_proxyDeclarationAST.mSlotID,
                                           extensionMethod_proxyDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_proxyDeclarationAST_firstAnalysisPhase (defineExtensionMethod_proxyDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@boolAsDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_boolAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                        const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                        GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolAsDefaultValue * object = (const cPtr_boolAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_boolAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_4117 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_4164 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_4117.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 113)).isValidAndTrue () ;
  if (enumerator_4164.hasCurrentObject () && bool_0) {
    while (enumerator_4164.hasCurrentObject () && bool_0) {
      switch (enumerator_4164.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          GALGAS_string temp_1 ;
          const enumGalgasBool test_2 = object->mProperty_mValue.getter_bool (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            temp_1 = GALGAS_string ("true") ;
          }else if (kBoolFalse == test_2) {
            temp_1 = GALGAS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_1 ;
          var_found_4117 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
      case GALGAS_typeKind::kEnum_colorType:
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
      enumerator_4164.gotoNextObject () ;
      if (enumerator_4164.hasCurrentObject ()) {
        bool_0 = var_found_4117.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 113)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_4117.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 125)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 126)), GALGAS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 126)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_boolAsDefaultValue.mSlotID,
                                                extensionMethod_boolAsDefaultValue_analyzeDefaultValueType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_boolAsDefaultValue_analyzeDefaultValueType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@integerAsDefaultValue analyzeDefaultValueType'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                           const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                           GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerAsDefaultValue * object = (const cPtr_integerAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_integerAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_4973 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_5020 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_4973.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 139)).isValidAndTrue () ;
  if (enumerator_5020.hasCurrentObject () && bool_0) {
    while (enumerator_5020.hasCurrentObject () && bool_0) {
      switch (enumerator_5020.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mProperty_mValue.getter_uint (HERE).getter_string (SOURCE_FILE ("explicit-default-value.galgas", 142)) ;
          var_found_4973 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSFont.systemFont (ofSize: ").add_operation (object->mProperty_mValue.getter_uint (HERE).getter_string (SOURCE_FILE ("explicit-default-value.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 145)).add_operation (GALGAS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 145)) ;
          var_found_4973 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_colorType:
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
      enumerator_5020.gotoNextObject () ;
      if (enumerator_5020.hasCurrentObject ()) {
        bool_0 = var_found_4973.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 139)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_found_4973.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 154)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 155)), GALGAS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray2  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 155)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_integerAsDefaultValue.mSlotID,
                                                extensionMethod_integerAsDefaultValue_analyzeDefaultValueType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_integerAsDefaultValue_analyzeDefaultValueType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@doubleAsDefaultValue analyzeDefaultValueType'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_doubleAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                          const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                          GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_doubleAsDefaultValue * object = (const cPtr_doubleAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_doubleAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_5934 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_5981 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_5934.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 168)).isValidAndTrue () ;
  if (enumerator_5981.hasCurrentObject () && bool_0) {
    while (enumerator_5981.hasCurrentObject () && bool_0) {
      switch (enumerator_5981.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mProperty_mValue.getter_double (HERE).getter_string (SOURCE_FILE ("explicit-default-value.galgas", 171)) ;
          var_found_5934 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
      case GALGAS_typeKind::kEnum_colorType:
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
      enumerator_5981.gotoNextObject () ;
      if (enumerator_5981.hasCurrentObject ()) {
        bool_0 = var_found_5934.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 168)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_found_5934.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 180)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 181)), GALGAS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray2  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 181)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_doubleAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_doubleAsDefaultValue.mSlotID,
                                                extensionMethod_doubleAsDefaultValue_analyzeDefaultValueType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_doubleAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_doubleAsDefaultValue_analyzeDefaultValueType, NULL) ;

