#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-7.h"

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
  GALGAS_filewrapper var_w_9117 = GALGAS_filewrapper (gWrapperDirectory_0_outletClassGeneration) ;
  cEnumerator_stringset enumerator_9190 (constinArgument_inNeededOutletClasses, kENUMERATION_UP) ;
  while (enumerator_9190.hasCurrentObject ()) {
    GALGAS_string var_s_9203 = var_w_9117.getter_textFileContentsAtPath (GALGAS_string ("/").add_operation (enumerator_9190.current (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 283)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 283)) ;
    GALGAS_string var_fileName_9271 = enumerator_9190.current (HERE).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 284)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_9271  COMMA_SOURCE_FILE ("outlet-class.galgas", 285)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_9271, var_s_9203, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 286)) ;
    }
    enumerator_9190.gotoNextObject () ;
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
    const enumGalgasBool test_0 = ioArgument_ioBindingSpecificationMap.getter_hasKey (enumerator_4696.current_mOutletClassName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("binding-specification.galgas", 149)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioBindingSpecificationMap.setter_removeKey (enumerator_4696.current_mOutletClassName (HERE), var_outletSuperClassName_5382, var_bindingMap_5348, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 150)) ;
      }
    }else if (kBoolFalse == test_0) {
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
    const enumGalgasBool test_6 = ioArgument_ioSemanticContext.getter_mBindingSpecificationMap (HERE).getter_hasKey (enumerator_6229.current_mOutletClassName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("binding-specification.galgas", 206)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_6229.current_mOutletClassName (HERE), var_outletSuperClassName_7826, var_bindingMap_7792, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 207)) ;
      }
    }else if (kBoolFalse == test_6) {
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

void routine_analyzeOutlets (const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                             const GALGAS_string /* constinArgument_inRootEntityName */,
                             const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                             const GALGAS_outletDeclarationList constinArgument_inOutletDeclarationList,
                             const GALGAS_observablePropertyMap constinArgument_inObservablePropertyMap,
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
  outArgument_outRegularBindingsGenerationList = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 187)) ;
  outArgument_outTargetActionList = GALGAS_actionBindingListForGeneration::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 188)) ;
  outArgument_outMultipleBindingGenerationList = GALGAS_multipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 189)) ;
  outArgument_outletMap = GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("outlet-declaration.galgas", 190)) ;
  outArgument_outTableViewBindingGenerationList = GALGAS_tableViewBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 191)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 192)) ;
  cEnumerator_outletDeclarationList enumerator_7035 (constinArgument_inOutletDeclarationList, kENUMERATION_UP) ;
  while (enumerator_7035.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_7035.current_mOutletName (HERE), enumerator_7035.current_mOutletTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 194)) ;
    }
    GALGAS_bool var_handlesRunAction_7239 ;
    GALGAS_bool var_handlesTableViewBinding_7280 ;
    GALGAS_bool var_handlesEnabledBinding_7319 ;
    GALGAS_bool var_handlesHiddenBinding_7357 ;
    GALGAS_bool var_handleGraphicControllerBinding_7405 ;
    GALGAS_bool var_outletClassIsUserDefined_7447 ;
    GALGAS_lstring joker_7204 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mOutletClassMap (HERE).method_searchKey (enumerator_7035.current_mOutletTypeName (HERE), joker_7204, var_handlesRunAction_7239, var_handlesTableViewBinding_7280, var_handlesEnabledBinding_7319, var_handlesHiddenBinding_7357, var_handleGraphicControllerBinding_7405, var_outletClassIsUserDefined_7447, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 195)) ;
    const enumGalgasBool test_0 = var_outletClassIsUserDefined_7447.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 205)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_7035.current_mOutletTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 206)) ;
    }
    switch (enumerator_7035.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_9957 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_7035.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_9957->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_9957->mAssociatedValue1 ;
        const enumGalgasBool test_1 = var_handleGraphicControllerBinding_7405.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 212)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_7035.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 213)), GALGAS_string ("the '").add_operation (enumerator_7035.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 213)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 213)), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 213)) ;
        }else if (kBoolFalse == test_1) {
          GALGAS_propertyKind var_kind_8015 ;
          GALGAS_string joker_8027_3 ; // Joker input parameter
          GALGAS_actionMap joker_8027_2 ; // Joker input parameter
          GALGAS_bool joker_8027_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_kind_8015, joker_8027_3, joker_8027_2, joker_8027_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 215)) ;
          switch (var_kind_8015.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 222)), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 222)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 224)), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 224)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 226)), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 226)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_9706 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_8015.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_entityName = extractPtr_9706->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_graphic = extractPtr_9706->mAssociatedValue1 ;
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_6) {
                const enumGalgasBool test_7 = extractedValue_graphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 229)).boolEnum () ;
                if (kBoolTrue == test_7) {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 230)), GALGAS_string ("the controlled entity (").add_operation (extractedValue_entityName.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 230)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 230)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 230)) ;
                }
              }else if (kBoolFalse == test_6) {
                GALGAS_observablePropertyMap var_observablePropertyMap_8792 ;
                GALGAS_objectKind joker_8808 ; // Joker input parameter
                constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (extractedValue_entityName, var_observablePropertyMap_8792, joker_8808, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 233)) ;
                GALGAS_propertyKind var_propertyKind_8928 ;
                GALGAS_string joker_8930_3 ; // Joker input parameter
                GALGAS_actionMap joker_8930_2 ; // Joker input parameter
                GALGAS_bool joker_8930_1 ; // Joker input parameter
                var_observablePropertyMap_8792.method_searchKey (extractedValue_propertyName, var_propertyKind_8928, joker_8930_3, joker_8930_2, joker_8930_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 238)) ;
                switch (var_propertyKind_8928.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <C_FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 244)), GALGAS_string ("the bound model should be a toMany property"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_9315 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_8928.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_kEntityName = extractPtr_9315->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_isGraphic = extractPtr_9315->mAssociatedValue2 ;
                    const enumGalgasBool test_10 = extractedValue_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 246)).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      TC_Array <C_FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 247)), GALGAS_string ("the controlled entity (").add_operation (extractedValue_kEntityName.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 247)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 247)), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 247)) ;
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 250)), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 250)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 252)), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 252)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 254)), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 254)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 258)), GALGAS_string ("the bound model should be an array controller"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 258)) ;
            }
            break ;
          }
          outArgument_outEBViewGraphicControllerBindingGenerationList.addAssign_operation (enumerator_7035.current_mOutletName (HERE).getter_string (HERE), extractedValue_controllerName.getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 260)) ;
        }
      }
      break ;
    }
    switch (enumerator_7035.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_10668 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_7035.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_10668->mAssociatedValue0 ;
        const enumGalgasBool test_16 = var_handlesTableViewBinding_7280.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 267)).boolEnum () ;
        if (kBoolTrue == test_16) {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (enumerator_7035.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 268)), GALGAS_string ("the '").add_operation (enumerator_7035.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 268)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 268)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 268)) ;
        }else if (kBoolFalse == test_16) {
          GALGAS_propertyKind var_kind_10401 ;
          GALGAS_string joker_10413_3 ; // Joker input parameter
          GALGAS_actionMap joker_10413_2 ; // Joker input parameter
          GALGAS_bool joker_10413_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_kind_10401, joker_10413_3, joker_10413_2, joker_10413_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 270)) ;
          const enumGalgasBool test_18 = var_kind_10401.getter_isArrayController (SOURCE_FILE ("outlet-declaration.galgas", 275)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 275)).boolEnum () ;
          if (kBoolTrue == test_18) {
            TC_Array <C_FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 276)), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 276)) ;
          }
          outArgument_outTableViewBindingGenerationList.addAssign_operation (enumerator_7035.current_mOutletName (HERE).getter_string (HERE), extractedValue_controllerName.getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 278)) ;
        }
      }
      break ;
    }
    switch (enumerator_7035.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_11588 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_7035.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_target = extractPtr_11588->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_action = extractPtr_11588->mAssociatedValue1 ;
        const enumGalgasBool test_20 = var_handlesRunAction_7239.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 285)).boolEnum () ;
        if (kBoolTrue == test_20) {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (enumerator_7035.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 286)), GALGAS_string ("the '").add_operation (enumerator_7035.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 286)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 286)), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 286)) ;
        }else if (kBoolFalse == test_20) {
          const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, extractedValue_target.getter_string (HERE).objectCompare (GALGAS_string ("self"))).boolEnum () ;
          if (kBoolTrue == test_22) {
            constinArgument_inActionMap.method_searchKey (extractedValue_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 288)) ;
            outArgument_outTargetActionList.addAssign_operation (enumerator_7035.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("self"), extractedValue_action.getter_string (HERE), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 289)) ;
          }else if (kBoolFalse == test_22) {
            GALGAS_actionMap var_controllerActionMap_11318 ;
            GALGAS_propertyKind joker_11270_2 ; // Joker input parameter
            GALGAS_string joker_11270_1 ; // Joker input parameter
            GALGAS_bool joker_11330 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_target, joker_11270_2, joker_11270_1, var_controllerActionMap_11318, joker_11330, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 295)) ;
            var_controllerActionMap_11318.method_searchKey (extractedValue_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 301)) ;
            outArgument_outTargetActionList.addAssign_operation (enumerator_7035.current_mOutletName (HERE).getter_string (HERE), extractedValue_target.getter_string (HERE), extractedValue_action.getter_string (HERE), GALGAS_string ("ArrayController_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 306)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 306)).add_operation (extractedValue_target.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 306))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 302)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_7035.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_12415 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_7035.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_expression = extractPtr_12415->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_11989 ;
        GALGAS_typeKind var_type_12017 ;
        GALGAS_location var_errorLocation_12054 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_expression.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_enableExpression_11989, var_type_12017, var_errorLocation_12054, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 313)) ;
        const enumGalgasBool test_23 = var_handlesEnabledBinding_7319.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 321)).boolEnum () ;
        if (kBoolTrue == test_23) {
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (var_errorLocation_12054, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 322)) ;
        }
        const enumGalgasBool test_25 = var_type_12017.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 324)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 324)).boolEnum () ;
        if (kBoolTrue == test_25) {
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (var_errorLocation_12054, GALGAS_string ("expression is not boolean"), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 325)) ;
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_7035.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("enabled"), var_enableExpression_11989  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 327)) ;
      }
      break ;
    }
    switch (enumerator_7035.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_13237 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_7035.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_expression = extractPtr_13237->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_12814 ;
        GALGAS_typeKind var_type_12842 ;
        GALGAS_location var_errorLocation_12879 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_expression.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_12814, var_type_12842, var_errorLocation_12879, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 336)) ;
        const enumGalgasBool test_27 = var_type_12842.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 344)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 344)).boolEnum () ;
        if (kBoolTrue == test_27) {
          TC_Array <C_FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (var_errorLocation_12879, GALGAS_string ("expression is not boolean"), fixItArray28  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 345)) ;
        }
        const enumGalgasBool test_29 = var_handlesHiddenBinding_7357.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 347)).boolEnum () ;
        if (kBoolTrue == test_29) {
          TC_Array <C_FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (var_errorLocation_12879, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray30  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 348)) ;
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_7035.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("hidden"), var_hiddenExpression_12814  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 350)) ;
      }
      break ;
    }
    {
    routine_analyzeRegularBindingEX (constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_7035.current_mOutletTypeName (HERE), enumerator_7035.current_mOutletName (HERE).getter_string (HERE), enumerator_7035.current_mRegularBindingList (HERE), GALGAS_string ("self"), outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 356)) ;
    }
    enumerator_7035.gotoNextObject () ;
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
  cEnumerator_regularBindingList enumerator_14103 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_14103.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_14174 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 383)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_14228 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 384)) ;
    cEnumerator_observablePropertyList enumerator_14271 (enumerator_14103.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_14271.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_14442 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_14514 ;
      extensionMethod_analyzeObservableProperty (enumerator_14271.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_14442, var_swiftTypeStringForTransientFunctionArgument_14514, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 386)) ;
      switch (var_kind_14442.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14271.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 396)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 396)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14271.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 398)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 398)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14271.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 400)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 400)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14271.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 402)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 402)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_14228.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_14271.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 404)), var_kind_14442  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 404)) ;
      var_boundModelTypeList_14174.addAssign_operation (var_kind_14442, extensionGetter_location (enumerator_14271.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 405))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 405)) ;
      enumerator_14271.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_15315 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 408)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_15399 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 409)) ;
    GALGAS_lstring var_outletTypeName_15427 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_15464 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 412)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 412)).isValid ()) {
      uint32_t variant_15480 = constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 412)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 412)).uintValue () ;
      bool loop_15480 = true ;
      while (loop_15480) {
        loop_15480 = GALGAS_bool (kIsNotEqual, var_outletTypeName_15427.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_15464 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 412)).isValid () ;
        if (loop_15480) {
          loop_15480 = GALGAS_bool (kIsNotEqual, var_outletTypeName_15427.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_15464 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 412)).boolValue () ;
        }
        if (loop_15480 && (0 == variant_15480)) {
          loop_15480 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.galgas", 412)) ;
        }
        if (loop_15480) {
          variant_15480 -- ;
          var_continues_15464 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_15730 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_15785 ;
          constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).method_searchKey (var_outletTypeName_15427, var_superOutletClassName_15730, var_bindingMap_15785, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 414)) ;
          const enumGalgasBool test_4 = var_bindingMap_15785.getter_hasKey (enumerator_14103.current_mBindingName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("outlet-declaration.galgas", 419)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_bindingMap_15785.method_searchKey (enumerator_14103.current_mBindingName (HERE), var_outletBindingSpecificationModelList_15315, var_controllerBindingOptionDecoratedList_15399, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 420)) ;
          }else if (kBoolFalse == test_4) {
            var_continues_15464 = GALGAS_bool (true) ;
            var_outletTypeName_15427 = var_superOutletClassName_15730 ;
          }
        }
      }
    }
    const enumGalgasBool test_5 = var_continues_15464.boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (enumerator_14103.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 431)), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 431)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_14174.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 432)).objectCompare (var_outletBindingSpecificationModelList_15315.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 432)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_14103.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 433)), var_outletBindingSpecificationModelList_15315.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 434)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 434)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 434)).add_operation (var_boundModelTypeList_14174.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 436)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 435)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 436)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 433)) ;
      }else if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_16536 (var_outletBindingSpecificationModelList_15315, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_16569 (var_boundModelTypeList_14174, kENUMERATION_UP) ;
        while (enumerator_16536.hasCurrentObject () && enumerator_16569.hasCurrentObject ()) {
          GALGAS_bool test_9 = enumerator_16536.current_mModelShouldBeWritableProperty (HERE) ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = extensionGetter_isTransient (enumerator_16569.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 439)) ;
          }
          const enumGalgasBool test_10 = test_9.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_16569.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 440)) ;
          }
          GALGAS_bool test_12 = enumerator_16536.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.galgas", 442)) ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = extensionGetter_isEnumType (enumerator_16569.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 442)) ;
          }
          const enumGalgasBool test_13 = test_12.boolEnum () ;
          if (kBoolTrue == test_13) {
          }else if (kBoolFalse == test_13) {
            const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_16536.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 443)).objectCompare (extensionGetter_swiftTypeName (enumerator_16569.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 443)))).boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_16569.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_16536.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 444)), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 444)) ;
            }
          }
          enumerator_16536.gotoNextObject () ;
          enumerator_16569.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_17128 = GALGAS_string::makeEmptyString () ;
    const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_15399.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 450)).objectCompare (enumerator_14103.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("outlet-declaration.galgas", 450)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_string var_s_17238 ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_15399.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 452)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_17) {
        var_s_17238 = GALGAS_string ("this binding has no option") ;
      }else if (kBoolFalse == test_17) {
        var_s_17238 = GALGAS_string ("this binding requires the following options:") ;
        cEnumerator_controllerBindingOptionDecoratedList enumerator_17470 (var_controllerBindingOptionDecoratedList_15399, kENUMERATION_UP) ;
        while (enumerator_17470.hasCurrentObject ()) {
          var_s_17238.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_17470.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 457)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 457)).add_operation (extensionGetter_swiftTypeName (enumerator_17470.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 457)) ;
          enumerator_17470.gotoNextObject () ;
        }
      }
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (enumerator_14103.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 460)), var_s_17238, fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)) ;
    }else if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_17674 (var_controllerBindingOptionDecoratedList_15399, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_17709 (enumerator_14103.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_17674.hasCurrentObject () && enumerator_17709.hasCurrentObject ()) {
        const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_17674.current_mOptionName (HERE).getter_string (HERE).objectCompare (enumerator_17709.current_mOptionName (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (enumerator_17709.current_mOptionName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 464)), GALGAS_string ("the option name should be '").add_operation (enumerator_17674.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 464)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 464)), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 464)) ;
        }
        GALGAS_string var_optionValueAsString_18034 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 467)) ;
        temp_21.addAssign_operation (enumerator_17674.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 467)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_17709.current_mOptionValue (HERE).ptr (), temp_21, var_optionValueAsString_18034, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 466)) ;
        var_bindingOptionString_17128.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_17674.current_mOptionName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 470)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 470)).add_operation (var_optionValueAsString_18034, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 470)) ;
        enumerator_17674.gotoNextObject () ;
        enumerator_17709.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_14103.current_mBindingName (HERE).getter_string (HERE), var_boundModelListForGeneration_14228, var_bindingOptionString_17128  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 474)) ;
    enumerator_14103.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'analyzeRegularBindingEX'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeRegularBindingEX (const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                      const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                      const GALGAS_observablePropertyMap constinArgument_inObservablePropertyMap,
                                      const GALGAS_lstring constinArgument_inOutletTypeName,
                                      const GALGAS_string constinArgument_inOutletName,
                                      const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                      const GALGAS_string constinArgument_inSelfSwiftName,
                                      GALGAS_regularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_18888 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_18888.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_18959 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 496)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_19013 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 497)) ;
    cEnumerator_observablePropertyList enumerator_19056 (enumerator_18888.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_19056.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_19239 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_19311 ;
      extensionMethod_analyzeObservablePropertyEX (enumerator_19056.current_mObservableProperty (HERE), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_kind_19239, var_swiftTypeStringForTransientFunctionArgument_19311, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 499)) ;
      switch (var_kind_19239.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_19056.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 509)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 509)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_19056.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 511)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 511)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_19056.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 513)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 513)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_19056.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 515)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 515)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_19013.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_19056.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 517)), var_kind_19239  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 517)) ;
      var_boundModelTypeList_18959.addAssign_operation (var_kind_19239, extensionGetter_location (enumerator_19056.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 518))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 518)) ;
      enumerator_19056.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_20112 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 521)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_20196 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 522)) ;
    GALGAS_lstring var_outletTypeName_20224 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_20261 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 525)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 525)).isValid ()) {
      uint32_t variant_20277 = constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 525)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 525)).uintValue () ;
      bool loop_20277 = true ;
      while (loop_20277) {
        loop_20277 = GALGAS_bool (kIsNotEqual, var_outletTypeName_20224.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_20261 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 525)).isValid () ;
        if (loop_20277) {
          loop_20277 = GALGAS_bool (kIsNotEqual, var_outletTypeName_20224.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_20261 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 525)).boolValue () ;
        }
        if (loop_20277 && (0 == variant_20277)) {
          loop_20277 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.galgas", 525)) ;
        }
        if (loop_20277) {
          variant_20277 -- ;
          var_continues_20261 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_20527 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_20582 ;
          constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).method_searchKey (var_outletTypeName_20224, var_superOutletClassName_20527, var_bindingMap_20582, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 527)) ;
          const enumGalgasBool test_4 = var_bindingMap_20582.getter_hasKey (enumerator_18888.current_mBindingName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("outlet-declaration.galgas", 532)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_bindingMap_20582.method_searchKey (enumerator_18888.current_mBindingName (HERE), var_outletBindingSpecificationModelList_20112, var_controllerBindingOptionDecoratedList_20196, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 533)) ;
          }else if (kBoolFalse == test_4) {
            var_continues_20261 = GALGAS_bool (true) ;
            var_outletTypeName_20224 = var_superOutletClassName_20527 ;
          }
        }
      }
    }
    const enumGalgasBool test_5 = var_continues_20261.boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (enumerator_18888.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 544)), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 544)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_18959.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 545)).objectCompare (var_outletBindingSpecificationModelList_20112.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 545)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_18888.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 546)), var_outletBindingSpecificationModelList_20112.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 547)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 547)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 547)).add_operation (var_boundModelTypeList_18959.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 549)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 548)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 549)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 546)) ;
      }else if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_21333 (var_outletBindingSpecificationModelList_20112, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_21366 (var_boundModelTypeList_18959, kENUMERATION_UP) ;
        while (enumerator_21333.hasCurrentObject () && enumerator_21366.hasCurrentObject ()) {
          GALGAS_bool test_9 = enumerator_21333.current_mModelShouldBeWritableProperty (HERE) ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = extensionGetter_isTransient (enumerator_21366.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 552)) ;
          }
          const enumGalgasBool test_10 = test_9.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_21366.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 553)) ;
          }
          GALGAS_bool test_12 = enumerator_21333.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.galgas", 555)) ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = extensionGetter_isEnumType (enumerator_21366.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 555)) ;
          }
          const enumGalgasBool test_13 = test_12.boolEnum () ;
          if (kBoolTrue == test_13) {
          }else if (kBoolFalse == test_13) {
            const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_21333.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 556)).objectCompare (extensionGetter_swiftTypeName (enumerator_21366.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 556)))).boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_21366.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_21333.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 557)), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 557)) ;
            }
          }
          enumerator_21333.gotoNextObject () ;
          enumerator_21366.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_21925 = GALGAS_string::makeEmptyString () ;
    const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_20196.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 563)).objectCompare (enumerator_18888.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("outlet-declaration.galgas", 563)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_string var_s_22035 ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_20196.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 565)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_17) {
        var_s_22035 = GALGAS_string ("this binding has no option") ;
      }else if (kBoolFalse == test_17) {
        var_s_22035 = GALGAS_string ("this binding requires the following options:") ;
        cEnumerator_controllerBindingOptionDecoratedList enumerator_22267 (var_controllerBindingOptionDecoratedList_20196, kENUMERATION_UP) ;
        while (enumerator_22267.hasCurrentObject ()) {
          var_s_22035.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_22267.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 570)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 570)).add_operation (extensionGetter_swiftTypeName (enumerator_22267.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 570)) ;
          enumerator_22267.gotoNextObject () ;
        }
      }
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (enumerator_18888.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 573)), var_s_22035, fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 573)) ;
    }else if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_22471 (var_controllerBindingOptionDecoratedList_20196, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_22506 (enumerator_18888.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_22471.hasCurrentObject () && enumerator_22506.hasCurrentObject ()) {
        const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_22471.current_mOptionName (HERE).getter_string (HERE).objectCompare (enumerator_22506.current_mOptionName (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (enumerator_22506.current_mOptionName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 577)), GALGAS_string ("the option name should be '").add_operation (enumerator_22471.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 577)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 577)), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 577)) ;
        }
        GALGAS_string var_optionValueAsString_22831 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 580)) ;
        temp_21.addAssign_operation (enumerator_22471.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 580)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_22506.current_mOptionValue (HERE).ptr (), temp_21, var_optionValueAsString_22831, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 579)) ;
        var_bindingOptionString_21925.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_22471.current_mOptionName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 583)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 583)).add_operation (var_optionValueAsString_22831, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 583)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 583)) ;
        enumerator_22471.gotoNextObject () ;
        enumerator_22506.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_18888.current_mBindingName (HERE).getter_string (HERE), var_boundModelListForGeneration_19013, var_bindingOptionString_21925  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 587)) ;
    enumerator_18888.gotoNextObject () ;
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
  GALGAS_lstring var_node_1012 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 25)).add_operation (object->mProperty_mTransientName.getter_string (SOURCE_FILE ("transient-property.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 25)), object->mProperty_mTransientName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 25)) ;
  {
  const GALGAS_transientDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_1012, temp_0, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 26)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_1012, object->mProperty_mClassName COMMA_SOURCE_FILE ("transient-property.galgas", 27)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_1012, object->mProperty_mTransientTypeName COMMA_SOURCE_FILE ("transient-property.galgas", 28)) ;
  }
  cEnumerator_observablePropertyList enumerator_1254 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_1254.hasCurrentObject ()) {
    switch (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1501 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1501->mAssociatedValue0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 33)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 33)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 33)) COMMA_SOURCE_FILE ("transient-property.galgas", 33)) ;
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1715 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1715->mAssociatedValue0 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 37)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 37)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 37)) COMMA_SOURCE_FILE ("transient-property.galgas", 37)) ;
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1943 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_1943->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 41)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 41)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 41)) COMMA_SOURCE_FILE ("transient-property.galgas", 41)) ;
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_2161 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_2161->mAssociatedValue0 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 45)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 45)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 45)) COMMA_SOURCE_FILE ("transient-property.galgas", 45)) ;
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2303 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2303->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 48)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 48)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 48)) COMMA_SOURCE_FILE ("transient-property.galgas", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2466 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2466->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 50)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 50)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 50)) COMMA_SOURCE_FILE ("transient-property.galgas", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2624 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2624->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 52)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 52)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 52)) COMMA_SOURCE_FILE ("transient-property.galgas", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2783 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2783->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 54)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 54)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 54)) COMMA_SOURCE_FILE ("transient-property.galgas", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2938 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2938->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 56)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 56)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 56)) COMMA_SOURCE_FILE ("transient-property.galgas", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_3091 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3091->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 58)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 58)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 58)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 58)) COMMA_SOURCE_FILE ("transient-property.galgas", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3256 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3256->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 60)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 60)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 60)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 60)) COMMA_SOURCE_FILE ("transient-property.galgas", 60)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3444 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3444->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3444->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 62)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 62)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 62)) COMMA_SOURCE_FILE ("transient-property.galgas", 62)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3670 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1254.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3670->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3670->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_3670->mAssociatedValue2 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1012, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 64)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 64)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 64)) COMMA_SOURCE_FILE ("transient-property.galgas", 64)) ;
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
    enumerator_1254.gotoNextObject () ;
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
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 75)).add_operation (object->mProperty_mTransientName.getter_string (SOURCE_FILE ("transient-property.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 75)), object->mProperty_mTransientName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 75)) ;
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
//               Overriding extension method '@transientDeclarationAST classAndPropertySemanticAnalysis'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientDeclarationAST_classAndPropertySemanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                      GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  cMapElement_classMap * objectArray_6095 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 136)) ;
  if (NULL != objectArray_6095) {
      macroValidSharedObject (objectArray_6095, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_6251 ;
    GALGAS_propertyMap joker_6253_3 ; // Joker input parameter
    GALGAS_actionMap joker_6253_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_6253_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mTransientTypeName, var_classKind_6251, joker_6253_3, joker_6253_2, joker_6253_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 139)) ;
    switch (var_classKind_6251.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 142)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("transient-property.galgas", 142)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_simpleClass:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 144)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("transient-property.galgas", 144)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_6583 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6251.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_6583->mAssociatedValue0 ;
        {
        objectArray_6095->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mTransientName, GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("transient-property.galgas", 146))  COMMA_SOURCE_FILE ("transient-property.galgas", 146)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 146)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 148)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 148)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 150)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.galgas", 150)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientDeclarationAST_classAndPropertySemanticAnalysis (void) {
  enterExtensionMethod_classAndPropertySemanticAnalysis (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                                         extensionMethod_transientDeclarationAST_classAndPropertySemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientDeclarationAST_classAndPropertySemanticAnalysis (defineExtensionMethod_transientDeclarationAST_classAndPropertySemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@transientDeclarationAST secondAnalysisPhase'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                         GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
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
//                              Overriding extension method '@transientAST typeInventory'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientAST_typeInventory (const cPtr_abstractSecondaryProperty * inObject,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_7677 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mProperty_mTransientTypeName, joker_7677 COMMA_SOURCE_FILE ("transient-property.galgas", 177)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientAST_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                      extensionMethod_transientAST_typeInventory) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientAST_typeInventory (defineExtensionMethod_transientAST_typeInventory, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@transientAST tryToDefineSecondaryProperty'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientAST_tryToDefineSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                       GALGAS_semanticContextEX & ioArgument_ioSemanticContext,
                                                                       const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                       GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                       GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                       GALGAS_simpleStoredPropertyListForGenerationEX & /* ioArgument_ioSimpleStoredPropertyListForGeneration */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  GALGAS_bool var_solved_8335 = GALGAS_bool (true) ;
  cEnumerator_observablePropertyList enumerator_8370 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  bool bool_0 = var_solved_8335.isValidAndTrue () ;
  if (enumerator_8370.hasCurrentObject () && bool_0) {
    while (enumerator_8370.hasCurrentObject () && bool_0) {
      var_solved_8335 = extensionGetter_isPropertyDefined (enumerator_8370.current_mObservableProperty (HERE), ioArgument_ioSemanticContext, constinArgument_inRootObservableProperties, ioArgument_ioObservableProperties, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 197)) ;
      enumerator_8370.gotoNextObject () ;
      if (enumerator_8370.hasCurrentObject ()) {
        bool_0 = var_solved_8335.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved_8335.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_typeKind var_type_8635 ;
    GALGAS_actionMap var_actionMap_8650 ;
    ioArgument_ioSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (object->mProperty_mTransientTypeName, var_type_8635, var_actionMap_8650, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 204)) ;
    GALGAS_propertyKind var_kind_8674 ;
    const enumGalgasBool test_2 = var_type_8635.getter_isEntityType (SOURCE_FILE ("transient-property.galgas", 206)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_kind_8674 = GALGAS_propertyKind::constructor_toOne (object->mProperty_mTransientTypeName, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("transient-property.galgas", 207)), extensionGetter_isGraphic (var_type_8635, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 207))  COMMA_SOURCE_FILE ("transient-property.galgas", 207)) ;
    }else if (kBoolFalse == test_2) {
      var_kind_8674 = GALGAS_propertyKind::constructor_property (var_type_8635, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("transient-property.galgas", 209))  COMMA_SOURCE_FILE ("transient-property.galgas", 209)) ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (object->mProperty_mTransientName, var_kind_8674, GALGAS_string::makeEmptyString (), var_actionMap_8650, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 211)) ;
    }
  }else if (kBoolFalse == test_1) {
    const GALGAS_transientAST temp_3 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_3  COMMA_SOURCE_FILE ("transient-property.galgas", 219)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientAST_tryToDefineSecondaryProperty (void) {
  enterExtensionMethod_tryToDefineSecondaryProperty (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                                     extensionMethod_transientAST_tryToDefineSecondaryProperty) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientAST_tryToDefineSecondaryProperty (defineExtensionMethod_transientAST_tryToDefineSecondaryProperty, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@transientAST secondaryPropertySemanticAnalysisEX'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientAST_secondaryPropertySemanticAnalysisEX (const cPtr_abstractSecondaryProperty * inObject,
                                                                              const GALGAS_string constinArgument_inOwnerName,
                                                                              const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                              const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                              const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                                              const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                              GALGAS_transientDefinitionListForGeneration & ioArgument_ioTransientDefinitionListForGeneration,
                                                                              GALGAS_arrayControllerForGenerationEX & /* ioArgument_ioArrayControllerForGeneration */,
                                                                              GALGAS_selectionControllerForGeneration & /* ioArgument_ioSelectionControllerForGeneration */,
                                                                              GALGAS_stringset & /* ioArgument_ioNeededOutletClasses */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  GALGAS_typeKind var_type_9846 ;
  GALGAS_actionMap joker_9848 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (object->mProperty_mTransientTypeName, var_type_9846, joker_9848, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 237)) ;
  GALGAS_typeKindList var_typeList_9891 ;
  switch (var_type_9846.enumValue ()) {
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
      GALGAS_typeKindList temp_0 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 242)) ;
      temp_0.addAssign_operation (var_type_9846  COMMA_SOURCE_FILE ("transient-property.galgas", 242)) ;
      var_typeList_9891 = temp_0 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 244)) ;
      temp_1.addAssign_operation (var_type_9846  COMMA_SOURCE_FILE ("transient-property.galgas", 244)) ;
      var_typeList_9891 = temp_1 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientName.getter_location (SOURCE_FILE ("transient-property.galgas", 246)), GALGAS_string ("an entity cannot be used as simple property type"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 246)) ;
      var_typeList_9891.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      GALGAS_typeKindList temp_3 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 248)) ;
      temp_3.addAssign_operation (var_type_9846  COMMA_SOURCE_FILE ("transient-property.galgas", 248)) ;
      var_typeList_9891 = temp_3 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      GALGAS_typeKindList temp_4 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 250)) ;
      temp_4.addAssign_operation (var_type_9846  COMMA_SOURCE_FILE ("transient-property.galgas", 250)) ;
      var_typeList_9891 = temp_4 ;
    }
    break ;
  }
  GALGAS_transientDependencyListForGeneration var_dependencies_10374 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 253)) ;
  cEnumerator_observablePropertyList enumerator_10407 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_10407.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_10592 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_10655 ;
    extensionMethod_analyzeObservablePropertyEX (enumerator_10407.current_mObservableProperty (HERE), constinArgument_inRootObservableProperties, constinArgument_inSemanticContext, constinArgument_inObservableProperties, var_dependencyKind_10592, var_swiftTypeStringForTransientFunctionArgument_10655, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 255)) ;
    switch (var_dependencyKind_10592.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_10407.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 265)), GALGAS_string ("only an atomic property can be observed"), fixItArray5  COMMA_SOURCE_FILE ("transient-property.galgas", 265)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_10407.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 267)), GALGAS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.galgas", 267)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_10407.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 269)), GALGAS_string ("only an atomic property can be observed"), fixItArray7  COMMA_SOURCE_FILE ("transient-property.galgas", 269)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_10407.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 271)), GALGAS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("transient-property.galgas", 271)) ;
      }
      break ;
    }
    var_dependencies_10374.addAssign_operation (enumerator_10407.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_10407.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 275)), var_swiftTypeStringForTransientFunctionArgument_10655  COMMA_SOURCE_FILE ("transient-property.galgas", 273)) ;
    enumerator_10407.gotoNextObject () ;
  }
  ioArgument_ioTransientDefinitionListForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mProperty_mTransientName.getter_string (HERE), var_type_9846, var_dependencies_10374, object->mProperty_mExternFunctionName.getter_string (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 279)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientAST_secondaryPropertySemanticAnalysisEX (void) {
  enterExtensionMethod_secondaryPropertySemanticAnalysisEX (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                                            extensionMethod_transientAST_secondaryPropertySemanticAnalysisEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientAST_secondaryPropertySemanticAnalysisEX (defineExtensionMethod_transientAST_secondaryPropertySemanticAnalysisEX, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'generateTransients'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateTransients (const GALGAS_string constinArgument_inOutputDirectory,
                                 const GALGAS_transientDefinitionListForGeneration constinArgument_inTransientListForGeneration,
                                 GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_transientDefinitionListForGeneration enumerator_20345 (constinArgument_inTransientListForGeneration, kENUMERATION_UP) ;
  while (enumerator_20345.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_20345.current_mDependencyList (HERE).getter_length (SOURCE_FILE ("transient-property.galgas", 466)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_20345.current_mExternFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("transient-property.galgas", 466)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_20433 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, enumerator_20345.current_mOwnerName (HERE), enumerator_20345.current_mTransientName (HERE), enumerator_20345.current_mDependencyList (HERE), enumerator_20345.current_mTransientType (HERE) COMMA_SOURCE_FILE ("transient-property.galgas", 467))) ;
      GALGAS_string var_fileName_20619 = GALGAS_string ("transient-").add_operation (enumerator_20345.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 473)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 473)).add_operation (enumerator_20345.current_mTransientName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 473)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 473)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_20619  COMMA_SOURCE_FILE ("transient-property.galgas", 474)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_20619, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_s_20433, GALGAS_string ("\n"), GALGAS_string ("}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 475)) ;
      }
    }
    enumerator_20345.gotoNextObject () ;
  }
}


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
//            Overriding extension method '@atomicPropertyDeclarationAST classAndPropertySemanticAnalysis'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_atomicPropertyDeclarationAST_classAndPropertySemanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                           GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_atomicPropertyDeclarationAST * object = (const cPtr_atomicPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyDeclarationAST) ;
  cMapElement_classMap * objectArray_3907 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 105)) ;
  if (NULL != objectArray_3907) {
      macroValidSharedObject (objectArray_3907, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4062 ;
    GALGAS_propertyMap joker_4064_3 ; // Joker input parameter
    GALGAS_actionMap joker_4064_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4064_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mPropertyTypeName, var_classKind_4062, joker_4064_3, joker_4064_2, joker_4064_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 108)) ;
    switch (var_classKind_4062.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_atomic * extractPtr_4951 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4062.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_4951->mAssociatedValue0 ;
        {
        objectArray_3907->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mPropertyName, GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("simple-stored-property.galgas", 115))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 115)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("simple-stored-property.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 115)) ;
        }
        GALGAS_string var_swiftDefaultValueAsString_4512 ;
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 117)) ;
        temp_2.addAssign_operation (extractedValue_kind  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 117)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) object->mProperty_mDefaultValue.ptr (), temp_2, var_swiftDefaultValueAsString_4512, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 117)) ;
        objectArray_3907->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicPropertyGeneration::constructor_new (object->mProperty_mPropertyName.getter_string (HERE), object->mProperty_mNeedsValidation, extractedValue_kind, GALGAS_bool (false), var_swiftDefaultValueAsString_4512  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 119))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 119)) ;
        const enumGalgasBool test_3 = object->mProperty_mNeedsValidation.boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioGeneration.mProperty_mValidationStubRoutineListForGeneration.addAssign_operation (object->mProperty_mClassName.getter_string (SOURCE_FILE ("simple-stored-property.galgas", 129)), object->mProperty_mPropertyName.getter_string (HERE), extensionGetter_swiftTypeName (extractedValue_kind, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 131))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 128)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mPropertyTypeName.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 134)), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 134)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mPropertyTypeName.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 136)), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 136)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_atomicPropertyDeclarationAST_classAndPropertySemanticAnalysis (void) {
  enterExtensionMethod_classAndPropertySemanticAnalysis (kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST.mSlotID,
                                                         extensionMethod_atomicPropertyDeclarationAST_classAndPropertySemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_atomicPropertyDeclarationAST_classAndPropertySemanticAnalysis (defineExtensionMethod_atomicPropertyDeclarationAST_classAndPropertySemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@atomicPropertyDeclarationAST secondAnalysisPhase'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_atomicPropertyDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                              GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                              GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_atomicPropertyDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST.mSlotID,
                                            extensionMethod_atomicPropertyDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_atomicPropertyDeclarationAST_secondAnalysisPhase (defineExtensionMethod_atomicPropertyDeclarationAST_secondAnalysisPhase, NULL) ;

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
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 165)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 165)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 166)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 166)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 167)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 167)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)).add_operation (GALGAS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)).add_operation (object->mProperty_mDefaultValueInSwift, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)).add_operation (GALGAS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)).add_operation (object->mProperty_mPropertyName.getter_identifierRepresentation (SOURCE_FILE ("simple-stored-property.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)).add_operation (GALGAS_string (")\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 173)) ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 174)).add_operation (GALGAS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 174)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 175)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 176)) ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 178)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)).add_operation (GALGAS_string ("_property_selection : EBSelection <"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 182)) ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 183)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 183)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 184)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 185)) ;
  const enumGalgasBool test_0 = object->mProperty_mNeedsValidation.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)) ;
    result_result.plusAssign_operation(GALGAS_string ("  func ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)).add_operation (GALGAS_string ("_validateAndSetProp (_ inCandidateValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)).add_operation (GALGAS_string (", windowForSheet inWindow:NSWindow\?) -> Bool {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)) ;
    result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 189)).add_operation (GALGAS_string ("_property.validateAndSetProp (inCandidateValue, windowForSheet:inWindow)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 189)) ;
    result_result.plusAssign_operation(GALGAS_string ("  }\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 190)) ;
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
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 197)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 197)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 198)).add_operation (GALGAS_string ("_property.undoManager = self.mUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 198)) ;
  const enumGalgasBool test_0 = object->mProperty_mNeedsValidation.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 200)).add_operation (GALGAS_string ("_property.validationFunction = self.validate_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 200)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 200)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 200)) ;
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
//                     Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toOneRelationshipAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  GALGAS_lstring var_node_1172 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 27)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 27)), object->mProperty_mToOneRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 27)) ;
  {
  const GALGAS_toOneRelationshipAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_1172, temp_0, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 28)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_1172, object->mProperty_mClassName COMMA_SOURCE_FILE ("to-one-relationship.galgas", 29)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_1172, object->mProperty_mDestinationEntityName COMMA_SOURCE_FILE ("to-one-relationship.galgas", 30)) ;
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
//                Overriding extension method '@toOneRelationshipAST classAndPropertySemanticAnalysis'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toOneRelationshipAST_classAndPropertySemanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  cMapElement_classMap * objectArray_4269 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 114)) ;
  if (NULL != objectArray_4269) {
      macroValidSharedObject (objectArray_4269, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4429 ;
    GALGAS_propertyMap joker_4431_3 ; // Joker input parameter
    GALGAS_actionMap joker_4431_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4431_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mDestinationEntityName, var_classKind_4429, joker_4431_3, joker_4431_2, joker_4431_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 117)) ;
    switch (var_classKind_4429.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_entity * extractPtr_5072 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4429.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_5072->mAssociatedValue0 ;
        GALGAS_propertyKind var_kind_4848 = GALGAS_propertyKind::constructor_toMany (object->mProperty_mDestinationEntityName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.galgas", 130)), extractedValue_graphic, GALGAS_bool (true)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 128)) ;
        {
        objectArray_4269->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mToOneRelationshipName, var_kind_4848, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-one-relationship.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 134)) ;
        }
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_toOneRelationshipAST_classAndPropertySemanticAnalysis (void) {
  enterExtensionMethod_classAndPropertySemanticAnalysis (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                                         extensionMethod_toOneRelationshipAST_classAndPropertySemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_toOneRelationshipAST_classAndPropertySemanticAnalysis (defineExtensionMethod_toOneRelationshipAST_classAndPropertySemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@toOneRelationshipAST secondAnalysisPhase'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toOneRelationshipAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                      GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                      GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_toOneRelationshipAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                            extensionMethod_toOneRelationshipAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_toOneRelationshipAST_secondAnalysisPhase (defineExtensionMethod_toOneRelationshipAST_secondAnalysisPhase, NULL) ;

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
  GALGAS_lstring var_node_983 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 25)).add_operation (object->mProperty_mToManyRelationshipName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 25)), object->mProperty_mToManyRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 25)) ;
  {
  const GALGAS_toManyRelationshipAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_983, temp_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 26)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_983, object->mProperty_mClassName COMMA_SOURCE_FILE ("to-many-relationship.galgas", 27)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_983, object->mProperty_mDestinationEntityName COMMA_SOURCE_FILE ("to-many-relationship.galgas", 28)) ;
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
//                Overriding extension method '@toManyRelationshipAST classAndPropertySemanticAnalysis'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toManyRelationshipAST_classAndPropertySemanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                                    GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                    GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toManyRelationshipAST * object = (const cPtr_toManyRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toManyRelationshipAST) ;
  cMapElement_classMap * objectArray_4172 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 112)) ;
  if (NULL != objectArray_4172) {
      macroValidSharedObject (objectArray_4172, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4332 ;
    GALGAS_propertyMap joker_4334_3 ; // Joker input parameter
    GALGAS_actionMap joker_4334_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4334_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mDestinationEntityName, var_classKind_4332, joker_4334_3, joker_4334_2, joker_4334_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 115)) ;
    switch (var_classKind_4332.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_entity * extractPtr_4976 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4332.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_4976->mAssociatedValue0 ;
        GALGAS_propertyKind var_kind_4751 = GALGAS_propertyKind::constructor_toMany (object->mProperty_mDestinationEntityName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-many-relationship.galgas", 128)), extractedValue_graphic, GALGAS_bool (true)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 126)) ;
        {
        objectArray_4172->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mToManyRelationshipName, var_kind_4751, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-many-relationship.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 132)) ;
        }
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_toManyRelationshipAST_classAndPropertySemanticAnalysis (void) {
  enterExtensionMethod_classAndPropertySemanticAnalysis (kTypeDescriptor_GALGAS_toManyRelationshipAST.mSlotID,
                                                         extensionMethod_toManyRelationshipAST_classAndPropertySemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_toManyRelationshipAST_classAndPropertySemanticAnalysis (defineExtensionMethod_toManyRelationshipAST_classAndPropertySemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@toManyRelationshipAST secondAnalysisPhase'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toManyRelationshipAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_toManyRelationshipAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_toManyRelationshipAST.mSlotID,
                                            extensionMethod_toManyRelationshipAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_toManyRelationshipAST_secondAnalysisPhase (defineExtensionMethod_toManyRelationshipAST_secondAnalysisPhase, NULL) ;

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
//             Overriding extension method '@propertyArrayDeclarationAST classAndPropertySemanticAnalysis'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_propertyArrayDeclarationAST_classAndPropertySemanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                          GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_propertyArrayDeclarationAST * object = (const cPtr_propertyArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_propertyArrayDeclarationAST) ;
  cMapElement_classMap * objectArray_2933 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("stored-array-property.galgas", 69)) ;
  if (NULL != objectArray_2933) {
      macroValidSharedObject (objectArray_2933, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_3088 ;
    GALGAS_propertyMap joker_3090_3 ; // Joker input parameter
    GALGAS_actionMap joker_3090_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3090_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mElementClassName, var_classKind_3088, joker_3090_3, joker_3090_2, joker_3090_1, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 72)) ;
    switch (var_classKind_3088.enumValue ()) {
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
        GALGAS_propertyKind var_kind_3235 = GALGAS_propertyKind::constructor_toMany (object->mProperty_mElementClassName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("stored-array-property.galgas", 79)), GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 77)) ;
        {
        objectArray_2933->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mStoredArrayPropertyName, var_kind_3235, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("stored-array-property.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 83)) ;
        }
        objectArray_2933->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicArrayGeneration::constructor_new (object->mProperty_mStoredArrayPropertyName.getter_string (SOURCE_FILE ("stored-array-property.galgas", 86)), object->mProperty_mElementClassName.getter_string (SOURCE_FILE ("stored-array-property.galgas", 87))  COMMA_SOURCE_FILE ("stored-array-property.galgas", 85))  COMMA_SOURCE_FILE ("stored-array-property.galgas", 85)) ;
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

static void defineExtensionMethod_propertyArrayDeclarationAST_classAndPropertySemanticAnalysis (void) {
  enterExtensionMethod_classAndPropertySemanticAnalysis (kTypeDescriptor_GALGAS_propertyArrayDeclarationAST.mSlotID,
                                                         extensionMethod_propertyArrayDeclarationAST_classAndPropertySemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_propertyArrayDeclarationAST_classAndPropertySemanticAnalysis (defineExtensionMethod_propertyArrayDeclarationAST_classAndPropertySemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@propertyArrayDeclarationAST secondAnalysisPhase'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_propertyArrayDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_propertyArrayDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_propertyArrayDeclarationAST.mSlotID,
                                            extensionMethod_propertyArrayDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_propertyArrayDeclarationAST_secondAnalysisPhase (defineExtensionMethod_propertyArrayDeclarationAST_secondAnalysisPhase, NULL) ;

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
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 120)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 120)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Property array: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 121)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 121)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 122)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 122)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 123)).add_operation (GALGAS_string ("_property = StoredArrayOf_"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 123)).add_operation (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 123)).add_operation (GALGAS_string ("(Preferences_"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 123)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 124)).add_operation (GALGAS_string (")\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 123)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("stored-array-property.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 125)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 125)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 126)).add_operation (GALGAS_string ("_property_selection : EBSelection < ["), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 126)).add_operation (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 126)).add_operation (GALGAS_string ("] > {\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 126)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 127)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 127)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 128)) ;
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
  result_result = GALGAS_string ("  //--- Property array: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 134)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 134)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 135)).add_operation (GALGAS_string ("_property.undoManager = self.mUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("stored-array-property.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("stored-array-property.galgas", 135)) ;
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
//                                              Routine 'generateActions'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateActions (const GALGAS_string constinArgument_inOutputDirectory,
                              const GALGAS_actionListForGeneration constinArgument_inActionListForGeneration,
                              GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_actionListForGeneration enumerator_2836 (constinArgument_inActionListForGeneration, kENUMERATION_UP) ;
  while (enumerator_2836.hasCurrentObject ()) {
    GALGAS_string var_s_2849 = GALGAS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, enumerator_2836.current_mClassName (HERE), enumerator_2836.current_mActionName (HERE) COMMA_SOURCE_FILE ("run-action.galgas", 72))) ;
    GALGAS_string var_fileName_2966 = GALGAS_string ("action-").add_operation (enumerator_2836.current_mClassName (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 76)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 76)).add_operation (enumerator_2836.current_mActionName (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 76)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 76)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_2966  COMMA_SOURCE_FILE ("run-action.galgas", 77)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2966, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_2849, GALGAS_string ("    ENTER USER CODE HERE\n"), GALGAS_string ("  }\n"
      "}\n"
      "\n"
      "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 78)) ;
    }
    enumerator_2836.gotoNextObject () ;
  }
}


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
//      Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
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
  GALGAS_propertyKind var_kind_11315 ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument_11383 ;
  extensionMethod_analyzeObservablePropertyEX (object->mProperty_mProperty, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_kind_11315, var_swiftTypeStringForTransientFunctionArgument_11383, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 260)) ;
  switch (var_kind_11315.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_11447 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_11315.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_11447->mAssociatedValue0 ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_12813 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression_12813, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 295)) ;
  const enumGalgasBool test_0 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 303)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 303)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 304)) ;
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression_12813  COMMA_SOURCE_FILE ("multiple-binding.galgas", 306)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_13798 ;
  GALGAS_typeKind var_outLeftType_13819 ;
  GALGAS_location var_outLeftLocation_13844 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_13798, var_outLeftType_13819, var_outLeftLocation_13844, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 319)) ;
  const enumGalgasBool test_0 = var_outLeftType_13819.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 327)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 327)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_outLeftLocation_13844, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 328)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_14195 ;
  GALGAS_typeKind var_outRightType_14217 ;
  GALGAS_location var_outRightLocation_14243 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_14195, var_outRightType_14217, var_outRightLocation_14243, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 330)) ;
  const enumGalgasBool test_2 = var_outRightType_14217.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 338)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 338)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_outRightLocation_14243, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 339)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 341)) ;
  outArgument_outErrorLocation = var_outRightLocation_14243 ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_13798, var_rightExpression_14195  COMMA_SOURCE_FILE ("multiple-binding.galgas", 343)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15279 ;
  GALGAS_typeKind var_outLeftType_15300 ;
  GALGAS_location var_outLeftLocation_15325 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_15279, var_outLeftType_15300, var_outLeftLocation_15325, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 356)) ;
  const enumGalgasBool test_0 = var_outLeftType_15300.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 364)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 364)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_outLeftLocation_15325, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 365)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15676 ;
  GALGAS_typeKind var_outRightType_15698 ;
  GALGAS_location var_outRightLocation_15724 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_15676, var_outRightType_15698, var_outRightLocation_15724, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 367)) ;
  const enumGalgasBool test_2 = var_outRightType_15698.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 375)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 375)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_outRightLocation_15724, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 376)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 378)) ;
  outArgument_outErrorLocation = var_outRightLocation_15724 ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_15279, var_rightExpression_15676  COMMA_SOURCE_FILE ("multiple-binding.galgas", 380)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16761 ;
  GALGAS_typeKind var_outLeftType_16782 ;
  GALGAS_location var_outLeftLocation_16807 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_16761, var_outLeftType_16782, var_outLeftLocation_16807, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 393)) ;
  const enumGalgasBool test_0 = var_outLeftType_16782.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 401)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 401)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_outLeftLocation_16807, GALGAS_string ("cannot apply 'and': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 402)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17159 ;
  GALGAS_typeKind var_outRightType_17181 ;
  GALGAS_location var_outRightLocation_17207 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_17159, var_outRightType_17181, var_outRightLocation_17207, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 404)) ;
  const enumGalgasBool test_2 = var_outRightType_17181.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 412)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 412)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_outRightLocation_17207, GALGAS_string ("cannot apply 'and': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 413)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 415)) ;
  outArgument_outErrorLocation = var_outRightLocation_17207 ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_16761, var_rightExpression_17159  COMMA_SOURCE_FILE ("multiple-binding.galgas", 417)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18245 ;
  GALGAS_typeKind var_outLeftType_18266 ;
  GALGAS_location var_outLeftLocation_18291 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_18245, var_outLeftType_18266, var_outLeftLocation_18291, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 430)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_18520 ;
  GALGAS_typeKind var_outRightType_18542 ;
  GALGAS_location var_outRightLocation_18568 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_18520, var_outRightType_18542, var_outRightLocation_18568, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 438)) ;
  GALGAS_bool test_0 = var_outLeftType_18266.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 446)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = var_outLeftType_18266.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas", 446)) ;
  }
  const enumGalgasBool test_1 = test_0.operator_not (SOURCE_FILE ("multiple-binding.galgas", 446)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (var_outLeftLocation_18291, GALGAS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 447)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_outRightType_18542.objectCompare (var_outLeftType_18266)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (var_outRightLocation_18568, GALGAS_string ("cannot compare: right operand type is different than left operand type"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas", 450)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 452)) ;
  outArgument_outErrorLocation = var_outRightLocation_18568 ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_18245, object->mProperty_mOperator, var_rightExpression_18520  COMMA_SOURCE_FILE ("multiple-binding.galgas", 454)) ;
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
  result_outObservedModelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 471)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 479)) ;
  temp_0.addAssign_operation (object->mProperty_mObservedModel  COMMA_SOURCE_FILE ("multiple-binding.galgas", 479)) ;
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
  result_outObservedModelSet = callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 487)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 495)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 495)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 495)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 503)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 503)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 503)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 511)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 511)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 511)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 519)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 519)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 519)) ;
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
  result_outExpressionString = GALGAS_string ("EBSelection.single (").add_operation (object->mProperty_mValue.getter_string (SOURCE_FILE ("multiple-binding.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 531)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 531)) ;
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
  result_outExpressionString = object->mProperty_mObservedModel.add_operation (GALGAS_string ("_selection"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 538)) ;
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
  result_outExpressionString = GALGAS_string ("!").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 545)) ;
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
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)).add_operation (GALGAS_string (" || "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)) ;
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
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)).add_operation (GALGAS_string (" ^ "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)) ;
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
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 566)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 566)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 566)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 566)) ;
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
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 573)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 573)) ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_multipleBindingComparisonAST::kNotBuilt:
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_equal:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 575)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_notEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("!="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 576)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lower:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 577)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lowerOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("<="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 578)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greater:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 579)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greaterOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (">="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 580)) ;
    }
    break ;
  }
  result_outExpressionString.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 582)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 582)) ;
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
  GALGAS_lstring var_node_2151 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 54)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 54)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 54)) ;
  {
  const GALGAS_arrayControllerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_2151, temp_0, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 55)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_2151, object->mProperty_mClassName COMMA_SOURCE_FILE ("array-controller.galgas", 56)) ;
  }
  const enumGalgasBool test_1 = object->mProperty_mIsRoot.operator_not (SOURCE_FILE ("array-controller.galgas", 57)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioGraph.setter_addEdge (var_node_2151, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 58)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 58)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 58)) COMMA_SOURCE_FILE ("array-controller.galgas", 58)) ;
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      ioArgument_ioGraph.setter_addEdge (var_node_2151, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 60)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 60)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 60)) COMMA_SOURCE_FILE ("array-controller.galgas", 60)) ;
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
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 67)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 67)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 67)) ;
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
//            Overriding extension method '@arrayControllerDeclarationAST classAndPropertySemanticAnalysis'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayControllerDeclarationAST_classAndPropertySemanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                            GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  cMapElement_classMap * objectArray_8125 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("array-controller.galgas", 234)) ;
  if (NULL != objectArray_8125) {
      macroValidSharedObject (objectArray_8125, cMapElement_classMap) ;
    GALGAS_actionMap temp_0 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 237)) ;
    temp_0.addAssign_operation (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 237)) ;
    temp_0.addAssign_operation (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 237)) ;
    GALGAS_actionMap var_controllerActions_8240 = temp_0 ;
    const enumGalgasBool test_1 = object->mProperty_mIsRoot.boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_propertyMap var_rootProperties_8388 ;
      GALGAS_classKind joker_8367 ; // Joker input parameter
      GALGAS_actionMap joker_8390_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_8390_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_8367, var_rootProperties_8388, joker_8390_2, joker_8390_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 239)) ;
      GALGAS_propertyKind var_classKind_8461 ;
      GALGAS_actionMap joker_8463 ; // Joker input parameter
      var_rootProperties_8388.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_8461, joker_8463, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 240)) ;
      switch (var_classKind_8461.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 243)), GALGAS_string ("a tomany relationship is required here"), fixItArray2  COMMA_SOURCE_FILE ("array-controller.galgas", 243)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_9053 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_8461.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_9053->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_graphic = extractPtr_9053->mAssociatedValue2 ;
          const GALGAS_bool extractedValue_isEntity = extractPtr_9053->mAssociatedValue3 ;
          GALGAS_propertyKind var_kind_8655 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 245)) ;
          {
          objectArray_8125->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_8655, var_controllerActions_8240, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 250)) ;
          }
          objectArray_8125->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 254)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 255))  COMMA_SOURCE_FILE ("array-controller.galgas", 252))  COMMA_SOURCE_FILE ("array-controller.galgas", 252)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 258)), GALGAS_string ("a tomany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas", 258)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 260)), GALGAS_string ("a tomany relationship is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas", 260)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 262)), GALGAS_string ("a tomany relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("array-controller.galgas", 262)) ;
        }
        break ;
      }
    }else if (kBoolFalse == test_1) {
      GALGAS_propertyKind var_classKind_9452 ;
      GALGAS_actionMap joker_9454 ; // Joker input parameter
      objectArray_8125->mProperty_mPropertyMap.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_9452, joker_9454, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 265)) ;
      switch (var_classKind_9452.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 268)), GALGAS_string ("a tomany relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("array-controller.galgas", 268)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10044 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_9452.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_10044->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_graphic = extractPtr_10044->mAssociatedValue2 ;
          const GALGAS_bool extractedValue_isEntity = extractPtr_10044->mAssociatedValue3 ;
          GALGAS_propertyKind var_kind_9646 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 270)) ;
          {
          objectArray_8125->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_9646, var_controllerActions_8240, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 275)) ;
          }
          objectArray_8125->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 279)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 280))  COMMA_SOURCE_FILE ("array-controller.galgas", 277))  COMMA_SOURCE_FILE ("array-controller.galgas", 277)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 283)), GALGAS_string ("a tomany relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("array-controller.galgas", 283)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 285)), GALGAS_string ("a tomany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas", 285)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 287)), GALGAS_string ("a tomany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas", 287)) ;
        }
        break ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayControllerDeclarationAST_classAndPropertySemanticAnalysis (void) {
  enterExtensionMethod_classAndPropertySemanticAnalysis (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                                         extensionMethod_arrayControllerDeclarationAST_classAndPropertySemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayControllerDeclarationAST_classAndPropertySemanticAnalysis (defineExtensionMethod_arrayControllerDeclarationAST_classAndPropertySemanticAnalysis, NULL) ;

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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 302)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 302)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 302)) ;
  GALGAS_stringset var_attributes_10920 = temp_0 ;
  GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 303)) ;
  temp_1.addAssign_operation (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("array-controller.galgas", 303))  COMMA_SOURCE_FILE ("array-controller.galgas", 303)) ;
  GALGAS_typeKindList var_allowedTypes_11006 = temp_1 ;
  GALGAS_stringset var_definedAttributes_11066 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 304)) ;
  GALGAS__32_stringlist var_attributeListForGeneration_11113 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 305)) ;
  cEnumerator_arrayControllerAttributListAST enumerator_11172 (object->mProperty_mArrayControllerAttributListAST, kENUMERATION_UP) ;
  while (enumerator_11172.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_attributes_10920.getter_hasKey (enumerator_11172.current_mAttributeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 307)).operator_not (SOURCE_FILE ("array-controller.galgas", 307)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_11172.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 308)), GALGAS_string ("unknown attribute"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas", 308)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = var_definedAttributes_11066.getter_hasKey (enumerator_11172.current_mAttributeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 309)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_11172.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 310)), GALGAS_string ("attribute multiply defined"), fixItArray5  COMMA_SOURCE_FILE ("array-controller.galgas", 310)) ;
      }else if (kBoolFalse == test_4) {
        var_definedAttributes_11066.addAssign_operation (enumerator_11172.current_mAttributeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 312)) ;
      }
    }
    GALGAS_string var_valueAsString_11491 ;
    callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_11172.current_mAttributeValue (HERE).ptr (), var_allowedTypes_11006, var_valueAsString_11491, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 314)) ;
    var_attributeListForGeneration_11113.addAssign_operation (enumerator_11172.current_mAttributeName (HERE).getter_string (HERE), var_valueAsString_11491  COMMA_SOURCE_FILE ("array-controller.galgas", 315)) ;
    enumerator_11172.gotoNextObject () ;
  }
  cEnumerator_stringset enumerator_11582 (var_attributes_10920, kENUMERATION_UP) ;
  while (enumerator_11582.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_definedAttributes_11066.getter_hasKey (enumerator_11582.current (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 318)).operator_not (SOURCE_FILE ("array-controller.galgas", 318)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("array-controller.galgas", 319)), GALGAS_string ("attribute '").add_operation (enumerator_11582.current (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 319)).add_operation (GALGAS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 319)), fixItArray7  COMMA_SOURCE_FILE ("array-controller.galgas", 319)) ;
    }
    enumerator_11582.gotoNextObject () ;
  }
  GALGAS_propertyMap var_boundModelPropertyMap_11756 ;
  const enumGalgasBool test_8 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_classKind joker_11850 ; // Joker input parameter
    GALGAS_actionMap joker_11891_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_11891_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_11850, var_boundModelPropertyMap_11756, joker_11891_2, joker_11891_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 325)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_classKind joker_11978 ; // Joker input parameter
    GALGAS_actionMap joker_12019_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_12019_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_11978, var_boundModelPropertyMap_11756, joker_12019_2, joker_12019_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 332)) ;
  }
  GALGAS_propertyKind var_boundModelClassKind_12141 ;
  GALGAS_actionMap joker_12148 ; // Joker input parameter
  var_boundModelPropertyMap_11756.method_searchKey (object->mProperty_mToManyPropertyName, var_boundModelClassKind_12141, joker_12148, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 339)) ;
  GALGAS_actionMap var_actionMap_12263 ;
  GALGAS_propertyMap var_propertyMap_12290 ;
  GALGAS_arrayControllerModelKind var_arrayControllerModelKind_12343 ;
  GALGAS_bool var_graphic_12359 ;
  GALGAS_string var_elementTypeName_12385 ;
  switch (var_boundModelClassKind_12141.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 352)), GALGAS_string ("a tomany property is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas", 352)) ;
      var_graphic_12359.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_12343.drop () ; // Release error dropped variable
      var_propertyMap_12290.drop () ; // Release error dropped variable
      var_actionMap_12263.drop () ; // Release error dropped variable
      var_elementTypeName_12385.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_12953 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_boundModelClassKind_12141.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_12953->mAssociatedValue0 ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_12953->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isGraphic = extractPtr_12953->mAssociatedValue2 ;
      const GALGAS_bool extractedValue_isEntity = extractPtr_12953->mAssociatedValue3 ;
      var_elementTypeName_12385 = extractedValue_typeName.getter_string (SOURCE_FILE ("array-controller.galgas", 356)) ;
      var_graphic_12359 = extractedValue_isGraphic ;
      GALGAS_arrayControllerModelKind temp_10 ;
      const enumGalgasBool test_11 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("array-controller.galgas", 358)).boolEnum () ;
      if (kBoolTrue == test_11) {
        temp_10 = GALGAS_arrayControllerModelKind::constructor_transientArray (SOURCE_FILE ("array-controller.galgas", 359)) ;
      }else if (kBoolFalse == test_11) {
        GALGAS_arrayControllerModelKind temp_12 ;
        const enumGalgasBool test_13 = extractedValue_isEntity.boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = GALGAS_arrayControllerModelKind::constructor_entityArray (SOURCE_FILE ("array-controller.galgas", 360)) ;
        }else if (kBoolFalse == test_13) {
          temp_12 = GALGAS_arrayControllerModelKind::constructor_classArray (SOURCE_FILE ("array-controller.galgas", 360)) ;
        }
        temp_10 = temp_12 ;
      }
      var_arrayControllerModelKind_12343 = temp_10 ;
      GALGAS_classKind joker_12924 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_12951 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_12924, var_propertyMap_12290, var_actionMap_12263, joker_12951, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 362)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 364)), GALGAS_string ("a tomany property is required here"), fixItArray14  COMMA_SOURCE_FILE ("array-controller.galgas", 364)) ;
      var_graphic_12359.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_12343.drop () ; // Release error dropped variable
      var_propertyMap_12290.drop () ; // Release error dropped variable
      var_actionMap_12263.drop () ; // Release error dropped variable
      var_elementTypeName_12385.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 368)), GALGAS_string ("a tomany property is required here"), fixItArray15  COMMA_SOURCE_FILE ("array-controller.galgas", 368)) ;
      var_graphic_12359.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_12343.drop () ; // Release error dropped variable
      var_propertyMap_12290.drop () ; // Release error dropped variable
      var_actionMap_12263.drop () ; // Release error dropped variable
      var_elementTypeName_12385.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 372)), GALGAS_string ("a tomany property is required here"), fixItArray16  COMMA_SOURCE_FILE ("array-controller.galgas", 372)) ;
      var_graphic_12359.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_12343.drop () ; // Release error dropped variable
      var_propertyMap_12290.drop () ; // Release error dropped variable
      var_actionMap_12263.drop () ; // Release error dropped variable
      var_elementTypeName_12385.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_arrayControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_13607 = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 376)) ;
  GALGAS_arrayControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_13705 = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 377)) ;
  cEnumerator_arrayControllerBoundColumnListAST enumerator_13757 (object->mProperty_mArrayControllerBoundColumnListAST, kENUMERATION_UP) ;
  while (enumerator_13757.hasCurrentObject ()) {
    const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_13757.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_17) {
      var_actionMap_12263.method_searchKey (enumerator_13757.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 381)) ;
    }
    GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_14031 = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 384)) ;
    {
    routine_analyzeRegularBinding (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 386)), ioArgument_ioSemanticContext, var_propertyMap_12290, enumerator_13757.current_mColumnOutletTypeName (HERE), GALGAS_string ("<<not used>>"), enumerator_13757.current_mColumnBindingAST (HERE).getter_mRegularBindingList (HERE), GALGAS_string ("object"), var_regularBindingsGenerationList_14031, inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 385)) ;
    }
    const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, enumerator_13757.current_mSortPropertyName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      GALGAS_propertyKind var_sortPropertyKind_14463 ;
      GALGAS_actionMap joker_14473 ; // Joker input parameter
      var_propertyMap_12290.method_searchKey (enumerator_13757.current_mSortPropertyName (HERE), var_sortPropertyKind_14463, joker_14473, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 397)) ;
      const enumGalgasBool test_19 = extensionGetter_isComparable (var_sortPropertyKind_14463, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 402)).operator_not (SOURCE_FILE ("array-controller.galgas", 402)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_13757.current_mSortPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 403)), GALGAS_string ("this property is not comparable"), fixItArray20  COMMA_SOURCE_FILE ("array-controller.galgas", 403)) ;
      }
      var_arrayControllerSortedColumnListForGeneration_13705.addAssign_operation (enumerator_13757.current_mColumnName (HERE).getter_string (HERE), var_sortPropertyKind_14463, enumerator_13757.current_mSortPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 405)) ;
    }
    var_arrayControllerBoundColumnListForGeneration_13607.addAssign_operation (enumerator_13757.current_mColumnName (HERE).getter_string (HERE), enumerator_13757.current_mColumnOutletTypeName (HERE).getter_string (HERE), enumerator_13757.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE).getter_string (HERE), var_regularBindingsGenerationList_14031  COMMA_SOURCE_FILE ("array-controller.galgas", 411)) ;
    ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_13757.current_mColumnOutletTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 416)) ;
    enumerator_13757.gotoNextObject () ;
  }
  GALGAS_arrayControllerFilterListForGeneration var_arrayControllerFilterListForGeneration_15237 = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 419)) ;
  cEnumerator_lstringlist enumerator_15290 (object->mProperty_mFilterProperties, kENUMERATION_UP) ;
  while (enumerator_15290.hasCurrentObject ()) {
    GALGAS_propertyKind var_columnKind_15382 ;
    GALGAS_actionMap joker_15390 ; // Joker input parameter
    var_propertyMap_12290.method_searchKey (enumerator_15290.current_mValue (HERE), var_columnKind_15382, joker_15390, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 421)) ;
    var_arrayControllerFilterListForGeneration_15237.addAssign_operation (enumerator_15290.current_mValue (HERE).getter_string (HERE), var_columnKind_15382  COMMA_SOURCE_FILE ("array-controller.galgas", 426)) ;
    enumerator_15290.gotoNextObject () ;
  }
  GALGAS_string temp_21 ;
  const enumGalgasBool test_22 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_string ("self.rootObject.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 429)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 429)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_string ("self.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 430)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 430)) ;
  }
  GALGAS_string var_modelString_15506 = temp_21 ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_arrayControllerGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 434)), object->mProperty_mControllerName, var_arrayControllerFilterListForGeneration_15237, var_modelString_15506, var_arrayControllerBoundColumnListForGeneration_13607, var_arrayControllerSortedColumnListForGeneration_13705, GALGAS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_12385, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 440)), var_arrayControllerModelKind_12343, var_elementTypeName_12385, var_graphic_12359, var_attributeListForGeneration_11113  COMMA_SOURCE_FILE ("array-controller.galgas", 433))  COMMA_SOURCE_FILE ("array-controller.galgas", 433)) ;
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
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 461)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 461)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Array controller: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 462)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 462)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 463)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 463)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)).add_operation (GALGAS_string (" = ArrayController_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)).add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 464)) ;
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
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 470)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 470)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 471)).add_operation (GALGAS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 471)).add_operation (object->mProperty_mModelString, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 471)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 471)) ;
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
//                  Overriding extension getter '@arrayControllerPropertyGeneration terminationCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 477)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 477)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 478)).add_operation (GALGAS_string (".unbind_model ()\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 478)) ;
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
//                      Overriding extension method '@arrayControllerDeclarationEX typeInventory'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayControllerDeclarationEX_typeInventory (const cPtr_abstractSecondaryProperty * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayControllerDeclarationEX_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_arrayControllerDeclarationEX.mSlotID,
                                      extensionMethod_arrayControllerDeclarationEX_typeInventory) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayControllerDeclarationEX_typeInventory (defineExtensionMethod_arrayControllerDeclarationEX_typeInventory, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@arrayControllerDeclarationEX tryToDefineSecondaryProperty'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayControllerDeclarationEX_tryToDefineSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                                       GALGAS_semanticContextEX & /* ioArgument_ioSemanticContext */,
                                                                                       const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                                       GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                                       GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                                       GALGAS_simpleStoredPropertyListForGenerationEX & /* ioArgument_ioSimpleStoredPropertyListForGeneration */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationEX * object = (const cPtr_arrayControllerDeclarationEX *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationEX) ;
  GALGAS_observablePropertyMap temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRootObservableProperties ;
  }else if (kBoolFalse == test_1) {
    temp_0 = ioArgument_ioObservableProperties ;
  }
  GALGAS_observablePropertyMap var_observablePropertyMap_18707 = temp_0 ;
  const enumGalgasBool test_2 = var_observablePropertyMap_18707.getter_hasKey (object->mProperty_mToManyPropertyName.getter_string (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 514)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_propertyKind var_kind_18933 ;
    GALGAS_string joker_18941_3 ; // Joker input parameter
    GALGAS_actionMap joker_18941_2 ; // Joker input parameter
    GALGAS_bool joker_18941_1 ; // Joker input parameter
    var_observablePropertyMap_18707.method_searchKey (object->mProperty_mToManyPropertyName, var_kind_18933, joker_18941_3, joker_18941_2, joker_18941_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 515)) ;
    GALGAS_actionMap var_controllerActions_18982 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 520)) ;
    GALGAS_propertyKind var_arrayControllerKind_19025 ;
    switch (var_kind_18933.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 524)), GALGAS_string ("an atomic property is not a collection"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas", 524)) ;
        var_arrayControllerKind_19025.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const cEnumAssociatedValues_propertyKind_toMany * extractPtr_19430 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_18933.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_19430->mAssociatedValue0 ;
        const GALGAS_bool extractedValue_graphic = extractPtr_19430->mAssociatedValue2 ;
        const GALGAS_bool extractedValue_isEntity = extractPtr_19430->mAssociatedValue3 ;
        var_arrayControllerKind_19025 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 526)) ;
        {
        var_controllerActions_18982.setter_insertKey (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 527)) ;
        }
        {
        var_controllerActions_18982.setter_insertKey (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 528)) ;
        }
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 530)), GALGAS_string ("a toOne property is not a collection"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas", 530)) ;
        var_arrayControllerKind_19025.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 532)), GALGAS_string ("Array Controller \?\?\?\?"), fixItArray5  COMMA_SOURCE_FILE ("array-controller.galgas", 532)) ;
        var_arrayControllerKind_19025.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 534)), GALGAS_string ("Selection Controller \?\?\?\?"), fixItArray6  COMMA_SOURCE_FILE ("array-controller.galgas", 534)) ;
        var_arrayControllerKind_19025.drop () ; // Release error dropped variable
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (object->mProperty_mControllerName, var_arrayControllerKind_19025, GALGAS_string::makeEmptyString (), var_controllerActions_18982, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 536)) ;
    }
  }else if (kBoolFalse == test_2) {
    const GALGAS_arrayControllerDeclarationEX temp_7 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_7  COMMA_SOURCE_FILE ("array-controller.galgas", 544)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayControllerDeclarationEX_tryToDefineSecondaryProperty (void) {
  enterExtensionMethod_tryToDefineSecondaryProperty (kTypeDescriptor_GALGAS_arrayControllerDeclarationEX.mSlotID,
                                                     extensionMethod_arrayControllerDeclarationEX_tryToDefineSecondaryProperty) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayControllerDeclarationEX_tryToDefineSecondaryProperty (defineExtensionMethod_arrayControllerDeclarationEX_tryToDefineSecondaryProperty, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@arrayControllerDeclarationEX secondaryPropertySemanticAnalysisEX'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayControllerDeclarationEX_secondaryPropertySemanticAnalysisEX (const cPtr_abstractSecondaryProperty * inObject,
                                                                                              const GALGAS_string constinArgument_inOwnerName,
                                                                                              const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                                              const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                                              const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                                                              const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                                              GALGAS_transientDefinitionListForGeneration & /* ioArgument_ioTransientDefinitionListForGeneration */,
                                                                                              GALGAS_arrayControllerForGenerationEX & ioArgument_ioArrayControllerForGeneration,
                                                                                              GALGAS_selectionControllerForGeneration & /* ioArgument_ioSelectionControllerForGeneration */,
                                                                                              GALGAS_stringset & ioArgument_ioNeededOutletClasses,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationEX * object = (const cPtr_arrayControllerDeclarationEX *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationEX) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 562)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 562)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 562)) ;
  GALGAS_stringset var_attributes_20792 = temp_0 ;
  GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 563)) ;
  temp_1.addAssign_operation (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("array-controller.galgas", 563))  COMMA_SOURCE_FILE ("array-controller.galgas", 563)) ;
  GALGAS_typeKindList var_allowedTypes_20878 = temp_1 ;
  GALGAS_stringset var_definedAttributes_20938 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 564)) ;
  GALGAS__32_stringlist var_attributeListForGeneration_20985 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 565)) ;
  cEnumerator_arrayControllerAttributListAST enumerator_21044 (object->mProperty_mArrayControllerAttributListAST, kENUMERATION_UP) ;
  while (enumerator_21044.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_attributes_20792.getter_hasKey (enumerator_21044.current_mAttributeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 567)).operator_not (SOURCE_FILE ("array-controller.galgas", 567)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_21044.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 568)), GALGAS_string ("unknown attribute"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas", 568)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = var_definedAttributes_20938.getter_hasKey (enumerator_21044.current_mAttributeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 569)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_21044.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 570)), GALGAS_string ("attribute multiply defined"), fixItArray5  COMMA_SOURCE_FILE ("array-controller.galgas", 570)) ;
      }else if (kBoolFalse == test_4) {
        var_definedAttributes_20938.addAssign_operation (enumerator_21044.current_mAttributeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 572)) ;
      }
    }
    GALGAS_string var_valueAsString_21363 ;
    callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_21044.current_mAttributeValue (HERE).ptr (), var_allowedTypes_20878, var_valueAsString_21363, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 574)) ;
    var_attributeListForGeneration_20985.addAssign_operation (enumerator_21044.current_mAttributeName (HERE).getter_string (HERE), var_valueAsString_21363  COMMA_SOURCE_FILE ("array-controller.galgas", 575)) ;
    enumerator_21044.gotoNextObject () ;
  }
  cEnumerator_stringset enumerator_21454 (var_attributes_20792, kENUMERATION_UP) ;
  while (enumerator_21454.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_definedAttributes_20938.getter_hasKey (enumerator_21454.current (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 578)).operator_not (SOURCE_FILE ("array-controller.galgas", 578)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("array-controller.galgas", 579)), GALGAS_string ("attribute '").add_operation (enumerator_21454.current (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 579)).add_operation (GALGAS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 579)), fixItArray7  COMMA_SOURCE_FILE ("array-controller.galgas", 579)) ;
    }
    enumerator_21454.gotoNextObject () ;
  }
  GALGAS_observablePropertyMap temp_8 ;
  const enumGalgasBool test_9 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = constinArgument_inRootObservableProperties ;
  }else if (kBoolFalse == test_9) {
    temp_8 = constinArgument_inObservableProperties ;
  }
  GALGAS_observablePropertyMap var_observablePropertyMap_21619 = temp_8 ;
  GALGAS_propertyKind var_kind_21770 ;
  GALGAS_actionMap var_actionMap_21796 ;
  GALGAS_string joker_21776 ; // Joker input parameter
  GALGAS_bool joker_21802 ; // Joker input parameter
  var_observablePropertyMap_21619.method_searchKey (object->mProperty_mToManyPropertyName, var_kind_21770, joker_21776, var_actionMap_21796, joker_21802, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 584)) ;
  GALGAS_string var_entityName_21828 ;
  GALGAS_arrayControllerModelKind var_modelKind_21866 ;
  GALGAS_bool var_entityTypeIsGraphic_21894 ;
  switch (var_kind_21770.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 596)), GALGAS_string ("a to many property is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas", 596)) ;
      var_entityName_21828.drop () ; // Release error dropped variable
      var_entityTypeIsGraphic_21894.drop () ; // Release error dropped variable
      var_modelKind_21866.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_22309 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_21770.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_22309->mAssociatedValue0 ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_22309->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_graphic = extractPtr_22309->mAssociatedValue2 ;
      const GALGAS_bool extractedValue_isEntity = extractPtr_22309->mAssociatedValue3 ;
      var_entityName_21828 = extractedValue_typeName.getter_string (SOURCE_FILE ("array-controller.galgas", 598)) ;
      var_entityTypeIsGraphic_21894 = extractedValue_graphic ;
      GALGAS_arrayControllerModelKind temp_11 ;
      const enumGalgasBool test_12 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("array-controller.galgas", 600)).boolEnum () ;
      if (kBoolTrue == test_12) {
        temp_11 = GALGAS_arrayControllerModelKind::constructor_transientArray (SOURCE_FILE ("array-controller.galgas", 601)) ;
      }else if (kBoolFalse == test_12) {
        GALGAS_arrayControllerModelKind temp_13 ;
        const enumGalgasBool test_14 = extractedValue_isEntity.boolEnum () ;
        if (kBoolTrue == test_14) {
          temp_13 = GALGAS_arrayControllerModelKind::constructor_entityArray (SOURCE_FILE ("array-controller.galgas", 602)) ;
        }else if (kBoolFalse == test_14) {
          temp_13 = GALGAS_arrayControllerModelKind::constructor_classArray (SOURCE_FILE ("array-controller.galgas", 602)) ;
        }
        temp_11 = temp_13 ;
      }
      var_modelKind_21866 = temp_11 ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 605)), GALGAS_string ("a to many property is required here"), fixItArray15  COMMA_SOURCE_FILE ("array-controller.galgas", 605)) ;
      var_entityName_21828.drop () ; // Release error dropped variable
      var_entityTypeIsGraphic_21894.drop () ; // Release error dropped variable
      var_modelKind_21866.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 607)), GALGAS_string ("a to many property is required here"), fixItArray16  COMMA_SOURCE_FILE ("array-controller.galgas", 607)) ;
      var_entityName_21828.drop () ; // Release error dropped variable
      var_entityTypeIsGraphic_21894.drop () ; // Release error dropped variable
      var_modelKind_21866.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 609)), GALGAS_string ("a to many property is required here"), fixItArray17  COMMA_SOURCE_FILE ("array-controller.galgas", 609)) ;
      var_entityName_21828.drop () ; // Release error dropped variable
      var_entityTypeIsGraphic_21894.drop () ; // Release error dropped variable
      var_modelKind_21866.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_observablePropertyMap var_boundModelObservablePropertyMap_22980 ;
  GALGAS_objectKind joker_22986 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (var_entityName_21828.getter_nowhere (SOURCE_FILE ("array-controller.galgas", 613)), var_boundModelObservablePropertyMap_22980, joker_22986, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 612)) ;
  GALGAS_arrayControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_23082 = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 617)) ;
  GALGAS_arrayControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_23180 = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 618)) ;
  cEnumerator_arrayControllerBoundColumnListAST enumerator_23232 (object->mProperty_mArrayControllerBoundColumnListAST, kENUMERATION_UP) ;
  while (enumerator_23232.hasCurrentObject ()) {
    const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, enumerator_23232.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      var_actionMap_21796.method_searchKey (enumerator_23232.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 622)) ;
    }
    GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_23506 = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 625)) ;
    {
    routine_analyzeRegularBindingEX (GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 627)), constinArgument_inSemanticContext, var_boundModelObservablePropertyMap_22980, enumerator_23232.current_mColumnOutletTypeName (HERE), GALGAS_string ("<<not used>>"), enumerator_23232.current_mColumnBindingAST (HERE).getter_mRegularBindingList (HERE), GALGAS_string ("object"), var_regularBindingsGenerationList_23506, inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 626)) ;
    }
    const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_23232.current_mSortPropertyName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_propertyKind var_sortPropertyKind_23980 ;
      GALGAS_string joker_23990_3 ; // Joker input parameter
      GALGAS_actionMap joker_23990_2 ; // Joker input parameter
      GALGAS_bool joker_23990_1 ; // Joker input parameter
      var_boundModelObservablePropertyMap_22980.method_searchKey (enumerator_23232.current_mSortPropertyName (HERE), var_sortPropertyKind_23980, joker_23990_3, joker_23990_2, joker_23990_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 638)) ;
      const enumGalgasBool test_20 = extensionGetter_isComparable (var_sortPropertyKind_23980, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 643)).operator_not (SOURCE_FILE ("array-controller.galgas", 643)).boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_23232.current_mSortPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 644)), GALGAS_string ("this property is not comparable"), fixItArray21  COMMA_SOURCE_FILE ("array-controller.galgas", 644)) ;
      }
      var_arrayControllerSortedColumnListForGeneration_23180.addAssign_operation (enumerator_23232.current_mColumnName (HERE).getter_string (HERE), var_sortPropertyKind_23980, enumerator_23232.current_mSortPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 646)) ;
    }
    var_arrayControllerBoundColumnListForGeneration_23082.addAssign_operation (enumerator_23232.current_mColumnName (HERE).getter_string (HERE), enumerator_23232.current_mColumnOutletTypeName (HERE).getter_string (HERE), enumerator_23232.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE).getter_string (HERE), var_regularBindingsGenerationList_23506  COMMA_SOURCE_FILE ("array-controller.galgas", 652)) ;
    ioArgument_ioNeededOutletClasses.addAssign_operation (enumerator_23232.current_mColumnOutletTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 657)) ;
    enumerator_23232.gotoNextObject () ;
  }
  GALGAS_arrayControllerFilterListForGeneration var_arrayControllerFilterListForGeneration_24743 = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 660)) ;
  cEnumerator_lstringlist enumerator_24796 (object->mProperty_mFilterProperties, kENUMERATION_UP) ;
  while (enumerator_24796.hasCurrentObject ()) {
    GALGAS_propertyKind var_columnKind_24908 ;
    GALGAS_string joker_24916_3 ; // Joker input parameter
    GALGAS_actionMap joker_24916_2 ; // Joker input parameter
    GALGAS_bool joker_24916_1 ; // Joker input parameter
    var_boundModelObservablePropertyMap_22980.method_searchKey (enumerator_24796.current_mValue (HERE), var_columnKind_24908, joker_24916_3, joker_24916_2, joker_24916_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 662)) ;
    var_arrayControllerFilterListForGeneration_24743.addAssign_operation (enumerator_24796.current_mValue (HERE).getter_string (HERE), var_columnKind_24908  COMMA_SOURCE_FILE ("array-controller.galgas", 667)) ;
    enumerator_24796.gotoNextObject () ;
  }
  GALGAS_string temp_22 ;
  const enumGalgasBool test_23 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_string ("self.rootObject.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 670)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 670)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_string ("self.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 671)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 671)) ;
  }
  GALGAS_string var_modelString_25033 = temp_22 ;
  ioArgument_ioArrayControllerForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mProperty_mControllerName, var_arrayControllerFilterListForGeneration_24743, var_modelString_25033, var_arrayControllerBoundColumnListForGeneration_23082, var_arrayControllerSortedColumnListForGeneration_23180, GALGAS_string ("ReadWriteArrayOf_").add_operation (extensionGetter_swiftTypeName (var_kind_21770, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 681)), var_modelKind_21866, extensionGetter_swiftTypeName (var_kind_21770, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 683)), var_entityTypeIsGraphic_21894, var_attributeListForGeneration_20985  COMMA_SOURCE_FILE ("array-controller.galgas", 674)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayControllerDeclarationEX_secondaryPropertySemanticAnalysisEX (void) {
  enterExtensionMethod_secondaryPropertySemanticAnalysisEX (kTypeDescriptor_GALGAS_arrayControllerDeclarationEX.mSlotID,
                                                            extensionMethod_arrayControllerDeclarationEX_secondaryPropertySemanticAnalysisEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayControllerDeclarationEX_secondaryPropertySemanticAnalysisEX (defineExtensionMethod_arrayControllerDeclarationEX_secondaryPropertySemanticAnalysisEX, NULL) ;

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
      "  func setSelection (objectWithIndex inIndex : Int) {\n"
      "    let objects = mModel\?.propval \?\? []\n"
      "    let newSelectedObject = objects [inIndex]\n"
      "    self.mSelectedSet.mSet = Set ([newSelectedObject])\n"
      "  }\n"
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
  result << GALGAS_string ("SelectedSet_").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 1059)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 1059)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 1059)).stringValue () ;
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
  GALGAS_stringset var_observedProperties_31178 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 822)) ;
  cEnumerator_arrayControllerSortedColumnListForGeneration enumerator_31241 (object->mProperty_mArrayControllerSortedColumnListForGeneration, kENUMERATION_UP) ;
  while (enumerator_31241.hasCurrentObject ()) {
    var_observedProperties_31178.addAssign_operation (enumerator_31241.current_mObservablePropertyForSorting (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 824)) ;
    enumerator_31241.gotoNextObject () ;
  }
  cEnumerator_arrayControllerFilterListForGeneration enumerator_31359 (object->mProperty_mArrayControllerFilterListForGeneration, kENUMERATION_UP) ;
  while (enumerator_31359.hasCurrentObject ()) {
    var_observedProperties_31178.addAssign_operation (enumerator_31359.current_mFilterPropertyName (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 827)) ;
    enumerator_31359.gotoNextObject () ;
  }
  GALGAS_string var_s_31423 = GALGAS_string (filewrapperTemplate_collectionControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, object->mProperty_mOwnerName, object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 831)), object->mProperty_mArrayControllerFilterListForGeneration, object->mProperty_mModelString, object->mProperty_mArrayControllerModelKind, object->mProperty_mModelTypeName, object->mProperty_mArrayControllerBoundColumnListForGeneration, object->mProperty_mArrayControllerSortedColumnListForGeneration, object->mProperty_mElementTypeName, object->mProperty_mElementTypeIsGraphic, var_observedProperties_31178, object->mProperty_mAttributeListForGeneration COMMA_SOURCE_FILE ("array-controller.galgas", 829))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, GALGAS_string ("arrayController-").add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 845)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 845)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 845)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 845)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 845)), var_s_31423, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 843)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mArrayControllerFilterListForGeneration.getter_length (SOURCE_FILE ("array-controller.galgas", 848)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_s_32080 = GALGAS_string (filewrapperTemplate_collectionControllerGenerationTemplate_filterFunction (inCompiler, object->mProperty_mOwnerName, object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 851)), object->mProperty_mArrayControllerFilterListForGeneration COMMA_SOURCE_FILE ("array-controller.galgas", 849))) ;
    GALGAS_string var_fileName_32260 = GALGAS_string ("arrayControllerFilter-").add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 854)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 854)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 854)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 854)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 854)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_32260  COMMA_SOURCE_FILE ("array-controller.galgas", 855)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_32260, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_32080, GALGAS_string ("  return WHAT \?\n"), GALGAS_string ("}\n"
      "\n"
      "//").add_operation (GALGAS_string::makeEmptyString ().getter_stringByRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (8212)) COMMA_SOURCE_FILE ("array-controller.galgas", 864)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 864)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 864)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 856)) ;
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
//                                        Routine 'generateArrayControllersEX'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateArrayControllersEX (const GALGAS_arrayControllerForGenerationEX constinArgument_inArrayControllerListForGeneration,
                                         const GALGAS_string constinArgument_inOutputDirectory,
                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_arrayControllerForGenerationEX enumerator_33113 (constinArgument_inArrayControllerListForGeneration, kENUMERATION_UP) ;
  while (enumerator_33113.hasCurrentObject ()) {
    GALGAS_stringset var_observedProperties_33213 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 879)) ;
    cEnumerator_arrayControllerSortedColumnListForGeneration enumerator_33278 (enumerator_33113.current_mArrayControllerSortedColumnListForGeneration (HERE), kENUMERATION_UP) ;
    while (enumerator_33278.hasCurrentObject ()) {
      var_observedProperties_33213.addAssign_operation (enumerator_33278.current_mObservablePropertyForSorting (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 881)) ;
      enumerator_33278.gotoNextObject () ;
    }
    cEnumerator_arrayControllerFilterListForGeneration enumerator_33402 (enumerator_33113.current_mArrayControllerFilterListForGeneration (HERE), kENUMERATION_UP) ;
    while (enumerator_33402.hasCurrentObject ()) {
      var_observedProperties_33213.addAssign_operation (enumerator_33402.current_mFilterPropertyName (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 884)) ;
      enumerator_33402.gotoNextObject () ;
    }
    GALGAS_string var_s_33472 = GALGAS_string (filewrapperTemplate_collectionControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, enumerator_33113.current_mOwnerName (HERE), enumerator_33113.current_mControllerName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 888)), enumerator_33113.current_mArrayControllerFilterListForGeneration (HERE), enumerator_33113.current_mModelString (HERE), enumerator_33113.current_mArrayControllerModelKind (HERE), enumerator_33113.current_mModelTypeName (HERE), enumerator_33113.current_mArrayControllerBoundColumnListForGeneration (HERE), enumerator_33113.current_mArrayControllerSortedColumnListForGeneration (HERE), enumerator_33113.current_mElementTypeName (HERE), enumerator_33113.current_mElementTypeIsGraphic (HERE), var_observedProperties_33213, enumerator_33113.current_mAttributeListForGeneration (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 886))) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, GALGAS_string ("arrayController-").add_operation (enumerator_33113.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 902)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 902)).add_operation (enumerator_33113.current_mControllerName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 902)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 902)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 902)), var_s_33472, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 900)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_33113.current_mArrayControllerFilterListForGeneration (HERE).getter_length (SOURCE_FILE ("array-controller.galgas", 905)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_34167 = GALGAS_string (filewrapperTemplate_collectionControllerGenerationTemplate_filterFunction (inCompiler, enumerator_33113.current_mOwnerName (HERE), enumerator_33113.current_mControllerName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 908)), enumerator_33113.current_mArrayControllerFilterListForGeneration (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 906))) ;
      GALGAS_string var_fileName_34347 = GALGAS_string ("arrayControllerFilter-").add_operation (enumerator_33113.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 911)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 911)).add_operation (enumerator_33113.current_mControllerName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 911)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 911)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_34347  COMMA_SOURCE_FILE ("array-controller.galgas", 912)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_34347, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_s_34167, GALGAS_string ("  return WHAT \?\n"), GALGAS_string ("}\n"
        "\n"
        "//").add_operation (GALGAS_string::makeEmptyString ().getter_stringByRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (8212)) COMMA_SOURCE_FILE ("array-controller.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 921)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 921)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 913)) ;
      }
    }
    enumerator_33113.gotoNextObject () ;
  }
}


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
  GALGAS_lstring var_node_983 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 22)).add_operation (object->mProperty_mSelectionControllerName.getter_string (SOURCE_FILE ("selection-controller.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 22)), object->mProperty_mSelectionControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("selection-controller.galgas", 22)) ;
  {
  const GALGAS_selectionControllerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_983, temp_0, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 23)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_983, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 24)).add_operation (object->mProperty_mModelControllerName.getter_string (SOURCE_FILE ("selection-controller.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 24)), object->mProperty_mModelControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("selection-controller.galgas", 24)) COMMA_SOURCE_FILE ("selection-controller.galgas", 24)) ;
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
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 30)).add_operation (object->mProperty_mSelectionControllerName.getter_string (SOURCE_FILE ("selection-controller.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 30)), object->mProperty_mSelectionControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("selection-controller.galgas", 30)) ;
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
//          Overriding extension method '@selectionControllerDeclarationAST classAndPropertySemanticAnalysis'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectionControllerDeclarationAST_classAndPropertySemanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                                GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclarationAST * object = (const cPtr_selectionControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclarationAST) ;
  cMapElement_classMap * objectArray_3387 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("selection-controller.galgas", 81)) ;
  if (NULL != objectArray_3387) {
      macroValidSharedObject (objectArray_3387, cMapElement_classMap) ;
    GALGAS_propertyKind var_classKind_3530 ;
    GALGAS_actionMap joker_3532 ; // Joker input parameter
    objectArray_3387->mProperty_mPropertyMap.method_searchKey (object->mProperty_mModelControllerName, var_classKind_3530, joker_3532, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 84)) ;
    switch (var_classKind_3530.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 87)), GALGAS_string ("an array controller is required here"), fixItArray0  COMMA_SOURCE_FILE ("selection-controller.galgas", 87)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 89)), GALGAS_string ("an array controller is required here"), fixItArray1  COMMA_SOURCE_FILE ("selection-controller.galgas", 89)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 91)), GALGAS_string ("an array controller is required here"), fixItArray2  COMMA_SOURCE_FILE ("selection-controller.galgas", 91)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_4205 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_classKind_3530.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4205->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mModelControllerPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 94)), GALGAS_string ("'selectedArray' is required here"), fixItArray4  COMMA_SOURCE_FILE ("selection-controller.galgas", 94)) ;
        }
        GALGAS_propertyKind var_kind_4062 = GALGAS_propertyKind::constructor_selectionController (extractedValue_typeName.getter_string (SOURCE_FILE ("selection-controller.galgas", 97))  COMMA_SOURCE_FILE ("selection-controller.galgas", 96)) ;
        {
        objectArray_3387->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mSelectionControllerName, var_kind_4062, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("selection-controller.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 99)) ;
        }
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 101)), GALGAS_string ("an array controller is required here"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.galgas", 101)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectionControllerDeclarationAST_classAndPropertySemanticAnalysis (void) {
  enterExtensionMethod_classAndPropertySemanticAnalysis (kTypeDescriptor_GALGAS_selectionControllerDeclarationAST.mSlotID,
                                                         extensionMethod_selectionControllerDeclarationAST_classAndPropertySemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectionControllerDeclarationAST_classAndPropertySemanticAnalysis (defineExtensionMethod_selectionControllerDeclarationAST_classAndPropertySemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@selectionControllerDeclarationAST secondAnalysisPhase'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectionControllerDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                   GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                   GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectionControllerDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_selectionControllerDeclarationAST.mSlotID,
                                            extensionMethod_selectionControllerDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectionControllerDeclarationAST_secondAnalysisPhase (defineExtensionMethod_selectionControllerDeclarationAST_secondAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@selectionControllerDeclarationEX typeInventory'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectionControllerDeclarationEX_typeInventory (const cPtr_abstractSecondaryProperty * /* inObject */,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectionControllerDeclarationEX_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_selectionControllerDeclarationEX.mSlotID,
                                      extensionMethod_selectionControllerDeclarationEX_typeInventory) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectionControllerDeclarationEX_typeInventory (defineExtensionMethod_selectionControllerDeclarationEX_typeInventory, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@selectionControllerDeclarationEX tryToDefineSecondaryProperty'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectionControllerDeclarationEX_tryToDefineSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                                           GALGAS_semanticContextEX & /* ioArgument_ioSemanticContext */,
                                                                                           const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                                           GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                                           GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                                           GALGAS_simpleStoredPropertyListForGenerationEX & /* ioArgument_ioSimpleStoredPropertyListForGeneration */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclarationEX * object = (const cPtr_selectionControllerDeclarationEX *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclarationEX) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mModelControllerName.getter_string (HERE).objectCompare (GALGAS_string ("self"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyKind var_kind_5819 ;
    GALGAS_string joker_5827_3 ; // Joker input parameter
    GALGAS_actionMap joker_5827_2 ; // Joker input parameter
    GALGAS_bool joker_5827_1 ; // Joker input parameter
    ioArgument_ioObservableProperties.method_searchKey (object->mProperty_mModelControllerPropertyName, var_kind_5819, joker_5827_3, joker_5827_2, joker_5827_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 138)) ;
    GALGAS_string var_entityName_5876 ;
    switch (var_kind_5819.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 147)), GALGAS_string ("the model should be a collection of entities"), fixItArray1  COMMA_SOURCE_FILE ("selection-controller.galgas", 147)) ;
        var_entityName_5876.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6080 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_5819.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_6080->mAssociatedValue0 ;
        var_entityName_5876 = extractedValue_typeName.getter_string (SOURCE_FILE ("selection-controller.galgas", 149)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 151)), GALGAS_string ("the model should be a collection of entities"), fixItArray2  COMMA_SOURCE_FILE ("selection-controller.galgas", 151)) ;
        var_entityName_5876.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 153)), GALGAS_string ("the model should be a collection of entities"), fixItArray3  COMMA_SOURCE_FILE ("selection-controller.galgas", 153)) ;
        var_entityName_5876.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 155)), GALGAS_string ("the model should be a collection of entities"), fixItArray4  COMMA_SOURCE_FILE ("selection-controller.galgas", 155)) ;
        var_entityName_5876.drop () ; // Release error dropped variable
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (object->mProperty_mSelectionControllerName, GALGAS_propertyKind::constructor_selectionController (var_entityName_5876  COMMA_SOURCE_FILE ("selection-controller.galgas", 160)), GALGAS_string::makeEmptyString (), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("selection-controller.galgas", 162)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 158)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_5 = ioArgument_ioObservableProperties.getter_hasKey (object->mProperty_mModelControllerName.getter_string (HERE) COMMA_SOURCE_FILE ("selection-controller.galgas", 165)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_propertyKind var_kind_6904 ;
      GALGAS_string joker_6912_3 ; // Joker input parameter
      GALGAS_actionMap joker_6912_2 ; // Joker input parameter
      GALGAS_bool joker_6912_1 ; // Joker input parameter
      ioArgument_ioObservableProperties.method_searchKey (object->mProperty_mModelControllerName, var_kind_6904, joker_6912_3, joker_6912_2, joker_6912_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 167)) ;
      GALGAS_string var_entityName_6943 ;
      switch (var_kind_6904.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 175)), GALGAS_string ("the model should be an array controller"), fixItArray6  COMMA_SOURCE_FILE ("selection-controller.galgas", 175)) ;
          var_entityName_6943.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 177)), GALGAS_string ("the model should be an array controller"), fixItArray7  COMMA_SOURCE_FILE ("selection-controller.galgas", 177)) ;
          var_entityName_6943.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 179)), GALGAS_string ("the model should be an array controller"), fixItArray8  COMMA_SOURCE_FILE ("selection-controller.galgas", 179)) ;
          var_entityName_6943.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_7368 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_6904.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_7368->mAssociatedValue0 ;
          var_entityName_6943 = extractedValue_typeName.getter_string (SOURCE_FILE ("selection-controller.galgas", 181)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 183)), GALGAS_string ("the model should be an array controller"), fixItArray9  COMMA_SOURCE_FILE ("selection-controller.galgas", 183)) ;
          var_entityName_6943.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      ioArgument_ioObservableProperties.setter_insertKey (object->mProperty_mSelectionControllerName, GALGAS_propertyKind::constructor_selectionController (var_entityName_6943  COMMA_SOURCE_FILE ("selection-controller.galgas", 188)), GALGAS_string::makeEmptyString (), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("selection-controller.galgas", 190)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 186)) ;
      }
    }else if (kBoolFalse == test_5) {
      const GALGAS_selectionControllerDeclarationEX temp_10 = object ;
      ioArgument_ioUnsolvedProperties.addAssign_operation (temp_10  COMMA_SOURCE_FILE ("selection-controller.galgas", 194)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectionControllerDeclarationEX_tryToDefineSecondaryProperty (void) {
  enterExtensionMethod_tryToDefineSecondaryProperty (kTypeDescriptor_GALGAS_selectionControllerDeclarationEX.mSlotID,
                                                     extensionMethod_selectionControllerDeclarationEX_tryToDefineSecondaryProperty) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectionControllerDeclarationEX_tryToDefineSecondaryProperty (defineExtensionMethod_selectionControllerDeclarationEX_tryToDefineSecondaryProperty, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@selectionControllerDeclarationEX secondaryPropertySemanticAnalysisEX'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectionControllerDeclarationEX_secondaryPropertySemanticAnalysisEX (const cPtr_abstractSecondaryProperty * inObject,
                                                                                                  const GALGAS_string constinArgument_inOwnerName,
                                                                                                  const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                                                  const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                                                  const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                                                                  const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                                                  GALGAS_transientDefinitionListForGeneration & /* ioArgument_ioTransientDefinitionListForGeneration */,
                                                                                                  GALGAS_arrayControllerForGenerationEX & /* ioArgument_ioArrayControllerForGeneration */,
                                                                                                  GALGAS_selectionControllerForGeneration & ioArgument_ioSelectionControllerForGeneration,
                                                                                                  GALGAS_stringset & /* ioArgument_ioNeededOutletClasses */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclarationEX * object = (const cPtr_selectionControllerDeclarationEX *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclarationEX) ;
  GALGAS_string var_selectionEntityName_8559 ;
  GALGAS_observablePropertyMap var_selectionObservablePropertyMap_8615 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mModelControllerName.getter_string (HERE).objectCompare (GALGAS_string ("self"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyKind var_kind_8753 ;
    GALGAS_string joker_8761_3 ; // Joker input parameter
    GALGAS_actionMap joker_8761_2 ; // Joker input parameter
    GALGAS_bool joker_8761_1 ; // Joker input parameter
    constinArgument_inObservableProperties.method_searchKey (object->mProperty_mModelControllerPropertyName, var_kind_8753, joker_8761_3, joker_8761_2, joker_8761_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 215)) ;
    switch (var_kind_8753.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 222)), GALGAS_string ("the property should be a collection of entities"), fixItArray1  COMMA_SOURCE_FILE ("selection-controller.galgas", 222)) ;
        var_selectionEntityName_8559.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8994 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_8753.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_8994->mAssociatedValue0 ;
        var_selectionEntityName_8559 = extractedValue_typeName.getter_string (SOURCE_FILE ("selection-controller.galgas", 224)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 226)), GALGAS_string ("the property should be a collection of entities"), fixItArray2  COMMA_SOURCE_FILE ("selection-controller.galgas", 226)) ;
        var_selectionEntityName_8559.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 228)), GALGAS_string ("the property should be a collection of entities"), fixItArray3  COMMA_SOURCE_FILE ("selection-controller.galgas", 228)) ;
        var_selectionEntityName_8559.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerPropertyName.getter_location (SOURCE_FILE ("selection-controller.galgas", 230)), GALGAS_string ("the property should be a collection of entities"), fixItArray4  COMMA_SOURCE_FILE ("selection-controller.galgas", 230)) ;
        var_selectionEntityName_8559.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_objectKind joker_9660 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (var_selectionEntityName_8559, object->mProperty_mSelectionControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("selection-controller.galgas", 234)), var_selectionObservablePropertyMap_8615, joker_9660, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 233)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_propertyKind var_kind_9756 ;
    GALGAS_string joker_9764_3 ; // Joker input parameter
    GALGAS_actionMap joker_9764_2 ; // Joker input parameter
    GALGAS_bool joker_9764_1 ; // Joker input parameter
    constinArgument_inObservableProperties.method_searchKey (object->mProperty_mModelControllerName, var_kind_9756, joker_9764_3, joker_9764_2, joker_9764_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 239)) ;
    switch (var_kind_9756.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 246)), GALGAS_string ("the model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.galgas", 246)) ;
        var_selectionEntityName_8559.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 248)), GALGAS_string ("the model should be an array controller"), fixItArray6  COMMA_SOURCE_FILE ("selection-controller.galgas", 248)) ;
        var_selectionEntityName_8559.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 250)), GALGAS_string ("the model should be an array controller"), fixItArray7  COMMA_SOURCE_FILE ("selection-controller.galgas", 250)) ;
        var_selectionEntityName_8559.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_10233 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_9756.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_10233->mAssociatedValue0 ;
        var_selectionEntityName_8559 = extractedValue_typeName.getter_string (SOURCE_FILE ("selection-controller.galgas", 252)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 254)), GALGAS_string ("the model should be an array controller"), fixItArray8  COMMA_SOURCE_FILE ("selection-controller.galgas", 254)) ;
        var_selectionEntityName_8559.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_objectKind joker_10599 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (var_selectionEntityName_8559, object->mProperty_mSelectionControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("selection-controller.galgas", 258)), var_selectionObservablePropertyMap_8615, joker_10599, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 257)) ;
  }
  ioArgument_ioSelectionControllerForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mProperty_mSelectionControllerName.getter_string (HERE), object->mProperty_mModelControllerName.getter_string (HERE), object->mProperty_mModelControllerPropertyName.getter_string (HERE), var_selectionEntityName_8559, var_selectionObservablePropertyMap_8615  COMMA_SOURCE_FILE ("selection-controller.galgas", 264)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectionControllerDeclarationEX_secondaryPropertySemanticAnalysisEX (void) {
  enterExtensionMethod_secondaryPropertySemanticAnalysisEX (kTypeDescriptor_GALGAS_selectionControllerDeclarationEX.mSlotID,
                                                            extensionMethod_selectionControllerDeclarationEX_secondaryPropertySemanticAnalysisEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectionControllerDeclarationEX_secondaryPropertySemanticAnalysisEX (defineExtensionMethod_selectionControllerDeclarationEX_secondaryPropertySemanticAnalysisEX, NULL) ;

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
  cEnumerator_selectionControllerForGeneration enumerator_12424 (constinArgument_inArrayControllerListForGeneration, kENUMERATION_UP) ;
  while (enumerator_12424.hasCurrentObject ()) {
    GALGAS_string var_s_12437 = GALGAS_string (filewrapperTemplate_selectionControllerGenerationTemplate_selectionControllerImplementation (inCompiler, enumerator_12424.current_mOwnerName (HERE), enumerator_12424.current_mSelectionControllerName (HERE), enumerator_12424.current_mSelectionTypeName (HERE), enumerator_12424.current_mSelectionObservablePropertyMap (HERE) COMMA_SOURCE_FILE ("selection-controller.galgas", 308))) ;
    GALGAS_string var_fileName_12662 = GALGAS_string ("selectionController-").add_operation (enumerator_12424.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 314)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 314)).add_operation (enumerator_12424.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 314)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 314)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_12662  COMMA_SOURCE_FILE ("selection-controller.galgas", 315)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12662, var_s_12437, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 316)) ;
    }
    enumerator_12424.gotoNextObject () ;
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
  GALGAS_lstring var_node_870 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 22)).add_operation (object->mProperty_mProxyName.getter_string (SOURCE_FILE ("proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 22)), object->mProperty_mProxyName.getter_location (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 22)) ;
  {
  const GALGAS_proxyDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_870, temp_0, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 23)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_870, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 24)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("proxy.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 24)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 24)) COMMA_SOURCE_FILE ("proxy.galgas", 24)) ;
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
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 30)).add_operation (object->mProperty_mProxyName.getter_string (SOURCE_FILE ("proxy.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 30)), object->mProperty_mProxyName.getter_location (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 30)) ;
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
//                 Overriding extension method '@proxyDeclarationAST classAndPropertySemanticAnalysis'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_proxyDeclarationAST_classAndPropertySemanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_proxyDeclarationAST * object = (const cPtr_proxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_proxyDeclarationAST) ;
  cMapElement_classMap * objectArray_3162 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.galgas", 82)) ;
  if (NULL != objectArray_3162) {
      macroValidSharedObject (objectArray_3162, cMapElement_classMap) ;
    GALGAS_propertyKind var_classKind_3300 ;
    GALGAS_actionMap joker_3302 ; // Joker input parameter
    objectArray_3162->mProperty_mPropertyMap.method_searchKey (object->mProperty_mControllerName, var_classKind_3300, joker_3302, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 85)) ;
    switch (var_classKind_3300.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 88)), GALGAS_string ("an array controller is required here"), fixItArray0  COMMA_SOURCE_FILE ("proxy.galgas", 88)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 90)), GALGAS_string ("an array controller is required here"), fixItArray1  COMMA_SOURCE_FILE ("proxy.galgas", 90)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 92)), GALGAS_string ("an array controller is required here"), fixItArray2  COMMA_SOURCE_FILE ("proxy.galgas", 92)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_3772 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_classKind_3300.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3772->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_3718 ;
        GALGAS_classKind joker_3700 ; // Joker input parameter
        GALGAS_actionMap joker_3720_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_3720_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_3700, var_propertyMap_3718, joker_3720_2, joker_3720_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 94)) ;
        GALGAS_propertyKind joker_3769_2 ; // Joker input parameter
        GALGAS_actionMap joker_3769_1 ; // Joker input parameter
        var_propertyMap_3718.method_searchKey (object->mProperty_mPropertyName, joker_3769_2, joker_3769_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 95)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 97)), GALGAS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.galgas", 97)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_proxyDeclarationAST_classAndPropertySemanticAnalysis (void) {
  enterExtensionMethod_classAndPropertySemanticAnalysis (kTypeDescriptor_GALGAS_proxyDeclarationAST.mSlotID,
                                                         extensionMethod_proxyDeclarationAST_classAndPropertySemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_proxyDeclarationAST_classAndPropertySemanticAnalysis (defineExtensionMethod_proxyDeclarationAST_classAndPropertySemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@proxyDeclarationAST secondAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_proxyDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                     GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                     GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_proxyDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_proxyDeclarationAST.mSlotID,
                                            extensionMethod_proxyDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_proxyDeclarationAST_secondAnalysisPhase (defineExtensionMethod_proxyDeclarationAST_secondAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension method '@proxyDeclarationEX typeInventory'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_proxyDeclarationEX_typeInventory (const cPtr_abstractSecondaryProperty * /* inObject */,
                                                              GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_proxyDeclarationEX_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_proxyDeclarationEX.mSlotID,
                                      extensionMethod_proxyDeclarationEX_typeInventory) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_proxyDeclarationEX_typeInventory (defineExtensionMethod_proxyDeclarationEX_typeInventory, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@proxyDeclarationEX tryToDefineSecondaryProperty'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_proxyDeclarationEX_tryToDefineSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                             GALGAS_semanticContextEX & ioArgument_ioSemanticContext,
                                                                             const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                             GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                             GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                             GALGAS_simpleStoredPropertyListForGenerationEX & ioArgument_ioSimpleStoredPropertyListForGeneration,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_proxyDeclarationEX * object = (const cPtr_proxyDeclarationEX *) inObject ;
  macroValidSharedObject (object, cPtr_proxyDeclarationEX) ;
  const enumGalgasBool test_0 = ioArgument_ioObservableProperties.getter_hasKey (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("proxy.galgas", 135)) COMMA_SOURCE_FILE ("proxy.galgas", 135)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyKind var_kind_5304 ;
    GALGAS_string joker_5312_3 ; // Joker input parameter
    GALGAS_actionMap joker_5312_2 ; // Joker input parameter
    GALGAS_bool joker_5312_1 ; // Joker input parameter
    ioArgument_ioObservableProperties.method_searchKey (object->mProperty_mControllerName, var_kind_5304, joker_5312_3, joker_5312_2, joker_5312_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 136)) ;
    switch (var_kind_5304.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 143)), GALGAS_string ("an array controller is required here"), fixItArray1  COMMA_SOURCE_FILE ("proxy.galgas", 143)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 145)), GALGAS_string ("an array controller is required here"), fixItArray2  COMMA_SOURCE_FILE ("proxy.galgas", 145)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 147)), GALGAS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.galgas", 147)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_6847 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_5304.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_entityName = extractPtr_6847->mAssociatedValue0 ;
        GALGAS_observablePropertyMap var_observablePropertyMap_5776 ;
        GALGAS_objectKind joker_5786 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (extractedValue_entityName, var_observablePropertyMap_5776, joker_5786, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 149)) ;
        GALGAS_propertyKind var_kind_5875 ;
        GALGAS_string joker_5885_3 ; // Joker input parameter
        GALGAS_actionMap joker_5885_2 ; // Joker input parameter
        GALGAS_bool joker_5885_1 ; // Joker input parameter
        var_observablePropertyMap_5776.method_searchKey (object->mProperty_mPropertyName, var_kind_5875, joker_5885_3, joker_5885_2, joker_5885_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 154)) ;
        switch (var_kind_5875.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            const cEnumAssociatedValues_propertyKind_property * extractPtr_6297 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_5875.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_type = extractPtr_6297->mAssociatedValue0 ;
            {
            ioArgument_ioObservableProperties.setter_insertKey (object->mProperty_mProxyName, GALGAS_propertyKind::constructor_property (extractedValue_type, GALGAS_propertyAccessibility::constructor_proxy (SOURCE_FILE ("proxy.galgas", 163))  COMMA_SOURCE_FILE ("proxy.galgas", 163)), GALGAS_string::makeEmptyString (), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.galgas", 165)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 161)) ;
            }
            ioArgument_ioSimpleStoredPropertyListForGeneration.addAssign_operation (extractedValue_type, object->mProperty_mPropertyName.getter_string (HERE), GALGAS_bool (true), GALGAS_string::makeEmptyString (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("proxy.galgas", 169)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6570 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_5875.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_6570->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_graphic = extractPtr_6570->mAssociatedValue2 ;
            const GALGAS_bool extractedValue_isEntity = extractPtr_6570->mAssociatedValue3 ;
            {
            ioArgument_ioObservableProperties.setter_insertKey (object->mProperty_mProxyName, GALGAS_propertyKind::constructor_toMany (extractedValue_typeName, GALGAS_propertyAccessibility::constructor_proxy (SOURCE_FILE ("proxy.galgas", 178)), extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("proxy.galgas", 178)), GALGAS_string::makeEmptyString (), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.galgas", 180)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 176)) ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (object->mProperty_mPropertyName.getter_location (SOURCE_FILE ("proxy.galgas", 184)), GALGAS_string ("<<toOne property>>"), fixItArray4  COMMA_SOURCE_FILE ("proxy.galgas", 184)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (object->mProperty_mPropertyName.getter_location (SOURCE_FILE ("proxy.galgas", 186)), GALGAS_string ("a property is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.galgas", 186)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (object->mProperty_mPropertyName.getter_location (SOURCE_FILE ("proxy.galgas", 188)), GALGAS_string ("a property is required here"), fixItArray6  COMMA_SOURCE_FILE ("proxy.galgas", 188)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("proxy.galgas", 191)), GALGAS_string ("an array controller is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.galgas", 191)) ;
      }
      break ;
    }
  }else if (kBoolFalse == test_0) {
    const GALGAS_proxyDeclarationEX temp_8 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_8  COMMA_SOURCE_FILE ("proxy.galgas", 194)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_proxyDeclarationEX_tryToDefineSecondaryProperty (void) {
  enterExtensionMethod_tryToDefineSecondaryProperty (kTypeDescriptor_GALGAS_proxyDeclarationEX.mSlotID,
                                                     extensionMethod_proxyDeclarationEX_tryToDefineSecondaryProperty) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_proxyDeclarationEX_tryToDefineSecondaryProperty (defineExtensionMethod_proxyDeclarationEX_tryToDefineSecondaryProperty, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@proxyDeclarationEX secondaryPropertySemanticAnalysisEX'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_proxyDeclarationEX_secondaryPropertySemanticAnalysisEX (const cPtr_abstractSecondaryProperty * /* inObject */,
                                                                                    const GALGAS_string /* constinArgument_inOwnerName */,
                                                                                    const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                                    const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                                    const GALGAS_semanticContextEX /* constinArgument_inSemanticContext */,
                                                                                    const GALGAS_observablePropertyMap /* constinArgument_inObservableProperties */,
                                                                                    GALGAS_transientDefinitionListForGeneration & /* ioArgument_ioTransientDefinitionListForGeneration */,
                                                                                    GALGAS_arrayControllerForGenerationEX & /* ioArgument_ioArrayControllerForGeneration */,
                                                                                    GALGAS_selectionControllerForGeneration & /* ioArgument_ioSelectionControllerForGeneration */,
                                                                                    GALGAS_stringset & /* ioArgument_ioNeededOutletClasses */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_proxyDeclarationEX_secondaryPropertySemanticAnalysisEX (void) {
  enterExtensionMethod_secondaryPropertySemanticAnalysisEX (kTypeDescriptor_GALGAS_proxyDeclarationEX.mSlotID,
                                                            extensionMethod_proxyDeclarationEX_secondaryPropertySemanticAnalysisEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_proxyDeclarationEX_secondaryPropertySemanticAnalysisEX (defineExtensionMethod_proxyDeclarationEX_secondaryPropertySemanticAnalysisEX, NULL) ;

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
  const enumGalgasBool test_3 = var_found_4117.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 125)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 126)), GALGAS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 126)) ;
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
  const enumGalgasBool test_1 = var_found_4973.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 154)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 155)), GALGAS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray2  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 155)) ;
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
  const enumGalgasBool test_1 = var_found_5934.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 180)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 181)), GALGAS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray2  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 181)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_doubleAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_doubleAsDefaultValue.mSlotID,
                                                extensionMethod_doubleAsDefaultValue_analyzeDefaultValueType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_doubleAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_doubleAsDefaultValue_analyzeDefaultValueType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@stringAsDefaultValue analyzeDefaultValueType'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_stringAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                          const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                          GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_stringAsDefaultValue * object = (const cPtr_stringAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_stringAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_6783 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_6830 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_6783.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 194)).isValidAndTrue () ;
  if (enumerator_6830.hasCurrentObject () && bool_0) {
    while (enumerator_6830.hasCurrentObject () && bool_0) {
      switch (enumerator_6830.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("\"").add_operation (object->mProperty_mValue.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 197)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 197)) ;
          var_found_6783 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_doubleType:
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
      enumerator_6830.gotoNextObject () ;
      if (enumerator_6830.hasCurrentObject ()) {
        bool_0 = var_found_6783.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 194)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found_6783.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 206)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 207)), GALGAS_string ("only a string attribute can be initialized by a string constant"), fixItArray2  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 207)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_stringAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_stringAsDefaultValue.mSlotID,
                                                extensionMethod_stringAsDefaultValue_analyzeDefaultValueType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_stringAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_stringAsDefaultValue_analyzeDefaultValueType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Once function 'predefinedDates'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset onceFunction_predefinedDates (C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("explicit-default-value.galgas", 215)) ;
  result_result.addAssign_operation (GALGAS_string ("date")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 216)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_predefinedDates = false ;
