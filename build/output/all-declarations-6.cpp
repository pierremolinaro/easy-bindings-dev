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
  GALGAS_filewrapper var_w_6160 = GALGAS_filewrapper (gWrapperDirectory_0_outletClassGeneration) ;
  cEnumerator_stringset enumerator_6233 (constinArgument_inNeededOutletClasses, kENUMERATION_UP) ;
  while (enumerator_6233.hasCurrentObject ()) {
    GALGAS_string var_s_6246 = var_w_6160.getter_textFileContentsAtPath (GALGAS_string ("/").add_operation (enumerator_6233.current (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 188)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 188)) ;
    GALGAS_string var_fileName_6314 = enumerator_6233.current (HERE).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 189)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_6314  COMMA_SOURCE_FILE ("outlet-class.galgas", 190)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_6314, var_s_6246, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 191)) ;
    }
    enumerator_6233.gotoNextObject () ;
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
  cEnumerator_outletClassBindingSpecificationList enumerator_4515 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_4515.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4595 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 129)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4656 (enumerator_4515.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4656.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4656.current_mModelTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_4595.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("binding-specification.galgas", 133))  COMMA_SOURCE_FILE ("binding-specification.galgas", 133)), enumerator_4656.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 132)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_4968 ;
        GALGAS_propertyMap joker_4970_3 ; // Joker input parameter
        GALGAS_actionMap joker_4970_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4970_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (enumerator_4656.current_mModelTypeName (HERE), var_classKind_4968, joker_4970_3, joker_4970_2, joker_4970_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 136)) ;
        GALGAS_typeKind var_typeKind_5000 ;
        switch (var_classKind_4968.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4656.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 140)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("binding-specification.galgas", 140)) ;
            var_typeKind_5000.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_5190 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4968.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_kind = extractPtr_5190->mAssociatedValue0 ;
            var_typeKind_5000 = extractedValue_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4656.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 144)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("binding-specification.galgas", 144)) ;
            var_typeKind_5000.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4656.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 146)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("binding-specification.galgas", 146)) ;
            var_typeKind_5000.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_4595.addAssign_operation (var_typeKind_5000, enumerator_4656.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 148)) ;
      }
      enumerator_4656.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5601 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 151)) ;
    cEnumerator_controllerBindingOptionList enumerator_5639 (enumerator_4515.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5639.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_5730 ;
      GALGAS_propertyMap joker_5732_3 ; // Joker input parameter
      GALGAS_actionMap joker_5732_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5732_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (enumerator_5639.current_mOptionTypeName (HERE), var_classKind_5730, joker_5732_3, joker_5732_2, joker_5732_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 153)) ;
      GALGAS_typeKind var_typeKind_5760 ;
      switch (var_classKind_5730.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5639.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 157)), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("binding-specification.galgas", 157)) ;
          var_typeKind_5760.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_5941 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5730.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_kind = extractPtr_5941->mAssociatedValue0 ;
          var_typeKind_5760 = extractedValue_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5639.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 161)), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("binding-specification.galgas", 161)) ;
          var_typeKind_5760.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5639.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 163)), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("binding-specification.galgas", 163)) ;
          var_typeKind_5760.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5601.addAssign_operation (var_typeKind_5760, enumerator_5639.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 165)) ;
      enumerator_5639.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_6310 ;
    GALGAS_lstring var_outletSuperClassName_6344 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.getter_mBindingSpecificationMap (HERE).getter_hasKey (enumerator_4515.current_mOutletClassName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("binding-specification.galgas", 170)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4515.current_mOutletClassName (HERE), var_outletSuperClassName_6344, var_bindingMap_6310, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 171)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_6310 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("binding-specification.galgas", 173)) ;
      GALGAS_bool joker_6672_6 ; // Joker input parameter
      GALGAS_bool joker_6672_5 ; // Joker input parameter
      GALGAS_bool joker_6672_4 ; // Joker input parameter
      GALGAS_bool joker_6672_3 ; // Joker input parameter
      GALGAS_bool joker_6672_2 ; // Joker input parameter
      GALGAS_bool joker_6672_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mOutletClassMap (HERE).method_searchKey (enumerator_4515.current_mOutletClassName (HERE), var_outletSuperClassName_6344, joker_6672_6, joker_6672_5, joker_6672_4, joker_6672_3, joker_6672_2, joker_6672_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 174)) ;
    }
    {
    var_bindingMap_6310.setter_insertKey (enumerator_4515.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4595, var_controllerBindingOptionDecoratedList_5601, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 176)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4515.current_mOutletClassName (HERE), var_outletSuperClassName_6344, var_bindingMap_6310, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 181)) ;
    }
    enumerator_4515.gotoNextObject () ;
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
  outArgument_outRegularBindingsGenerationList = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 185)) ;
  outArgument_outTargetActionList = GALGAS_actionBindingListForGeneration::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 186)) ;
  outArgument_outMultipleBindingGenerationList = GALGAS_multipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 187)) ;
  outArgument_outletMap = GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("outlet-declaration.galgas", 188)) ;
  outArgument_outTableViewBindingGenerationList = GALGAS_tableViewBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 189)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 190)) ;
  cEnumerator_outletDeclarationList enumerator_6980 (constinArgument_inOutletDeclarationList, kENUMERATION_UP) ;
  while (enumerator_6980.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_6980.current_mOutletName (HERE), enumerator_6980.current_mOutletTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 192)) ;
    }
    GALGAS_bool var_handlesRunAction_7184 ;
    GALGAS_bool var_handlesTableViewBinding_7225 ;
    GALGAS_bool var_handlesEnabledBinding_7264 ;
    GALGAS_bool var_handlesHiddenBinding_7302 ;
    GALGAS_bool var_handleGraphicControllerBinding_7350 ;
    GALGAS_bool var_outletClassIsUserDefined_7392 ;
    GALGAS_lstring joker_7149 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mOutletClassMap (HERE).method_searchKey (enumerator_6980.current_mOutletTypeName (HERE), joker_7149, var_handlesRunAction_7184, var_handlesTableViewBinding_7225, var_handlesEnabledBinding_7264, var_handlesHiddenBinding_7302, var_handleGraphicControllerBinding_7350, var_outletClassIsUserDefined_7392, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 193)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_outletClassIsUserDefined_7392.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 203)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_6980.current_mOutletTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 204)) ;
      }
    }
    switch (enumerator_6980.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_10100 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_6980.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_10100->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_10100->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_handleGraphicControllerBinding_7350.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 210)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_6980.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 211)), GALGAS_string ("the '").add_operation (enumerator_6980.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 211)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 211)), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 211)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_propertyKind var_kind_7960 ;
          GALGAS_actionMap joker_7972_2 ; // Joker input parameter
          GALGAS_bool joker_7972_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_kind_7960, joker_7972_2, joker_7972_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 213)) ;
          switch (var_kind_7960.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 220)), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 220)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 222)), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 222)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 224)), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 224)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_9731 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_7960.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_entityName = extractPtr_9731->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_graphic = extractPtr_9731->mAssociatedValue1 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = extractedValue_graphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 227)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 228)), GALGAS_string ("the controlled entity (").add_operation (extractedValue_entityName.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 228)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 228)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 228)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                GALGAS_propertyMap var_observablePropertyMap_8733 ;
                GALGAS_classKind joker_8691 ; // Joker input parameter
                GALGAS_actionMap joker_8749_2 ; // Joker input parameter
                GALGAS_propertyGenerationList joker_8749_1 ; // Joker input parameter
                constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_entityName, joker_8691, var_observablePropertyMap_8733, joker_8749_2, joker_8749_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 231)) ;
                GALGAS_propertyKind var_propertyKind_8842 ;
                GALGAS_actionMap joker_8844_2 ; // Joker input parameter
                GALGAS_bool joker_8844_1 ; // Joker input parameter
                var_observablePropertyMap_8733.method_searchKey (extractedValue_propertyName, var_propertyKind_8842, joker_8844_2, joker_8844_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 237)) ;
                switch (var_propertyKind_8842.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <C_FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 240)), GALGAS_string ("the bound model should be a toMany property"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 240)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_9216 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_8842.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_kEntityName = extractPtr_9216->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_isGraphic = extractPtr_9216->mAssociatedValue2 ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = extractedValue_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 242)).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        TC_Array <C_FixItDescription> fixItArray11 ;
                        inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 243)), GALGAS_string ("the controlled entity (").add_operation (extractedValue_kEntityName.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 243)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 243)), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 243)) ;
                      }
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 246)), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 246)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 248)), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 248)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_objectController:
                  {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 250)), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 250)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 252)), GALGAS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 252)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 256)), GALGAS_string ("the bound model should be an array controller"), fixItArray16  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 256)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_objectController:
            {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 258)), GALGAS_string ("the bound model should be an array controller"), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 258)) ;
            }
            break ;
          }
          outArgument_outEBViewGraphicControllerBindingGenerationList.addAssign_operation (enumerator_6980.current_mOutletName (HERE).getter_string (HERE), extractedValue_controllerName.getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 260)) ;
        }
      }
      break ;
    }
    switch (enumerator_6980.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_10811 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_6980.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_10811->mAssociatedValue0 ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = var_handlesTableViewBinding_7225.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 267)).boolEnum () ;
          if (kBoolTrue == test_18) {
            TC_Array <C_FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_6980.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 268)), GALGAS_string ("the '").add_operation (enumerator_6980.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 268)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 268)), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 268)) ;
          }
        }
        if (kBoolFalse == test_18) {
          GALGAS_propertyKind var_kind_10544 ;
          GALGAS_actionMap joker_10556_2 ; // Joker input parameter
          GALGAS_bool joker_10556_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_kind_10544, joker_10556_2, joker_10556_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 270)) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = var_kind_10544.getter_isArrayController (SOURCE_FILE ("outlet-declaration.galgas", 275)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 275)).boolEnum () ;
            if (kBoolTrue == test_20) {
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 276)), GALGAS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 276)) ;
            }
          }
          outArgument_outTableViewBindingGenerationList.addAssign_operation (enumerator_6980.current_mOutletName (HERE).getter_string (HERE), extractedValue_controllerName.getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 278)) ;
        }
      }
      break ;
    }
    switch (enumerator_6980.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_11725 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_6980.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_target = extractPtr_11725->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_action = extractPtr_11725->mAssociatedValue1 ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_handlesRunAction_7184.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 285)).boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_6980.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 286)), GALGAS_string ("the '").add_operation (enumerator_6980.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 286)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 286)), fixItArray23  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 286)) ;
          }
        }
        if (kBoolFalse == test_22) {
          enumGalgasBool test_24 = kBoolTrue ;
          if (kBoolTrue == test_24) {
            test_24 = GALGAS_bool (kIsEqual, extractedValue_target.getter_string (HERE).objectCompare (GALGAS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_24) {
              constinArgument_inActionMap.method_searchKey (extractedValue_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 288)) ;
              outArgument_outTargetActionList.addAssign_operation (enumerator_6980.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("self"), extractedValue_action.getter_string (HERE), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 289)) ;
            }
          }
          if (kBoolFalse == test_24) {
            GALGAS_actionMap var_controllerActionMap_11460 ;
            GALGAS_propertyKind joker_11413 ; // Joker input parameter
            GALGAS_bool joker_11472 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_target, joker_11413, var_controllerActionMap_11460, joker_11472, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 295)) ;
            var_controllerActionMap_11460.method_searchKey (extractedValue_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 301)) ;
            outArgument_outTargetActionList.addAssign_operation (enumerator_6980.current_mOutletName (HERE).getter_string (HERE), extractedValue_target.getter_string (HERE), extractedValue_action.getter_string (HERE), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 306)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 306)).add_operation (extractedValue_target.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 306))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 302)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_6980.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_12552 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_6980.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_expression = extractPtr_12552->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_12126 ;
        GALGAS_typeKind var_type_12154 ;
        GALGAS_location var_errorLocation_12191 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_expression.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_enableExpression_12126, var_type_12154, var_errorLocation_12191, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 313)) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_handlesEnabledBinding_7264.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 321)).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (var_errorLocation_12191, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 322)) ;
          }
        }
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          test_27 = var_type_12154.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 324)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 324)).boolEnum () ;
          if (kBoolTrue == test_27) {
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (var_errorLocation_12191, GALGAS_string ("expression is not boolean"), fixItArray28  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 325)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_6980.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("enabled"), var_enableExpression_12126  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 327)) ;
      }
      break ;
    }
    switch (enumerator_6980.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_13374 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_6980.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_expression = extractPtr_13374->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_12951 ;
        GALGAS_typeKind var_type_12979 ;
        GALGAS_location var_errorLocation_13016 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_expression.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_12951, var_type_12979, var_errorLocation_13016, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 336)) ;
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = var_type_12979.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 344)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 344)).boolEnum () ;
          if (kBoolTrue == test_29) {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (var_errorLocation_13016, GALGAS_string ("expression is not boolean"), fixItArray30  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 345)) ;
          }
        }
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesHiddenBinding_7302.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 347)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_13016, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 348)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_6980.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("hidden"), var_hiddenExpression_12951  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 350)) ;
      }
      break ;
    }
    {
    routine_analyzeRegularBinding (constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_6980.current_mOutletTypeName (HERE), enumerator_6980.current_mOutletName (HERE).getter_string (HERE), enumerator_6980.current_mRegularBindingList (HERE), GALGAS_string ("self"), outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 356)) ;
    }
    enumerator_6980.gotoNextObject () ;
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
  cEnumerator_regularBindingList enumerator_14238 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_14238.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_14309 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 383)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_14363 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 384)) ;
    cEnumerator_observablePropertyList enumerator_14406 (enumerator_14238.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_14406.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_14577 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_14649 ;
      extensionMethod_analyzeObservableProperty (enumerator_14406.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_14577, var_swiftTypeStringForTransientFunctionArgument_14649, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 386)) ;
      switch (var_kind_14577.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14406.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 396)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 396)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14406.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 398)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 398)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14406.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 400)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 400)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_objectController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14406.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 402)), GALGAS_string ("an object controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 402)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_14406.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 404)), GALGAS_string ("a selection controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 404)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_14363.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_14406.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 406)), var_kind_14577  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 406)) ;
      var_boundModelTypeList_14309.addAssign_operation (var_kind_14577, extensionGetter_location (enumerator_14406.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 407))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 407)) ;
      enumerator_14406.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_15569 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 410)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_15653 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 411)) ;
    GALGAS_lstring var_outletTypeName_15681 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_15718 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 414)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 414)).isValid ()) {
      uint32_t variant_15734 = constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 414)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 414)).uintValue () ;
      bool loop_15734 = true ;
      while (loop_15734) {
        loop_15734 = GALGAS_bool (kIsNotEqual, var_outletTypeName_15681.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_15718 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 414)).isValid () ;
        if (loop_15734) {
          loop_15734 = GALGAS_bool (kIsNotEqual, var_outletTypeName_15681.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_15718 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 414)).boolValue () ;
        }
        if (loop_15734 && (0 == variant_15734)) {
          loop_15734 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.galgas", 414)) ;
        }
        if (loop_15734) {
          variant_15734 -- ;
          var_continues_15718 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_15984 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_16039 ;
          constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).method_searchKey (var_outletTypeName_15681, var_superOutletClassName_15984, var_bindingMap_16039, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 416)) ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_bindingMap_16039.getter_hasKey (enumerator_14238.current_mBindingName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("outlet-declaration.galgas", 421)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_bindingMap_16039.method_searchKey (enumerator_14238.current_mBindingName (HERE), var_outletBindingSpecificationModelList_15569, var_controllerBindingOptionDecoratedList_15653, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 422)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_continues_15718 = GALGAS_bool (true) ;
            var_outletTypeName_15681 = var_superOutletClassName_15984 ;
          }
        }
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_continues_15718.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_14238.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 433)), GALGAS_string ("this binding is not defined"), fixItArray7  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 433)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_14309.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 434)).objectCompare (var_outletBindingSpecificationModelList_15569.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 434)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_14238.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 435)), var_outletBindingSpecificationModelList_15569.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 436)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 436)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 436)).add_operation (var_boundModelTypeList_14309.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 438)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 437)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 438)), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 435)) ;
        }
      }
      if (kBoolFalse == test_8) {
        cEnumerator_outletBindingSpecificationModelList enumerator_16790 (var_outletBindingSpecificationModelList_15569, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_16823 (var_boundModelTypeList_14309, kENUMERATION_UP) ;
        while (enumerator_16790.hasCurrentObject () && enumerator_16823.hasCurrentObject ()) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            GALGAS_bool test_11 = enumerator_16790.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_11.boolEnum ()) {
              test_11 = extensionGetter_isTransient (enumerator_16823.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 441)) ;
            }
            test_10 = test_11.boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_16823.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 442)) ;
            }
          }
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            GALGAS_bool test_14 = enumerator_16790.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.galgas", 444)) ;
            if (kBoolTrue == test_14.boolEnum ()) {
              test_14 = extensionGetter_isEnumType (enumerator_16823.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 444)) ;
            }
            test_13 = test_14.boolEnum () ;
            if (kBoolTrue == test_13) {
            }
          }
          if (kBoolFalse == test_13) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_16790.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 445)).objectCompare (extensionGetter_swiftTypeName (enumerator_16823.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 445)))).boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_16823.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_16790.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 446)), fixItArray16  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 446)) ;
              }
            }
          }
          enumerator_16790.gotoNextObject () ;
          enumerator_16823.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_17382 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_15653.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 452)).objectCompare (enumerator_14238.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("outlet-declaration.galgas", 452)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_string var_s_17492 ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_15653.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 454)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_18) {
            var_s_17492 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_18) {
          var_s_17492 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_17724 (var_controllerBindingOptionDecoratedList_15653, kENUMERATION_UP) ;
          while (enumerator_17724.hasCurrentObject ()) {
            var_s_17492.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_17724.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 459)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 459)).add_operation (extensionGetter_swiftTypeName (enumerator_17724.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 459)) ;
            enumerator_17724.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_14238.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 462)), var_s_17492, fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 462)) ;
      }
    }
    if (kBoolFalse == test_17) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_17928 (var_controllerBindingOptionDecoratedList_15653, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_17963 (enumerator_14238.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_17928.hasCurrentObject () && enumerator_17963.hasCurrentObject ()) {
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = GALGAS_bool (kIsNotEqual, enumerator_17928.current_mOptionName (HERE).getter_string (HERE).objectCompare (enumerator_17963.current_mOptionName (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_17963.current_mOptionName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 466)), GALGAS_string ("the option name should be '").add_operation (enumerator_17928.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 466)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 466)), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 466)) ;
          }
        }
        GALGAS_string var_optionValueAsString_18288 ;
        GALGAS_typeKindList temp_22 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 469)) ;
        temp_22.addAssign_operation (enumerator_17928.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 469)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_17963.current_mOptionValue (HERE).ptr (), temp_22, var_optionValueAsString_18288, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 468)) ;
        var_bindingOptionString_17382.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_17928.current_mOptionName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 472)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 472)).add_operation (var_optionValueAsString_18288, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 472)) ;
        enumerator_17928.gotoNextObject () ;
        enumerator_17963.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_14238.current_mBindingName (HERE).getter_string (HERE), var_boundModelListForGeneration_14363, var_bindingOptionString_17382  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 476)) ;
    enumerator_14238.gotoNextObject () ;
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
  GALGAS_lstring var_node_730 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 18)).add_operation (object->mProperty_mTransientName.getter_string (SOURCE_FILE ("transient-property.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 18)), object->mProperty_mTransientName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 18)) ;
  {
  const GALGAS_transientDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_730, temp_0, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 19)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_730, object->mProperty_mClassName COMMA_SOURCE_FILE ("transient-property.galgas", 20)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_730, object->mProperty_mTransientTypeName COMMA_SOURCE_FILE ("transient-property.galgas", 21)) ;
  }
  cEnumerator_observablePropertyList enumerator_972 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_972.hasCurrentObject ()) {
    switch (enumerator_972.current (HERE).getter_mObservableProperty (HERE).enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1219 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1219->mAssociatedValue0 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 26)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 26)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 26)) COMMA_SOURCE_FILE ("transient-property.galgas", 26)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1433 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1433->mAssociatedValue0 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 30)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 30)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 30)) COMMA_SOURCE_FILE ("transient-property.galgas", 30)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1661 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_1661->mAssociatedValue0 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 34)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 34)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 34)) COMMA_SOURCE_FILE ("transient-property.galgas", 34)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1879 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_1879->mAssociatedValue0 ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 38)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 38)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 38)) COMMA_SOURCE_FILE ("transient-property.galgas", 38)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2021 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2021->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 41)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 41)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 41)) COMMA_SOURCE_FILE ("transient-property.galgas", 41)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2184 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2184->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 43)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 43)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 43)) COMMA_SOURCE_FILE ("transient-property.galgas", 43)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2342 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2342->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 45)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 45)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 45)) COMMA_SOURCE_FILE ("transient-property.galgas", 45)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2501 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2501->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 47)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 47)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 47)) COMMA_SOURCE_FILE ("transient-property.galgas", 47)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2656 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2656->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 49)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 49)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 49)) COMMA_SOURCE_FILE ("transient-property.galgas", 49)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2809 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2809->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 51)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 51)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 51)) COMMA_SOURCE_FILE ("transient-property.galgas", 51)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_2974 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2974->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 53)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 53)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 53)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 53)) COMMA_SOURCE_FILE ("transient-property.galgas", 53)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3162 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3162->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3162->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 55)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 55)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 55)) COMMA_SOURCE_FILE ("transient-property.galgas", 55)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3388 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3388->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3388->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_3388->mAssociatedValue2 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 57)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 57)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 57)) COMMA_SOURCE_FILE ("transient-property.galgas", 57)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3610 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3610->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3610->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_3610->mAssociatedValue2 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 59)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 59)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 59)) COMMA_SOURCE_FILE ("transient-property.galgas", 59)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3801 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3801->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3801->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 61)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 61)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 61)) COMMA_SOURCE_FILE ("transient-property.galgas", 61)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4090 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_972.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_superEntityName = extractPtr_4090->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_4090->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_730, GALGAS_lstring::constructor_new (extractedValue_superEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 66)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 66)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 66)) COMMA_SOURCE_FILE ("transient-property.galgas", 66)) ;
        }
      }
      break ;
    }
    enumerator_972.gotoNextObject () ;
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
//                           Overriding extension getter '@transientDeclarationAST nodeKey'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_transientDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 74)).add_operation (object->mProperty_mTransientName.getter_string (SOURCE_FILE ("transient-property.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 74)), object->mProperty_mTransientName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 74)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_transientDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                extensionGetter_transientDeclarationAST_nodeKey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_transientDeclarationAST_nodeKey (defineExtensionGetter_transientDeclarationAST_nodeKey, NULL) ;

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
  cMapElement_classMap * objectArray_6960 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 159)) ;
  if (NULL != objectArray_6960) {
      macroValidSharedObject (objectArray_6960, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7116 ;
    GALGAS_propertyMap joker_7118_3 ; // Joker input parameter
    GALGAS_actionMap joker_7118_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7118_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mTransientTypeName, var_classKind_7116, joker_7118_3, joker_7118_2, joker_7118_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 162)) ;
    switch (var_classKind_7116.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 165)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("transient-property.galgas", 165)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7455 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7116.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_7455->mAssociatedValue0 ;
        {
        objectArray_6960->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mTransientName, GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (kIsEqual, object->mProperty_mDependencyList.getter_length (SOURCE_FILE ("transient-property.galgas", 169)).objectCompare (GALGAS_uint ((uint32_t) 0U)))  COMMA_SOURCE_FILE ("transient-property.galgas", 169))  COMMA_SOURCE_FILE ("transient-property.galgas", 169)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 170)), object->mProperty_mIsOverriding, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 167)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 174)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("transient-property.galgas", 174)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 176)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 176)) ;
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
//                      Overriding extension method '@transientDeclarationAST thirdAnalysisPhase'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientDeclarationAST * object = (const cPtr_transientDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientDeclarationAST) ;
  GALGAS_classKind var_classKind_8165 ;
  GALGAS_propertyMap joker_8167_3 ; // Joker input parameter
  GALGAS_actionMap joker_8167_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8167_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mTransientTypeName, var_classKind_8165, joker_8167_3, joker_8167_2, joker_8167_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 190)) ;
  GALGAS_typeKind var_typeKind_8207 ;
  switch (var_classKind_8165.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 195)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("transient-property.galgas", 195)) ;
      var_typeKind_8207.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8370 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8165.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_kind = extractPtr_8370->mAssociatedValue0 ;
      var_typeKind_8207 = extractedValue_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 199)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("transient-property.galgas", 199)) ;
      var_typeKind_8207.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 201)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 201)) ;
      var_typeKind_8207.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8622 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_rootProperties_8622 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 206)) ;
    }
  }
  if (kBoolFalse == test_3) {
    GALGAS_classKind joker_8754 ; // Joker input parameter
    GALGAS_actionMap joker_8773_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8773_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_8754, var_rootProperties_8622, joker_8773_2, joker_8773_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 208)) ;
  }
  GALGAS_classKind var_currentClassKind_8887 ;
  GALGAS_propertyMap var_properties_8903 ;
  GALGAS_actionMap joker_8905_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8905_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, var_currentClassKind_8887, var_properties_8903, joker_8905_2, joker_8905_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 211)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_8992 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 213)) ;
  cEnumerator_observablePropertyList enumerator_9025 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_9025.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9184 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9247 ;
    extensionMethod_analyzeObservableProperty (enumerator_9025.current_mObservableProperty (HERE), var_rootProperties_8622, ioArgument_ioSemanticContext, var_properties_8903, var_dependencyKind_9184, var_swiftTypeStringForTransientFunctionArgument_9247, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 215)) ;
    switch (var_dependencyKind_9184.enumValue ()) {
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
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9025.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 227)), GALGAS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.galgas", 227)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_objectController:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9025.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 229)), GALGAS_string ("only an atomic property can be observed"), fixItArray5  COMMA_SOURCE_FILE ("transient-property.galgas", 229)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9025.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 231)), GALGAS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.galgas", 231)) ;
      }
      break ;
    }
    var_dependencies_8992.addAssign_operation (enumerator_9025.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9025.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 235)), var_swiftTypeStringForTransientFunctionArgument_9247  COMMA_SOURCE_FILE ("transient-property.galgas", 233)) ;
    enumerator_9025.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_ptransientRoutineGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("transient-property.galgas", 239)), object->mProperty_mTransientName.getter_string (HERE), var_typeKind_8207, var_dependencies_8992, object->mProperty_mExternFunctionName.getter_string (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 238))  COMMA_SOURCE_FILE ("transient-property.galgas", 238)) ;
  cMapElement_classMap * objectArray_10072 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 245)) ;
  if (NULL != objectArray_10072) {
      macroValidSharedObject (objectArray_10072, cMapElement_classMap) ;
    GALGAS_bool var_generate_10169 ;
    switch (var_currentClassKind_8887.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10169 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10169 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10169 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10534 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_8887.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_10534->mAssociatedValue1 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = extractedValue_graphic.boolEnum () ;
          if (kBoolTrue == test_7) {
            var_generate_10169 = GALGAS_bool (kIsNotEqual, object->mProperty_mTransientName.getter_string (HERE).objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mTransientName.getter_string (HERE).objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.galgas", 258)) ;
          }
        }
        if (kBoolFalse == test_7) {
          var_generate_10169 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    objectArray_10072->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_transientPropertyGeneration::constructor_new (object->mProperty_mTransientName.getter_string (HERE), object->mProperty_mClassName.getter_string (HERE), var_typeKind_8207, var_dependencies_8992, object->mProperty_mExternFunctionName.getter_string (HERE), var_generate_10169  COMMA_SOURCE_FILE ("transient-property.galgas", 263))  COMMA_SOURCE_FILE ("transient-property.galgas", 263)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_transientDeclarationAST.mSlotID,
                                           extensionMethod_transientDeclarationAST_thirdAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_transientDeclarationAST_thirdAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@transientPropertyGeneration declarationInSelectionControllerCode'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_transientPropertyGeneration_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 296)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 296)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 297)) ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 298)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)).add_operation (GALGAS_string ("_property_selection : EBSelection <"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 299)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 300)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 300)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 301)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_transientPropertyGeneration_declarationInSelectionControllerCode (void) {
  enterExtensionGetter_declarationInSelectionControllerCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                                             extensionGetter_transientPropertyGeneration_declarationInSelectionControllerCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_transientPropertyGeneration_declarationInSelectionControllerCode (defineExtensionGetter_transientPropertyGeneration_declarationInSelectionControllerCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@transientPropertyGeneration bindPropertyInSelectionController'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_transientPropertyGeneration_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                                                    const GALGAS_string constinArgument_inDerivedTypeName,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 308)).add_operation (GALGAS_string (" (model : "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 308)).add_operation (constinArgument_inDerivedTypeName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 308)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("    model.addEBObserverOf_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 309)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 309)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 309)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 310)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 310)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.mActualModel {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.prop {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 312)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 315)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 316)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 318)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 319)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 320)) ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 321)).add_operation (GALGAS_string ("_property_selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 321)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 322)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 333)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 335)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 336)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 337)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 338)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 339)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 340)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 341)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 342)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 343)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 344)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_transientPropertyGeneration_bindPropertyInSelectionController (void) {
  enterExtensionGetter_bindPropertyInSelectionController (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                                          extensionGetter_transientPropertyGeneration_bindPropertyInSelectionController) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_transientPropertyGeneration_bindPropertyInSelectionController (defineExtensionGetter_transientPropertyGeneration_bindPropertyInSelectionController, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension getter '@transientPropertyGeneration propertyDeclarationCode'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_transientPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                          const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mGenerate.operator_and (constinArgument_inOverriddenTransients.getter_hasKey (object->mProperty_mPropertyName COMMA_SOURCE_FILE ("transient-property.galgas", 351)).operator_not (SOURCE_FILE ("transient-property.galgas", 351)) COMMA_SOURCE_FILE ("transient-property.galgas", 351)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 352)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 352)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 353)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 353)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 354)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 354)) ;
      result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 355)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 355)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 355)).add_operation (GALGAS_string (" ()\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 355)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 356)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 356)) ;
      result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 357)).add_operation (GALGAS_string ("_property_selection : EBSelection <"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 357)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 357)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 357)) ;
      result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 358)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 358)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 359)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 360)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 360)) ;
      result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 361)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 361)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 361)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 361)) ;
      result_result.plusAssign_operation(GALGAS_string ("    switch self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)).add_operation (GALGAS_string ("_property_selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 362)) ;
      result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 363)) ;
      result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 364)) ;
      result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 365)) ;
      result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 366)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 367)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 368)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_transientPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_transientPropertyGeneration.mSlotID,
                                                extensionGetter_transientPropertyGeneration_propertyDeclarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_transientPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_transientPropertyGeneration_propertyDeclarationCode, NULL) ;

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
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mDependencyList.getter_length (SOURCE_FILE ("transient-property.galgas", 376)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bool var_needs_5F_unwSelf_16061 = extensionGetter_needs_5F_unwSelf (object->mProperty_mDependencyList, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 377)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 378)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_needs_5F_unwSelf_16061.boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 380)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 380)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 381)) ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (object->mProperty_mDependencyList, object->mProperty_mClassName, object->mProperty_mPropertyName, object->mProperty_mExternFunctionName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 382)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 383)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 384)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 385)) ;
        }
      }
      if (kBoolFalse == test_1) {
        result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 387)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 387)) ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (object->mProperty_mDependencyList, object->mProperty_mClassName, object->mProperty_mPropertyName, object->mProperty_mExternFunctionName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 388)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 390)) ;
      cEnumerator_transientDependencyListForGeneration enumerator_16813 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
      while (enumerator_16813.hasCurrentObject ()) {
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_generateAddObserverCall (enumerator_16813.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 392)) ;
        enumerator_16813.gotoNextObject () ;
      }
    }
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
  cEnumerator_transientDependencyListForGeneration enumerator_17179 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_17179.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_generateRemoveObserverCall (enumerator_17179.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 402)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 402)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 402)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 402)) ;
    enumerator_17179.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mDependencyList.getter_length (SOURCE_FILE ("transient-property.galgas", 600)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, object->mProperty_mExternFunctionName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("transient-property.galgas", 600)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_27233 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, object->mProperty_mOwnerName, object->mProperty_mTransientName, object->mProperty_mDependencyList, object->mProperty_mTransientType COMMA_SOURCE_FILE ("transient-property.galgas", 601))) ;
      GALGAS_string var_fileName_27407 = GALGAS_string ("transient-").add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 607)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 607)).add_operation (object->mProperty_mTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 607)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 607)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_27407  COMMA_SOURCE_FILE ("transient-property.galgas", 608)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_27407, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_s_27233, GALGAS_string ("\n"), GALGAS_string ("}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 609)) ;
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

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_4 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_4_transientManager (
  "controllers",
  0,
  gWrapperAllFiles_transientManager_4,
  0,
  gWrapperAllDirectories_transientManager_4
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_5 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_5_transientManager (
  "outlet-classes",
  0,
  gWrapperAllFiles_transientManager_5,
  0,
  gWrapperAllDirectories_transientManager_5
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

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_3 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_3_transientManager (
  "swift-sources",
  0,
  gWrapperAllFiles_transientManager_3,
  0,
  gWrapperAllDirectories_transientManager_3
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

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_0 [6] = {
  & gWrapperDirectory_4_transientManager,
  & gWrapperDirectory_5_transientManager,
  & gWrapperDirectory_1_transientManager,
  & gWrapperDirectory_3_transientManager,
  & gWrapperDirectory_2_transientManager,
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
//                         Overriding extension getter '@atomicPropertyDeclarationAST nodeKey'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_atomicPropertyDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
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

static void defineExtensionGetter_atomicPropertyDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST.mSlotID,
                                extensionGetter_atomicPropertyDeclarationAST_nodeKey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyDeclarationAST_nodeKey (defineExtensionGetter_atomicPropertyDeclarationAST_nodeKey, NULL) ;

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
  cMapElement_classMap * objectArray_3896 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 105)) ;
  if (NULL != objectArray_3896) {
      macroValidSharedObject (objectArray_3896, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4051 ;
    GALGAS_propertyMap joker_4053_3 ; // Joker input parameter
    GALGAS_actionMap joker_4053_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4053_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mPropertyTypeName, var_classKind_4051, joker_4053_3, joker_4053_2, joker_4053_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 108)) ;
    switch (var_classKind_4051.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mPropertyTypeName.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 111)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 111)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_4906 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4051.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_4906->mAssociatedValue0 ;
        {
        objectArray_3896->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mPropertyName, GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("simple-stored-property.galgas", 113))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 113)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("simple-stored-property.galgas", 113)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 113)) ;
        }
        GALGAS_string var_swiftDefaultValueAsString_4418 ;
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 115)) ;
        temp_1.addAssign_operation (extractedValue_kind  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 115)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) object->mProperty_mDefaultValue.ptr (), temp_1, var_swiftDefaultValueAsString_4418, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 115)) ;
        objectArray_3896->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicPropertyGeneration::constructor_new (object->mProperty_mPropertyName.getter_string (HERE), object->mProperty_mNeedsValidation, extractedValue_kind, GALGAS_bool (false), var_swiftDefaultValueAsString_4418, GALGAS_bool (kIsEqual, object->mProperty_mClassName.getter_string (HERE).objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 123))))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 117))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 117)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = object->mProperty_mNeedsValidation.boolEnum () ;
          if (kBoolTrue == test_2) {
            ioArgument_ioGeneration.mProperty_mValidationStubRoutineListForGeneration.addAssign_operation (object->mProperty_mClassName.getter_string (SOURCE_FILE ("simple-stored-property.galgas", 128)), object->mProperty_mPropertyName.getter_string (HERE), extensionGetter_swiftTypeName (extractedValue_kind, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 130))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 127)) ;
          }
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mPropertyTypeName.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 133)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 133)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mPropertyTypeName.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 135)), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 135)) ;
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
  result_result = GALGAS_string ("let Preferences_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 161)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 161)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 161)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 161)) ;
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
//            Overriding extension getter '@atomicPropertyGeneration declarationInSelectionControllerCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 167)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 167)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 169)) ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 170)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)).add_operation (GALGAS_string ("_property_selection : EBSelection <"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 171)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 172)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 173)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_declarationInSelectionControllerCode (void) {
  enterExtensionGetter_declarationInSelectionControllerCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                             extensionGetter_atomicPropertyGeneration_declarationInSelectionControllerCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_declarationInSelectionControllerCode (defineExtensionGetter_atomicPropertyGeneration_declarationInSelectionControllerCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@atomicPropertyGeneration bindPropertyInSelectionController'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                                                 const GALGAS_string constinArgument_inDerivedTypeName,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 179)) ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)).add_operation (GALGAS_string (" (model : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)).add_operation (constinArgument_inDerivedTypeName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 180)) ;
  result_result.plusAssign_operation(GALGAS_string ("    model.addEBObserverOf_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 181)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 182)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 182)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.mActualModel {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 183)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.prop {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 184)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 185)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 186)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 189)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 190)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 190)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 191)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 192)) ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)).add_operation (GALGAS_string ("_property_selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 194)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 195)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 196)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 197)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 198)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 199)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 200)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 201)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 202)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 203)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 204)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 205)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 206)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 208)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 210)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 211)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 212)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 213)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 214)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 215)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 217)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 217)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 217)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 217)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.mActualModel {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 218)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.prop {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 219)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 220)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 221)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 222)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 223)) ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 224)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 224)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 225)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 226)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 227)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 228)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 229)).add_operation (GALGAS_string ("_property.mValidateAndWriteModelFunction = { [weak self] (candidateValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 229)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 229)).add_operation (GALGAS_string (", windowForSheet : NSWindow\?) in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 229)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.mActualModel {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 230)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.prop {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 231)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 232)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 233)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 234)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 235)) ;
  result_result.plusAssign_operation(GALGAS_string ("            let result = object.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 236)).add_operation (GALGAS_string ("_property.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 236)) ;
  result_result.plusAssign_operation(GALGAS_string ("            if !result {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 237)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 238)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 239)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 240)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 242)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 245)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 246)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 247)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_bindPropertyInSelectionController (void) {
  enterExtensionGetter_bindPropertyInSelectionController (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                          extensionGetter_atomicPropertyGeneration_bindPropertyInSelectionController) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_bindPropertyInSelectionController (defineExtensionGetter_atomicPropertyGeneration_bindPropertyInSelectionController, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@atomicPropertyGeneration propertyDeclarationCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                       const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 253)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 254)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 254)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 255)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 255)) ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 256)).add_operation (GALGAS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 256)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 256)).add_operation (GALGAS_string (" (defaultValue: "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 256)).add_operation (object->mProperty_mDefaultValueInSwift, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 256)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mInPreferences.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string (", prefKey: Preferences_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 259)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string (")\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 261)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 262)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 262)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 264)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 264)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 265)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 265)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 266)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 268)).add_operation (GALGAS_string ("_property_selection : EBSelection <"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 268)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 268)) ;
  result_result.plusAssign_operation(GALGAS_string ("> { return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 269)).add_operation (GALGAS_string ("_property.prop }\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 269)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = object->mProperty_mNeedsValidation.boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 271)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 271)) ;
      result_result.plusAssign_operation(GALGAS_string ("  func ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 272)).add_operation (GALGAS_string ("_validateAndSetProp (_ inCandidateValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 272)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 272)).add_operation (GALGAS_string (", windowForSheet inWindow:NSWindow\?) -> Bool {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 272)) ;
      result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 273)).add_operation (GALGAS_string ("_property.validateAndSetProp (inCandidateValue, windowForSheet:inWindow)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 273)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 274)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                extensionGetter_atomicPropertyGeneration_propertyDeclarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_atomicPropertyGeneration_propertyDeclarationCode, NULL) ;

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
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 281)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 281)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 282)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 282)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mNeedsValidation.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 284)).add_operation (GALGAS_string ("_property.validationFunction = { [weak self] in\n"
        "      return self\?.validate_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 284)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 285)).add_operation (GALGAS_string (" (currentValue: $0, proposedValue: $1) \?\? .rejectWithBeep\n"
        "    }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 284)) ;
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
//            Overriding extension getter '@atomicPropertyGeneration setupAtomicPropertyFromDictionaryCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 293)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 293)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 294)).add_operation (GALGAS_string ("_property.readFrom (dictionary: inDictionary, forKey:\""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 294)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 294)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 294)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode (void) {
  enterExtensionGetter_setupAtomicPropertyFromDictionaryCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                              extensionGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode (defineExtensionGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode, NULL) ;

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
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 300)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 300)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 301)).add_operation (GALGAS_string ("_property.storeIn (dictionary: ioDictionary, forKey:\""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 301)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 301)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 301)) ;
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
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 307)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 308)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 309)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 309)) ;
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
  GALGAS_lstring var_node_942 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 22)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 22)), object->mProperty_mToOneRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 22)) ;
  {
  const GALGAS_toOneRelationshipAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_942, temp_0, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 23)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_942, object->mProperty_mClassName COMMA_SOURCE_FILE ("to-one-relationship.galgas", 24)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_942, object->mProperty_mDestinationEntityName COMMA_SOURCE_FILE ("to-one-relationship.galgas", 25)) ;
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
//                             Overriding extension getter '@toOneRelationshipAST nodeKey'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_toOneRelationshipAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 31)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 31)), object->mProperty_mToOneRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 31)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOneRelationshipAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                extensionGetter_toOneRelationshipAST_nodeKey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOneRelationshipAST_nodeKey (defineExtensionGetter_toOneRelationshipAST_nodeKey, NULL) ;

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
  cMapElement_classMap * objectArray_3305 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 82)) ;
  if (NULL != objectArray_3305) {
      macroValidSharedObject (objectArray_3305, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_3465 ;
    GALGAS_propertyMap joker_3467_3 ; // Joker input parameter
    GALGAS_actionMap joker_3467_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3467_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mDestinationEntityName, var_classKind_3465, joker_3467_3, joker_3467_2, joker_3467_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 85)) ;
    switch (var_classKind_3465.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 88)), GALGAS_string ("an entity is required here"), fixItArray0  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 88)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 90)), GALGAS_string ("an entity is required here"), fixItArray1  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 90)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 92)), GALGAS_string ("an entity is required here"), fixItArray2  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 92)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_4034 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_3465.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_4034->mAssociatedValue1 ;
        GALGAS_propertyKind var_kind_3799 = GALGAS_propertyKind::constructor_toOne (object->mProperty_mDestinationEntityName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.galgas", 96)), extractedValue_graphic, object->mProperty_mOpposite  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 94)) ;
        {
        objectArray_3305->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mToOneRelationshipName, var_kind_3799, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-one-relationship.galgas", 100)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 100)) ;
        }
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
//                       Overriding extension method '@toOneRelationshipAST thirdAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_toOneRelationshipAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  cMapElement_classMap * objectArray_4331 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 111)) ;
  if (NULL != objectArray_4331) {
      macroValidSharedObject (objectArray_4331, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4491 ;
    GALGAS_propertyMap var_destinationEntityPropertyMap_4525 ;
    GALGAS_actionMap joker_4527_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4527_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mDestinationEntityName, var_classKind_4491, var_destinationEntityPropertyMap_4525, joker_4527_2, joker_4527_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 114)) ;
    switch (var_classKind_4491.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_entity * extractPtr_5050 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4491.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_5050->mAssociatedValue1 ;
        GALGAS_propertyKind var_kind_4661 = GALGAS_propertyKind::constructor_toOne (object->mProperty_mDestinationEntityName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.galgas", 122)), extractedValue_graphic, object->mProperty_mOpposite  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 120)) ;
        objectArray_4331->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toOnePropertyGeneration::constructor_new (object->mProperty_mToOneRelationshipName.getter_string (HERE), object->mProperty_mClassName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 129)), var_kind_4661, object->mProperty_mOpposite, var_destinationEntityPropertyMap_4525  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 127))  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 127)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_toOneRelationshipAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                           extensionMethod_toOneRelationshipAST_thirdAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_toOneRelationshipAST_thirdAnalysisPhase (defineExtensionMethod_toOneRelationshipAST_thirdAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@toOnePropertyGeneration propertyDeclarationCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toOnePropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                      const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 158)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 158)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 159)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 159)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 160)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 160)) ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 161)).add_operation (GALGAS_string ("_property = ToOneRelationship_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 161)).add_operation (object->mProperty_mClassName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 161)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 161)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 162)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 161)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 163)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 163)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 164)).add_operation (GALGAS_string ("_property_selection : EBSelection <"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 164)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 164)).add_operation (GALGAS_string ("\?> {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 164)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return .single (self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 165)).add_operation (GALGAS_string ("_property.propval)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 165)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 166)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 167)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 167)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 168)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 168)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 168)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 168)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 169)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 169)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 170)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 170)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 171)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 172)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 172)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)).add_operation (GALGAS_string ("_none : ToOneRelationship_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)).add_operation (object->mProperty_mClassName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)).add_operation (GALGAS_string (" { return self."), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)).add_operation (GALGAS_string ("_property }\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 173)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)).add_operation (GALGAS_string ("_none_selection : EBSelection <Bool> {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return .single (self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 177)).add_operation (GALGAS_string ("_property.propval == nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 177)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 178)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOnePropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                extensionGetter_toOnePropertyGeneration_propertyDeclarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOnePropertyGeneration_propertyDeclarationCode (defineExtensionGetter_toOnePropertyGeneration_propertyDeclarationCode, NULL) ;

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
//             Overriding extension getter '@toOnePropertyGeneration setupRelationshipFromDictionaryCode'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 193)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 193)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 194)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let possibleEntity = readEntityFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 195)) ;
  result_result.plusAssign_operation(GALGAS_string ("        inRelationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 196)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 196)) ;
  result_result.plusAssign_operation(GALGAS_string ("        inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 197)) ;
  result_result.plusAssign_operation(GALGAS_string ("        managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 199)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let entity = possibleEntity as\? ").add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 200)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 200)) ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 201)).add_operation (GALGAS_string ("_property.setProp (entity)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 201)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 202)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 203)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode (void) {
  enterExtensionGetter_setupRelationshipFromDictionaryCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                            extensionGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode (defineExtensionGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode, NULL) ;

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
  switch (object->mProperty_mOpposite.enumValue ()) {
  case GALGAS_toOneOppositeRelationship::kNotBuilt:
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
    {
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_none:
    {
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 214)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 214)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (managedObject:self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 215)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 215)) ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 216)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 216)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 217)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_9696 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (object->mProperty_mOpposite.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_oppositeName = extractPtr_9696->mAssociatedValue0 ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 219)).add_operation (GALGAS_string (" // Opposite is toOne "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 219)).add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 219)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 219)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (managedObject:self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 220)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 220)) ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 221)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 221)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 222)) ;
    }
    break ;
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
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 229)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 229)) ;
  result_result.plusAssign_operation(GALGAS_string ("    if let managedObject = self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 230)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 230)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 231)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 232)) ;
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
//           Overriding extension getter '@toOnePropertyGeneration objectAccessibilityCodeForSaveOperation'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 238)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 238)) ;
  result_result.plusAssign_operation(GALGAS_string ("    if let managedObject = self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 239)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 239)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 240)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 241)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation (void) {
  enterExtensionGetter_objectAccessibilityCodeForSaveOperation (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                                extensionGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation (defineExtensionGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation, NULL) ;

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
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 247)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 248)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 248)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 249)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 249)) ;
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
  GALGAS_lstring var_node_943 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 23)).add_operation (object->mProperty_mToManyRelationshipName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 23)), object->mProperty_mToManyRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 23)) ;
  {
  const GALGAS_toManyRelationshipAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_943, temp_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 24)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_943, object->mProperty_mClassName COMMA_SOURCE_FILE ("to-many-relationship.galgas", 25)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_943, object->mProperty_mDestinationEntityName COMMA_SOURCE_FILE ("to-many-relationship.galgas", 26)) ;
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
//                            Overriding extension getter '@toManyRelationshipAST nodeKey'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_toManyRelationshipAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_toManyRelationshipAST * object = (const cPtr_toManyRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toManyRelationshipAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 32)).add_operation (object->mProperty_mToManyRelationshipName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 32)), object->mProperty_mToManyRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 32)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyRelationshipAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_toManyRelationshipAST.mSlotID,
                                extensionGetter_toManyRelationshipAST_nodeKey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyRelationshipAST_nodeKey (defineExtensionGetter_toManyRelationshipAST_nodeKey, NULL) ;

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
  cMapElement_classMap * objectArray_4176 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 110)) ;
  if (NULL != objectArray_4176) {
      macroValidSharedObject (objectArray_4176, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4336 ;
    GALGAS_propertyMap joker_4338_3 ; // Joker input parameter
    GALGAS_actionMap joker_4338_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4338_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mDestinationEntityName, var_classKind_4336, joker_4338_3, joker_4338_2, joker_4338_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 113)) ;
    switch (var_classKind_4336.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 116)), GALGAS_string ("an entity is required here"), fixItArray0  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 116)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 118)), GALGAS_string ("an entity is required here"), fixItArray1  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 118)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 120)), GALGAS_string ("an entity is required here"), fixItArray2  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 120)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_5216 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4336.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_5216->mAssociatedValue1 ;
        GALGAS_propertyKind var_kind_4670 = GALGAS_propertyKind::constructor_toMany (object->mProperty_mDestinationEntityName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-many-relationship.galgas", 124)), extractedValue_graphic, object->mProperty_mOption  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 122)) ;
        {
        objectArray_4176->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mToManyRelationshipName, var_kind_4670, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-many-relationship.galgas", 128)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 128)) ;
        }
        GALGAS_bool var_inPrefs_4965 = GALGAS_bool (kIsEqual, object->mProperty_mClassName.getter_string (HERE).objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 130)))) ;
        objectArray_4176->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyPropertyGeneration::constructor_new (object->mProperty_mToManyRelationshipName.getter_string (HERE), var_kind_4670, object->mProperty_mOption, var_inPrefs_4965, object->mProperty_mCustomStore  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 132))  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 132)) ;
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
//                   Overriding extension getter '@toManyPropertyGeneration propertyDeclarationCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                       const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 162)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 162)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 164)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)).add_operation (GALGAS_string ("_property = TransientArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)).add_operation (GALGAS_string (" ()\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = object->mProperty_mInPreferences.boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)).add_operation (GALGAS_string ("_property = StoredArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)).add_operation (GALGAS_string (" (prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)).add_operation (GALGAS_string (")\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 170)).add_operation (GALGAS_string ("_property = StoredArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 170)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 170)).add_operation (GALGAS_string (" ()\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 170)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 172)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 172)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 173)).add_operation (GALGAS_string ("_property_selection : EBSelection < ["), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 173)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 173)).add_operation (GALGAS_string ("] > {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 173)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 174)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 174)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 175)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 176)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 176)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 177)).add_operation (GALGAS_string (" : ["), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 177)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 177)).add_operation (GALGAS_string ("] {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 177)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 178)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 178)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 179)).operator_not (SOURCE_FILE ("to-many-relationship.galgas", 179)).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 180)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 180)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 182)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                extensionGetter_toManyPropertyGeneration_propertyDeclarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_toManyPropertyGeneration_propertyDeclarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension getter '@toManyPropertyGeneration prefKeyDefinitionCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  result_result = GALGAS_string ("let Preferences_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 188)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 188)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 188)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 188)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_prefKeyDefinitionCode (void) {
  enterExtensionGetter_prefKeyDefinitionCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                              extensionGetter_toManyPropertyGeneration_prefKeyDefinitionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_prefKeyDefinitionCode (defineExtensionGetter_toManyPropertyGeneration_prefKeyDefinitionCode, NULL) ;

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
  switch (object->mProperty_mOption.enumValue ()) {
  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
    {
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 196)).add_operation (GALGAS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 196)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 197)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 197)) ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_8166 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (object->mProperty_mOption.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_8166->mAssociatedValue0 ;
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_8690 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (object->mProperty_mOption.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_oppositeName = extractPtr_8690->mAssociatedValue0 ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 201)).add_operation (GALGAS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 201)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 202)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 202)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 203)).add_operation (GALGAS_string ("_property.setOppositeRelationship ="), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 203)).add_operation (GALGAS_string (" { [weak self] (_ inManagedObject :"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 203)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)).add_operation (GALGAS_string ("\?) in\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 203)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inManagedObject\?.").add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)).add_operation (GALGAS_string ("_property.setProp (self)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 206)) ;
    }
    break ;
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
//             Overriding extension getter '@toManyPropertyGeneration setupRelationshipFromDictionaryCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 213)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = object->mProperty_mCustomStore.boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 216)).add_operation (GALGAS_string (" (Custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 216)) ;
        result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)).add_operation (GALGAS_string ("_property.setProp (customRead_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)).add_operation (GALGAS_string (" (from: inDictionary, with: self.ebUndoManager))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)) ;
        result_result.plusAssign_operation(GALGAS_string ("    /* self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 219)).add_operation (GALGAS_string ("_property.setProp (readEntityArrayFromDictionary (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 219)) ;
        result_result.plusAssign_operation(GALGAS_string ("      inRelationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 220)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 220)) ;
        result_result.plusAssign_operation(GALGAS_string ("      inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 221)) ;
        result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 222)) ;
        result_result.plusAssign_operation(GALGAS_string ("    ) as! [").add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 223)).add_operation (GALGAS_string ("]) */\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 223)) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 225)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 225)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 226)).add_operation (GALGAS_string ("_property.setProp (readEntityArrayFromDictionary (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 226)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inRelationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 227)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 227)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 228)) ;
      result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 229)) ;
      result_result.plusAssign_operation(GALGAS_string ("    ) as! [").add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)).add_operation (GALGAS_string ("])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode (void) {
  enterExtensionGetter_setupRelationshipFromDictionaryCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                            extensionGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode (defineExtensionGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode, NULL) ;

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 237)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = object->mProperty_mCustomStore.boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 240)).add_operation (GALGAS_string (" (Custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 240)) ;
        result_result.plusAssign_operation(GALGAS_string ("    customStore_").add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)).add_operation (GALGAS_string ("_property.propval, intoDictionary: ioDictionary)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)) ;
        result_result.plusAssign_operation(GALGAS_string ("    /* self.store (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 242)) ;
        result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 243)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 243)) ;
        result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 244)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 244)) ;
        result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 245)) ;
        result_result.plusAssign_operation(GALGAS_string ("    ) */\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 246)) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 248)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 248)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 249)) ;
      result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)) ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 251)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 251)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 252)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 253)) ;
    }
  }
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
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 260)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 260)) ;
  result_result.plusAssign_operation(GALGAS_string ("    for managedObject in self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 261)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 261)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 262)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 263)) ;
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
//           Overriding extension getter '@toManyPropertyGeneration objectAccessibilityCodeForSaveOperation'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mCustomStore.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 269)).add_operation (GALGAS_string (" (custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 269)) ;
      result_result.plusAssign_operation(GALGAS_string ("    /* for managedObject in self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 270)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 270)) ;
      result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 271)) ;
      result_result.plusAssign_operation(GALGAS_string ("    } */\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 272)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 275)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 275)) ;
    result_result.plusAssign_operation(GALGAS_string ("    for managedObject in self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 276)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 276)) ;
    result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 277)) ;
    result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 278)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation (void) {
  enterExtensionGetter_objectAccessibilityCodeForSaveOperation (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                                extensionGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation (defineExtensionGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation, NULL) ;

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 285)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 288)) ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 289)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 289)) ;
  }
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
//                  Overriding extension getter '@toManyPropertyGeneration resetToManyRelationships'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 296)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 299)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 299)) ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 300)).add_operation (GALGAS_string ("_property.setProp ([])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 300)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_resetToManyRelationships (void) {
  enterExtensionGetter_resetToManyRelationships (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                 extensionGetter_toManyPropertyGeneration_resetToManyRelationships) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_resetToManyRelationships (defineExtensionGetter_toManyPropertyGeneration_resetToManyRelationships, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension getter '@toManyPropertyGeneration terminationCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  switch (object->mProperty_mOption.enumValue ()) {
  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_13672 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (object->mProperty_mOption.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_13672->mAssociatedValue0 ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 308)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 308)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (extractedValue_masterPropertyName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 309)).add_operation (GALGAS_string ("_property.removeEBObserver (self."), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 309)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 309)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 309)) ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_toManyPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                        extensionGetter_toManyPropertyGeneration_terminationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_toManyPropertyGeneration_terminationCode (defineExtensionGetter_toManyPropertyGeneration_terminationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'validationStubExtension'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_4 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_4_validationStubExtension (
  "controllers",
  0,
  gWrapperAllFiles_validationStubExtension_4,
  0,
  gWrapperAllDirectories_validationStubExtension_4
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_5 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_5_validationStubExtension (
  "outlet-classes",
  0,
  gWrapperAllFiles_validationStubExtension_5,
  0,
  gWrapperAllDirectories_validationStubExtension_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension (
  "standard-properties",
  0,
  gWrapperAllFiles_validationStubExtension_1,
  0,
  gWrapperAllDirectories_validationStubExtension_1
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "swift-sources",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  0,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [6] = {
  & gWrapperDirectory_4_validationStubExtension,
  & gWrapperDirectory_5_validationStubExtension,
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_3_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
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
  outArgument_outActionMap = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("run-action.galgas", 46)) ;
  cEnumerator_lstringlist enumerator_1945 (constinArgument_inActionDeclarationList, kENUMERATION_UP) ;
  while (enumerator_1945.hasCurrentObject ()) {
    {
    outArgument_outActionMap.setter_insertKey (enumerator_1945.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 48)) ;
    }
    enumerator_1945.gotoNextObject () ;
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
  GALGAS_string var_s_2631 = GALGAS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, object->mProperty_mClassName, object->mProperty_mActionName COMMA_SOURCE_FILE ("run-action.galgas", 67))) ;
  GALGAS_string var_fileName_2740 = GALGAS_string ("action-").add_operation (object->mProperty_mClassName, inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 71)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 71)).add_operation (object->mProperty_mActionName, inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 71)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 71)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_2740  COMMA_SOURCE_FILE ("run-action.galgas", 72)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2740, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), var_s_2631, GALGAS_string ("    ENTER USER CODE HERE\n"), GALGAS_string ("  }\n"
    "}\n"
    "\n"
    "//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("run-action.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 81)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 81)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 73)) ;
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

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_4_actionGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_actionGenerationTemplate_4,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_4
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_5_actionGenerationTemplate (
  "outlet-classes",
  0,
  gWrapperAllFiles_actionGenerationTemplate_5,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_actionGenerationTemplate_1,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_1
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_3 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate (
  "swift-sources",
  0,
  gWrapperAllFiles_actionGenerationTemplate_3,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_3
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_0 [6] = {
  & gWrapperDirectory_4_actionGenerationTemplate,
  & gWrapperDirectory_5_actionGenerationTemplate,
  & gWrapperDirectory_1_actionGenerationTemplate,
  & gWrapperDirectory_3_actionGenerationTemplate,
  & gWrapperDirectory_2_actionGenerationTemplate,
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
  GALGAS_propertyKind var_kind_11253 ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument_11321 ;
  extensionMethod_analyzeObservableProperty (object->mProperty_mProperty, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_kind_11253, var_swiftTypeStringForTransientFunctionArgument_11321, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 260)) ;
  switch (var_kind_11253.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_11385 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_11253.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_11385->mAssociatedValue0 ;
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
  case GALGAS_propertyKind::kEnum_objectController:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 277)), GALGAS_string ("only an atomic property can be observed"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 277)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 279)), GALGAS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas", 279)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (extensionGetter_modelStringForSelf (object->mProperty_mProperty, GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 282))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 281)) ;
  outArgument_outErrorLocation = extensionGetter_location (object->mProperty_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 284)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_12845 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression_12845, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 297)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 305)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 305)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 306)) ;
    }
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression_12845  COMMA_SOURCE_FILE ("multiple-binding.galgas", 308)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_13808 ;
  GALGAS_typeKind var_outLeftType_13829 ;
  GALGAS_location var_outLeftLocation_13854 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_13808, var_outLeftType_13829, var_outLeftLocation_13854, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 321)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_13829.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 329)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 329)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_13854, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 330)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_14205 ;
  GALGAS_typeKind var_outRightType_14227 ;
  GALGAS_location var_outRightLocation_14253 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_14205, var_outRightType_14227, var_outRightLocation_14253, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 332)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_14227.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 340)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 340)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_14253, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 341)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 343)) ;
  outArgument_outErrorLocation = var_outRightLocation_14253 ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_13808, var_rightExpression_14205  COMMA_SOURCE_FILE ("multiple-binding.galgas", 345)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15267 ;
  GALGAS_typeKind var_outLeftType_15288 ;
  GALGAS_location var_outLeftLocation_15313 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_15267, var_outLeftType_15288, var_outLeftLocation_15313, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 358)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_15288.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 366)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 366)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15313, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 367)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15664 ;
  GALGAS_typeKind var_outRightType_15686 ;
  GALGAS_location var_outRightLocation_15712 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_15664, var_outRightType_15686, var_outRightLocation_15712, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 369)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_15686.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 377)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 377)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_15712, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 378)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 380)) ;
  outArgument_outErrorLocation = var_outRightLocation_15712 ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_15267, var_rightExpression_15664  COMMA_SOURCE_FILE ("multiple-binding.galgas", 382)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16727 ;
  GALGAS_typeKind var_outLeftType_16748 ;
  GALGAS_location var_outLeftLocation_16773 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_16727, var_outLeftType_16748, var_outLeftLocation_16773, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 395)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_16748.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 403)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 403)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_16773, GALGAS_string ("cannot apply 'and': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 404)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17125 ;
  GALGAS_typeKind var_outRightType_17147 ;
  GALGAS_location var_outRightLocation_17173 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_17125, var_outRightType_17147, var_outRightLocation_17173, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 406)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_17147.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 414)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 414)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_17173, GALGAS_string ("cannot apply 'and': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 415)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 417)) ;
  outArgument_outErrorLocation = var_outRightLocation_17173 ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_16727, var_rightExpression_17125  COMMA_SOURCE_FILE ("multiple-binding.galgas", 419)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18189 ;
  GALGAS_typeKind var_outLeftType_18210 ;
  GALGAS_location var_outLeftLocation_18235 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_18189, var_outLeftType_18210, var_outLeftLocation_18235, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 432)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_18464 ;
  GALGAS_typeKind var_outRightType_18486 ;
  GALGAS_location var_outRightLocation_18512 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_18464, var_outRightType_18486, var_outRightLocation_18512, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 440)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = var_outLeftType_18210.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 448)) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = var_outLeftType_18210.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas", 448)) ;
    }
    test_0 = test_1.operator_not (SOURCE_FILE ("multiple-binding.galgas", 448)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_18235, GALGAS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 449)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_outRightType_18486.objectCompare (var_outLeftType_18210)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outRightLocation_18512, GALGAS_string ("cannot compare: right operand type is different than left operand type"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas", 452)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 454)) ;
  outArgument_outErrorLocation = var_outRightLocation_18512 ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_18189, object->mProperty_mOperator, var_rightExpression_18464  COMMA_SOURCE_FILE ("multiple-binding.galgas", 456)) ;
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
  result_outObservedModelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 473)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 481)) ;
  temp_0.addAssign_operation (object->mProperty_mObservedModelString  COMMA_SOURCE_FILE ("multiple-binding.galgas", 481)) ;
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
  result_outObservedModelSet = callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 497)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 497)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 497)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 505)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 513)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 513)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 513)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 521)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 521)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 521)) ;
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
  result_outExpressionString = GALGAS_string ("EBSelection.single (").add_operation (object->mProperty_mValue.getter_string (SOURCE_FILE ("multiple-binding.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 533)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 533)) ;
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
  result_outExpressionString = object->mProperty_mObservedModelString.add_operation (GALGAS_string ("_selection"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 540)) ;
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
  result_outExpressionString = GALGAS_string ("!").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 547)) ;
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
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 554)).add_operation (GALGAS_string (" || "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 554)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 554)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 554)) ;
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
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 561)).add_operation (GALGAS_string (" ^ "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 561)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 561)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 561)) ;
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
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)) ;
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
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 575)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 575)) ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_multipleBindingComparisonAST::kNotBuilt:
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_equal:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 577)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_notEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("!="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 578)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lower:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 579)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lowerOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("<="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 580)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greater:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 581)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greaterOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (">="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 582)) ;
    }
    break ;
  }
  result_outExpressionString.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mProperty_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 584)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 584)) ;
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
//                Overriding extension method '@objectControllerDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_objectControllerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_objectControllerDeclarationAST * object = (const cPtr_objectControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_objectControllerDeclarationAST) ;
  GALGAS_lstring var_node_666 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 15)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("object-controller.galgas", 15)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 15)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("object-controller.galgas", 15)) ;
  {
  const GALGAS_objectControllerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_666, temp_0, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 16)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_666, object->mProperty_mClassName COMMA_SOURCE_FILE ("object-controller.galgas", 17)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = object->mProperty_mIsRoot.operator_not (SOURCE_FILE ("object-controller.galgas", 18)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (var_node_666, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 19)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("object-controller.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 19)), object->mProperty_mToOneRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("object-controller.galgas", 19)) COMMA_SOURCE_FILE ("object-controller.galgas", 19)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 21)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("object-controller.galgas", 21)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 21)), object->mProperty_mToOneRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("object-controller.galgas", 21)) COMMA_SOURCE_FILE ("object-controller.galgas", 21)) ;
        }
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_objectControllerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_objectControllerDeclarationAST.mSlotID,
                                               extensionMethod_objectControllerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_objectControllerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_objectControllerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension getter '@objectControllerDeclarationAST nodeKey'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_objectControllerDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_objectControllerDeclarationAST * object = (const cPtr_objectControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_objectControllerDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 28)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("object-controller.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 28)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("object-controller.galgas", 28)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_objectControllerDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_objectControllerDeclarationAST.mSlotID,
                                extensionGetter_objectControllerDeclarationAST_nodeKey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_objectControllerDeclarationAST_nodeKey (defineExtensionGetter_objectControllerDeclarationAST_nodeKey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@objectControllerDeclarationAST firstAnalysisPhase'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_objectControllerDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_objectControllerDeclarationAST * object = (const cPtr_objectControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_objectControllerDeclarationAST) ;
  cMapElement_classMap * objectArray_3095 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("object-controller.galgas", 80)) ;
  if (NULL != objectArray_3095) {
      macroValidSharedObject (objectArray_3095, cMapElement_classMap) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = object->mProperty_mIsRoot.boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_propertyMap var_rootProperties_3278 ;
        GALGAS_classKind joker_3257 ; // Joker input parameter
        GALGAS_actionMap joker_3280_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_3280_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_3257, var_rootProperties_3278, joker_3280_2, joker_3280_1, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 84)) ;
        GALGAS_propertyKind var_classKind_3354 ;
        GALGAS_actionMap joker_3356_2 ; // Joker input parameter
        GALGAS_bool joker_3356_1 ; // Joker input parameter
        var_rootProperties_3278.method_searchKey (object->mProperty_mToOneRelationshipName, var_classKind_3354, joker_3356_2, joker_3356_1, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 85)) ;
        switch (var_classKind_3354.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 88)), GALGAS_string ("a toOne relationship is required here"), fixItArray1  COMMA_SOURCE_FILE ("object-controller.galgas", 88)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const cEnumAssociatedValues_propertyKind_toOne * extractPtr_3921 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_classKind_3354.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_3921->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_graphic = extractPtr_3921->mAssociatedValue2 ;
            GALGAS_propertyKind var_kind_3540 = GALGAS_propertyKind::constructor_objectController (extractedValue_typeName, extractedValue_graphic  COMMA_SOURCE_FILE ("object-controller.galgas", 90)) ;
            {
            objectArray_3095->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_3540, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("object-controller.galgas", 94)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 94)) ;
            }
            objectArray_3095->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_objectControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), GALGAS_string ("rootObject.").add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("object-controller.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 98)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("object-controller.galgas", 99))  COMMA_SOURCE_FILE ("object-controller.galgas", 96))  COMMA_SOURCE_FILE ("object-controller.galgas", 96)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 102)), GALGAS_string ("a toOne relationship is required here"), fixItArray2  COMMA_SOURCE_FILE ("object-controller.galgas", 102)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 104)), GALGAS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("object-controller.galgas", 104)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_objectController:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 106)), GALGAS_string ("a toOne relationship is required here"), fixItArray4  COMMA_SOURCE_FILE ("object-controller.galgas", 106)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 108)), GALGAS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("object-controller.galgas", 108)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_propertyKind var_classKind_4428 ;
      GALGAS_actionMap joker_4430_2 ; // Joker input parameter
      GALGAS_bool joker_4430_1 ; // Joker input parameter
      objectArray_3095->mProperty_mPropertyMap.method_searchKey (object->mProperty_mToOneRelationshipName, var_classKind_4428, joker_4430_2, joker_4430_1, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 111)) ;
      switch (var_classKind_4428.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 114)), GALGAS_string ("a toOne relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("object-controller.galgas", 114)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          const cEnumAssociatedValues_propertyKind_toOne * extractPtr_4978 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_classKind_4428.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_4978->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_graphic = extractPtr_4978->mAssociatedValue2 ;
          GALGAS_propertyKind var_kind_4614 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic  COMMA_SOURCE_FILE ("object-controller.galgas", 116)) ;
          {
          objectArray_3095->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_4614, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("object-controller.galgas", 120)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 120)) ;
          }
          objectArray_3095->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_objectControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("object-controller.galgas", 124)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("object-controller.galgas", 125))  COMMA_SOURCE_FILE ("object-controller.galgas", 122))  COMMA_SOURCE_FILE ("object-controller.galgas", 122)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 128)), GALGAS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("object-controller.galgas", 128)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 130)), GALGAS_string ("a toOne relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("object-controller.galgas", 130)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_objectController:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 132)), GALGAS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("object-controller.galgas", 132)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("object-controller.galgas", 134)), GALGAS_string ("a toOne relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("object-controller.galgas", 134)) ;
        }
        break ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_objectControllerDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_objectControllerDeclarationAST.mSlotID,
                                           extensionMethod_objectControllerDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_objectControllerDeclarationAST_firstAnalysisPhase (defineExtensionMethod_objectControllerDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@objectControllerDeclarationAST thirdAnalysisPhase'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_objectControllerDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_objectControllerDeclarationAST * object = (const cPtr_objectControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_objectControllerDeclarationAST) ;
  GALGAS_propertyMap var_boundModelPropertyMap_5883 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mIsRoot.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_classKind joker_5977 ; // Joker input parameter
      GALGAS_actionMap joker_6018_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6018_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_5977, var_boundModelPropertyMap_5883, joker_6018_2, joker_6018_1, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 150)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_classKind joker_6105 ; // Joker input parameter
    GALGAS_actionMap joker_6146_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_6146_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_6105, var_boundModelPropertyMap_5883, joker_6146_2, joker_6146_1, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 157)) ;
  }
  GALGAS_propertyKind var_boundModelClassKind_6271 ;
  GALGAS_actionMap joker_6278_2 ; // Joker input parameter
  GALGAS_bool joker_6278_1 ; // Joker input parameter
  var_boundModelPropertyMap_5883.method_searchKey (object->mProperty_mToOneRelationshipName, var_boundModelClassKind_6271, joker_6278_2, joker_6278_1, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 164)) ;
  GALGAS_actionMap var_actionMap_6394 ;
  GALGAS_propertyMap var_propertyMap_6421 ;
  GALGAS_bool var_graphic_6437 ;
  GALGAS_string var_elementTypeName_6463 ;
  switch (var_boundModelClassKind_6271.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mToOneRelationshipName.getter_location (SOURCE_FILE ("object-controller.galgas", 176)), GALGAS_string ("a toOne property is required here"), fixItArray1  COMMA_SOURCE_FILE ("object-controller.galgas", 176)) ;
      var_graphic_6437.drop () ; // Release error dropped variable
      var_propertyMap_6421.drop () ; // Release error dropped variable
      var_actionMap_6394.drop () ; // Release error dropped variable
      var_elementTypeName_6463.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_6828 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_boundModelClassKind_6271.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_6828->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_isGraphic = extractPtr_6828->mAssociatedValue2 ;
      var_elementTypeName_6463 = extractedValue_typeName.getter_string (SOURCE_FILE ("object-controller.galgas", 180)) ;
      var_graphic_6437 = extractedValue_isGraphic ;
      GALGAS_classKind joker_6799 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6826 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_6799, var_propertyMap_6421, var_actionMap_6394, joker_6826, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 182)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mToOneRelationshipName.getter_location (SOURCE_FILE ("object-controller.galgas", 184)), GALGAS_string ("a toOne property is required here"), fixItArray2  COMMA_SOURCE_FILE ("object-controller.galgas", 184)) ;
      var_graphic_6437.drop () ; // Release error dropped variable
      var_propertyMap_6421.drop () ; // Release error dropped variable
      var_actionMap_6394.drop () ; // Release error dropped variable
      var_elementTypeName_6463.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mToOneRelationshipName.getter_location (SOURCE_FILE ("object-controller.galgas", 188)), GALGAS_string ("a toOne property is required here"), fixItArray3  COMMA_SOURCE_FILE ("object-controller.galgas", 188)) ;
      var_graphic_6437.drop () ; // Release error dropped variable
      var_propertyMap_6421.drop () ; // Release error dropped variable
      var_actionMap_6394.drop () ; // Release error dropped variable
      var_elementTypeName_6463.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_objectController:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mToOneRelationshipName.getter_location (SOURCE_FILE ("object-controller.galgas", 192)), GALGAS_string ("a toOne property is required here"), fixItArray4  COMMA_SOURCE_FILE ("object-controller.galgas", 192)) ;
      var_graphic_6437.drop () ; // Release error dropped variable
      var_propertyMap_6421.drop () ; // Release error dropped variable
      var_actionMap_6394.drop () ; // Release error dropped variable
      var_elementTypeName_6463.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mToOneRelationshipName.getter_location (SOURCE_FILE ("object-controller.galgas", 196)), GALGAS_string ("a toOne property is required here"), fixItArray5  COMMA_SOURCE_FILE ("object-controller.galgas", 196)) ;
      var_graphic_6437.drop () ; // Release error dropped variable
      var_propertyMap_6421.drop () ; // Release error dropped variable
      var_actionMap_6394.drop () ; // Release error dropped variable
      var_elementTypeName_6463.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("self.rootObject.").add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("object-controller.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 201)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 201)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string ("self.").add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("object-controller.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 202)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 202)) ;
  }
  GALGAS_string var_modelString_7503 = temp_6 ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("ToOneRelationship_").add_operation (object->mProperty_mRootEntityName.getter_string (SOURCE_FILE ("object-controller.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 205)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 205)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("object-controller.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 205)) ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string ("ToOneRelationship_").add_operation (object->mProperty_mClassName.getter_string (SOURCE_FILE ("object-controller.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 206)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 206)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("object-controller.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 206)) ;
  }
  GALGAS_string var_modelTypeString_7667 = temp_8 ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_objectControllerGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("object-controller.galgas", 210)), object->mProperty_mControllerName, var_modelString_7503, var_modelTypeString_7667, var_elementTypeName_6463, var_graphic_6437, var_propertyMap_6421  COMMA_SOURCE_FILE ("object-controller.galgas", 209))  COMMA_SOURCE_FILE ("object-controller.galgas", 209)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_objectControllerDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_objectControllerDeclarationAST.mSlotID,
                                           extensionMethod_objectControllerDeclarationAST_thirdAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_objectControllerDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_objectControllerDeclarationAST_thirdAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@objectControllerPropertyGeneration propertyDeclarationCode'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_objectControllerPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                                 const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_objectControllerPropertyGeneration * object = (const cPtr_objectControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_objectControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("object-controller.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 233)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 233)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Object controller: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 234)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("object-controller.galgas", 234)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("object-controller.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 235)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("object-controller.galgas", 235)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 236)).add_operation (GALGAS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 236)).add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 236)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 236)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 236)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("object-controller.galgas", 236)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_objectControllerPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_objectControllerPropertyGeneration.mSlotID,
                                                extensionGetter_objectControllerPropertyGeneration_propertyDeclarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_objectControllerPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_objectControllerPropertyGeneration_propertyDeclarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension getter '@objectControllerPropertyGeneration configurationCode'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_objectControllerPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_objectControllerPropertyGeneration * object = (const cPtr_objectControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_objectControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Object controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 242)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 242)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 243)).add_operation (GALGAS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 243)).add_operation (object->mProperty_mModelString, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 243)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("object-controller.galgas", 243)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_objectControllerPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_objectControllerPropertyGeneration.mSlotID,
                                          extensionGetter_objectControllerPropertyGeneration_configurationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_objectControllerPropertyGeneration_configurationCode (defineExtensionGetter_objectControllerPropertyGeneration_configurationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@objectControllerPropertyGeneration populateExplorerWindowCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_objectControllerPropertyGeneration_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_objectControllerPropertyGeneration * object = (const cPtr_objectControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_objectControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Object controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 249)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 250)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 250)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 250)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("object-controller.galgas", 250)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_objectControllerPropertyGeneration_populateExplorerWindowCode (void) {
  enterExtensionGetter_populateExplorerWindowCode (kTypeDescriptor_GALGAS_objectControllerPropertyGeneration.mSlotID,
                                                   extensionGetter_objectControllerPropertyGeneration_populateExplorerWindowCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_objectControllerPropertyGeneration_populateExplorerWindowCode (defineExtensionGetter_objectControllerPropertyGeneration_populateExplorerWindowCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@objectControllerPropertyGeneration terminationCode'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_objectControllerPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_objectControllerPropertyGeneration * object = (const cPtr_objectControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_objectControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Object controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 256)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 257)).add_operation (GALGAS_string (".unbind_model ()\n"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("object-controller.galgas", 257)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_objectControllerPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_objectControllerPropertyGeneration.mSlotID,
                                        extensionGetter_objectControllerPropertyGeneration_terminationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_objectControllerPropertyGeneration_terminationCode (defineExtensionGetter_objectControllerPropertyGeneration_terminationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Filewrapper 'objectControllerGenerationTemplate'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_objectControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_objectControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_objectControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_objectControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_objectControllerGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Filewrapper template 'objectControllerGenerationTemplate objectControllerImplementationInSwift'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_objectControllerGenerationTemplate_objectControllerImplementationInSwift (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                            const GALGAS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                            const GALGAS_string & /* in_MODEL_5F_STRING */,
                                                                                                            const GALGAS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                            const GALGAS_bool & /* in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC */,
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
    "//    " ;
  result << GALGAS_string ("Object Controller ").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 8)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 8)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 8)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "final class Controller_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " : EBObject {\n"
    " \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Init\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n" ;
  GALGAS_uint index_1053_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_1053 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1053.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_1053.current_mKind (HERE).getter_isToMany (SOURCE_FILE ("object-controller.swift.galgasTemplate", 20)).boolEnum () ;
      if (kBoolTrue == test_0) {
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = enumerator_1053.current_mKind (HERE).getter_isProperty (SOURCE_FILE ("object-controller.swift.galgasTemplate", 21)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "    self." ;
          result << enumerator_1053.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.mReadModelFunction = { [weak self] in\n"
            "      return self\?.mModel\?." ;
          result << enumerator_1053.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property_selection \?\? .empty\n"
            "    }\n" ;
          const enumGalgasBool test_2 = extensionGetter_isTransient (enumerator_1053.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 25)).operator_not (SOURCE_FILE ("object-controller.swift.galgasTemplate", 25)).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "    self." ;
            result << enumerator_1053.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property.mWriteModelFunction = { [weak self] (inValue : " ;
            result << extensionGetter_swiftTypeName (enumerator_1053.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 26)).stringValue () ;
            result << ") in\n"
              "      self\?.mModel\?." ;
            result << enumerator_1053.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " = inValue\n"
              "    }\n"
              "    self." ;
            result << enumerator_1053.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property.mValidateAndWriteModelFunction = { [weak self] (candidateValue : " ;
            result << extensionGetter_swiftTypeName (enumerator_1053.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 29)).stringValue () ;
            result << ", windowForSheet : NSWindow\?) in\n"
              "      if let property = self\?.mModel\?." ;
            result << enumerator_1053.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property {\n"
              "        return property.validateAndSetProp (candidateValue, windowForSheet: windowForSheet)\n"
              "      }else{\n"
              "        return false\n"
              "      }\n"
              "    }\n" ;
          }else if (kBoolFalse == test_2) {
          }
        }else if (kBoolFalse == test_1) {
        }
      }
      index_1053_.increment () ;
      enumerator_1053.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n" ;
  GALGAS_uint index_2009_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_2009 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2009.hasCurrentObject ()) {
      const enumGalgasBool test_3 = enumerator_2009.current_mKind (HERE).getter_isToMany (SOURCE_FILE ("object-controller.swift.galgasTemplate", 42)).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
          "  //   ToMany relationship: " ;
        result << enumerator_2009.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "\n"
          "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
          "\n"
          "  let " ;
        result << enumerator_2009.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property = StoredArrayOf_" ;
        result << extensionGetter_swiftTypeName (enumerator_2009.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 46)).stringValue () ;
        result << " ()\n"
          "\n" ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = enumerator_2009.current_mKind (HERE).getter_isProperty (SOURCE_FILE ("object-controller.swift.galgasTemplate", 47)).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
            "  //   Observable atomic property: " ;
          result << enumerator_2009.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "\n"
            "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
            "\n" ;
          const enumGalgasBool test_5 = extensionGetter_isTransient (enumerator_2009.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 51)).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "  let " ;
            result << enumerator_2009.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property = EBTransientProperty_" ;
            result << extensionGetter_swiftTypeName (enumerator_2009.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 52)).stringValue () ;
            result << " ()\n"
              "\n" ;
          }else if (kBoolFalse == test_5) {
            result << "  let " ;
            result << enumerator_2009.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property = EBPropertyProxy_" ;
            result << extensionGetter_swiftTypeName (enumerator_2009.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 54)).stringValue () ;
            result << " ()\n"
              "\n" ;
          }
          result << "  var " ;
          result << enumerator_2009.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property_selection : EBSelection <" ;
          result << extensionGetter_swiftTypeName (enumerator_2009.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("object-controller.swift.galgasTemplate", 56)).stringValue () ;
          result << "> {\n"
            "    return self." ;
          result << enumerator_2009.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.prop\n"
            "  }\n"
            "\n" ;
        }else if (kBoolFalse == test_4) {
        }
      }
      index_2009_.increment () ;
      enumerator_2009.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Controller\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mModelController : EBSimpleController\? = nil\n" ;
  GALGAS_uint index_3548_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_3548 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3548.hasCurrentObject ()) {
      const enumGalgasBool test_6 = enumerator_3548.current_mKind (HERE).getter_isToMany (SOURCE_FILE ("object-controller.swift.galgasTemplate", 67)).boolEnum () ;
      if (kBoolTrue == test_6) {
        result << "  private var mBoundObjectController_" ;
        result << enumerator_3548.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " : EBSimpleController\? = nil\n" ;
      }else if (kBoolFalse == test_6) {
      }
      index_3548_.increment () ;
      enumerator_3548.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func bind_model (_ inToOneRelationship : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n"
    "    self.mModelController = EBSimpleController (\n"
    "      observedObjects: [inToOneRelationship],\n"
    "      callBack: { [weak self] in self\?.modelDidChange (inToOneRelationship) }\n"
    "    )\n" ;
  GALGAS_uint index_4089_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_4089 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4089.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_4089.current_mKind (HERE).getter_isToMany (SOURCE_FILE ("object-controller.swift.galgasTemplate", 80)).boolEnum () ;
      if (kBoolTrue == test_7) {
        result << "    self.mBoundObjectController_" ;
        result << enumerator_4089.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " = EBSimpleController (\n"
          "      observedObjects: [self." ;
        result << enumerator_4089.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property],\n"
          "      callBack: { [weak self] in\n"
          "        let objects = self\?." ;
        result << enumerator_4089.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.propval \?\? []\n"
          "        //NSLog (\"bound objects \\(objects.count) \\(self\?.mModel)\")\n"
          "        self\?.mModel\?." ;
        result << enumerator_4089.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " = objects\n"
          "      }\n"
          "    )\n" ;
      }else if (kBoolFalse == test_7) {
      }
      index_4089_.increment () ;
      enumerator_4089.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private func modelDidChange (_ inToOneRelationship : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n"
    "    self.mModel = inToOneRelationship.propval\n" ;
  GALGAS_uint index_4841_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_4841 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4841.hasCurrentObject ()) {
      const enumGalgasBool test_8 = enumerator_4841.current_mKind (HERE).getter_isToMany (SOURCE_FILE ("object-controller.swift.galgasTemplate", 98)).boolEnum () ;
      if (kBoolTrue == test_8) {
        result << "    self." ;
        result << enumerator_4841.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.setProp (self.mModel\?." ;
        result << enumerator_4841.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.propval \?\? [])\n" ;
      }else if (kBoolFalse == test_8) {
      }
      index_4841_.increment () ;
      enumerator_4841.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func unbind_model () {\n"
    "    self.mModelController\?.unregister ()\n"
    "    self.mModelController = nil\n" ;
  GALGAS_uint index_5254_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_5254 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5254.hasCurrentObject ()) {
      const enumGalgasBool test_9 = enumerator_5254.current_mKind (HERE).getter_isToMany (SOURCE_FILE ("object-controller.swift.galgasTemplate", 110)).boolEnum () ;
      if (kBoolTrue == test_9) {
        result << "    self.mBoundObjectController_" ;
        result << enumerator_5254.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "\?.unregister ()\n"
          "    self.mBoundObjectController_" ;
        result << enumerator_5254.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " = nil\n" ;
      }else if (kBoolFalse == test_9) {
      }
      index_5254_.increment () ;
      enumerator_5254.gotoNextObject () ;
    }
  }
  result << "    self.mModel = nil\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Model\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mModel : " ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = nil {\n"
    "    didSet {\n"
    "      if self.mModel !== oldValue {\n" ;
  GALGAS_uint index_5857_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_5857 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5857.hasCurrentObject ()) {
      const enumGalgasBool test_10 = enumerator_5857.current_mKind (HERE).getter_isToMany (SOURCE_FILE ("object-controller.swift.galgasTemplate", 126)).boolEnum () ;
      if (kBoolTrue == test_10) {
        result << "      //--- ToMany relationship " ;
        result << enumerator_5857.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "\n"
          "        if let controller = self.mModelController {\n"
          "          oldValue\?." ;
        result << enumerator_5857.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.removeEBObserver (controller)\n"
          "          self.mModel\?." ;
        result << enumerator_5857.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "_property.addEBObserver (controller)\n"
          "        }\n" ;
      }else if (kBoolFalse == test_10) {
        const enumGalgasBool test_11 = enumerator_5857.current_mKind (HERE).getter_isProperty (SOURCE_FILE ("object-controller.swift.galgasTemplate", 132)).boolEnum () ;
        if (kBoolTrue == test_11) {
          result << "      //--- Atomic property " ;
          result << enumerator_5857.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "\n"
            "        oldValue\?." ;
          result << enumerator_5857.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.removeEBObserver (self." ;
          result << enumerator_5857.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property)\n"
            "        self.mModel\?." ;
          result << enumerator_5857.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property.addEBObserver (self." ;
          result << enumerator_5857.current_lkey (HERE).getter_string (HERE).stringValue () ;
          result << "_property)\n" ;
        }else if (kBoolFalse == test_11) {
        }
      }
      index_5857_.increment () ;
      enumerator_5857.gotoNextObject () ;
    }
  }
  result << "      }\n"
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
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@objectControllerGeneration generateCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_objectControllerGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                                     const GALGAS_string constinArgument_inOutputDirectory,
                                                                     GALGAS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_objectControllerGeneration * object = (const cPtr_objectControllerGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_objectControllerGeneration) ;
  GALGAS_string var_s_11718 = GALGAS_string (filewrapperTemplate_objectControllerGenerationTemplate_objectControllerImplementationInSwift (inCompiler, object->mProperty_mOwnerName, object->mProperty_mControllerName.getter_string (SOURCE_FILE ("object-controller.galgas", 300)), object->mProperty_mModelString, object->mProperty_mModelTypeName, object->mProperty_mElementTypeName, object->mProperty_mElementTypeIsGraphic, object->mProperty_mPropertyMap COMMA_SOURCE_FILE ("object-controller.galgas", 298))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, GALGAS_string ("controller-object-").add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 309)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 309)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("object-controller.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 309)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 309)), var_s_11718, inCompiler COMMA_SOURCE_FILE ("object-controller.galgas", 307)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_objectControllerGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_objectControllerGeneration.mSlotID,
                                     extensionMethod_objectControllerGeneration_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_objectControllerGeneration_generateCode (defineExtensionMethod_objectControllerGeneration_generateCode, NULL) ;

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
  GALGAS_lstring var_node_983 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 22)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 22)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 22)) ;
  {
  const GALGAS_arrayControllerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_983, temp_0, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 23)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_983, object->mProperty_mClassName COMMA_SOURCE_FILE ("array-controller.galgas", 24)) ;
  }
  switch (object->mProperty_mModel.enumValue ()) {
  case GALGAS_arrayControllerBoundModelAST::kNotBuilt:
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * extractPtr_1387 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) (object->mProperty_mModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootEntityName = extractPtr_1387->mAssociatedValue0 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, extractedValue_rootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioGraph.setter_addEdge (var_node_983, GALGAS_lstring::constructor_new (extractedValue_rootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 28)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 28)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 28)) COMMA_SOURCE_FILE ("array-controller.galgas", 28)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_selfToManyRelationship:
    {
      {
      ioArgument_ioGraph.setter_addEdge (var_node_983, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 31)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 31)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 31)) COMMA_SOURCE_FILE ("array-controller.galgas", 31)) ;
      }
    }
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_selfObjectControllerToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerBoundModelAST_selfObjectControllerToManyRelationship * extractPtr_1730 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_selfObjectControllerToManyRelationship *) (object->mProperty_mModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_objectControllerName = extractPtr_1730->mAssociatedValue0 ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_983, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 33)).add_operation (extractedValue_objectControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 33)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 33)) COMMA_SOURCE_FILE ("array-controller.galgas", 33)) ;
      }
    }
    break ;
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
//                        Overriding extension getter '@arrayControllerDeclarationAST nodeKey'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_arrayControllerDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 40)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 40)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 40)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_arrayControllerDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                extensionGetter_arrayControllerDeclarationAST_nodeKey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_arrayControllerDeclarationAST_nodeKey (defineExtensionGetter_arrayControllerDeclarationAST_nodeKey, NULL) ;

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
  cMapElement_classMap * objectArray_3914 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("array-controller.galgas", 94)) ;
  if (NULL != objectArray_3914) {
      macroValidSharedObject (objectArray_3914, cMapElement_classMap) ;
    GALGAS_actionMap temp_0 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 97)) ;
    temp_0.addAssign_operation (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 97)) ;
    temp_0.addAssign_operation (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 97)) ;
    GALGAS_actionMap var_controllerActions_4029 = temp_0 ;
    switch (object->mProperty_mModel.enumValue ()) {
    case GALGAS_arrayControllerBoundModelAST::kNotBuilt:
      break ;
    case GALGAS_arrayControllerBoundModelAST::kEnum_rootToManyRelationship:
      {
        const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * extractPtr_5313 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) (object->mProperty_mModel.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_rootEntityName = extractPtr_5313->mAssociatedValue0 ;
        GALGAS_propertyMap var_rootProperties_4234 ;
        GALGAS_classKind joker_4213 ; // Joker input parameter
        GALGAS_actionMap joker_4236_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4236_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_rootEntityName, joker_4213, var_rootProperties_4234, joker_4236_2, joker_4236_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 100)) ;
        GALGAS_propertyKind var_classKind_4307 ;
        GALGAS_actionMap joker_4309_2 ; // Joker input parameter
        GALGAS_bool joker_4309_1 ; // Joker input parameter
        var_rootProperties_4234.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_4307, joker_4309_2, joker_4309_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 101)) ;
        switch (var_classKind_4307.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_rootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 104)), GALGAS_string ("a toMany relationship is required here"), fixItArray1  COMMA_SOURCE_FILE ("array-controller.galgas", 104)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4885 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_4307.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_4885->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_graphic = extractPtr_4885->mAssociatedValue2 ;
            GALGAS_propertyKind var_kind_4494 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic  COMMA_SOURCE_FILE ("array-controller.galgas", 106)) ;
            {
            objectArray_3914->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_4494, var_controllerActions_4029, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 110)) ;
            }
            objectArray_3914->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), GALGAS_string ("rootObject.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 114)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 115))  COMMA_SOURCE_FILE ("array-controller.galgas", 112))  COMMA_SOURCE_FILE ("array-controller.galgas", 112)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_rootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 118)), GALGAS_string ("a toMany relationship is required here"), fixItArray2  COMMA_SOURCE_FILE ("array-controller.galgas", 118)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_rootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 120)), GALGAS_string ("a toMany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas", 120)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_objectController:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_rootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 122)), GALGAS_string ("a toMany relationship is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas", 122)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_rootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 124)), GALGAS_string ("a toMany relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("array-controller.galgas", 124)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_arrayControllerBoundModelAST::kEnum_selfToManyRelationship:
      {
        GALGAS_propertyKind var_classKind_5413 ;
        GALGAS_actionMap joker_5415_2 ; // Joker input parameter
        GALGAS_bool joker_5415_1 ; // Joker input parameter
        objectArray_3914->mProperty_mPropertyMap.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_5413, joker_5415_2, joker_5415_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 127)) ;
        switch (var_classKind_5413.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 130)), GALGAS_string ("a toMany relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("array-controller.galgas", 130)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_5980 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_5413.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_5980->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_graphic = extractPtr_5980->mAssociatedValue2 ;
            GALGAS_propertyKind var_kind_5605 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic  COMMA_SOURCE_FILE ("array-controller.galgas", 132)) ;
            {
            objectArray_3914->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_5605, var_controllerActions_4029, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 136)) ;
            }
            objectArray_3914->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 140)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 141))  COMMA_SOURCE_FILE ("array-controller.galgas", 138))  COMMA_SOURCE_FILE ("array-controller.galgas", 138)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 144)), GALGAS_string ("a toMany relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("array-controller.galgas", 144)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 146)), GALGAS_string ("a toMany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas", 146)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_objectController:
          {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 148)), GALGAS_string ("a toMany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas", 148)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 150)), GALGAS_string ("a toMany relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas", 150)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_arrayControllerBoundModelAST::kEnum_selfObjectControllerToManyRelationship:
      {
        const cEnumAssociatedValues_arrayControllerBoundModelAST_selfObjectControllerToManyRelationship * extractPtr_8463 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_selfObjectControllerToManyRelationship *) (object->mProperty_mModel.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_objectControllerName = extractPtr_8463->mAssociatedValue0 ;
        GALGAS_propertyKind var_classKind_6577 ;
        GALGAS_actionMap joker_6579_2 ; // Joker input parameter
        GALGAS_bool joker_6579_1 ; // Joker input parameter
        objectArray_3914->mProperty_mPropertyMap.method_searchKey (extractedValue_objectControllerName, var_classKind_6577, joker_6579_2, joker_6579_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 153)) ;
        switch (var_classKind_6577.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 156)), GALGAS_string ("an object controller is required here"), fixItArray11  COMMA_SOURCE_FILE ("array-controller.galgas", 156)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 158)), GALGAS_string ("an object controller is required here"), fixItArray12  COMMA_SOURCE_FILE ("array-controller.galgas", 158)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 160)), GALGAS_string ("an object controller is required here"), fixItArray13  COMMA_SOURCE_FILE ("array-controller.galgas", 160)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 162)), GALGAS_string ("an object controller is required here"), fixItArray14  COMMA_SOURCE_FILE ("array-controller.galgas", 162)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_objectController:
          {
            const cEnumAssociatedValues_propertyKind_objectController * extractPtr_8339 = (const cEnumAssociatedValues_propertyKind_objectController *) (var_classKind_6577.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName2 = extractPtr_8339->mAssociatedValue0 ;
            GALGAS_propertyMap var_rootProperties_7153 ;
            GALGAS_classKind joker_7132 ; // Joker input parameter
            GALGAS_actionMap joker_7155_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_7155_1 ; // Joker input parameter
            ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName2, joker_7132, var_rootProperties_7153, joker_7155_2, joker_7155_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 164)) ;
            GALGAS_propertyKind var_classKind_7228 ;
            GALGAS_actionMap joker_7230_2 ; // Joker input parameter
            GALGAS_bool joker_7230_1 ; // Joker input parameter
            var_rootProperties_7153.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_7228, joker_7230_2, joker_7230_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 165)) ;
            switch (var_classKind_7228.enumValue ()) {
            case GALGAS_propertyKind::kNotBuilt:
              break ;
            case GALGAS_propertyKind::kEnum_property:
              {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 168)), GALGAS_string ("a toMany relationship is required here"), fixItArray15  COMMA_SOURCE_FILE ("array-controller.galgas", 168)) ;
              }
              break ;
            case GALGAS_propertyKind::kEnum_toMany:
              {
                const cEnumAssociatedValues_propertyKind_toMany * extractPtr_7873 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_7228.unsafePointer ()) ;
                const GALGAS_lstring extractedValue_typeName = extractPtr_7873->mAssociatedValue0 ;
                const GALGAS_bool extractedValue_graphic = extractPtr_7873->mAssociatedValue2 ;
                GALGAS_propertyKind var_kind_7430 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic  COMMA_SOURCE_FILE ("array-controller.galgas", 170)) ;
                {
                objectArray_3914->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_7430, var_controllerActions_4029, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 174)) ;
                }
                objectArray_3914->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), extractedValue_objectControllerName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 178)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 178)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 179))  COMMA_SOURCE_FILE ("array-controller.galgas", 176))  COMMA_SOURCE_FILE ("array-controller.galgas", 176)) ;
              }
              break ;
            case GALGAS_propertyKind::kEnum_toOne:
              {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 182)), GALGAS_string ("a toMany relationship is required here"), fixItArray16  COMMA_SOURCE_FILE ("array-controller.galgas", 182)) ;
              }
              break ;
            case GALGAS_propertyKind::kEnum_arrayController:
              {
                TC_Array <C_FixItDescription> fixItArray17 ;
                inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 184)), GALGAS_string ("a toMany relationship is required here"), fixItArray17  COMMA_SOURCE_FILE ("array-controller.galgas", 184)) ;
              }
              break ;
            case GALGAS_propertyKind::kEnum_objectController:
              {
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 186)), GALGAS_string ("a toMany relationship is required here"), fixItArray18  COMMA_SOURCE_FILE ("array-controller.galgas", 186)) ;
              }
              break ;
            case GALGAS_propertyKind::kEnum_selectionController:
              {
                TC_Array <C_FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 188)), GALGAS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("array-controller.galgas", 188)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 192)), GALGAS_string ("an object controller is required here"), fixItArray20  COMMA_SOURCE_FILE ("array-controller.galgas", 192)) ;
          }
          break ;
        }
      }
      break ;
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
//                   Overriding extension method '@arrayControllerDeclarationAST thirdAnalysisPhase'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayControllerDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  GALGAS_propertyMap var_boundModelPropertyMap_8938 ;
  switch (object->mProperty_mModel.enumValue ()) {
  case GALGAS_arrayControllerBoundModelAST::kNotBuilt:
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * extractPtr_9136 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) (object->mProperty_mModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootEntityName = extractPtr_9136->mAssociatedValue0 ;
      GALGAS_classKind joker_9087 ; // Joker input parameter
      GALGAS_actionMap joker_9128_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_9128_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_rootEntityName, joker_9087, var_boundModelPropertyMap_8938, joker_9128_2, joker_9128_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 209)) ;
    }
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_selfToManyRelationship:
    {
      GALGAS_classKind joker_9239 ; // Joker input parameter
      GALGAS_actionMap joker_9280_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_9280_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_9239, var_boundModelPropertyMap_8938, joker_9280_2, joker_9280_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 216)) ;
    }
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_selfObjectControllerToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerBoundModelAST_selfObjectControllerToManyRelationship * extractPtr_9964 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_selfObjectControllerToManyRelationship *) (object->mProperty_mModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_objectControllerName = extractPtr_9964->mAssociatedValue0 ;
      GALGAS_propertyMap var_propertyMap_9467 ;
      GALGAS_classKind joker_9442 ; // Joker input parameter
      GALGAS_actionMap joker_9477_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_9477_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_9442, var_propertyMap_9467, joker_9477_2, joker_9477_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 223)) ;
      GALGAS_propertyKind var_boundModelClassKind_9561 ;
      GALGAS_actionMap joker_9563_2 ; // Joker input parameter
      GALGAS_bool joker_9563_1 ; // Joker input parameter
      var_propertyMap_9467.method_searchKey (extractedValue_objectControllerName, var_boundModelClassKind_9561, joker_9563_2, joker_9563_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 229)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_boundModelClassKind_9561.getter_isObjectController (SOURCE_FILE ("array-controller.galgas", 230)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_lstring var_objectControllerTypeName_9703 ;
          GALGAS_bool joker_9705_1 ; // Joker input parameter
          var_boundModelClassKind_9561.method_objectController (var_objectControllerTypeName_9703, joker_9705_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 231)) ;
          GALGAS_classKind joker_9795 ; // Joker input parameter
          GALGAS_actionMap joker_9836_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_9836_1 ; // Joker input parameter
          ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (var_objectControllerTypeName_9703, joker_9795, var_boundModelPropertyMap_8938, joker_9836_2, joker_9836_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 232)) ;
        }
      }
      if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extractedValue_objectControllerName.getter_location (SOURCE_FILE ("array-controller.galgas", 239)), GALGAS_string ("an object controller is required here"), fixItArray1  COMMA_SOURCE_FILE ("array-controller.galgas", 239)) ;
        var_boundModelPropertyMap_8938.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
  GALGAS_propertyKind var_boundModelClassKind_10061 ;
  GALGAS_actionMap joker_10068_2 ; // Joker input parameter
  GALGAS_bool joker_10068_1 ; // Joker input parameter
  var_boundModelPropertyMap_8938.method_searchKey (object->mProperty_mToManyPropertyName, var_boundModelClassKind_10061, joker_10068_2, joker_10068_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 242)) ;
  GALGAS_actionMap var_actionMap_10184 ;
  GALGAS_propertyMap var_propertyMap_10211 ;
  GALGAS_arrayControllerModelKind var_arrayControllerModelKind_10264 ;
  GALGAS_bool var_graphic_10280 ;
  GALGAS_string var_elementTypeName_10306 ;
  switch (var_boundModelClassKind_10061.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 255)), GALGAS_string ("a toMany property is required here"), fixItArray2  COMMA_SOURCE_FILE ("array-controller.galgas", 255)) ;
      var_graphic_10280.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_10264.drop () ; // Release error dropped variable
      var_propertyMap_10211.drop () ; // Release error dropped variable
      var_actionMap_10184.drop () ; // Release error dropped variable
      var_elementTypeName_10306.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10829 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_boundModelClassKind_10061.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_10829->mAssociatedValue0 ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_10829->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isGraphic = extractPtr_10829->mAssociatedValue2 ;
      var_elementTypeName_10306 = extractedValue_typeName.getter_string (SOURCE_FILE ("array-controller.galgas", 259)) ;
      var_graphic_10280 = extractedValue_isGraphic ;
      GALGAS_arrayControllerModelKind temp_3 ;
      const enumGalgasBool test_4 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("array-controller.galgas", 261)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_arrayControllerModelKind::constructor_transientArray (SOURCE_FILE ("array-controller.galgas", 262)) ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_arrayControllerModelKind::constructor_entityArray (SOURCE_FILE ("array-controller.galgas", 263)) ;
      }
      var_arrayControllerModelKind_10264 = temp_3 ;
      GALGAS_classKind joker_10800 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_10827 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_10800, var_propertyMap_10211, var_actionMap_10184, joker_10827, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 265)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 267)), GALGAS_string ("a toMany property is required here"), fixItArray5  COMMA_SOURCE_FILE ("array-controller.galgas", 267)) ;
      var_graphic_10280.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_10264.drop () ; // Release error dropped variable
      var_propertyMap_10211.drop () ; // Release error dropped variable
      var_actionMap_10184.drop () ; // Release error dropped variable
      var_elementTypeName_10306.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 271)), GALGAS_string ("a toMany property is required here"), fixItArray6  COMMA_SOURCE_FILE ("array-controller.galgas", 271)) ;
      var_graphic_10280.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_10264.drop () ; // Release error dropped variable
      var_propertyMap_10211.drop () ; // Release error dropped variable
      var_actionMap_10184.drop () ; // Release error dropped variable
      var_elementTypeName_10306.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_objectController:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 275)), GALGAS_string ("a toMany property is required here"), fixItArray7  COMMA_SOURCE_FILE ("array-controller.galgas", 275)) ;
      var_graphic_10280.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_10264.drop () ; // Release error dropped variable
      var_propertyMap_10211.drop () ; // Release error dropped variable
      var_actionMap_10184.drop () ; // Release error dropped variable
      var_elementTypeName_10306.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 279)), GALGAS_string ("a toMany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas", 279)) ;
      var_graphic_10280.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_10264.drop () ; // Release error dropped variable
      var_propertyMap_10211.drop () ; // Release error dropped variable
      var_actionMap_10184.drop () ; // Release error dropped variable
      var_elementTypeName_10306.drop () ; // Release error dropped variable
    }
    break ;
  }
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_arrayControllerGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 285)), object->mProperty_mControllerName, GALGAS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_10306, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 287)), var_arrayControllerModelKind_10264, var_elementTypeName_10306, var_graphic_10280  COMMA_SOURCE_FILE ("array-controller.galgas", 284))  COMMA_SOURCE_FILE ("array-controller.galgas", 284)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayControllerDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                           extensionMethod_arrayControllerDeclarationAST_thirdAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayControllerDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_arrayControllerDeclarationAST_thirdAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@arrayControllerPropertyGeneration propertyDeclarationCode'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                                const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 307)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Array controller: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 308)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 309)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 310)).add_operation (GALGAS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 310)).add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 310)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 310)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 310)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 310)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_arrayControllerPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                                extensionGetter_arrayControllerPropertyGeneration_propertyDeclarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_arrayControllerPropertyGeneration_propertyDeclarationCode, NULL) ;

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
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 316)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 316)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 317)).add_operation (GALGAS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 317)).add_operation (object->mProperty_mModelString, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 317)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 317)) ;
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
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 323)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 324)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 324)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 324)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 324)) ;
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
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 330)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 331)).add_operation (GALGAS_string (".unbind_model ()\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 331)) ;
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
//                                   Filewrapper 'arrayControllerGenerationTemplate'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayControllerGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Filewrapper template 'arrayControllerGenerationTemplate arrayControllerImplementationInSwift'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                          const GALGAS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                          const GALGAS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                          const GALGAS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                          const GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                          const GALGAS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC
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
  result << GALGAS_string ("Array controller ").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "final class Controller_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " : EBObject" ;
  const enumGalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ", EBViewControllerProtocol" ;
  }else if (kBoolFalse == test_0) {
  }
  result << " {\n"
    " \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  // MARK: -\n"
    "  // Models\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    " \n"
    "   private var mModel : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = nil\n"
    "\n"
    "   //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedSet : Set <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> {\n"
    "    set (newValue) {\n" ;
  const enumGalgasBool test_1 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "    //--- Add observers to newly selected set\n"
      "      for object in newValue.subtracting (self.mPrivateSelectedSet) {\n"
      "        object.selectionDisplay_property.addEBObserver (self.mObjectSelectionObserver)\n"
      "      }\n"
      "    //--- Remove observers to deselected set\n"
      "      for object in self.mPrivateSelectedSet.subtracting (newValue) {\n"
      "        object.selectionDisplay_property.removeEBObserver (self.mObjectSelectionObserver)\n"
      "      }\n"
      "    //---\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "      self.mPrivateSelectedSet = newValue\n"
    "    }\n"
    "    get {\n"
    "      return self.selectedArray_property.propset\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mPrivateSelectedSet = Set <" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> () {\n"
    "    didSet {\n"
    "      self.selectedArray_property.postEvent ()\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  // MARK: -\n"
    "  // Observable properties\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  let objectArray_property = TransientArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  let selectedArray_property = TransientArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedArray : [" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "] { return self.selectedArray_property.propval }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedArray_property_selection : EBSelection <[" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "]> { return self.selectedArray_property.prop }\n"
    " \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  // MARK: -\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n" ;
  const enumGalgasBool test_2 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  //--- Selection observers\n"
      "    self.canBringForward_property.mReadModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canBringForward)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.selectedArray_property.addEBObserver (self.canBringToFront_property)\n"
      "  //---\n"
      "    self.canBringToFront_property.mReadModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canBringToFront)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.selectedArray_property.addEBObserver (self.canBringToFront_property)\n"
      "  //---\n"
      "    self.canSendBackward_property.mReadModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canSendBackward)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.selectedArray_property.addEBObserver (self.canSendBackward_property)\n"
      "  //---\n"
      "    self.canSendToBack_property.mReadModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canSendToBack)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.selectedArray_property.addEBObserver (self.canSendToBack_property)\n"
      "  //---\n"
      "    self.canFlipHorizontally_property.mReadModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canFlipHorizontally)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.selectedArray_property.addEBObserver (self.canFlipHorizontally_property)\n"
      "  //---\n"
      "    self.canFlipVertically_property.mReadModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canFlipVertically)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.selectedArray_property.addEBObserver (self.canFlipVertically_property)\n"
      "  //---\n"
      "    self.canRotate90Clockwise_property.mReadModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canRotate90Clockwise)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.selectedArray_property.addEBObserver (self.canRotate90Clockwise_property)\n"
      "  //---\n"
      "    self.canRotate90CounterClockwise_property.mReadModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canRotate90CounterClockwise)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.selectedArray_property.addEBObserver (self.canRotate90CounterClockwise_property)\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "  //--- Install object array read function\n"
    "    self.objectArray_property.mReadModelFunction = { [weak self] in\n"
    "      if let model = self\?.mModel {\n"
    "        switch model.prop {\n"
    "        case .empty :\n"
    "          return .empty\n"
    "        case .multiple :\n"
    "          return .multiple\n"
    "        case .single (let modelArray) :\n"
    "          return .single (modelArray)\n"
    "        }\n"
    "      }else{\n"
    "        return .empty\n"
    "      }\n"
    "    }\n"
    "   //--- Install selected object array read function\n"
    "    self.selectedArray_property.mReadModelFunction = { [weak self] in\n"
    "      if let model = self\?.mModel {\n"
    "        switch model.prop {\n"
    "        case .empty :\n"
    "          return .empty\n"
    "        case .multiple :\n"
    "          return .multiple\n"
    "        case .single (let modelArray) :\n"
    "          let selectedObjects = self\?.mPrivateSelectedSet \?\? Set ()\n"
    "          var selectedArray = [" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "] ()\n"
    "          for object in modelArray {\n"
    "            if selectedObjects.contains (object) {\n"
    "              selectedArray.append (object)\n"
    "            }\n"
    "          }\n"
    "          return .single (selectedArray)\n"
    "        }\n"
    "      }else{\n"
    "        return .empty\n"
    "      }\n"
    "    }\n"
    " }\n"
    "\n"
    "   //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var objectCount : Int {\n"
    "    let objects = self.mModel\?.propval \?\? []\n"
    "    return objects.count\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func bind_model (_ inModel : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n"
    "    self.mModel = inModel\n"
    "    inModel.addEBObserver (self.objectArray_property)\n" ;
  const enumGalgasBool test_3 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "    self.startObservingObjectShape ()\n"
      "    self.startObservingSelectionShape ()\n"
      "    self.inspectorViewManagerStartsObservingSelection ()\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func unbind_model () {\n" ;
  const enumGalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "    self.stopObservingObjectShape ()\n"
      "    self.stopObservingSelectionShape ()\n"
      "    self.inspectorViewManagerStopsObservingSelection ()\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "    self.mModel\?.removeEBObserver (self.objectArray_property)\n"
    "  //---\n"
    "    self.selectedSet = Set ()\n"
    "    self.mModel = nil\n"
    " }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Undo manager\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var ebUndoManager : EBUndoManager\? { return self.mModel\?.ebUndoManager }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   SELECTION\n"
    "  // MARK: -\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedIndexesSet : Set <Int> {\n"
    "    var result = Set <Int> ()\n"
    "    var idx = 0\n"
    "    for object in self.mModel\?.propval \?\? [] {\n"
    "      if self.selectedArray_property.propset.contains (object) {\n"
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
    "    self.selectedSet = Set (inObjects)\n"
    "  }\n" ;
  const enumGalgasBool test_5 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  //  EBView interface\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var selectedGraphicObjectSet : Set <EBGraphicManagedObject> {\n"
      "    return self.selectedArray_property.propset\n"
      "  }\n"
      "\n"
      "   //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var objectArray : [EBGraphicManagedObject] {\n"
      "    return self.mModel\?.propval \?\? []\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  // Compute selection shape\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private var mObjectSelectionObserver = EBOutletEvent ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private func startObservingSelectionShape () {\n"
      "    self.mModel\?.addEBObserverOf_selectionDisplay (self.mObjectSelectionObserver)\n"
      "    self.mObjectSelectionObserver.mEventCallBack = { [weak self] in self\?.computeSelectionShape () }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private func computeSelectionShape () {\n"
      "    var selectionDisplayArray = [EBShape] ()\n"
      "    for object in self.mModel\?.propval \?\? [] {\n"
      "      if !self.selectedArray_property.propset.contains (object) {\n"
      "        selectionDisplayArray.append (EBShape ())\n"
      "      }else if let shape = object.selectionDisplay {\n"
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
      "  private func stopObservingSelectionShape () {\n"
      "    self.mModel\?.removeEBObserverOf_selectionDisplay (self.mObjectSelectionObserver)\n"
      "    self.mObjectSelectionObserver.mEventCallBack = nil\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  // Compute object shape\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private var mObjectDisplayObserver = EBOutletEvent ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private func startObservingObjectShape () {\n"
      "    self.mModel\?.addEBObserverOf_objectDisplay (self.mObjectDisplayObserver)\n"
      "    self.mObjectDisplayObserver.mEventCallBack = { [weak self] in self\?.updateObjectDisplay () }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private func stopObservingObjectShape () {\n"
      "    self.mModel\?.removeEBObserverOf_objectDisplay (self.mObjectDisplayObserver)\n"
      "    self.mObjectDisplayObserver.mEventCallBack = nil\n"
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
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func alignmentPointsArray () -> [[CanariPoint]] {\n"
      "    var result = [[CanariPoint]] ()\n"
      "    for object in self.mModel\?.propval \?\? [] {\n"
      "      result.append (object.alignmentPoints ().points)\n"
      "    }\n"
      "    return result\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  // EBViews\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private var mEBViews = [EBView] ()\n"
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
      "    if let ebView = inEBView, let idx = self.mEBViews.firstIndex (of: ebView) {\n"
      "      ebView.updateObjectDisplay ([])\n"
      "      ebView.updateSelectionShape ([])\n"
      "      self.mEBViews.remove (at: idx)\n"
      "    }\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_5) {
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Explorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func addExplorer (name : String, y : inout CGFloat, view : NSView) {\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func selectedObjectIndexSet () -> NSIndexSet {\n"
    "    switch self.objectArray_property.prop {\n"
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
    "      for object in self.selectedArray_property.propset {\n"
    "        if let index = objectDictionary [object] {\n"
    "          indexSet.add (index)\n"
    "        }\n"
    "      }\n"
    "      return indexSet\n"
    "    }\n"
    "  }\n"
    "\n" ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GALGAS_arrayControllerModelKind::kNotBuilt :
    break ;
  case GALGAS_arrayControllerModelKind::kEnum_transientArray :
    {
    }
    break ;
  case GALGAS_arrayControllerModelKind::kEnum_entityArray :
    {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    select\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  func select (object inObject : " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << ") {\n"
        "    if let model = self.mModel {\n"
        "      switch model.prop {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let objectArray) :\n"
        "        if objectArray.contains (inObject) {\n"
        "           self.selectedSet = Set ([inObject])\n"
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
        "    if let model = self.mModel {\n"
        "      switch model.prop {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let v) :\n"
        "        let newObject = " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " (self.ebUndoManager)\n"
        "        var array = v\n"
        "        array.append (newObject)\n"
        "      //--- New object is the selection\n"
        "        self.selectedSet = Set ([newObject])\n"
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
        "    if let model = self.mModel {\n"
        "      switch model.prop {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let model_prop) :\n"
        "        switch self.objectArray_property.prop {\n"
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
        "          for object in self.selectedArray_property.propset {\n"
        "            let index = sortedObjectDictionary [object]\n"
        "            if let idx = index {\n"
        "              indexArrayOfSelectedObjects.append (idx)\n"
        "            }\n"
        "          }\n"
        "        //--- Sort\n"
        "          indexArrayOfSelectedObjects.sort { $0 < $1 }\n"
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
        "          for object in self.selectedArray_property.propset {\n"
        "            let index = objectDictionary [object]\n"
        "            if let idx = index {\n"
        "              selectedObjectIndexArray.append (idx)\n"
        "            }\n"
        "          }\n"
        "        //--- Sort in reverse order\n"
        "          selectedObjectIndexArray.sort { $1 < $0 }\n"
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
        "          self.selectedSet = newSelectionSet\n"
        "        //----------------------------------------- Set new object array\n"
        "          model.setProp (newObjectArray)\n"
        "        }\n"
        "      }\n"
        "    }\n"
        "  }\n" ;
    }
    break ;
  }
  const enumGalgasBool test_6 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  //  SELECTION OPERATIONS\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private func sortedIndexArrayOfSelectedObjects () -> [Int] {\n"
      "    var result = [Int] ()\n"
      "    let objects = self.mModel\?.propval \?\? []\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      let idx = objects.firstIndex (of: object)!\n"
      "      result.append (idx)\n"
      "    }\n"
      "    return result.sorted ()\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func canCut (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n"
      "    if (inPasteboardType == nil) || (self.selectedArray_property.propset.count == 0) {\n"
      "      return false\n"
      "    }else{\n"
      "      for object in self.selectedArray_property.propset {\n"
      "        if !object.canCopyAndPaste () || !object.canBeDeleted () {\n"
      "          return false\n"
      "        }\n"
      "      }\n"
      "      return true\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func cutSelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, pasteOffset : CanariPoint) {\n"
      "    self.copySelectedObjectsIntoPasteboard (inPasteboardType, pasteOffset: pasteOffset)\n"
      "    self.deleteSelectedObjects ()\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func canCopy (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n"
      "    return self.canCut (inPasteboardType)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func copySelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?,\n"
      "                                          pasteOffset : CanariPoint) {\n"
      "    if let pasteboardType = inPasteboardType {\n"
      "    //--- Declare pasteboard types\n"
      "      let pb = NSPasteboard.general\n"
      "      pb.declareTypes ([pasteboardType, .pdf], owner: self)\n"
      "    //--- Build PDF representation\n"
      "      let indexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "      let objects = mModel\?.propval \?\? []\n"
      "      let shape = EBShape ()\n"
      "      for idx in indexArray {\n"
      "        let object = objects [idx]\n"
      "        if let s = object.objectDisplay {\n"
      "          shape.append (s)\n"
      "        }\n"
      "      }\n"
      "      let pdfData = buildPDFimageData (frame: shape.boundingBox, shape: shape)\n"
      "      pb.setData (pdfData, forType: .pdf)\n"
      "   //--- Build private representation\n"
      "      var objectDictionaryArray = [NSDictionary] ()\n"
      "      for idx in indexArray {\n"
      "        let object = objects [idx]\n"
      "        let d = NSMutableDictionary ()\n"
      "        object.saveIntoDictionary (d)\n"
      "        objectDictionaryArray.append (d)\n"
      "      }\n"
      "    //--- Copy private representation(s)\n"
      "      let dataDictionary : NSDictionary = [\n"
      "        \"OBJECTS\" : objectDictionaryArray,\n"
      "        \"X\" : pasteOffset.x,\n"
      "        \"Y\" : pasteOffset.y\n"
      "      ]\n"
      "      pb.setPropertyList (dataDictionary, forType: pasteboardType)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func canPaste (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n"
      "    if let pasteboardType = inPasteboardType {\n"
      "      let pb = NSPasteboard.general\n"
      "      return pb.availableType (from: [pasteboardType]) != nil\n"
      "    }else{\n"
      "      return false\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "   func pasteFromPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?) {\n"
      "    let pb = NSPasteboard.general\n"
      "    if let pasteboardType = inPasteboardType,\n"
      "       pb.availableType (from: [pasteboardType]) != nil,\n"
      "       let dataDictionary = pb.propertyList (forType: pasteboardType) as\? NSDictionary,\n"
      "       let array = dataDictionary [\"OBJECTS\"] as\? [NSDictionary],\n"
      "       let X = dataDictionary [\"X\"] as\? Int,\n"
      "       let Y = dataDictionary [\"Y\"] as\? Int {\n"
      "      var newObjects = [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "] ()\n"
      "      for dictionary in array {\n"
      "        if let object = makeManagedObjectFromDictionary (self.ebUndoManager, dictionary) as\? " ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << " {\n"
      "          object.operationAfterPasting ()\n"
      "          object.translate (xBy: X, yBy: Y)\n"
      "          newObjects.append (object)\n"
      "        }\n"
      "      }\n"
      "      var objects = self.mModel\?.propval \?\? []\n"
      "      objects += newObjects\n"
      "      self.mModel\?.setProp (objects)\n"
      "      self.selectedSet = Set (newObjects)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func canDelete () -> Bool {\n"
      "    if self.selectedArray_property.propset.count == 0 {\n"
      "      return false\n"
      "    }else{\n"
      "      for object in self.selectedArray_property.propset {\n"
      "        if !object.canBeDeleted () {\n"
      "          return false\n"
      "        }\n"
      "      }\n"
      "      return true\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var mAfterObjectRemovingCallback : Optional < () -> Void > = nil\n"
      "  \n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func deleteSelectedObjects () {\n"
      "    if self.canDelete () {\n"
      "    //--- Remove selected objects\n"
      "      var objects = self.mModel\?.propval \?\? []\n"
      "      for object in self.selectedArray_property.propset {\n"
      "        if let idx = objects.firstIndex (of: object) {\n"
      "         object.operationBeforeRemoving ()\n"
      "         objects.remove (at: idx)\n"
      "        }\n"
      "      }\n"
      "      self.mModel\?.setProp (objects)\n"
      "      self.selectedSet = Set ()\n"
      "    //---\n"
      "      self.mAfterObjectRemovingCallback\? ()\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func selectAllObjects () {\n"
      "    let objects = self.mModel\?.propval \?\? []\n"
      "    self.selectedSet = Set (objects)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // BRING FORWARD\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canBringForward_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canBringForward : Bool {\n"
      "    let objects = self.mModel\?.propval \?\? []\n"
      "    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n"
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
      "    var objects = self.mModel\?.propval \?\? []\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    for idx in sortedIndexArray.reversed () {\n"
      "       let object = objects [idx]\n"
      "       objects.remove (at: idx)\n"
      "       objects.insert (object, at: idx+1)\n"
      "    }\n"
      "    self.mModel\?.setProp (objects)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // BRING TO FRONT\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canBringToFront_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canBringToFront : Bool {\n"
      "    let objects = self.mModel\?.propval \?\? []\n"
      "    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n"
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
      "    var objects = self.mModel\?.propval \?\? []\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    for idx in sortedIndexArray {\n"
      "      let object = objects [idx]\n"
      "      objects.remove (at: idx)\n"
      "      objects.append (object)\n"
      "    }\n"
      "    self.mModel\?.setProp (objects)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // SEND BACKWARD\n"
      "   // MARK: -\n"
      " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canSendBackward_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canSendBackward : Bool {\n"
      "    let objects = self.mModel\?.propval \?\? []\n"
      "    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n"
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
      "    var objects = self.mModel\?.propval \?\? []\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    for idx in sortedIndexArray.reversed () {\n"
      "      let object = objects [idx]\n"
      "      objects.remove (at: idx)\n"
      "      objects.insert (object, at: idx-1)\n"
      "    }\n"
      "    self.mModel\?.setProp (objects)\n"
      "  }\n"
      "  \n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // SEND TO BACK\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canSendToBack_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func sendToBack () {\n"
      "    var objects = self.mModel\?.propval \?\? []\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    for idx in sortedIndexArray.reversed () {\n"
      "      let object = objects [idx]\n"
      "      objects.remove (at: idx)\n"
      "      objects.insert (object, at: 0)\n"
      "    }\n"
      "    self.mModel\?.setProp (objects)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canSendToBack : Bool {\n"
      "    let objects = self.mModel\?.propval \?\? []\n"
      "    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n"
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
      "  // SNAP TO GRID\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func snapToGrid (_ inGrid : Int) {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      object.snapToGrid (inGrid)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func canSnapToGrid (_ inGrid : Int) -> Bool {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      if object.canSnapToGrid (inGrid) {\n"
      "        return true\n"
      "      }\n"
      "    }\n"
      "    return false\n"
      "  }\n"
      "\n"
      "\n"
      " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // HORIZONTAL FLIP\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canFlipHorizontally_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func flipHorizontally () {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      object.flipHorizontally ()\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canFlipHorizontally : Bool {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      if !object.canFlipHorizontally () {\n"
      "        return false\n"
      "      }\n"
      "    }\n"
      "    return self.selectedArray_property.propset.count > 0\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // VERTICAL FLIP\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canFlipVertically_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func flipVertically () {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      object.flipVertically ()\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canFlipVertically : Bool {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      if !object.canFlipVertically () {\n"
      "        return false\n"
      "      }\n"
      "    }\n"
      "    return self.selectedArray_property.propset.count > 0\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // ROTATE 90 CLOCKWISE\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canRotate90Clockwise_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func rotate90Clockwise () {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      object.rotate90Clockwise ()\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canRotate90Clockwise : Bool {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      if object.canRotate90Clockwise () {\n"
      "        return true\n"
      "      }\n"
      "    }\n"
      "    return false\n"
      "  }\n"
      "\n"
      " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // ROTATE 90 COUNTER CLOCKWISE\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canRotate90CounterClockwise_property = EBTransientProperty_Bool ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func rotate90CounterClockwise () {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      object.rotate90CounterClockwise ()\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canRotate90CounterClockwise : Bool {\n"
      "    for object in self.selectedArray_property.propset {\n"
      "      if object.canRotate90CounterClockwise () {\n"
      "        return true\n"
      "      }\n"
      "    }\n"
      "    return false\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func addToSelection (objectsWithIndex inIndexes : [Int]) {\n"
      "    let objects = self.mModel\?.propval \?\? []\n"
      "    var newSelectedSet = self.selectedArray_property.propset\n"
      "    for idx in inIndexes {\n"
      "      let newSelectedObject = objects [idx]\n"
      "      newSelectedSet.insert (newSelectedObject)\n"
      "    }\n"
      "    self.selectedSet = newSelectedSet\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func removeFromSelection (objectWithIndex inIndex : Int) {\n"
      "    let objects = self.mModel\?.propval \?\? []\n"
      "    let object = objects [inIndex]\n"
      "    var newSelectedSet = self.selectedArray_property.propset\n"
      "    newSelectedSet.remove (object)\n"
      "    self.selectedSet = newSelectedSet\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func clearSelection () {\n"
      "    self.selectedSet = []\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func setSelection (objectsWithIndexes inIndexes : [Int]) {\n"
      "    let objects = self.mModel\?.propval \?\? []\n"
      "    var selectedObjects = [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "] ()\n"
      "    for index in inIndexes {\n"
      "      let newSelectedObject = objects [index]\n"
      "      selectedObjects.append (newSelectedObject)\n"
      "    }\n"
      "    self.selectedSet = Set (selectedObjects)\n"
      "  }\n" ;
  }else if (kBoolFalse == test_6) {
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  // MARK: -\n"
    "  //  INSPECTOR\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mInspectorReceivingView : NSView\? = nil\n"
    "  private var mCurrentAttachedView : NSView\? = nil\n"
    "  private var mInspectorDictionary = [String : NSView] ()\n"
    "  private var mInspectorObserver = EBOutletEvent ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func register (inspectorReceivingView : NSView\?) {\n"
    "    self.mInspectorReceivingView = inspectorReceivingView\n"
    "    self.updateInspectorViews ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func register (inspectorView : NSView\?, forClass inClassName : String) {\n"
    "    self.mInspectorDictionary [inClassName] = inspectorView\n"
    "    self.updateInspectorViews ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private func inspectorViewManagerStartsObservingSelection () {\n"
    "    self.selectedArray_property.addEBObserver (self.mInspectorObserver)\n"
    "    self.mInspectorObserver.mEventCallBack = { [weak self] in self\?.updateInspectorViews () }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private func inspectorViewManagerStopsObservingSelection () {\n"
    "    self.mInspectorObserver.mEventCallBack = nil\n"
    "    self.selectedArray_property.removeEBObserver (self.mInspectorObserver)\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private func updateInspectorViews () {\n"
    "    if let inspectorView = self.mInspectorReceivingView {\n"
    "    //--- Remove current attached view\n"
    "      self.mCurrentAttachedView\?.removeFromSuperview ()\n"
    "    //--- Add the new attached view\n"
    "      if self.selectedArray_property.propset.count == 0 {\n"
    "        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n"
    "        inspectorView.addSubview (tf)\n"
    "        self.mCurrentAttachedView = tf\n"
    "      }else{\n"
    "        var classNames = Set <String> ()\n"
    "        for object in self.selectedArray_property.propset {\n"
    "          let className = String (describing: type (of: object))\n"
    "          classNames.insert (className)\n"
    "        }\n"
    "        if classNames.count > 1 {\n"
    "          let tf = self.textField (\"Multiple Selection\", inspectorView.frame)\n"
    "          inspectorView.addSubview (tf)\n"
    "          self.mCurrentAttachedView = tf\n"
    "        }else if let selectionInspectorView = self.mInspectorDictionary [classNames.first!] {\n"
    "          selectionInspectorView.frame = inspectorView.frame\n"
    "          inspectorView.addSubview (selectionInspectorView)\n"
    "          self.mCurrentAttachedView = selectionInspectorView\n"
    "        }else{\n"
    "          let tf = self.textField (\"No Inspector for this Selection\", inspectorView.frame)\n"
    "          inspectorView.addSubview (tf)\n"
    "          self.mCurrentAttachedView = tf\n"
    "        }\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private func textField (_ inString : String, _ inspectorFrame : NSRect) -> NSTextField {\n"
    "    let textHeight : CGFloat = 30.0\n"
    "    let r = NSRect (\n"
    "      x: 0.0,\n"
    "      y: inspectorFrame.origin.y + (inspectorFrame.size.height - textHeight) / 2.0,\n"
    "      width: inspectorFrame.size.width,\n"
    "      height: textHeight\n"
    "    )\n"
    "    let tf = NSTextField (frame: r)\n"
    "    tf.alignment = .center\n"
    "    tf.isBezeled = false\n"
    "    tf.isBordered = false\n"
    "    tf.drawsBackground = false\n"
    "    tf.isEnabled = true\n"
    "    tf.isEditable = false\n"
    "    tf.autoresizingMask = [.width, .minYMargin, .maxYMargin]\n"
    "    tf.stringValue = inString\n"
    "    tf.font = NSFont.boldSystemFont (ofSize: NSFont.systemFontSize * 1.25)\n"
    "    tf.textColor = NSColor.lightGray\n"
    "    return tf\n"
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