static GALGAS_stringset gOnceFunctionResult_predefinedDates ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset function_predefinedDates (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedDates) {
    gOnceFunctionResult_predefinedDates = onceFunction_predefinedDates (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedDates = true ;
  }
  return gOnceFunctionResult_predefinedDates ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_predefinedDates (void) {
  gOnceFunctionResult_predefinedDates.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_predefinedDates (NULL,
                                                             releaseOnceFunctionResult_predefinedDates) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_predefinedDates [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_predefinedDates (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_predefinedDates (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_predefinedDates ("predefinedDates",
                                                                 functionWithGenericHeader_predefinedDates,
                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                 0,
                                                                 functionArgs_predefinedDates) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Once function 'predefinedColors'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset onceFunction_predefinedColors (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("explicit-default-value.galgas", 222)) ;
  result_result.addAssign_operation (GALGAS_string ("black")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 223)) ;
  result_result.addAssign_operation (GALGAS_string ("blue")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 224)) ;
  result_result.addAssign_operation (GALGAS_string ("brown")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 225)) ;
  result_result.addAssign_operation (GALGAS_string ("clear")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 226)) ;
  result_result.addAssign_operation (GALGAS_string ("control")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 227)) ;
  result_result.addAssign_operation (GALGAS_string ("controlDarkShadow")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 228)) ;
  result_result.addAssign_operation (GALGAS_string ("controlHighlight")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 229)) ;
  result_result.addAssign_operation (GALGAS_string ("controlLightHighlight")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 230)) ;
  result_result.addAssign_operation (GALGAS_string ("controlShadow")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 231)) ;
  result_result.addAssign_operation (GALGAS_string ("controlText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 232)) ;
  result_result.addAssign_operation (GALGAS_string ("cyan")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 233)) ;
  result_result.addAssign_operation (GALGAS_string ("darkGray")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 234)) ;
  result_result.addAssign_operation (GALGAS_string ("disabledControlText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 235)) ;
  result_result.addAssign_operation (GALGAS_string ("gray")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 236)) ;
  result_result.addAssign_operation (GALGAS_string ("green")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 237)) ;
  result_result.addAssign_operation (GALGAS_string ("grid")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 238)) ;
  result_result.addAssign_operation (GALGAS_string ("header")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 239)) ;
  result_result.addAssign_operation (GALGAS_string ("headerText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 240)) ;
  result_result.addAssign_operation (GALGAS_string ("highlight")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 241)) ;
  result_result.addAssign_operation (GALGAS_string ("keyboardFocusIndicator")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 242)) ;
  result_result.addAssign_operation (GALGAS_string ("knob")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 243)) ;
  result_result.addAssign_operation (GALGAS_string ("lightGray")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 244)) ;
  result_result.addAssign_operation (GALGAS_string ("magenta")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 245)) ;
  result_result.addAssign_operation (GALGAS_string ("orange")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 246)) ;
  result_result.addAssign_operation (GALGAS_string ("purple")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 247)) ;
  result_result.addAssign_operation (GALGAS_string ("red")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 248)) ;
  result_result.addAssign_operation (GALGAS_string ("scrollBar")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 249)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedControl")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 250)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedControlText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 251)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedKnob")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 252)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedMenuItem")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 253)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedMenuItemText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 254)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedTextBackground")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 255)) ;
  result_result.addAssign_operation (GALGAS_string ("selectedText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 256)) ;
  result_result.addAssign_operation (GALGAS_string ("shadow")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 257)) ;
  result_result.addAssign_operation (GALGAS_string ("textBackground")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 258)) ;
  result_result.addAssign_operation (GALGAS_string ("white")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 259)) ;
  result_result.addAssign_operation (GALGAS_string ("windowBackground")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 260)) ;
  result_result.addAssign_operation (GALGAS_string ("windowFrame")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 261)) ;
  result_result.addAssign_operation (GALGAS_string ("windowFrameText")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 262)) ;
  result_result.addAssign_operation (GALGAS_string ("yellow")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 263)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_predefinedColors = false ;
static GALGAS_stringset gOnceFunctionResult_predefinedColors ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset function_predefinedColors (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedColors) {
    gOnceFunctionResult_predefinedColors = onceFunction_predefinedColors (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedColors = true ;
  }
  return gOnceFunctionResult_predefinedColors ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_predefinedColors (void) {
  gOnceFunctionResult_predefinedColors.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_predefinedColors (NULL,
                                                              releaseOnceFunctionResult_predefinedColors) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_predefinedColors [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_predefinedColors (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_predefinedColors (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_predefinedColors ("predefinedColors",
                                                                  functionWithGenericHeader_predefinedColors,
                                                                  & kTypeDescriptor_GALGAS_stringset,
                                                                  0,
                                                                  functionArgs_predefinedColors) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@identifierAsDefaultValue analyzeDefaultValueType'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_identifierAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                              const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                              GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_identifierAsDefaultValue * object = (const cPtr_identifierAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_identifierAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_9100 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_9146 (constinArgument_inAttributeActualTypeList, kENUMERATION_UP) ;
  bool bool_0 = var_found_9100.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 273)).isValidAndTrue () ;
  if (enumerator_9146.hasCurrentObject () && bool_0) {
    while (enumerator_9146.hasCurrentObject () && bool_0) {
      switch (enumerator_9146.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_dateType:
        {
          var_found_9100 = GALGAS_bool (true) ;
          const enumGalgasBool test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 277)).getter_hasKey (object->mProperty_mValue.getter_string (HERE) COMMA_SOURCE_FILE ("explicit-default-value.galgas", 277)).boolEnum () ;
          if (kBoolTrue == test_1) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("Date ()") ;
          }else if (kBoolFalse == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 280)), GALGAS_string ("unknown predefined date"), fixItArray2  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 280)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          const cEnumAssociatedValues_typeKind_enumType * extractPtr_9791 = (const cEnumAssociatedValues_typeKind_enumType *) (enumerator_9146.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_enumTypeName = extractPtr_9791->mAssociatedValue0 ;
          const GALGAS_enumConstantMap extractedValue_constantMap = extractPtr_9791->mAssociatedValue1 ;
          var_found_9100 = GALGAS_bool (true) ;
          const enumGalgasBool test_3 = extractedValue_constantMap.getter_hasKey (object->mProperty_mValue.getter_string (HERE) COMMA_SOURCE_FILE ("explicit-default-value.galgas", 284)).boolEnum () ;
          if (kBoolTrue == test_3) {
            outArgument_outSwiftDefaultValueAsString = extractedValue_enumTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 285)).add_operation (object->mProperty_mValue.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 285)) ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 287)), GALGAS_string ("the '").add_operation (extractedValue_enumTypeName, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 288)).add_operation (GALGAS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 288)).add_operation (object->mProperty_mValue.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 288)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 288)), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 287)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 292)), GALGAS_string ("invalid entity type"), fixItArray5  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 292)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 294)), GALGAS_string ("invalid class type"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 294)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 296)), GALGAS_string ("invalid bool type"), fixItArray7  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 296)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 298)), GALGAS_string ("invalid double type"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 298)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 300)), GALGAS_string ("invalid integer type"), fixItArray9  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 300)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 302)), GALGAS_string ("invalid string type"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 302)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 304)), GALGAS_string ("invalid font type"), fixItArray11  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 304)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_colorType:
        {
          const enumGalgasBool test_12 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 306)).getter_hasKey (object->mProperty_mValue.getter_string (HERE) COMMA_SOURCE_FILE ("explicit-default-value.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_12) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSColor.").add_operation (object->mProperty_mValue.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 307)) ;
            var_found_9100 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 310)), GALGAS_string ("unknown predefined color"), fixItArray13  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 310)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyExternType:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 313)), GALGAS_string ("invalid image type"), fixItArray14  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 313)) ;
        }
        break ;
      }
      enumerator_9146.gotoNextObject () ;
      if (enumerator_9146.hasCurrentObject ()) {
        bool_0 = var_found_9100.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 273)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_15 = var_found_9100.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 316)).boolEnum () ;
  if (kBoolTrue == test_15) {
    TC_Array <C_FixItDescription> fixItArray16 ;
    inCompiler->emitSemanticError (object->mProperty_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 317)), GALGAS_string ("unknow type for this identifier"), fixItArray16  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 317)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_identifierAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_identifierAsDefaultValue.mSlotID,
                                                extensionMethod_identifierAsDefaultValue_analyzeDefaultValueType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_identifierAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_identifierAsDefaultValue_analyzeDefaultValueType, NULL) ;

