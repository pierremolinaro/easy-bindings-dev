#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateOutletClasses'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateOutletClasses (const GALGAS_stringset constinArgument_inNeededOutletClasses,
                                    const GALGAS_string constinArgument_inOutputDirectory,
                                    GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapper var_w_6319 = GALGAS_filewrapper (gWrapperDirectory_0_outletClassGeneration) ;
  cEnumerator_stringset enumerator_6392 (constinArgument_inNeededOutletClasses, kENUMERATION_UP) ;
  while (enumerator_6392.hasCurrentObject ()) {
    GALGAS_string var_s_6405 = var_w_6319.getter_textFileContentsAtPath (GALGAS_string ("/").add_operation (enumerator_6392.current (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 188)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 188)) ;
    GALGAS_string var_fileName_6473 = enumerator_6392.current (HERE).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 189)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_6473  COMMA_SOURCE_FILE ("outlet-class.galgas", 190)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_6473, var_s_6405, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 191)) ;
    }
    enumerator_6392.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                           const GALGAS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_outletClassBindingSpecificationList enumerator_4522 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_4522.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4602 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.galgas", 129)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4663 (enumerator_4522.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4663.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4663.current_mModelTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_4602.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.galgas", 133)), GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.galgas", 133))  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 133)), enumerator_4663.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 132)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_4988 ;
        GALGAS_propertyMap joker_4990_3 ; // Joker input parameter
        GALGAS_actionMap joker_4990_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4990_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (enumerator_4663.current_mModelTypeName (HERE), var_classKind_4988, joker_4990_3, joker_4990_2, joker_4990_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 136)) ;
        GALGAS_typeKind var_typeKind_5020 ;
        switch (var_classKind_4988.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4663.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("outlet-binding-specification.galgas", 140)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 140)) ;
            var_typeKind_5020.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_5210 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4988.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_kind = extractPtr_5210->mAssociatedValue0 ;
            var_typeKind_5020 = extractedValue_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4663.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("outlet-binding-specification.galgas", 144)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 144)) ;
            var_typeKind_5020.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4663.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("outlet-binding-specification.galgas", 146)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 146)) ;
            var_typeKind_5020.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_4602.addAssign_operation (var_typeKind_5020, enumerator_4663.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 148)) ;
      }
      enumerator_4663.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5621 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.galgas", 151)) ;
    cEnumerator_controllerBindingOptionList enumerator_5659 (enumerator_4522.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5659.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_5750 ;
      GALGAS_propertyMap joker_5752_3 ; // Joker input parameter
      GALGAS_actionMap joker_5752_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5752_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (enumerator_5659.current_mOptionTypeName (HERE), var_classKind_5750, joker_5752_3, joker_5752_2, joker_5752_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 153)) ;
      GALGAS_typeKind var_typeKind_5780 ;
      switch (var_classKind_5750.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5659.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("outlet-binding-specification.galgas", 157)), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 157)) ;
          var_typeKind_5780.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_5961 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5750.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_kind = extractPtr_5961->mAssociatedValue0 ;
          var_typeKind_5780 = extractedValue_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5659.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("outlet-binding-specification.galgas", 161)), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 161)) ;
          var_typeKind_5780.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5659.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("outlet-binding-specification.galgas", 163)), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 163)) ;
          var_typeKind_5780.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5621.addAssign_operation (var_typeKind_5780, enumerator_5659.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 165)) ;
      enumerator_5659.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_6330 ;
    GALGAS_lstring var_outletSuperClassName_6364 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.getter_mBindingSpecificationMap (HERE).getter_hasKey (enumerator_4522.current_mOutletClassName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 170)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4522.current_mOutletClassName (HERE), var_outletSuperClassName_6364, var_bindingMap_6330, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 171)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_6330 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.galgas", 173)) ;
      GALGAS_bool joker_6692_6 ; // Joker input parameter
      GALGAS_bool joker_6692_5 ; // Joker input parameter
      GALGAS_bool joker_6692_4 ; // Joker input parameter
      GALGAS_bool joker_6692_3 ; // Joker input parameter
      GALGAS_bool joker_6692_2 ; // Joker input parameter
      GALGAS_bool joker_6692_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mOutletClassMap (HERE).method_searchKey (enumerator_4522.current_mOutletClassName (HERE), var_outletSuperClassName_6364, joker_6692_6, joker_6692_5, joker_6692_4, joker_6692_3, joker_6692_2, joker_6692_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 174)) ;
    }
    {
    var_bindingMap_6330.setter_insertKey (enumerator_4522.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4602, var_controllerBindingOptionDecoratedList_5621, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 176)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4522.current_mOutletClassName (HERE), var_outletSuperClassName_6364, var_bindingMap_6330, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 181)) ;
    }
    enumerator_4522.gotoNextObject () ;
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
  cEnumerator_outletDeclarationList enumerator_7941 (constinArgument_inOutletDeclarationList, kENUMERATION_UP) ;
  while (enumerator_7941.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_7941.current_mOutletName (HERE), enumerator_7941.current_mOutletTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 208)) ;
    }
    GALGAS_bool var_handlesRunAction_8145 ;
    GALGAS_bool var_handlesTableViewBinding_8186 ;
    GALGAS_bool var_handlesEnabledBinding_8225 ;
    GALGAS_bool var_handlesHiddenBinding_8263 ;
    GALGAS_bool var_handleGraphicControllerBinding_8311 ;
    GALGAS_bool var_outletClassIsUserDefined_8353 ;
    GALGAS_lstring joker_8110 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mOutletClassMap (HERE).method_searchKey (enumerator_7941.current_mOutletTypeName (HERE), joker_8110, var_handlesRunAction_8145, var_handlesTableViewBinding_8186, var_handlesEnabledBinding_8225, var_handlesHiddenBinding_8263, var_handleGraphicControllerBinding_8311, var_outletClassIsUserDefined_8353, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 209)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_outletClassIsUserDefined_8353.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_7941.current_mOutletTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 220)) ;
      }
    }
    switch (enumerator_7941.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_10819 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_7941.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_10819->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_10819->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_handleGraphicControllerBinding_8311.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 226)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_7941.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 227)), GALGAS_string ("the '").add_operation (enumerator_7941.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 227)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 227)), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 227)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_propertyKind var_kind_8921 ;
          GALGAS_actionMap joker_8933_2 ; // Joker input parameter
          GALGAS_bool joker_8933_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_kind_8921, joker_8933_2, joker_8933_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 229)) ;
          switch (var_kind_8921.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 236)), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 236)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 238)), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 238)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 240)), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 240)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_10568 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_8921.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_entityName = extractPtr_10568->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_graphic = extractPtr_10568->mAssociatedValue1 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = extractedValue_graphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 243)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 244)), GALGAS_string ("the controlled entity (").add_operation (extractedValue_entityName.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 244)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                GALGAS_propertyMap var_observablePropertyMap_9694 ;
                GALGAS_classKind joker_9652 ; // Joker input parameter
                GALGAS_actionMap joker_9710_2 ; // Joker input parameter
                GALGAS_propertyGenerationList joker_9710_1 ; // Joker input parameter
                constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_entityName, joker_9652, var_observablePropertyMap_9694, joker_9710_2, joker_9710_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 247)) ;
                GALGAS_propertyKind var_propertyKind_9803 ;
                GALGAS_actionMap joker_9805_2 ; // Joker input parameter
                GALGAS_bool joker_9805_1 ; // Joker input parameter
                var_observablePropertyMap_9694.method_searchKey (extractedValue_propertyName, var_propertyKind_9803, joker_9805_2, joker_9805_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 253)) ;
                switch (var_propertyKind_9803.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <C_FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 256)), GALGAS_string ("the bound model should be a toMany property"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 256)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10177 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_9803.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_kEntityName = extractPtr_10177->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_isGraphic = extractPtr_10177->mAssociatedValue2 ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = extractedValue_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 258)).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        TC_Array <C_FixItDescription> fixItArray11 ;
                        inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 259)), GALGAS_string ("the controlled entity (").add_operation (extractedValue_kEntityName.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 259)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 259)), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 259)) ;
                      }
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 262)), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 262)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 264)), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 264)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 266)), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 266)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 270)), GALGAS_string ("the bound model should be an array controller"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 270)) ;
            }
            break ;
          }
          outArgument_outEBViewGraphicControllerBindingGenerationList.addAssign_operation (enumerator_7941.current_mOutletName (HERE).getter_string (HERE), extractedValue_controllerName.getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 272)) ;
        }
      }
      break ;
    }
    switch (enumerator_7941.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_11530 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_7941.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_11530->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_handlesTableViewBinding_8186.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 279)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_7941.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 280)), GALGAS_string ("the '").add_operation (enumerator_7941.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 280)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 280)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 280)) ;
          }
        }
        if (kBoolFalse == test_16) {
          GALGAS_propertyKind var_kind_11263 ;
          GALGAS_actionMap joker_11275_2 ; // Joker input parameter
          GALGAS_bool joker_11275_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_kind_11263, joker_11275_2, joker_11275_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 282)) ;
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_kind_11263.getter_isArrayController (SOURCE_FILE ("outlet-declaration.galgas", 287)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 287)).boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 288)), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 288)) ;
            }
          }
          outArgument_outTableViewBindingGenerationList.addAssign_operation (enumerator_7941.current_mOutletName (HERE).getter_string (HERE), extractedValue_controllerName.getter_string (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 290)) ;
        }
      }
      break ;
    }
    switch (enumerator_7941.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_12495 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_7941.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_target = extractPtr_12495->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_action = extractPtr_12495->mAssociatedValue1 ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_handlesRunAction_8145.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 297)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_7941.current_mOutletTypeName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 298)), GALGAS_string ("the '").add_operation (enumerator_7941.current_mOutletTypeName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 298)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 298)), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 298)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, extractedValue_target.getter_string (HERE).objectCompare (GALGAS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              constinArgument_inActionMap.method_searchKey (extractedValue_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 300)) ;
              outArgument_outTargetActionList.addAssign_operation (enumerator_7941.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("self"), extractedValue_action.getter_string (HERE), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 301)) ;
            }
          }
          if (kBoolFalse == test_22) {
            GALGAS_actionMap var_controllerActionMap_12179 ;
            GALGAS_propertyKind joker_12132 ; // Joker input parameter
            GALGAS_bool joker_12191 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_target, joker_12132, var_controllerActionMap_12179, joker_12191, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 307)) ;
            var_controllerActionMap_12179.method_searchKey (extractedValue_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 313)) ;
            GALGAS_string temp_23 ;
            const enumGalgasBool test_24 = constinArgument_inPreferences.boolEnum () ;
            if (kBoolTrue == test_24) {
              temp_23 = GALGAS_string ("preferences_") ;
            }else if (kBoolFalse == test_24) {
              temp_23 = GALGAS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.addAssign_operation (enumerator_7941.current_mOutletName (HERE).getter_string (HERE), temp_23.add_operation (extractedValue_target.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 316)), extractedValue_action.getter_string (HERE), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 318)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 318)).add_operation (extractedValue_target.getter_string (SOURCE_FILE ("outlet-declaration.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 318))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 314)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_7941.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_13345 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_7941.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_expression = extractPtr_13345->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_12919 ;
        GALGAS_typeKind var_type_12947 ;
        GALGAS_location var_errorLocation_12984 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_enableExpression_12919, var_type_12947, var_errorLocation_12984, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 325)) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_handlesEnabledBinding_8225.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 334)).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (var_errorLocation_12984, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 335)) ;
          }
        }
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          test_27 = var_type_12947.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 337)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 337)).boolEnum () ;
          if (kBoolTrue == test_27) {
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (var_errorLocation_12984, GALGAS_string ("expression is not boolean"), fixItArray28  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 338)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_7941.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("enabled"), var_enableExpression_12919  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 340)) ;
      }
      break ;
    }
    switch (enumerator_7941.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_14190 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_7941.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_expression = extractPtr_14190->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_13767 ;
        GALGAS_typeKind var_type_13795 ;
        GALGAS_location var_errorLocation_13832 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, var_hiddenExpression_13767, var_type_13795, var_errorLocation_13832, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 349)) ;
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = var_type_13795.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas", 358)).operator_not (SOURCE_FILE ("outlet-declaration.galgas", 358)).boolEnum () ;
          if (kBoolTrue == test_29) {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (var_errorLocation_13832, GALGAS_string ("expression is not boolean"), fixItArray30  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 359)) ;
          }
        }
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesHiddenBinding_8263.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 361)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_13832, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 362)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_7941.current_mOutletName (HERE).getter_string (HERE), GALGAS_string ("hidden"), var_hiddenExpression_13767  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 364)) ;
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
    routine_analyzeRegularBinding (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_7941.current_mOutletTypeName (HERE), enumerator_7941.current_mOutletName (HERE).getter_string (HERE), enumerator_7941.current_mRegularBindingList (HERE), temp_33, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 370)) ;
    }
    enumerator_7941.gotoNextObject () ;
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
  cEnumerator_regularBindingList enumerator_15178 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_15178.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_15249 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 399)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_15303 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 400)) ;
    cEnumerator_observablePropertyList enumerator_15346 (enumerator_15178.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_15346.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_15517 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_15589 ;
      extensionMethod_analyzeObservableProperty (enumerator_15346.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_15517, var_swiftTypeStringForTransientFunctionArgument_15589, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 402)) ;
      switch (var_kind_15517.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15346.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 412)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 412)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15346.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 414)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 414)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15346.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 416)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 416)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15346.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 418)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 418)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_15303.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_15346.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 420)), var_kind_15517  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 420)) ;
      var_boundModelTypeList_15249.addAssign_operation (var_kind_15517, extensionGetter_location (enumerator_15346.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 421))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 421)) ;
      enumerator_15346.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_16390 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 424)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_16474 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 425)) ;
    GALGAS_lstring var_outletTypeName_16502 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_16539 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 428)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 428)).isValid ()) {
      uint32_t variant_16555 = constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas", 428)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 428)).uintValue () ;
      bool loop_16555 = true ;
      while (loop_16555) {
        loop_16555 = GALGAS_bool (kIsNotEqual, var_outletTypeName_16502.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_16539 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 428)).isValid () ;
        if (loop_16555) {
          loop_16555 = GALGAS_bool (kIsNotEqual, var_outletTypeName_16502.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_16539 COMMA_SOURCE_FILE ("outlet-declaration.galgas", 428)).boolValue () ;
        }
        if (loop_16555 && (0 == variant_16555)) {
          loop_16555 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.galgas", 428)) ;
        }
        if (loop_16555) {
          variant_16555 -- ;
          var_continues_16539 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_16805 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_16860 ;
          constinArgument_inSemanticContext.getter_mBindingSpecificationMap (HERE).method_searchKey (var_outletTypeName_16502, var_superOutletClassName_16805, var_bindingMap_16860, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 430)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_bindingMap_16860.getter_hasKey (enumerator_15178.current_mBindingName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("outlet-declaration.galgas", 435)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_bindingMap_16860.method_searchKey (enumerator_15178.current_mBindingName (HERE), var_outletBindingSpecificationModelList_16390, var_controllerBindingOptionDecoratedList_16474, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 436)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_continues_16539 = GALGAS_bool (true) ;
            var_outletTypeName_16502 = var_superOutletClassName_16805 ;
          }
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_continues_16539.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_15178.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 447)), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 447)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_15249.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 448)).objectCompare (var_outletBindingSpecificationModelList_16390.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 448)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_15178.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 449)), var_outletBindingSpecificationModelList_16390.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 450)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 450)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 450)).add_operation (var_boundModelTypeList_15249.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 452)).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 451)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 452)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 449)) ;
        }
      }
      if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_17611 (var_outletBindingSpecificationModelList_16390, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_17644 (var_boundModelTypeList_15249, kENUMERATION_UP) ;
        while (enumerator_17611.hasCurrentObject () && enumerator_17644.hasCurrentObject ()) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            GALGAS_bool test_10 = enumerator_17611.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_isTransient (enumerator_17644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 455)) ;
            }
            test_9 = test_10.boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_17644.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 456)) ;
            }
          }
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            GALGAS_bool test_13 = enumerator_17611.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.galgas", 458)) ;
            if (kBoolTrue == test_13.boolEnum ()) {
              test_13 = extensionGetter_isEnumType (enumerator_17644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 458)) ;
            }
            test_12 = test_13.boolEnum () ;
            if (kBoolTrue == test_12) {
            }
          }
          if (kBoolFalse == test_12) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_17611.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 459)).objectCompare (extensionGetter_swiftTypeName (enumerator_17644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 459)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_17644.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_17611.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 460)) ;
              }
            }
          }
          enumerator_17611.gotoNextObject () ;
          enumerator_17644.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_18203 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_16474.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 466)).objectCompare (enumerator_15178.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("outlet-declaration.galgas", 466)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_s_18313 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_16474.getter_length (SOURCE_FILE ("outlet-declaration.galgas", 468)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_s_18313 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_17) {
          var_s_18313 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_18545 (var_controllerBindingOptionDecoratedList_16474, kENUMERATION_UP) ;
          while (enumerator_18545.hasCurrentObject ()) {
            var_s_18313.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_18545.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)).add_operation (extensionGetter_swiftTypeName (enumerator_18545.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 473)) ;
            enumerator_18545.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_15178.current_mBindingName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 476)), var_s_18313, fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 476)) ;
      }
    }
    if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_18749 (var_controllerBindingOptionDecoratedList_16474, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_18784 (enumerator_15178.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_18749.hasCurrentObject () && enumerator_18784.hasCurrentObject ()) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsNotEqual, enumerator_18749.current_mOptionName (HERE).getter_string (HERE).objectCompare (enumerator_18784.current_mOptionName (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_18784.current_mOptionName (HERE).getter_location (SOURCE_FILE ("outlet-declaration.galgas", 480)), GALGAS_string ("the option name should be '").add_operation (enumerator_18749.current_mOptionName (HERE).getter_string (SOURCE_FILE ("outlet-declaration.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 480)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 480)), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 480)) ;
          }
        }
        GALGAS_string var_optionValueAsString_19145 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 483)) ;
        temp_21.addAssign_operation (enumerator_18749.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 483)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_18784.current_mOptionValue (HERE).ptr (), temp_21, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_19145, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 482)) ;
        var_bindingOptionString_18203.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_18749.current_mOptionName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 487)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 487)).add_operation (var_optionValueAsString_19145, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 487)) ;
        enumerator_18749.gotoNextObject () ;
        enumerator_18784.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_15178.current_mBindingName (HERE).getter_string (HERE), var_boundModelListForGeneration_15303, var_bindingOptionString_18203  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 491)) ;
    enumerator_15178.gotoNextObject () ;
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
  GALGAS_lstring var_node_727 = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 16)).add_operation (temp_1.getter_mComputedPropertyName (HERE).getter_string (SOURCE_FILE ("computed-property.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 16)), temp_2.getter_mComputedPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 16)) ;
  {
  const GALGAS_computedPropertyDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_727, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 17)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_727, temp_4.getter_mClassName (HERE) COMMA_SOURCE_FILE ("computed-property.galgas", 18)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_727, temp_5.getter_mComputedPropertyTypeName (HERE) COMMA_SOURCE_FILE ("computed-property.galgas", 19)) ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_6 = object ;
  cEnumerator_observablePropertyList enumerator_1020 (temp_6.getter_mDependencyList (HERE), kENUMERATION_UP) ;
  while (enumerator_1020.hasCurrentObject ()) {
    switch (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1277 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1277->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_computedPropertyDeclarationAST temp_8 = object ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_9 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_9.getter_mRootEntityName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 24)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 24)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 24)) COMMA_SOURCE_FILE ("computed-property.galgas", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1501 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1501->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_computedPropertyDeclarationAST temp_11 = object ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_12 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_12.getter_mRootEntityName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 28)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 28)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 28)) COMMA_SOURCE_FILE ("computed-property.galgas", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1739 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_1739->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_computedPropertyDeclarationAST temp_14 = object ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_15 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_15.getter_mRootEntityName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 32)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("computed-property.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 32)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 32)) COMMA_SOURCE_FILE ("computed-property.galgas", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1967 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_1967->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_computedPropertyDeclarationAST temp_17 = object ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_18 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_18.getter_mRootEntityName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 36)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("computed-property.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 36)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 36)) COMMA_SOURCE_FILE ("computed-property.galgas", 36)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2149 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2149->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_19 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_19.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 40)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 40)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 40)) COMMA_SOURCE_FILE ("computed-property.galgas", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2317 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2317->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_20 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_20.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 42)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 42)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 42)) COMMA_SOURCE_FILE ("computed-property.galgas", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2480 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2480->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_21 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_21.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 44)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 44)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 44)) COMMA_SOURCE_FILE ("computed-property.galgas", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2644 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2644->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_22 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_22.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 46)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 46)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 46)) COMMA_SOURCE_FILE ("computed-property.galgas", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2804 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2804->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_23 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_23.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 48)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 48)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 48)) COMMA_SOURCE_FILE ("computed-property.galgas", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2957 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2957->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 50)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 50)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 50)) COMMA_SOURCE_FILE ("computed-property.galgas", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3122 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3122->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 52)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 52)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 52)) COMMA_SOURCE_FILE ("computed-property.galgas", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3315 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3315->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3315->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_24 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_24.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 54)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("computed-property.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 54)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 54)) COMMA_SOURCE_FILE ("computed-property.galgas", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3546 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3546->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3546->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_3546->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_25 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_25.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 56)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("computed-property.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 56)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 56)) COMMA_SOURCE_FILE ("computed-property.galgas", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3773 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3773->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3773->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_3773->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_26 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_26.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 58)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("computed-property.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 58)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 58)) COMMA_SOURCE_FILE ("computed-property.galgas", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3969 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3969->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3969->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_27 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (temp_27.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 60)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("computed-property.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 60)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 60)) COMMA_SOURCE_FILE ("computed-property.galgas", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4258 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1020.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_superEntityName = extractPtr_4258->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_4258->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_727, GALGAS_lstring::constructor_new (extractedValue_superEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 65)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("computed-property.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 65)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 65)) COMMA_SOURCE_FILE ("computed-property.galgas", 65)) ;
        }
      }
      break ;
    }
    enumerator_1020.gotoNextObject () ;
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
  result_result = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 73)).add_operation (temp_1.getter_mComputedPropertyName (HERE).getter_string (SOURCE_FILE ("computed-property.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 73)), temp_2.getter_mComputedPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("computed-property.galgas", 73)) ;
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
  cMapElement_classMap * objectArray_6985 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.galgas", 149)) ;
  if (NULL != objectArray_6985) {
    macroValidSharedObject (objectArray_6985, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7158 ;
    const GALGAS_computedPropertyDeclarationAST temp_1 = object ;
    GALGAS_propertyMap joker_7160_3 ; // Joker input parameter
    GALGAS_actionMap joker_7160_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7160_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_1.getter_mComputedPropertyTypeName (HERE), var_classKind_7158, joker_7160_3, joker_7160_2, joker_7160_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 152)) ;
    switch (var_classKind_7158.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_computedPropertyDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.getter_mComputedPropertyTypeName (HERE).getter_location (SOURCE_FILE ("computed-property.galgas", 155)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("computed-property.galgas", 155)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7468 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7158.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_7468->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_4 = object ;
        objectArray_6985->mProperty_mPropertyMap.setter_insertKey (temp_4.getter_mComputedPropertyName (HERE), GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_computed (SOURCE_FILE ("computed-property.galgas", 159))  COMMA_SOURCE_FILE ("computed-property.galgas", 159)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("computed-property.galgas", 160)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 157)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_computedPropertyDeclarationAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mComputedPropertyTypeName (HERE).getter_location (SOURCE_FILE ("computed-property.galgas", 164)), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.galgas", 164)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_computedPropertyDeclarationAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mComputedPropertyTypeName (HERE).getter_location (SOURCE_FILE ("computed-property.galgas", 166)), GALGAS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("computed-property.galgas", 166)) ;
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
  GALGAS_classKind var_classKind_8221 ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = object ;
  GALGAS_propertyMap joker_8223_3 ; // Joker input parameter
  GALGAS_actionMap joker_8223_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8223_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_0.getter_mComputedPropertyTypeName (HERE), var_classKind_8221, joker_8223_3, joker_8223_2, joker_8223_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 180)) ;
  GALGAS_typeKind var_typeKind_8263 ;
  switch (var_classKind_8221.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_computedPropertyDeclarationAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mComputedPropertyTypeName (HERE).getter_location (SOURCE_FILE ("computed-property.galgas", 185)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.galgas", 185)) ;
      var_typeKind_8263.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8438 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8221.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_kind = extractPtr_8438->mAssociatedValue0 ;
      var_typeKind_8263 = extractedValue_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_computedPropertyDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mComputedPropertyTypeName (HERE).getter_location (SOURCE_FILE ("computed-property.galgas", 189)), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.galgas", 189)) ;
      var_typeKind_8263.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_computedPropertyDeclarationAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mComputedPropertyTypeName (HERE).getter_location (SOURCE_FILE ("computed-property.galgas", 191)), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.galgas", 191)) ;
      var_typeKind_8263.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8714 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8714 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("computed-property.galgas", 196)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_9 = object ;
    GALGAS_classKind joker_8856 ; // Joker input parameter
    GALGAS_actionMap joker_8875_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8875_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_9.getter_mRootEntityName (HERE), joker_8856, var_rootProperties_8714, joker_8875_2, joker_8875_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 198)) ;
  }
  GALGAS_classKind var_currentClassKind_8994 ;
  GALGAS_propertyMap var_properties_9010 ;
  const GALGAS_computedPropertyDeclarationAST temp_10 = object ;
  GALGAS_actionMap joker_9012_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_9012_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_10.getter_mClassName (HERE), var_currentClassKind_8994, var_properties_9010, joker_9012_2, joker_9012_1, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 201)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_9099 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("computed-property.galgas", 203)) ;
  const GALGAS_computedPropertyDeclarationAST temp_11 = object ;
  cEnumerator_observablePropertyList enumerator_9137 (temp_11.getter_mDependencyList (HERE), kENUMERATION_UP) ;
  while (enumerator_9137.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9296 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9359 ;
    extensionMethod_analyzeObservableProperty (enumerator_9137.current_mObservableProperty (HERE), var_rootProperties_8714, ioArgument_ioSemanticContext, var_properties_9010, var_dependencyKind_9296, var_swiftTypeStringForTransientFunctionArgument_9359, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 205)) ;
    switch (var_dependencyKind_9296.enumValue ()) {
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
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9137.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 217)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("computed-property.galgas", 217)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9137.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 219)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("computed-property.galgas", 219)) ;
      }
      break ;
    }
    var_dependencies_9099.addAssign_operation (enumerator_9137.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9137.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 223)), var_swiftTypeStringForTransientFunctionArgument_9359  COMMA_SOURCE_FILE ("computed-property.galgas", 221)) ;
    enumerator_9137.gotoNextObject () ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_14 = object ;
  const GALGAS_computedPropertyDeclarationAST temp_15 = object ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.getter_mClassName (HERE).getter_string (SOURCE_FILE ("computed-property.galgas", 227)), temp_15.getter_mComputedPropertyName (HERE).getter_string (HERE), var_typeKind_8263, GALGAS_string ("computed"), var_dependencies_9099  COMMA_SOURCE_FILE ("computed-property.galgas", 226))  COMMA_SOURCE_FILE ("computed-property.galgas", 226)) ;
  const GALGAS_computedPropertyDeclarationAST temp_16 = object ;
  const GALGAS_computedPropertyDeclarationAST temp_17 = object ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_computeRoutineGeneration::constructor_new (temp_16.getter_mClassName (HERE).getter_string (SOURCE_FILE ("computed-property.galgas", 234)), temp_17.getter_mComputedPropertyName (HERE).getter_string (HERE), var_typeKind_8263, var_dependencies_9099  COMMA_SOURCE_FILE ("computed-property.galgas", 233))  COMMA_SOURCE_FILE ("computed-property.galgas", 233)) ;
  const GALGAS_computedPropertyDeclarationAST temp_18 = object ;
  cMapElement_classMap * objectArray_10231 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_18.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.galgas", 239)) ;
  if (NULL != objectArray_10231) {
    macroValidSharedObject (objectArray_10231, cMapElement_classMap) ;
    GALGAS_bool var_generate_10333 ;
    switch (var_currentClassKind_8994.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10333 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10333 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10333 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10722 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_8994.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_10722->mAssociatedValue1 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extractedValue_graphic.boolEnum () ;
          if (kBoolTrue == test_19) {
            const GALGAS_computedPropertyDeclarationAST temp_20 = object ;
            const GALGAS_computedPropertyDeclarationAST temp_21 = object ;
            var_generate_10333 = GALGAS_bool (kIsNotEqual, temp_20.getter_mComputedPropertyName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_21.getter_mComputedPropertyName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.galgas", 252)) ;
          }
        }
        if (kBoolFalse == test_19) {
          var_generate_10333 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_computedPropertyDeclarationAST temp_22 = object ;
    const GALGAS_computedPropertyDeclarationAST temp_23 = object ;
    objectArray_10231->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_computedPropertyGeneration::constructor_new (temp_22.getter_mComputedPropertyName (HERE).getter_string (HERE), temp_23.getter_mClassName (HERE).getter_string (HERE), var_typeKind_8263, var_dependencies_9099, var_generate_10333  COMMA_SOURCE_FILE ("computed-property.galgas", 257))  COMMA_SOURCE_FILE ("computed-property.galgas", 257)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 288)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 289)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 289)) ;
  const GALGAS_computedPropertyGeneration temp_1 = object ;
  const GALGAS_computedPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 290)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 290)).add_operation (extensionGetter_swiftTypeName (temp_2.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 290)).add_operation (GALGAS_string (" ()\n"
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
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 303)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 303)) ;
  const GALGAS_computedPropertyGeneration temp_1 = object ;
  const GALGAS_computedPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 304)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 304)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 304)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 304)) ;
  const GALGAS_computedPropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 305)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 305)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 306)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 310)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 312)) ;
  const GALGAS_computedPropertyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 313)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 315)) ;
  const GALGAS_computedPropertyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 316)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 316)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)).add_operation (extensionGetter_swiftTypeName (temp_7.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 340)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 341)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 342)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 343)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 344)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 345)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 346)) ;
  const GALGAS_computedPropertyGeneration temp_8 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 347)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 347)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 348)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 349)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 350)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 351)) ;
  const GALGAS_computedPropertyGeneration temp_9 = object ;
  const GALGAS_computedPropertyGeneration temp_10 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_9.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)).add_operation (GALGAS_string ("_property.mValidateAndWriteModelFunction = { [weak self] (candidateValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)).add_operation (extensionGetter_swiftTypeName (temp_10.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)).add_operation (GALGAS_string (", windowForSheet : NSWindow\?) in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 352)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 353)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 354)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 355)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 356)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 357)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 358)) ;
  const GALGAS_computedPropertyGeneration temp_11 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            let result = object.").add_operation (temp_11.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 359)).add_operation (GALGAS_string ("_property.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 359)) ;
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
    test_0 = temp_1.getter_mGenerate (HERE).operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.getter_mPropertyName (HERE) COMMA_SOURCE_FILE ("computed-property.galgas", 380)).operator_not (SOURCE_FILE ("computed-property.galgas", 380)) COMMA_SOURCE_FILE ("computed-property.galgas", 380)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 382)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 382)) ;
          const GALGAS_computedPropertyGeneration temp_4 = object ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 383)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 384)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 384)) ;
          const GALGAS_computedPropertyGeneration temp_5 = object ;
          const GALGAS_computedPropertyGeneration temp_6 = object ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)).add_operation (extensionGetter_swiftTypeName (temp_6.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)).add_operation (GALGAS_string (" ()\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 385)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 386)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 386)) ;
          const GALGAS_computedPropertyGeneration temp_7 = object ;
          const GALGAS_computedPropertyGeneration temp_8 = object ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)).add_operation (extensionGetter_swiftTypeName (temp_8.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 387)) ;
          const GALGAS_computedPropertyGeneration temp_9 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    switch preferences_").add_operation (temp_9.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 388)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 388)) ;
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
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 397)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 397)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 398)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 398)) ;
        const GALGAS_computedPropertyGeneration temp_11 = object ;
        const GALGAS_computedPropertyGeneration temp_12 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)).add_operation (extensionGetter_swiftTypeName (temp_12.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)).add_operation (GALGAS_string (" ()\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 399)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 400)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 400)) ;
        const GALGAS_computedPropertyGeneration temp_13 = object ;
        const GALGAS_computedPropertyGeneration temp_14 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_13.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)).add_operation (extensionGetter_swiftTypeName (temp_14.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 401)) ;
        const GALGAS_computedPropertyGeneration temp_15 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    switch self.").add_operation (temp_15.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 402)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 402)) ;
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
  GALGAS_string var_prefix_18480 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_computedPropertyGeneration temp_3 = object ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.getter_mDependencyList (HERE).getter_length (SOURCE_FILE ("computed-property.galgas", 418)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_computedPropertyGeneration temp_4 = object ;
      GALGAS_bool var_needs_5F_unwSelf_18617 = extensionGetter_needs_5F_unwSelf (temp_4.getter_mDependencyList (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 419)) ;
      const GALGAS_computedPropertyGeneration temp_5 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Computed property: ").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 420)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 420)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_18617.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_computedPropertyGeneration temp_7 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_18480, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 422)).add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 422)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 422)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 423)) ;
          const GALGAS_computedPropertyGeneration temp_8 = object ;
          const GALGAS_computedPropertyGeneration temp_9 = object ;
          const GALGAS_computedPropertyGeneration temp_10 = object ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.getter_mDependencyList (HERE), constinArgument_inPreferences, temp_9.getter_mClassName (HERE), temp_10.getter_mPropertyName (HERE), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 424)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 425)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 426)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 427)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_computedPropertyGeneration temp_11 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_18480, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 429)).add_operation (temp_11.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 429)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 429)) ;
        const GALGAS_computedPropertyGeneration temp_12 = object ;
        const GALGAS_computedPropertyGeneration temp_13 = object ;
        const GALGAS_computedPropertyGeneration temp_14 = object ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.getter_mDependencyList (HERE), constinArgument_inPreferences, temp_13.getter_mClassName (HERE), temp_14.getter_mPropertyName (HERE), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 430)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 432)) ;
      const GALGAS_computedPropertyGeneration temp_15 = object ;
      const GALGAS_computedPropertyGeneration temp_16 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_18480, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)).add_operation (temp_15.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)).add_operation (GALGAS_string ("_property.mStoreFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)).add_operation (temp_16.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)).add_operation (GALGAS_string ("_property ($0, $1) \?\? false }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 433)) ;
      const GALGAS_computedPropertyGeneration temp_17 = object ;
      cEnumerator_transientDependencyListForGeneration enumerator_19632 (temp_17.getter_mDependencyList (HERE), kENUMERATION_UP) ;
      while (enumerator_19632.hasCurrentObject ()) {
        GALGAS_string var_s_19647 = extensionGetter_generateAddObserverCall (enumerator_19632.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 435)) ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsNotEqual, var_s_19647.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_computedPropertyGeneration temp_19 = object ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_19647, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)).add_operation (var_prefix_18480, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)).add_operation (temp_19.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 437)) ;
          }
        }
        enumerator_19632.gotoNextObject () ;
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
  cEnumerator_transientDependencyListForGeneration enumerator_20108 (temp_0.getter_mDependencyList (HERE), kENUMERATION_UP) ;
  while (enumerator_20108.hasCurrentObject ()) {
    GALGAS_string var_s_20121 = extensionGetter_generateRemoveObserverCall (enumerator_20108.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 448)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_s_20121.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_computedPropertyGeneration temp_2 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    // ").add_operation (var_s_20121, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 450)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 450)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 450)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 450)) ;
      }
    }
    enumerator_20108.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_mDependencyList (HERE).getter_length (SOURCE_FILE ("computed-property.galgas", 472)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_computeRoutineGeneration temp_2 = object ;
      const GALGAS_computeRoutineGeneration temp_3 = object ;
      const GALGAS_computeRoutineGeneration temp_4 = object ;
      GALGAS_string var_s_21061 = GALGAS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.getter_mOwnerName (HERE), temp_3.getter_mTransientName (HERE), temp_4.getter_mTransientType (HERE) COMMA_SOURCE_FILE ("computed-property.galgas", 473))) ;
      const GALGAS_computeRoutineGeneration temp_5 = object ;
      const GALGAS_computeRoutineGeneration temp_6 = object ;
      GALGAS_string var_fileName_21232 = GALGAS_string ("compute-").add_operation (temp_5.getter_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 478)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 478)).add_operation (temp_6.getter_mTransientName (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 478)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 478)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_21232  COMMA_SOURCE_FILE ("computed-property.galgas", 479)) ;
      GALGAS_string var_header_21353 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("computed-property.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 480)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 480)) ;
      var_header_21353.plusAssign_operation(GALGAS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 481)) ;
      var_header_21353.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("computed-property.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 482)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 482)) ;
      var_header_21353.plusAssign_operation(GALGAS_string ("import Cocoa\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 483)) ;
      var_header_21353.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("computed-property.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 484)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 484)) ;
      GALGAS_string var_generatedZone_33__21736 = GALGAS_string ("  }\n"
        "\n") ;
      var_generatedZone_33__21736.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("computed-property.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 486)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 486)) ;
      var_generatedZone_33__21736.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 487)) ;
      var_generatedZone_33__21736.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("computed-property.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 488)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("computed-property.galgas", 488)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_21232, GALGAS_string ("//"), var_header_21353, GALGAS_string ("\n"
        "\n"), var_s_21061, GALGAS_string ("\n"), var_generatedZone_33__21736, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas", 489)) ;
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

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_4 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_4_computedPropertyManager (
  "controllers",
  0,
  gWrapperAllFiles_computedPropertyManager_4,
  0,
  gWrapperAllDirectories_computedPropertyManager_4
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_5 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_5_computedPropertyManager (
  "outlet-classes",
  0,
  gWrapperAllFiles_computedPropertyManager_5,
  0,
  gWrapperAllDirectories_computedPropertyManager_5
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

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_3 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager (
  "swift-sources",
  0,
  gWrapperAllFiles_computedPropertyManager_3,
  0,
  gWrapperAllDirectories_computedPropertyManager_3
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

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_0 [6] = {
  & gWrapperDirectory_4_computedPropertyManager,
  & gWrapperDirectory_5_computedPropertyManager,
  & gWrapperDirectory_1_computedPropertyManager,
  & gWrapperDirectory_3_computedPropertyManager,
  & gWrapperDirectory_2_computedPropertyManager,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager (
  "",
  0,
  gWrapperAllFiles_computedPropertyManager_0,
  5,
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
  GALGAS_lstring var_node_698 = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 16)).add_operation (temp_1.getter_mTransientName (HERE).getter_string (SOURCE_FILE ("transient-property.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 16)), temp_2.getter_mTransientName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 16)) ;
  {
  const GALGAS_transientDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_698, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 17)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_698, temp_4.getter_mClassName (HERE) COMMA_SOURCE_FILE ("transient-property.galgas", 18)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_698, temp_5.getter_mTransientTypeName (HERE) COMMA_SOURCE_FILE ("transient-property.galgas", 19)) ;
  }
  const GALGAS_transientDeclarationAST temp_6 = object ;
  cEnumerator_observablePropertyList enumerator_970 (temp_6.getter_mDependencyList (HERE), kENUMERATION_UP) ;
  while (enumerator_970.hasCurrentObject ()) {
    switch (enumerator_970.current (HERE).getter_mObservableProperty (HERE).enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1227 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1227->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_transientDeclarationAST temp_8 = object ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_transientDeclarationAST temp_9 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_9.getter_mRootEntityName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 24)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 24)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 24)) COMMA_SOURCE_FILE ("transient-property.galgas", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1451 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_1451->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_transientDeclarationAST temp_11 = object ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_transientDeclarationAST temp_12 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_12.getter_mRootEntityName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 28)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 28)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 28)) COMMA_SOURCE_FILE ("transient-property.galgas", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1689 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_1689->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_transientDeclarationAST temp_14 = object ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_transientDeclarationAST temp_15 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_15.getter_mRootEntityName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 32)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 32)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 32)) COMMA_SOURCE_FILE ("transient-property.galgas", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1917 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_relationshipName = extractPtr_1917->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_transientDeclarationAST temp_17 = object ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_transientDeclarationAST temp_18 = object ;
            ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_18.getter_mRootEntityName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 36)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 36)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 36)) COMMA_SOURCE_FILE ("transient-property.galgas", 36)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2099 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2099->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_19 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_19.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 40)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 40)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 40)) COMMA_SOURCE_FILE ("transient-property.galgas", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2267 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2267->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_20 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_20.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 42)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 42)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 42)) COMMA_SOURCE_FILE ("transient-property.galgas", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2430 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2430->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_21 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_21.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 44)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 44)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 44)) COMMA_SOURCE_FILE ("transient-property.galgas", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2594 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2594->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_22 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_22.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 46)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 46)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 46)) COMMA_SOURCE_FILE ("transient-property.galgas", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2754 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2754->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_23 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_23.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 48)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 48)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 48)) COMMA_SOURCE_FILE ("transient-property.galgas", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2907 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_2907->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 50)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 50)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 50)) COMMA_SOURCE_FILE ("transient-property.galgas", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3072 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3072->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 52)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 52)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 52)) COMMA_SOURCE_FILE ("transient-property.galgas", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3265 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3265->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3265->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_24 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_24.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 54)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 54)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 54)) COMMA_SOURCE_FILE ("transient-property.galgas", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3496 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3496->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3496->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_3496->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_25 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_25.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 56)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 56)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 56)) COMMA_SOURCE_FILE ("transient-property.galgas", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3723 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3723->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3723->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_3723->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_26 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_26.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 58)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 58)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 58)) COMMA_SOURCE_FILE ("transient-property.galgas", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3919 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_controllerName = extractPtr_3919->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3919->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_27 = object ;
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (temp_27.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 60)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("transient-property.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 60)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 60)) COMMA_SOURCE_FILE ("transient-property.galgas", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4208 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_970.current (HERE).getter_mObservableProperty (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_superEntityName = extractPtr_4208->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_4208->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_698, GALGAS_lstring::constructor_new (extractedValue_superEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 65)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 65)), extractedValue_propertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 65)) COMMA_SOURCE_FILE ("transient-property.galgas", 65)) ;
        }
      }
      break ;
    }
    enumerator_970.gotoNextObject () ;
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
  result_result = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 73)).add_operation (temp_1.getter_mTransientName (HERE).getter_string (SOURCE_FILE ("transient-property.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 73)), temp_2.getter_mTransientName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 73)) ;
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
  cMapElement_classMap * objectArray_6877 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 149)) ;
  if (NULL != objectArray_6877) {
    macroValidSharedObject (objectArray_6877, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7043 ;
    const GALGAS_transientDeclarationAST temp_1 = object ;
    GALGAS_propertyMap joker_7045_3 ; // Joker input parameter
    GALGAS_actionMap joker_7045_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7045_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_1.getter_mTransientTypeName (HERE), var_classKind_7043, joker_7045_3, joker_7045_2, joker_7045_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 152)) ;
    switch (var_classKind_7043.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_transientDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.getter_mTransientTypeName (HERE).getter_location (SOURCE_FILE ("transient-property.galgas", 155)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.galgas", 155)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7402 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7043.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_7402->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_4 = object ;
        const GALGAS_transientDeclarationAST temp_5 = object ;
        const GALGAS_transientDeclarationAST temp_6 = object ;
        objectArray_6877->mProperty_mPropertyMap.setter_insertKey (temp_4.getter_mTransientName (HERE), GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (kIsEqual, temp_5.getter_mDependencyList (HERE).getter_length (SOURCE_FILE ("transient-property.galgas", 159)).objectCompare (GALGAS_uint ((uint32_t) 0U)))  COMMA_SOURCE_FILE ("transient-property.galgas", 159))  COMMA_SOURCE_FILE ("transient-property.galgas", 159)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 160)), temp_6.getter_mIsOverriding (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 157)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_transientDeclarationAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mTransientTypeName (HERE).getter_location (SOURCE_FILE ("transient-property.galgas", 164)), GALGAS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("transient-property.galgas", 164)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_transientDeclarationAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.getter_mTransientTypeName (HERE).getter_location (SOURCE_FILE ("transient-property.galgas", 166)), GALGAS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("transient-property.galgas", 166)) ;
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
  GALGAS_classKind var_classKind_8127 ;
  const GALGAS_transientDeclarationAST temp_0 = object ;
  GALGAS_propertyMap joker_8129_3 ; // Joker input parameter
  GALGAS_actionMap joker_8129_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8129_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_0.getter_mTransientTypeName (HERE), var_classKind_8127, joker_8129_3, joker_8129_2, joker_8129_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 180)) ;
  GALGAS_typeKind var_typeKind_8169 ;
  switch (var_classKind_8127.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_transientDeclarationAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mTransientTypeName (HERE).getter_location (SOURCE_FILE ("transient-property.galgas", 185)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 185)) ;
      var_typeKind_8169.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8337 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8127.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_kind = extractPtr_8337->mAssociatedValue0 ;
      var_typeKind_8169 = extractedValue_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_transientDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mTransientTypeName (HERE).getter_location (SOURCE_FILE ("transient-property.galgas", 189)), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.galgas", 189)) ;
      var_typeKind_8169.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_transientDeclarationAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mTransientTypeName (HERE).getter_location (SOURCE_FILE ("transient-property.galgas", 191)), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.galgas", 191)) ;
      var_typeKind_8169.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8599 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_transientDeclarationAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.getter_mRootEntityName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8599 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 196)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_transientDeclarationAST temp_9 = object ;
    GALGAS_classKind joker_8741 ; // Joker input parameter
    GALGAS_actionMap joker_8760_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8760_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_9.getter_mRootEntityName (HERE), joker_8741, var_rootProperties_8599, joker_8760_2, joker_8760_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 198)) ;
  }
  GALGAS_classKind var_currentClassKind_8879 ;
  GALGAS_propertyMap var_properties_8895 ;
  const GALGAS_transientDeclarationAST temp_10 = object ;
  GALGAS_actionMap joker_8897_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8897_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_10.getter_mClassName (HERE), var_currentClassKind_8879, var_properties_8895, joker_8897_2, joker_8897_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 201)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_8984 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 203)) ;
  const GALGAS_transientDeclarationAST temp_11 = object ;
  cEnumerator_observablePropertyList enumerator_9022 (temp_11.getter_mDependencyList (HERE), kENUMERATION_UP) ;
  while (enumerator_9022.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9181 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9244 ;
    extensionMethod_analyzeObservableProperty (enumerator_9022.current_mObservableProperty (HERE), var_rootProperties_8599, ioArgument_ioSemanticContext, var_properties_8895, var_dependencyKind_9181, var_swiftTypeStringForTransientFunctionArgument_9244, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 205)) ;
    switch (var_dependencyKind_9181.enumValue ()) {
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
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9022.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 217)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("transient-property.galgas", 217)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9022.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 219)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("transient-property.galgas", 219)) ;
      }
      break ;
    }
    var_dependencies_8984.addAssign_operation (enumerator_9022.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9022.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 223)), var_swiftTypeStringForTransientFunctionArgument_9244  COMMA_SOURCE_FILE ("transient-property.galgas", 221)) ;
    enumerator_9022.gotoNextObject () ;
  }
  const GALGAS_transientDeclarationAST temp_14 = object ;
  const GALGAS_transientDeclarationAST temp_15 = object ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.getter_mClassName (HERE).getter_string (SOURCE_FILE ("transient-property.galgas", 227)), temp_15.getter_mTransientName (HERE).getter_string (HERE), var_typeKind_8169, GALGAS_string ("transient"), var_dependencies_8984  COMMA_SOURCE_FILE ("transient-property.galgas", 226))  COMMA_SOURCE_FILE ("transient-property.galgas", 226)) ;
  const GALGAS_transientDeclarationAST temp_16 = object ;
  cMapElement_classMap * objectArray_9943 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_16.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 233)) ;
  if (NULL != objectArray_9943) {
    macroValidSharedObject (objectArray_9943, cMapElement_classMap) ;
    GALGAS_bool var_generate_10045 ;
    switch (var_currentClassKind_8879.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10045 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10045 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10045 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10420 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_8879.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_10420->mAssociatedValue1 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = extractedValue_graphic.boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_transientDeclarationAST temp_18 = object ;
            const GALGAS_transientDeclarationAST temp_19 = object ;
            var_generate_10045 = GALGAS_bool (kIsNotEqual, temp_18.getter_mTransientName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_19.getter_mTransientName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.galgas", 246)) ;
          }
        }
        if (kBoolFalse == test_17) {
          var_generate_10045 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_transientDeclarationAST temp_20 = object ;
    const GALGAS_transientDeclarationAST temp_21 = object ;
    objectArray_9943->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_transientPropertyGeneration::constructor_new (temp_20.getter_mTransientName (HERE).getter_string (HERE), temp_21.getter_mClassName (HERE).getter_string (HERE), var_typeKind_8169, var_dependencies_8984, var_generate_10045  COMMA_SOURCE_FILE ("transient-property.galgas", 251))  COMMA_SOURCE_FILE ("transient-property.galgas", 251)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 282)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 282)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 283)) ;
  const GALGAS_transientPropertyGeneration temp_1 = object ;
  const GALGAS_transientPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)).add_operation (extensionGetter_swiftTypeName (temp_2.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)).add_operation (GALGAS_string (" ()\n"
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
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 297)) ;
  const GALGAS_transientPropertyGeneration temp_1 = object ;
  const GALGAS_transientPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 298)) ;
  const GALGAS_transientPropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 299)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 300)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 301)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 302)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 303)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 304)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 305)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 306)) ;
  const GALGAS_transientPropertyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 309)) ;
  const GALGAS_transientPropertyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 310)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 310)) ;
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
    test_0 = temp_1.getter_mGenerate (HERE).operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.getter_mPropertyName (HERE) COMMA_SOURCE_FILE ("transient-property.galgas", 343)).operator_not (SOURCE_FILE ("transient-property.galgas", 343)) COMMA_SOURCE_FILE ("transient-property.galgas", 343)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 345)) ;
          const GALGAS_transientPropertyGeneration temp_4 = object ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 346)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 346)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 347)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 347)) ;
          const GALGAS_transientPropertyGeneration temp_5 = object ;
          const GALGAS_transientPropertyGeneration temp_6 = object ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)).add_operation (extensionGetter_swiftTypeName (temp_6.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)).add_operation (GALGAS_string (" ()\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 348)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 349)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 349)) ;
          const GALGAS_transientPropertyGeneration temp_7 = object ;
          const GALGAS_transientPropertyGeneration temp_8 = object ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)).add_operation (extensionGetter_swiftTypeName (temp_8.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 350)) ;
          const GALGAS_transientPropertyGeneration temp_9 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    switch preferences_").add_operation (temp_9.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 351)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 351)) ;
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
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 360)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 360)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 361)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 361)) ;
        const GALGAS_transientPropertyGeneration temp_11 = object ;
        const GALGAS_transientPropertyGeneration temp_12 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)).add_operation (extensionGetter_swiftTypeName (temp_12.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)).add_operation (GALGAS_string (" ()\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 362)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 363)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 363)) ;
        const GALGAS_transientPropertyGeneration temp_13 = object ;
        const GALGAS_transientPropertyGeneration temp_14 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_13.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)).add_operation (extensionGetter_swiftTypeName (temp_14.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 364)) ;
        const GALGAS_transientPropertyGeneration temp_15 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    switch self.").add_operation (temp_15.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 365)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 365)) ;
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
  GALGAS_string var_prefix_16596 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_transientPropertyGeneration temp_3 = object ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.getter_mDependencyList (HERE).getter_length (SOURCE_FILE ("transient-property.galgas", 381)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_transientPropertyGeneration temp_4 = object ;
      GALGAS_bool var_needs_5F_unwSelf_16733 = extensionGetter_needs_5F_unwSelf (temp_4.getter_mDependencyList (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 382)) ;
      const GALGAS_transientPropertyGeneration temp_5 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 383)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16733.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_transientPropertyGeneration temp_7 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16596, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 385)).add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 385)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 385)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 386)) ;
          const GALGAS_transientPropertyGeneration temp_8 = object ;
          const GALGAS_transientPropertyGeneration temp_9 = object ;
          const GALGAS_transientPropertyGeneration temp_10 = object ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.getter_mDependencyList (HERE), constinArgument_inPreferences, temp_9.getter_mClassName (HERE), temp_10.getter_mPropertyName (HERE), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 387)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 388)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 389)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 390)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_transientPropertyGeneration temp_11 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16596, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)).add_operation (temp_11.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 392)) ;
        const GALGAS_transientPropertyGeneration temp_12 = object ;
        const GALGAS_transientPropertyGeneration temp_13 = object ;
        const GALGAS_transientPropertyGeneration temp_14 = object ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.getter_mDependencyList (HERE), constinArgument_inPreferences, temp_13.getter_mClassName (HERE), temp_14.getter_mPropertyName (HERE), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 393)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 395)) ;
      const GALGAS_transientPropertyGeneration temp_15 = object ;
      cEnumerator_transientDependencyListForGeneration enumerator_17577 (temp_15.getter_mDependencyList (HERE), kENUMERATION_UP) ;
      while (enumerator_17577.hasCurrentObject ()) {
        GALGAS_string var_s_17592 = extensionGetter_generateAddObserverCall (enumerator_17577.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 397)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, var_s_17592.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_transientPropertyGeneration temp_17 = object ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_17592, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)).add_operation (var_prefix_16596, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)).add_operation (temp_17.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 399)) ;
          }
        }
        enumerator_17577.gotoNextObject () ;
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
  cEnumerator_transientDependencyListForGeneration enumerator_18054 (temp_0.getter_mDependencyList (HERE), kENUMERATION_UP) ;
  while (enumerator_18054.hasCurrentObject ()) {
    GALGAS_string var_s_18067 = extensionGetter_generateRemoveObserverCall (enumerator_18054.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 410)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_s_18067.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_transientPropertyGeneration temp_2 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    // ").add_operation (var_s_18067, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 412)) ;
      }
    }
    enumerator_18054.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_mDependencyList (HERE).getter_length (SOURCE_FILE ("transient-property.galgas", 604)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_transientRoutineGeneration temp_2 = object ;
      const GALGAS_transientRoutineGeneration temp_3 = object ;
      const GALGAS_transientRoutineGeneration temp_4 = object ;
      const GALGAS_transientRoutineGeneration temp_5 = object ;
      const GALGAS_transientRoutineGeneration temp_6 = object ;
      GALGAS_string var_s_27705 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_2.getter_mOwnerName (HERE), temp_3.getter_mTransientName (HERE), temp_4.getter_mDependencyList (HERE), temp_5.getter_mTransientType (HERE), temp_6.getter_mGeneratedFunctionNamePrefix (HERE) COMMA_SOURCE_FILE ("transient-property.galgas", 605))) ;
      GALGAS_string var_header_27937 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("transient-property.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 612)).add_operation (GALGAS_string ("\n"
        "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
        "//"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 612)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("transient-property.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 614)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 614)).add_operation (GALGAS_string ("import Cocoa\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 614)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 615)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("transient-property.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 616)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 616)) ;
      const GALGAS_transientRoutineGeneration temp_7 = object ;
      const GALGAS_transientRoutineGeneration temp_8 = object ;
      const GALGAS_transientRoutineGeneration temp_9 = object ;
      GALGAS_string var_fileName_28285 = temp_7.getter_mGeneratedFunctionNamePrefix (HERE).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (temp_8.getter_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (temp_9.getter_mTransientName (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_28285  COMMA_SOURCE_FILE ("transient-property.galgas", 618)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_28285, GALGAS_string ("//"), var_header_27937, GALGAS_string ("\n"
        "\n"), var_s_27705, GALGAS_string ("\n"), GALGAS_string ("}\n"
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
  GALGAS_uint index_226_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    cEnumerator_transientDependencyListForGeneration enumerator_226 (in_DEPENDENCY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_226.hasCurrentObject ()) {
      result << "\n"
        "       _ " ;
      result << enumerator_226.current_mFunctionArgumentName (HERE).stringValue () ;
      result << " : " ;
      result << enumerator_226.current_mFunctionArgumentTypeString (HERE).stringValue () ;
      if (enumerator_226.hasNextObject ()) {
        result << "," ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_226_.increment () ;
      enumerator_226.gotoNextObject () ;
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
  GALGAS_lstring var_node_854 = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 23)).add_operation (temp_1.getter_mProxyName (HERE).getter_string (SOURCE_FILE ("proxy.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 23)), temp_2.getter_mProxyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 23)) ;
  {
  const GALGAS_proxyDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_854, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 24)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_854, temp_4.getter_mClassName (HERE) COMMA_SOURCE_FILE ("proxy.galgas", 25)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_854, temp_5.getter_mProxyTypeName (HERE) COMMA_SOURCE_FILE ("proxy.galgas", 26)) ;
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
  result_result = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 32)).add_operation (temp_1.getter_mProxyName (HERE).getter_string (SOURCE_FILE ("proxy.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 32)), temp_2.getter_mProxyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 32)) ;
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
  cMapElement_classMap * objectArray_3250 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.galgas", 88)) ;
  if (NULL != objectArray_3250) {
    macroValidSharedObject (objectArray_3250, cMapElement_classMap) ;
    GALGAS_classKind var_proxyKind_3412 ;
    const GALGAS_proxyDeclarationAST temp_1 = object ;
    GALGAS_propertyMap joker_3414_3 ; // Joker input parameter
    GALGAS_actionMap joker_3414_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3414_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_1.getter_mProxyTypeName (HERE), var_proxyKind_3412, joker_3414_3, joker_3414_2, joker_3414_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 91)) ;
    switch (var_proxyKind_3412.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_proxyDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.getter_mProxyTypeName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 94)), GALGAS_string ("an atomic type is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.galgas", 94)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_3958 = (const cEnumAssociatedValues_classKind_entity *) (var_proxyKind_3412.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isGraphic = extractPtr_3958->mAssociatedValue1 ;
        const GALGAS_proxyDeclarationAST temp_4 = object ;
        switch (temp_4.getter_mProxyKind (HERE).enumValue ()) {
        case GALGAS_proxyKind::kNotBuilt:
          break ;
        case GALGAS_proxyKind::kEnum_toManyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_5 = object ;
            GALGAS_propertyKind var_k_3630 = GALGAS_propertyKind::constructor_toMany (temp_5.getter_mProxyTypeName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("proxy.galgas", 100)), extractedValue_isGraphic, GALGAS_toManyRelationshipOptionAST::constructor_none (SOURCE_FILE ("proxy.galgas", 102))  COMMA_SOURCE_FILE ("proxy.galgas", 98)) ;
            {
            const GALGAS_proxyDeclarationAST temp_6 = object ;
            objectArray_3250->mProperty_mPropertyMap.setter_insertKey (temp_6.getter_mProxyName (HERE), var_k_3630, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.galgas", 104)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 104)) ;
            }
          }
          break ;
        case GALGAS_proxyKind::kEnum_propertyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_7 = object ;
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (temp_7.getter_mProxyTypeName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 106)), GALGAS_string ("this type should be an entity"), fixItArray8  COMMA_SOURCE_FILE ("proxy.galgas", 106)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_proxyDeclarationAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.getter_mProxyTypeName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 109)), GALGAS_string ("an atomic type is required here"), fixItArray10  COMMA_SOURCE_FILE ("proxy.galgas", 109)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_4185 = (const cEnumAssociatedValues_classKind_atomic *) (var_proxyKind_3412.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_type = extractPtr_4185->mAssociatedValue0 ;
        {
        const GALGAS_proxyDeclarationAST temp_11 = object ;
        objectArray_3250->mProperty_mPropertyMap.setter_insertKey (temp_11.getter_mProxyName (HERE), GALGAS_propertyKind::constructor_property (extractedValue_type, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("proxy.galgas", 111))  COMMA_SOURCE_FILE ("proxy.galgas", 111)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.galgas", 111)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 111)) ;
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
  cMapElement_classMap * objectArray_4481 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.galgas", 122)) ;
  if (NULL != objectArray_4481) {
    macroValidSharedObject (objectArray_4481, cMapElement_classMap) ;
    GALGAS_propertyKind var_relationshipKind_4643 ;
    const GALGAS_proxyDeclarationAST temp_1 = object ;
    GALGAS_actionMap joker_4645_2 ; // Joker input parameter
    GALGAS_bool joker_4645_1 ; // Joker input parameter
    objectArray_4481->mProperty_mPropertyMap.method_searchKey (temp_1.getter_mToOneRelationshipName (HERE), var_relationshipKind_4643, joker_4645_2, joker_4645_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 125)) ;
    switch (var_relationshipKind_4643.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const GALGAS_proxyDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.getter_mToOneRelationshipName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 128)), GALGAS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.galgas", 128)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        const GALGAS_proxyDeclarationAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.getter_mToOneRelationshipName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 130)), GALGAS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.galgas", 130)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        const GALGAS_proxyDeclarationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.getter_mToOneRelationshipName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 132)), GALGAS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.galgas", 132)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const GALGAS_proxyDeclarationAST temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.getter_mToOneRelationshipName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 134)), GALGAS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.galgas", 134)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        const cEnumAssociatedValues_propertyKind_toOne * extractPtr_7079 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_relationshipKind_4643.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_toOneTypeName = extractPtr_7079->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_5235 ;
        GALGAS_classKind joker_5217 ; // Joker input parameter
        GALGAS_actionMap joker_5237_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5237_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_toOneTypeName, joker_5217, var_propertyMap_5235, joker_5237_2, joker_5237_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 136)) ;
        GALGAS_propertyKind var_propertyKind_5307 ;
        const GALGAS_proxyDeclarationAST temp_10 = object ;
        GALGAS_actionMap joker_5309_2 ; // Joker input parameter
        GALGAS_bool joker_5309_1 ; // Joker input parameter
        var_propertyMap_5235.method_searchKey (temp_10.getter_mPropertyName (HERE), var_propertyKind_5307, joker_5309_2, joker_5309_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 137)) ;
        switch (var_propertyKind_5307.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            const cEnumAssociatedValues_propertyKind_property * extractPtr_5750 = (const cEnumAssociatedValues_propertyKind_property *) (var_propertyKind_5307.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_propertyType = extractPtr_5750->mAssociatedValue0 ;
            const GALGAS_proxyDeclarationAST temp_11 = object ;
            const GALGAS_proxyDeclarationAST temp_12 = object ;
            const GALGAS_proxyDeclarationAST temp_13 = object ;
            const GALGAS_proxyDeclarationAST temp_14 = object ;
            objectArray_4481->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicProxyGeneration::constructor_new (temp_11.getter_mProxyName (HERE).getter_string (HERE), temp_12.getter_mProxyKind (HERE), extractedValue_propertyType, temp_13.getter_mToOneRelationshipName (HERE).getter_string (HERE), temp_14.getter_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 140))  COMMA_SOURCE_FILE ("proxy.galgas", 140)) ;
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GALGAS_proxyDeclarationAST temp_16 = object ;
              test_15 = GALGAS_bool (kIsNotEqual, temp_16.getter_mProxyKind (HERE).objectCompare (GALGAS_proxyKind::constructor_propertyProxy (SOURCE_FILE ("proxy.galgas", 147)))).boolEnum () ;
              if (kBoolTrue == test_15) {
                const GALGAS_proxyDeclarationAST temp_17 = object ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.getter_mPropertyName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 148)), GALGAS_string ("this property is not atomic"), fixItArray18  COMMA_SOURCE_FILE ("proxy.galgas", 148)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6230 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_5307.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_toManyTypeName = extractPtr_6230->mAssociatedValue0 ;
            GALGAS_classKind joker_5855_4 ; // Joker input parameter
            GALGAS_propertyMap joker_5855_3 ; // Joker input parameter
            GALGAS_actionMap joker_5855_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_5855_1 ; // Joker input parameter
            ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_toManyTypeName, joker_5855_4, joker_5855_3, joker_5855_2, joker_5855_1, inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 151)) ;
            const GALGAS_proxyDeclarationAST temp_19 = object ;
            const GALGAS_proxyDeclarationAST temp_20 = object ;
            const GALGAS_proxyDeclarationAST temp_21 = object ;
            const GALGAS_proxyDeclarationAST temp_22 = object ;
            objectArray_4481->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyProxyGeneration::constructor_new (temp_19.getter_mProxyName (HERE).getter_string (HERE), temp_20.getter_mProxyKind (HERE), extractedValue_toManyTypeName.getter_string (SOURCE_FILE ("proxy.galgas", 155)), temp_21.getter_mToOneRelationshipName (HERE).getter_string (HERE), temp_22.getter_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("proxy.galgas", 152))  COMMA_SOURCE_FILE ("proxy.galgas", 152)) ;
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              const GALGAS_proxyDeclarationAST temp_24 = object ;
              test_23 = GALGAS_bool (kIsNotEqual, temp_24.getter_mProxyKind (HERE).objectCompare (GALGAS_proxyKind::constructor_toManyProxy (SOURCE_FILE ("proxy.galgas", 159)))).boolEnum () ;
              if (kBoolTrue == test_23) {
                const GALGAS_proxyDeclarationAST temp_25 = object ;
                TC_Array <C_FixItDescription> fixItArray26 ;
                inCompiler->emitSemanticError (temp_25.getter_mPropertyName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 160)), GALGAS_string ("this property is not atomic"), fixItArray26  COMMA_SOURCE_FILE ("proxy.galgas", 160)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const GALGAS_proxyDeclarationAST temp_27 = object ;
            switch (temp_27.getter_mProxyKind (HERE).enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_28 = object ;
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_28.getter_mPropertyName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 165)), GALGAS_string ("an atomic property is required here"), fixItArray29  COMMA_SOURCE_FILE ("proxy.galgas", 165)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_30 = object ;
                TC_Array <C_FixItDescription> fixItArray31 ;
                inCompiler->emitSemanticError (temp_30.getter_mPropertyName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 167)), GALGAS_string ("a toMany property is required here"), fixItArray31  COMMA_SOURCE_FILE ("proxy.galgas", 167)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const GALGAS_proxyDeclarationAST temp_32 = object ;
            switch (temp_32.getter_mProxyKind (HERE).enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_33 = object ;
                TC_Array <C_FixItDescription> fixItArray34 ;
                inCompiler->emitSemanticError (temp_33.getter_mPropertyName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 172)), GALGAS_string ("an atomic property is required here"), fixItArray34  COMMA_SOURCE_FILE ("proxy.galgas", 172)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_35 = object ;
                TC_Array <C_FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (temp_35.getter_mPropertyName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 174)), GALGAS_string ("a toMany property is required here"), fixItArray36  COMMA_SOURCE_FILE ("proxy.galgas", 174)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            const GALGAS_proxyDeclarationAST temp_37 = object ;
            switch (temp_37.getter_mProxyKind (HERE).enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_38 = object ;
                TC_Array <C_FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (temp_38.getter_mPropertyName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 179)), GALGAS_string ("an atomic property is required here"), fixItArray39  COMMA_SOURCE_FILE ("proxy.galgas", 179)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_40 = object ;
                TC_Array <C_FixItDescription> fixItArray41 ;
                inCompiler->emitSemanticError (temp_40.getter_mPropertyName (HERE).getter_location (SOURCE_FILE ("proxy.galgas", 181)), GALGAS_string ("a toMany property is required here"), fixItArray41  COMMA_SOURCE_FILE ("proxy.galgas", 181)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 210)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 210)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  const GALGAS_toManyProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 211)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 211)).add_operation (temp_2.getter_mToManyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 211)).add_operation (GALGAS_string (" ()\n"
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
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 233)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 233)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 234)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 234)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 235)).add_operation (GALGAS_string ("_modelDidChangeController : EBReadOnlyPropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 235)) ;
  const GALGAS_toManyProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  // var ").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 236)).add_operation (GALGAS_string ("_boundObjectDidChangeController : EBReadOnlyPropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 236)) ;
  const GALGAS_toManyProxyGeneration temp_3 = object ;
  const GALGAS_toManyProxyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 237)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 237)).add_operation (temp_4.getter_mToManyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 237)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 237)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 238)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 238)) ;
  const GALGAS_toManyProxyGeneration temp_5 = object ;
  const GALGAS_toManyProxyGeneration temp_6 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 239)).add_operation (GALGAS_string (" : ["), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 239)).add_operation (temp_6.getter_mToManyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 239)).add_operation (GALGAS_string ("] {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 239)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 240)) ;
  const GALGAS_toManyProxyGeneration temp_7 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      switch self.").add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 241)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 242)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return []\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return v\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 245)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 246)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 247)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 248)) ;
  const GALGAS_toManyProxyGeneration temp_8 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 249)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 249)) ;
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
  result_result = GALGAS_string ("  //--- ToMany proxy: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 257)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 258)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let controller = EBReadOnlyPropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 259)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("        observedObjects: [self.").add_operation (temp_1.getter_mObservedRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 260)).add_operation (GALGAS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 260)) ;
  result_result.plusAssign_operation(GALGAS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 261)) ;
  const GALGAS_toManyProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("          if let me = self, let model = me.").add_operation (temp_2.getter_mObservedRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 262)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 262)) ;
  const GALGAS_toManyProxyGeneration temp_3 = object ;
  const GALGAS_toManyProxyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            me.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 263)).add_operation (GALGAS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 263)).add_operation (temp_4.getter_mObservedPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 263)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 263)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 264)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 265)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 266)) ;
  const GALGAS_toManyProxyGeneration temp_5 = object ;
  const GALGAS_toManyProxyGeneration temp_6 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_5.getter_mObservedRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 267)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 267)).add_operation (temp_6.getter_mObservedPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 267)).add_operation (GALGAS_string (" (controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 267)) ;
  const GALGAS_toManyProxyGeneration temp_7 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 268)).add_operation (GALGAS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 268)) ;
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
  result_result = GALGAS_string ("  //--- ToMany proxy: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 275)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 275)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 276)).add_operation (GALGAS_string ("_property.setModel (nil)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 276)) ;
  const GALGAS_toManyProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 277)).add_operation (GALGAS_string ("_modelDidChangeController\?.unregister ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 277)) ;
  const GALGAS_toManyProxyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 278)).add_operation (GALGAS_string ("_modelDidChangeController = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 278)) ;
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
  result_result = GALGAS_string ("  //--- ToMany proxy: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 284)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 284)) ;
  const GALGAS_toManyProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 285)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 285)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic proxy property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 309)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 310)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 310)) ;
  const GALGAS_atomicProxyGeneration temp_1 = object ;
  const GALGAS_atomicProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 311)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 311)).add_operation (extensionGetter_swiftTypeName (temp_2.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 311)).add_operation (GALGAS_string (" ()\n"
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

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicProxyGeneration_initCode (const cPtr_propertyGeneration * /* inObject */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicProxyGeneration_initCode (void) {
  enterExtensionGetter_initCode (kTypeDescriptor_GALGAS_atomicProxyGeneration.mSlotID,
                                 extensionGetter_atomicProxyGeneration_initCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicProxyGeneration_initCode (defineExtensionGetter_atomicProxyGeneration_initCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicProxyGeneration_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicProxyGeneration * object = (const cPtr_atomicProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicProxyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 323)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 323)) ;
  const GALGAS_atomicProxyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 324)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 324)) ;
  const GALGAS_atomicProxyGeneration temp_1 = object ;
  const GALGAS_atomicProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 325)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 325)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 325)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 325)) ;
  const GALGAS_atomicProxyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 326)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 333)) ;
  const GALGAS_atomicProxyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 334)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 335)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 336)) ;
  const GALGAS_atomicProxyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 337)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 337)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 338)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 339)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 340)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 341)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 342)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 343)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 344)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 345)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 346)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 347)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 348)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 349)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 350)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 351)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 352)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 353)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 354)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 355)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 356)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 357)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 358)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 359)) ;
  const GALGAS_atomicProxyGeneration temp_6 = object ;
  const GALGAS_atomicProxyGeneration temp_7 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 361)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 361)).add_operation (extensionGetter_swiftTypeName (temp_7.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 361)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 361)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 362)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 363)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 364)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 365)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 366)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 367)) ;
  const GALGAS_atomicProxyGeneration temp_8 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 368)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 368)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 369)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 370)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 371)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 372)) ;
  const GALGAS_atomicProxyGeneration temp_9 = object ;
  const GALGAS_atomicProxyGeneration temp_10 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_9.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 373)).add_operation (GALGAS_string ("_property.mValidateAndWriteModelFunction = { [weak self] (candidateValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 373)).add_operation (extensionGetter_swiftTypeName (temp_10.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 373)).add_operation (GALGAS_string (", windowForSheet : NSWindow\?) in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 373)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 374)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 375)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 376)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 377)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 378)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 379)) ;
  const GALGAS_atomicProxyGeneration temp_11 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            let result = object.").add_operation (temp_11.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 380)).add_operation (GALGAS_string ("_property.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 380)) ;
  result_result.plusAssign_operation(GALGAS_string ("            if !result {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 381)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 382)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 383)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 384)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 385)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 386)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 387)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 388)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 389)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 390)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 391)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicProxyGeneration_bindPropertyInSelectionController (void) {
  enterExtensionGetter_bindPropertyInSelectionController (kTypeDescriptor_GALGAS_atomicProxyGeneration.mSlotID,
                                                          extensionGetter_atomicProxyGeneration_bindPropertyInSelectionController) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicProxyGeneration_bindPropertyInSelectionController (defineExtensionGetter_atomicProxyGeneration_bindPropertyInSelectionController, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicProxyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                    const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                    const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicProxyGeneration * object = (const cPtr_atomicProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicProxyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 400)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 400)) ;
  const GALGAS_atomicProxyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic proxy property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 401)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 401)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 402)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 402)) ;
  const GALGAS_atomicProxyGeneration temp_1 = object ;
  const GALGAS_atomicProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 403)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 403)).add_operation (extensionGetter_swiftTypeName (temp_2.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 403)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 403)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("proxy.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 404)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 404)) ;
  const GALGAS_atomicProxyGeneration temp_3 = object ;
  const GALGAS_atomicProxyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 405)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 405)).add_operation (extensionGetter_swiftTypeName (temp_4.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 405)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 405)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 406)) ;
  const GALGAS_atomicProxyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      switch self.").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 407)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 407)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 408)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return nil\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 409)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 410)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return v\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 411)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 412)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 413)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 414)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let unwrappedNewValue = newValue {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 415)) ;
  const GALGAS_atomicProxyGeneration temp_6 = object ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 416)).add_operation (GALGAS_string ("_property.setProp (unwrappedNewValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 416)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 417)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 418)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 419)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicProxyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_atomicProxyGeneration.mSlotID,
                                                extensionGetter_atomicProxyGeneration_propertyDeclarationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicProxyGeneration_propertyDeclarationCode (defineExtensionGetter_atomicProxyGeneration_propertyDeclarationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicProxyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                              const GALGAS_bool /* constinArgument_inPreferences */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicProxyGeneration * object = (const cPtr_atomicProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicProxyGeneration) ;
  const GALGAS_atomicProxyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 425)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 425)) ;
  const GALGAS_atomicProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 426)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 426)) ;
  const GALGAS_atomicProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      if let object = self\?.").add_operation (temp_2.getter_mObservedRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 427)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 427)) ;
  const GALGAS_atomicProxyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("        return .single (object.").add_operation (temp_3.getter_mObservedPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 428)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 428)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 429)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 430)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 431)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 432)) ;
  const GALGAS_atomicProxyGeneration temp_4 = object ;
  const GALGAS_atomicProxyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 433)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 433)).add_operation (extensionGetter_swiftTypeName (temp_5.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 433)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 433)) ;
  const GALGAS_atomicProxyGeneration temp_6 = object ;
  const GALGAS_atomicProxyGeneration temp_7 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      self\?.").add_operation (temp_6.getter_mObservedRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 434)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 434)).add_operation (temp_7.getter_mObservedPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 434)).add_operation (GALGAS_string (" = inValue\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 434)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 435)) ;
  const GALGAS_atomicProxyGeneration temp_8 = object ;
  const GALGAS_atomicProxyGeneration temp_9 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 436)).add_operation (GALGAS_string ("_property.mValidateAndWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 436)).add_operation (extensionGetter_swiftTypeName (temp_9.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 436)).add_operation (GALGAS_string (", _ inWindow : NSWindow\?) -> Bool in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 436)) ;
  const GALGAS_atomicProxyGeneration temp_10 = object ;
  const GALGAS_atomicProxyGeneration temp_11 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      return self\?.").add_operation (temp_10.getter_mObservedRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 437)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 437)).add_operation (temp_11.getter_mObservedPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 437)).add_operation (GALGAS_string ("_property.validateAndSetProp (inValue, windowForSheet: inWindow) \?\? false\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 437)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 438)) ;
  const GALGAS_atomicProxyGeneration temp_12 = object ;
  const GALGAS_atomicProxyGeneration temp_13 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_12.getter_mObservedRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 439)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 439)).add_operation (temp_13.getter_mObservedPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 439)) ;
  const GALGAS_atomicProxyGeneration temp_14 = object ;
  result_result.plusAssign_operation(GALGAS_string ("_property.addEBObserver (self.").add_operation (temp_14.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 440)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 440)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicProxyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_atomicProxyGeneration.mSlotID,
                                          extensionGetter_atomicProxyGeneration_configurationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicProxyGeneration_configurationCode (defineExtensionGetter_atomicProxyGeneration_configurationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicProxyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                            const GALGAS_bool /* constinArgument_inPreferences */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicProxyGeneration * object = (const cPtr_atomicProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicProxyGeneration) ;
  const GALGAS_atomicProxyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 446)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 446)) ;
  const GALGAS_atomicProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 447)).add_operation (GALGAS_string ("_property.mReadModelFunction = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 447)) ;
  const GALGAS_atomicProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 448)).add_operation (GALGAS_string ("_property.mWriteModelFunction = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 448)) ;
  const GALGAS_atomicProxyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 449)).add_operation (GALGAS_string ("_property.mValidateAndWriteModelFunction = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 449)) ;
  const GALGAS_atomicProxyGeneration temp_4 = object ;
  const GALGAS_atomicProxyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_4.getter_mObservedRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 450)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 450)).add_operation (temp_5.getter_mObservedPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 450)) ;
  const GALGAS_atomicProxyGeneration temp_6 = object ;
  result_result.plusAssign_operation(GALGAS_string ("_property.removeEBObserver (self.").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 451)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 451)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicProxyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_atomicProxyGeneration.mSlotID,
                                        extensionGetter_atomicProxyGeneration_terminationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicProxyGeneration_terminationCode (defineExtensionGetter_atomicProxyGeneration_terminationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicProxyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicProxyGeneration * object = (const cPtr_atomicProxyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicProxyGeneration) ;
  const GALGAS_atomicProxyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 457)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 457)) ;
  const GALGAS_atomicProxyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 458)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 458)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 458)) ;
  const GALGAS_atomicProxyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 459)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("proxy.galgas", 459)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicProxyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_atomicProxyGeneration.mSlotID,
                                                extensionGetter_atomicProxyGeneration_clearObjectExplorerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicProxyGeneration_clearObjectExplorerCode (defineExtensionGetter_atomicProxyGeneration_clearObjectExplorerCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_atomicPropertyDeclarationAST * object = (const cPtr_atomicPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyDeclarationAST) ;
  const GALGAS_atomicPropertyDeclarationAST temp_0 = object ;
  const GALGAS_atomicPropertyDeclarationAST temp_1 = object ;
  const GALGAS_atomicPropertyDeclarationAST temp_2 = object ;
  GALGAS_lstring var_node_953 = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 24)).add_operation (temp_1.getter_mPropertyName (HERE).getter_string (SOURCE_FILE ("simple-stored-property.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 24)), temp_2.getter_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 24)) ;
  {
  const GALGAS_atomicPropertyDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_953, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 25)) ;
  }
  {
  const GALGAS_atomicPropertyDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_953, temp_4.getter_mClassName (HERE) COMMA_SOURCE_FILE ("simple-stored-property.galgas", 26)) ;
  }
  {
  const GALGAS_atomicPropertyDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_953, temp_5.getter_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("simple-stored-property.galgas", 27)) ;
  }
  const GALGAS_atomicPropertyDeclarationAST temp_6 = object ;
  callExtensionMethod_enterDefaultValuePrecedence ((const cPtr_abstractDefaultValue *) temp_6.getter_mDefaultValue (HERE).ptr (), var_node_953, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 28)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST.mSlotID,
                                               extensionMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_atomicPropertyDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_atomicPropertyDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_atomicPropertyDeclarationAST * object = (const cPtr_atomicPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyDeclarationAST) ;
  const GALGAS_atomicPropertyDeclarationAST temp_0 = object ;
  const GALGAS_atomicPropertyDeclarationAST temp_1 = object ;
  const GALGAS_atomicPropertyDeclarationAST temp_2 = object ;
  result_result = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 34)).add_operation (temp_1.getter_mPropertyName (HERE).getter_string (SOURCE_FILE ("simple-stored-property.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 34)), temp_2.getter_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 34)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST.mSlotID,
                                extensionGetter_atomicPropertyDeclarationAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyDeclarationAST_nodeKey (defineExtensionGetter_atomicPropertyDeclarationAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_atomicPropertyDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_atomicPropertyDeclarationAST * object = (const cPtr_atomicPropertyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyDeclarationAST) ;
  const GALGAS_atomicPropertyDeclarationAST temp_0 = object ;
  cMapElement_classMap * objectArray_4003 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 106)) ;
  if (NULL != objectArray_4003) {
    macroValidSharedObject (objectArray_4003, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4168 ;
    const GALGAS_atomicPropertyDeclarationAST temp_1 = object ;
    GALGAS_propertyMap joker_4170_3 ; // Joker input parameter
    GALGAS_actionMap joker_4170_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4170_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_1.getter_mPropertyTypeName (HERE), var_classKind_4168, joker_4170_3, joker_4170_2, joker_4170_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 109)) ;
    GALGAS_propertyMap var_preferencesPropertyMap_4303 ;
    GALGAS_classKind joker_4268 ; // Joker input parameter
    GALGAS_actionMap joker_4311_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4311_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 111)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("simple-stored-property.galgas", 111))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 111)), joker_4268, var_preferencesPropertyMap_4303, joker_4311_2, joker_4311_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 110)) ;
    switch (var_classKind_4168.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.getter_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 118)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 118)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_5238 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4168.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_5238->mAssociatedValue0 ;
        {
        const GALGAS_atomicPropertyDeclarationAST temp_4 = object ;
        objectArray_4003->mProperty_mPropertyMap.setter_insertKey (temp_4.getter_mPropertyName (HERE), GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("simple-stored-property.galgas", 120))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 120)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("simple-stored-property.galgas", 120)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 120)) ;
        }
        GALGAS_string var_swiftDefaultValueAsString_4720 ;
        const GALGAS_atomicPropertyDeclarationAST temp_5 = object ;
        GALGAS_typeKindList temp_6 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 122)) ;
        temp_6.addAssign_operation (extractedValue_kind  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 122)) ;
        callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) temp_5.getter_mDefaultValue (HERE).ptr (), temp_6, var_preferencesPropertyMap_4303, var_swiftDefaultValueAsString_4720, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 122)) ;
        const GALGAS_atomicPropertyDeclarationAST temp_7 = object ;
        const GALGAS_atomicPropertyDeclarationAST temp_8 = object ;
        const GALGAS_atomicPropertyDeclarationAST temp_9 = object ;
        objectArray_4003->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicPropertyGeneration::constructor_new (temp_7.getter_mPropertyName (HERE).getter_string (HERE), temp_8.getter_mNeedsValidation (HERE), extractedValue_kind, GALGAS_bool (false), var_swiftDefaultValueAsString_4720, GALGAS_bool (kIsEqual, temp_9.getter_mClassName (HERE).getter_string (HERE).objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 130))))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 124))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 124)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_atomicPropertyDeclarationAST temp_11 = object ;
          test_10 = temp_11.getter_mNeedsValidation (HERE).boolEnum () ;
          if (kBoolTrue == test_10) {
            const GALGAS_atomicPropertyDeclarationAST temp_12 = object ;
            const GALGAS_atomicPropertyDeclarationAST temp_13 = object ;
            ioArgument_ioGeneration.mProperty_mValidationStubRoutineListForGeneration.addAssign_operation (temp_12.getter_mClassName (HERE).getter_string (SOURCE_FILE ("simple-stored-property.galgas", 135)), temp_13.getter_mPropertyName (HERE).getter_string (HERE), extensionGetter_swiftTypeName (extractedValue_kind, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 137))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 134)) ;
          }
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.getter_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 140)), GALGAS_string ("an atomic class is required here"), fixItArray15  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 140)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_16 = object ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.getter_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 142)), GALGAS_string ("an atomic class is required here"), fixItArray17  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 142)) ;
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_atomicPropertyDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST.mSlotID,
                                           extensionMethod_atomicPropertyDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_atomicPropertyDeclarationAST_firstAnalysisPhase (defineExtensionMethod_atomicPropertyDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration prefKeyDefinitionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicPropertyGeneration_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  const GALGAS_atomicPropertyGeneration temp_0 = object ;
  const GALGAS_atomicPropertyGeneration temp_1 = object ;
  result_result = GALGAS_string ("let Preferences_").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)).add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 168)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyGeneration_prefKeyDefinitionCode (void) {
  enterExtensionGetter_prefKeyDefinitionCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                              extensionGetter_atomicPropertyGeneration_prefKeyDefinitionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyGeneration_prefKeyDefinitionCode (defineExtensionGetter_atomicPropertyGeneration_prefKeyDefinitionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicPropertyGeneration_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 174)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 174)) ;
  const GALGAS_atomicPropertyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 175)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 175)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 176)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 176)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = object ;
  const GALGAS_atomicPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)).add_operation (extensionGetter_swiftTypeName (temp_2.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 177)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyGeneration_declarationInSelectionControllerCode (void) {
  enterExtensionGetter_declarationInSelectionControllerCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                             extensionGetter_atomicPropertyGeneration_declarationInSelectionControllerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyGeneration_declarationInSelectionControllerCode (defineExtensionGetter_atomicPropertyGeneration_declarationInSelectionControllerCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicPropertyGeneration_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 183)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 183)) ;
  const GALGAS_atomicPropertyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 184)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 184)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = object ;
  const GALGAS_atomicPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 185)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 185)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 185)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 185)) ;
  const GALGAS_atomicPropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 186)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 186)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 187)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 188)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 189)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 190)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 191)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 192)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 193)) ;
  const GALGAS_atomicPropertyGeneration temp_4 = object ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 194)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 194)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 195)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 196)) ;
  const GALGAS_atomicPropertyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 197)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 197)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 198)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 199)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 200)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 201)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 202)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 203)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 204)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 205)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 206)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 208)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 210)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 211)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 212)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 213)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 214)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 215)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 216)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 217)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 218)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 219)) ;
  const GALGAS_atomicPropertyGeneration temp_6 = object ;
  const GALGAS_atomicPropertyGeneration temp_7 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 221)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 221)).add_operation (extensionGetter_swiftTypeName (temp_7.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 221)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 221)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 222)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 223)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 224)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 225)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 226)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 227)) ;
  const GALGAS_atomicPropertyGeneration temp_8 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 228)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 228)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 229)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 230)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 231)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 232)) ;
  const GALGAS_atomicPropertyGeneration temp_9 = object ;
  const GALGAS_atomicPropertyGeneration temp_10 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_9.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 233)).add_operation (GALGAS_string ("_property.mValidateAndWriteModelFunction = { [weak self] (candidateValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 233)).add_operation (extensionGetter_swiftTypeName (temp_10.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 233)).add_operation (GALGAS_string (", windowForSheet : NSWindow\?) in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 233)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 234)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 235)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 236)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 237)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 238)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 239)) ;
  const GALGAS_atomicPropertyGeneration temp_11 = object ;
  result_result.plusAssign_operation(GALGAS_string ("            let result = object.").add_operation (temp_11.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 240)).add_operation (GALGAS_string ("_property.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 240)) ;
  result_result.plusAssign_operation(GALGAS_string ("            if !result {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 242)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 245)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 246)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 247)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 248)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 249)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 250)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 251)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyGeneration_bindPropertyInSelectionController (void) {
  enterExtensionGetter_bindPropertyInSelectionController (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                          extensionGetter_atomicPropertyGeneration_bindPropertyInSelectionController) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyGeneration_bindPropertyInSelectionController (defineExtensionGetter_atomicPropertyGeneration_bindPropertyInSelectionController, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                       const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                       const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_atomicPropertyGeneration temp_1 = object ;
    test_0 = temp_1.getter_mInPreferences (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 261)) ;
      const GALGAS_atomicPropertyGeneration temp_2 = object ;
      result_result.plusAssign_operation(GALGAS_string ("//   Atomic property: ").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 262)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 262)) ;
      result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 263)) ;
      const GALGAS_atomicPropertyGeneration temp_3 = object ;
      const GALGAS_atomicPropertyGeneration temp_4 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 264)).add_operation (GALGAS_string ("_property = EBPreferencesProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 264)).add_operation (extensionGetter_swiftTypeName (temp_4.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 264)) ;
      const GALGAS_atomicPropertyGeneration temp_5 = object ;
      const GALGAS_atomicPropertyGeneration temp_6 = object ;
      result_result.plusAssign_operation(GALGAS_string (" (defaultValue: ").add_operation (temp_5.getter_mDefaultValueInSwift (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 265)).add_operation (GALGAS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 265)).add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 265)).add_operation (GALGAS_string (")\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 265)) ;
      result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 266)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 266)) ;
      const GALGAS_atomicPropertyGeneration temp_7 = object ;
      const GALGAS_atomicPropertyGeneration temp_8 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)).add_operation (extensionGetter_swiftTypeName (temp_8.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 267)) ;
      const GALGAS_atomicPropertyGeneration temp_9 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    get { return preferences_").add_operation (temp_9.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 268)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 268)) ;
      const GALGAS_atomicPropertyGeneration temp_10 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    set { preferences_").add_operation (temp_10.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 269)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 269)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 270)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 272)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 272)) ;
    const GALGAS_atomicPropertyGeneration temp_11 = object ;
    result_result.plusAssign_operation(GALGAS_string ("  //   Atomic property: ").add_operation (temp_11.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 273)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 273)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 274)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 274)) ;
    const GALGAS_atomicPropertyGeneration temp_12 = object ;
    const GALGAS_atomicPropertyGeneration temp_13 = object ;
    result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_12.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 275)).add_operation (GALGAS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 275)).add_operation (extensionGetter_swiftTypeName (temp_13.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 275)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 275)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 276)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 276)) ;
    const GALGAS_atomicPropertyGeneration temp_14 = object ;
    result_result.plusAssign_operation(GALGAS_string ("  final func reset_").add_operation (temp_14.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 277)).add_operation (GALGAS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 277)) ;
    const GALGAS_atomicPropertyGeneration temp_15 = object ;
    const GALGAS_atomicPropertyGeneration temp_16 = object ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_15.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 278)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 278)).add_operation (temp_16.getter_mDefaultValueInSwift (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 278)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 278)) ;
    result_result.plusAssign_operation(GALGAS_string ("  }\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 279)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 280)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 280)) ;
    const GALGAS_atomicPropertyGeneration temp_17 = object ;
    const GALGAS_atomicPropertyGeneration temp_18 = object ;
    result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_17.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 281)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 281)).add_operation (extensionGetter_swiftTypeName (temp_18.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 281)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 281)) ;
    const GALGAS_atomicPropertyGeneration temp_19 = object ;
    result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_19.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 282)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 282)) ;
    const GALGAS_atomicPropertyGeneration temp_20 = object ;
    result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_20.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 283)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 283)) ;
    result_result.plusAssign_operation(GALGAS_string ("  }\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 284)) ;
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_atomicPropertyGeneration temp_22 = object ;
    test_21 = temp_22.getter_mNeedsValidation (HERE).boolEnum () ;
    if (kBoolTrue == test_21) {
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 287)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 287)) ;
      const GALGAS_atomicPropertyGeneration temp_23 = object ;
      const GALGAS_atomicPropertyGeneration temp_24 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  final func ").add_operation (temp_23.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 288)).add_operation (GALGAS_string ("_validateAndSetProp (_ inCandidateValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 288)).add_operation (extensionGetter_swiftTypeName (temp_24.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 288)).add_operation (GALGAS_string (", windowForSheet inWindow : NSWindow\?) -> Bool {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 288)) ;
      const GALGAS_atomicPropertyGeneration temp_25 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (temp_25.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 289)).add_operation (GALGAS_string ("_property.validateAndSetProp (inCandidateValue, windowForSheet: inWindow)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 289)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 290)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                extensionGetter_atomicPropertyGeneration_propertyDeclarationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_atomicPropertyGeneration_propertyDeclarationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicPropertyGeneration_initCode (const cPtr_propertyGeneration * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  const GALGAS_atomicPropertyGeneration temp_0 = object ;
  const GALGAS_atomicPropertyGeneration temp_1 = object ;
  result_result = GALGAS_string ("    self.").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 297)).add_operation (GALGAS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 297)).add_operation (extensionGetter_swiftTypeName (temp_1.getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 297)) ;
  const GALGAS_atomicPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string (" (defaultValue: ").add_operation (temp_2.getter_mDefaultValueInSwift (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 298)).add_operation (GALGAS_string (", undoManager: ebUndoManager)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 298)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyGeneration_initCode (void) {
  enterExtensionGetter_initCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                 extensionGetter_atomicPropertyGeneration_initCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyGeneration_initCode (defineExtensionGetter_atomicPropertyGeneration_initCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                 const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_atomicPropertyGeneration temp_1 = object ;
    test_0 = temp_1.getter_mNeedsValidation (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_atomicPropertyGeneration temp_2 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 306)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 306)) ;
      const GALGAS_atomicPropertyGeneration temp_3 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 307)).add_operation (GALGAS_string ("_property.validationFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 307)) ;
      const GALGAS_atomicPropertyGeneration temp_4 = object ;
      result_result.plusAssign_operation(GALGAS_string ("      return self\?.validate_").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 308)).add_operation (GALGAS_string (" (currentValue: $0, proposedValue: $1) \?\? .rejectWithBeep\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 308)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 309)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                          extensionGetter_atomicPropertyGeneration_configurationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyGeneration_configurationCode (defineExtensionGetter_atomicPropertyGeneration_configurationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration setupAtomicPropertyFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  const GALGAS_atomicPropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 316)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 316)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = object ;
  const GALGAS_atomicPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 317)).add_operation (GALGAS_string ("_property.readFrom (dictionary: inDictionary, forKey: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 317)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 317)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 317)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode (void) {
  enterExtensionGetter_setupAtomicPropertyFromDictionaryCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                              extensionGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode (defineExtensionGetter_atomicPropertyGeneration_setupAtomicPropertyFromDictionaryCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicPropertyGeneration_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  const GALGAS_atomicPropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 323)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 323)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = object ;
  const GALGAS_atomicPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 324)).add_operation (GALGAS_string ("_property.storeIn (dictionary: ioDictionary, forKey: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 324)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 324)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 324)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyGeneration_saveIntoDictionaryCode (void) {
  enterExtensionGetter_saveIntoDictionaryCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                               extensionGetter_atomicPropertyGeneration_saveIntoDictionaryCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyGeneration_saveIntoDictionaryCode (defineExtensionGetter_atomicPropertyGeneration_saveIntoDictionaryCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_atomicPropertyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_atomicPropertyGeneration * object = (const cPtr_atomicPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_atomicPropertyGeneration) ;
  const GALGAS_atomicPropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 330)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 330)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 331)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 331)) ;
  const GALGAS_atomicPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 332)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 332)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_atomicPropertyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_atomicPropertyGeneration.mSlotID,
                                                extensionGetter_atomicPropertyGeneration_clearObjectExplorerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_atomicPropertyGeneration_clearObjectExplorerCode (defineExtensionGetter_atomicPropertyGeneration_clearObjectExplorerCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_toOneRelationshipAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  const GALGAS_toOneRelationshipAST temp_0 = object ;
  const GALGAS_toOneRelationshipAST temp_1 = object ;
  const GALGAS_toOneRelationshipAST temp_2 = object ;
  GALGAS_lstring var_node_968 = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 23)).add_operation (temp_1.getter_mToOneRelationshipName (HERE).getter_string (SOURCE_FILE ("to-one-relationship.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 23)), temp_2.getter_mToOneRelationshipName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 23)) ;
  {
  const GALGAS_toOneRelationshipAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_968, temp_3, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 24)) ;
  }
  {
  const GALGAS_toOneRelationshipAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_968, temp_4.getter_mClassName (HERE) COMMA_SOURCE_FILE ("to-one-relationship.galgas", 25)) ;
  }
  {
  const GALGAS_toOneRelationshipAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_968, temp_5.getter_mDestinationEntityName (HERE) COMMA_SOURCE_FILE ("to-one-relationship.galgas", 26)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_toOneRelationshipAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                               extensionMethod_toOneRelationshipAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_toOneRelationshipAST_enterInPrecedenceGraph (defineExtensionMethod_toOneRelationshipAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOneRelationshipAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_toOneRelationshipAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  const GALGAS_toOneRelationshipAST temp_0 = object ;
  const GALGAS_toOneRelationshipAST temp_1 = object ;
  const GALGAS_toOneRelationshipAST temp_2 = object ;
  result_result = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 32)).add_operation (temp_1.getter_mToOneRelationshipName (HERE).getter_string (SOURCE_FILE ("to-one-relationship.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 32)), temp_2.getter_mToOneRelationshipName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 32)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toOneRelationshipAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                extensionGetter_toOneRelationshipAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toOneRelationshipAST_nodeKey (defineExtensionGetter_toOneRelationshipAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_toOneRelationshipAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  const GALGAS_toOneRelationshipAST temp_0 = object ;
  cMapElement_classMap * objectArray_3797 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 97)) ;
  if (NULL != objectArray_3797) {
    macroValidSharedObject (objectArray_3797, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_3967 ;
    const GALGAS_toOneRelationshipAST temp_1 = object ;
    GALGAS_propertyMap joker_3969_3 ; // Joker input parameter
    GALGAS_actionMap joker_3969_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3969_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_1.getter_mDestinationEntityName (HERE), var_classKind_3967, joker_3969_3, joker_3969_2, joker_3969_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 100)) ;
    switch (var_classKind_3967.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_toOneRelationshipAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.getter_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 103)), GALGAS_string ("an entity is required here"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 103)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const GALGAS_toOneRelationshipAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.getter_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 105)), GALGAS_string ("an entity is required here"), fixItArray5  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 105)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_toOneRelationshipAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.getter_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 107)), GALGAS_string ("an entity is required here"), fixItArray7  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 107)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_4566 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_3967.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_4566->mAssociatedValue1 ;
        const GALGAS_toOneRelationshipAST temp_8 = object ;
        const GALGAS_toOneRelationshipAST temp_9 = object ;
        GALGAS_propertyKind var_kind_4316 = GALGAS_propertyKind::constructor_toOne (temp_8.getter_mDestinationEntityName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.galgas", 111)), extractedValue_graphic, temp_9.getter_mOpposite (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 109)) ;
        {
        const GALGAS_toOneRelationshipAST temp_10 = object ;
        objectArray_3797->mProperty_mPropertyMap.setter_insertKey (temp_10.getter_mToOneRelationshipName (HERE), var_kind_4316, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-one-relationship.galgas", 115)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 115)) ;
        }
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_toOneRelationshipAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                           extensionMethod_toOneRelationshipAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_toOneRelationshipAST_firstAnalysisPhase (defineExtensionMethod_toOneRelationshipAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_toOneRelationshipAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toOneRelationshipAST * object = (const cPtr_toOneRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toOneRelationshipAST) ;
  const GALGAS_toOneRelationshipAST temp_0 = object ;
  cMapElement_classMap * objectArray_4863 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 126)) ;
  if (NULL != objectArray_4863) {
    macroValidSharedObject (objectArray_4863, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_5033 ;
    GALGAS_propertyMap var_destinationEntityPropertyMap_5067 ;
    const GALGAS_toOneRelationshipAST temp_1 = object ;
    GALGAS_actionMap joker_5069_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5069_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_1.getter_mDestinationEntityName (HERE), var_classKind_5033, var_destinationEntityPropertyMap_5067, joker_5069_2, joker_5069_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 129)) ;
    switch (var_classKind_5033.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_entity * extractPtr_5649 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_5033.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_5649->mAssociatedValue1 ;
        const GALGAS_toOneRelationshipAST temp_2 = object ;
        const GALGAS_toOneRelationshipAST temp_3 = object ;
        GALGAS_propertyKind var_kind_5203 = GALGAS_propertyKind::constructor_toOne (temp_2.getter_mDestinationEntityName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.galgas", 137)), extractedValue_graphic, temp_3.getter_mOpposite (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 135)) ;
        const GALGAS_toOneRelationshipAST temp_4 = object ;
        const GALGAS_toOneRelationshipAST temp_5 = object ;
        const GALGAS_toOneRelationshipAST temp_6 = object ;
        const GALGAS_toOneRelationshipAST temp_7 = object ;
        objectArray_4863->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toOnePropertyGeneration::constructor_new (temp_4.getter_mToOneRelationshipName (HERE).getter_string (HERE), temp_5.getter_mClassName (HERE).getter_string (SOURCE_FILE ("to-one-relationship.galgas", 144)), var_kind_5203, temp_6.getter_mOpposite (HERE), var_destinationEntityPropertyMap_5067, temp_7.getter_mUsedForSignature (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 142))  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 142)) ;
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_toOneRelationshipAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_toOneRelationshipAST.mSlotID,
                                           extensionMethod_toOneRelationshipAST_thirdAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_toOneRelationshipAST_thirdAnalysisPhase (defineExtensionMethod_toOneRelationshipAST_thirdAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toOnePropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                      const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                      const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 178)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 178)) ;
  const GALGAS_toOnePropertyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To one property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 179)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 179)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 180)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 180)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = object ;
  const GALGAS_toOnePropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 181)).add_operation (GALGAS_string ("_property = StoredObject_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 181)).add_operation (extensionGetter_swiftTypeName (temp_2.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 181)) ;
  const GALGAS_toOnePropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string (" (usedForSignature: ").add_operation (temp_3.getter_mUsedForSignature (HERE).getter_cString (SOURCE_FILE ("to-one-relationship.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 182)).add_operation (GALGAS_string (")\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 182)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 183)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 183)) ;
  const GALGAS_toOnePropertyGeneration temp_4 = object ;
  const GALGAS_toOnePropertyGeneration temp_5 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 184)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 184)).add_operation (extensionGetter_swiftTypeName (temp_5.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 184)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 184)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 185)) ;
  const GALGAS_toOnePropertyGeneration temp_6 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 186)).add_operation (GALGAS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 186)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 187)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 188)) ;
  const GALGAS_toOnePropertyGeneration temp_7 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      if self.").add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 189)).add_operation (GALGAS_string ("_property.propval != nil {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 189)) ;
  const GALGAS_toOnePropertyGeneration temp_8 = object ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 190)).add_operation (GALGAS_string ("_property.setProp (nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 190)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 191)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if newValue != nil {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 192)) ;
  const GALGAS_toOnePropertyGeneration temp_9 = object ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_9.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 193)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 193)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 194)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 195)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 196)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 197)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 197)) ;
  const GALGAS_toOnePropertyGeneration temp_10 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_10.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)).add_operation (GALGAS_string ("_none = EBGenericTransientProperty <Bool> ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toOnePropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                extensionGetter_toOnePropertyGeneration_propertyDeclarationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toOnePropertyGeneration_propertyDeclarationCode (defineExtensionGetter_toOnePropertyGeneration_propertyDeclarationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toOnePropertyGeneration_initCode (const cPtr_propertyGeneration * /* inObject */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toOnePropertyGeneration_initCode (void) {
  enterExtensionGetter_initCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                 extensionGetter_toOnePropertyGeneration_initCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toOnePropertyGeneration_initCode (defineExtensionGetter_toOnePropertyGeneration_initCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toOnePropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  const GALGAS_toOnePropertyGeneration temp_0 = object ;
  switch (temp_0.getter_mOpposite (HERE).enumValue ()) {
  case GALGAS_toOneOppositeRelationship::kNotBuilt:
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * extractPtr_9114 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) (temp_0.getter_mOpposite (HERE).unsafePointer ()) ;
      const GALGAS_lstring extractedValue_oppositeName = extractPtr_9114->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_1 = object ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 212)).add_operation (GALGAS_string (" (has opposite to many relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 212)).add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 212)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 212)) ;
      const GALGAS_toOnePropertyGeneration temp_2 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 213)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 213)) ;
      const GALGAS_toOnePropertyGeneration temp_3 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 214)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 214)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 215)).add_operation (GALGAS_string ("_property.add (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 215)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 216)).add_operation (GALGAS_string ("_property.remove (me) } }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 216)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 217)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_none:
    {
      const GALGAS_toOnePropertyGeneration temp_4 = object ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 219)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 219)) ;
      const GALGAS_toOnePropertyGeneration temp_5 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 220)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 220)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_9920 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (temp_0.getter_mOpposite (HERE).unsafePointer ()) ;
      const GALGAS_lstring extractedValue_oppositeName = extractPtr_9920->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_6 = object ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 222)).add_operation (GALGAS_string (" (has opposite to one relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 222)).add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 222)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 222)) ;
      const GALGAS_toOnePropertyGeneration temp_7 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 223)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 223)) ;
      const GALGAS_toOnePropertyGeneration temp_8 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 224)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 224)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 225)).add_operation (GALGAS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 225)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 226)).add_operation (GALGAS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 226)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 227)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toOnePropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                          extensionGetter_toOnePropertyGeneration_configurationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toOnePropertyGeneration_configurationCode (defineExtensionGetter_toOnePropertyGeneration_configurationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_toOnePropertyGeneration temp_0 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 236)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 236)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 237)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let possibleEntity = readEntityFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 238)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("        inRelationshipName: \"").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 239)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 239)) ;
  result_result.plusAssign_operation(GALGAS_string ("        inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 240)) ;
  result_result.plusAssign_operation(GALGAS_string ("        managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 242)) ;
  const GALGAS_toOnePropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("      if let entity = possibleEntity as\? ").add_operation (extensionGetter_swiftTypeName (temp_2.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 243)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 243)) ;
  const GALGAS_toOnePropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 244)).add_operation (GALGAS_string ("_property.setProp (entity)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 245)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 246)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode (void) {
  enterExtensionGetter_setupRelationshipFromDictionaryCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                            extensionGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode (defineExtensionGetter_toOnePropertyGeneration_setupRelationshipFromDictionaryCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toOnePropertyGeneration_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_toOnePropertyGeneration temp_0 = object ;
  switch (temp_0.getter_mOpposite (HERE).enumValue ()) {
  case GALGAS_toOneOppositeRelationship::kNotBuilt:
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
    {
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_none:
    {
      const GALGAS_toOnePropertyGeneration temp_1 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 257)) ;
      const GALGAS_toOnePropertyGeneration temp_2 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (managedObject:self.").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 258)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 258)) ;
      const GALGAS_toOnePropertyGeneration temp_3 = object ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 259)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 259)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 260)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_11805 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (temp_0.getter_mOpposite (HERE).unsafePointer ()) ;
      const GALGAS_lstring extractedValue_oppositeName = extractPtr_11805->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_4 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 262)).add_operation (GALGAS_string (" // Opposite is toOne "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 262)).add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 262)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 262)) ;
      const GALGAS_toOnePropertyGeneration temp_5 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (managedObject:self.").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 263)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 263)) ;
      const GALGAS_toOnePropertyGeneration temp_6 = object ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 264)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 264)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 265)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toOnePropertyGeneration_saveIntoDictionaryCode (void) {
  enterExtensionGetter_saveIntoDictionaryCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                               extensionGetter_toOnePropertyGeneration_saveIntoDictionaryCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toOnePropertyGeneration_saveIntoDictionaryCode (defineExtensionGetter_toOnePropertyGeneration_saveIntoDictionaryCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration objectAccessibilityCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toOnePropertyGeneration_objectAccessibilityCode (const cPtr_propertyGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  const GALGAS_toOnePropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 272)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 272)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    if let object = self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 273)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 273)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (object)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 274)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 275)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toOnePropertyGeneration_objectAccessibilityCode (void) {
  enterExtensionGetter_objectAccessibilityCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                extensionGetter_toOnePropertyGeneration_objectAccessibilityCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toOnePropertyGeneration_objectAccessibilityCode (defineExtensionGetter_toOnePropertyGeneration_objectAccessibilityCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  const GALGAS_toOnePropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 281)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 281)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    if let object = self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 282)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 282)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (object)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 283)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 284)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation (void) {
  enterExtensionGetter_objectAccessibilityCodeForSaveOperation (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                                extensionGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation (defineExtensionGetter_toOnePropertyGeneration_objectAccessibilityCodeForSaveOperation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toOnePropertyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  const GALGAS_toOnePropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 290)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 290)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 291)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 291)) ;
  const GALGAS_toOnePropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 292)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 292)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toOnePropertyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_toOnePropertyGeneration.mSlotID,
                                                extensionGetter_toOnePropertyGeneration_clearObjectExplorerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toOnePropertyGeneration_clearObjectExplorerCode (defineExtensionGetter_toOnePropertyGeneration_clearObjectExplorerCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_toManyRelationshipAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toManyRelationshipAST * object = (const cPtr_toManyRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toManyRelationshipAST) ;
  const GALGAS_toManyRelationshipAST temp_0 = object ;
  const GALGAS_toManyRelationshipAST temp_1 = object ;
  const GALGAS_toManyRelationshipAST temp_2 = object ;
  GALGAS_lstring var_node_969 = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 24)).add_operation (temp_1.getter_mToManyRelationshipName (HERE).getter_string (SOURCE_FILE ("to-many-relationship.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 24)), temp_2.getter_mToManyRelationshipName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 24)) ;
  {
  const GALGAS_toManyRelationshipAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_969, temp_3, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 25)) ;
  }
  {
  const GALGAS_toManyRelationshipAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_969, temp_4.getter_mClassName (HERE) COMMA_SOURCE_FILE ("to-many-relationship.galgas", 26)) ;
  }
  {
  const GALGAS_toManyRelationshipAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_969, temp_5.getter_mDestinationEntityName (HERE) COMMA_SOURCE_FILE ("to-many-relationship.galgas", 27)) ;
  }
  const GALGAS_toManyRelationshipAST temp_6 = object ;
  switch (temp_6.getter_mOption (HERE).enumValue ()) {
  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_1454 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (temp_6.getter_mOption (HERE).unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_1454->mAssociatedValue0 ;
      const GALGAS_toManyRelationshipAST temp_7 = object ;
      GALGAS_lstring var_dependanceNode_1311 = GALGAS_lstring::constructor_new (temp_7.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 30)).add_operation (extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 30)), extractedValue_masterPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 30)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_969, var_dependanceNode_1311 COMMA_SOURCE_FILE ("to-many-relationship.galgas", 31)) ;
      }
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
    {
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
    {
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_toManyRelationshipAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_toManyRelationshipAST.mSlotID,
                                               extensionMethod_toManyRelationshipAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_toManyRelationshipAST_enterInPrecedenceGraph (defineExtensionMethod_toManyRelationshipAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyRelationshipAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_toManyRelationshipAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_toManyRelationshipAST * object = (const cPtr_toManyRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toManyRelationshipAST) ;
  const GALGAS_toManyRelationshipAST temp_0 = object ;
  const GALGAS_toManyRelationshipAST temp_1 = object ;
  const GALGAS_toManyRelationshipAST temp_2 = object ;
  result_result = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 40)).add_operation (temp_1.getter_mToManyRelationshipName (HERE).getter_string (SOURCE_FILE ("to-many-relationship.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 40)), temp_2.getter_mToManyRelationshipName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 40)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyRelationshipAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_toManyRelationshipAST.mSlotID,
                                extensionGetter_toManyRelationshipAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyRelationshipAST_nodeKey (defineExtensionGetter_toManyRelationshipAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_toManyRelationshipAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_toManyRelationshipAST * object = (const cPtr_toManyRelationshipAST *) inObject ;
  macroValidSharedObject (object, cPtr_toManyRelationshipAST) ;
  const GALGAS_toManyRelationshipAST temp_0 = object ;
  cMapElement_classMap * objectArray_4543 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 119)) ;
  if (NULL != objectArray_4543) {
    macroValidSharedObject (objectArray_4543, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4713 ;
    const GALGAS_toManyRelationshipAST temp_1 = object ;
    GALGAS_propertyMap joker_4715_3 ; // Joker input parameter
    GALGAS_actionMap joker_4715_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4715_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_1.getter_mDestinationEntityName (HERE), var_classKind_4713, joker_4715_3, joker_4715_2, joker_4715_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 122)) ;
    switch (var_classKind_4713.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_toManyRelationshipAST temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.getter_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 125)), GALGAS_string ("an entity is required here"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 125)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const GALGAS_toManyRelationshipAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.getter_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 127)), GALGAS_string ("an entity is required here"), fixItArray5  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 127)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_toManyRelationshipAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.getter_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 129)), GALGAS_string ("an entity is required here"), fixItArray7  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 129)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_6288 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4713.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_6288->mAssociatedValue1 ;
        const GALGAS_toManyRelationshipAST temp_8 = object ;
        const GALGAS_toManyRelationshipAST temp_9 = object ;
        GALGAS_propertyKind var_kind_5062 = GALGAS_propertyKind::constructor_toMany (temp_8.getter_mDestinationEntityName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-many-relationship.galgas", 133)), extractedValue_graphic, temp_9.getter_mOption (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 131)) ;
        {
        const GALGAS_toManyRelationshipAST temp_10 = object ;
        objectArray_4543->mProperty_mPropertyMap.setter_insertKey (temp_10.getter_mToManyRelationshipName (HERE), var_kind_5062, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-many-relationship.galgas", 137)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 137)) ;
        }
        const GALGAS_toManyRelationshipAST temp_11 = object ;
        GALGAS_bool var_inPrefs_5372 = GALGAS_bool (kIsEqual, temp_11.getter_mClassName (HERE).getter_string (HERE).objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 139)))) ;
        GALGAS_toManyRelationshipOptionGeneration var_optionForGeneration_5497 ;
        const GALGAS_toManyRelationshipAST temp_12 = object ;
        switch (temp_12.getter_mOption (HERE).enumValue ()) {
        case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
          {
            const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_5841 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (temp_12.getter_mOption (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_5841->mAssociatedValue0 ;
            GALGAS_propertyKind var_masterPropertyKind_5647 ;
            GALGAS_actionMap joker_5649_2 ; // Joker input parameter
            GALGAS_bool joker_5649_1 ; // Joker input parameter
            objectArray_4543->mProperty_mPropertyMap.method_searchKey (extractedValue_masterPropertyName, var_masterPropertyKind_5647, joker_5649_2, joker_5649_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 144)) ;
            var_optionForGeneration_5497 = GALGAS_toManyRelationshipOptionGeneration::constructor_hasDependance (extractedValue_masterPropertyName.getter_string (HERE), extensionGetter_swiftTypeName (var_masterPropertyKind_5647, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 147))  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 145)) ;
          }
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
          {
            const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_5961 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (temp_12.getter_mOption (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_oppositeName = extractPtr_5961->mAssociatedValue0 ;
            var_optionForGeneration_5497 = GALGAS_toManyRelationshipOptionGeneration::constructor_hasOpposite (extractedValue_oppositeName.getter_string (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 150)) ;
          }
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_none:
          {
            var_optionForGeneration_5497 = GALGAS_toManyRelationshipOptionGeneration::constructor_none (SOURCE_FILE ("to-many-relationship.galgas", 152)) ;
          }
          break ;
        }
        const GALGAS_toManyRelationshipAST temp_13 = object ;
        const GALGAS_toManyRelationshipAST temp_14 = object ;
        const GALGAS_toManyRelationshipAST temp_15 = object ;
        objectArray_4543->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyPropertyGeneration::constructor_new (temp_13.getter_mToManyRelationshipName (HERE).getter_string (HERE), var_kind_5062, var_optionForGeneration_5497, var_inPrefs_5372, temp_14.getter_mCustomStore (HERE), temp_15.getter_mUsedForSignature (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 155))  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 155)) ;
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_toManyRelationshipAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_toManyRelationshipAST.mSlotID,
                                           extensionMethod_toManyRelationshipAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_toManyRelationshipAST_firstAnalysisPhase (defineExtensionMethod_toManyRelationshipAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                       const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                       const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = object ;
    test_0 = temp_1.getter_mOption (HERE).getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 197)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 198)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 198)) ;
      const GALGAS_toManyPropertyGeneration temp_2 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 199)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 199)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 200)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 200)) ;
      GALGAS_string var_masterPropertyTypeName_7799 ;
      const GALGAS_toManyPropertyGeneration temp_3 = object ;
      GALGAS_string joker_7740_1 ; // Joker input parameter
      temp_3.getter_mOption (HERE).method_hasDependance (joker_7740_1, var_masterPropertyTypeName_7799, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 201)) ;
      const GALGAS_toManyPropertyGeneration temp_4 = object ;
      const GALGAS_toManyPropertyGeneration temp_5 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 202)).add_operation (GALGAS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 202)).add_operation (extensionGetter_swiftTypeName (temp_5.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 202)).add_operation (GALGAS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 202)).add_operation (var_masterPropertyTypeName_7799, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 203)).add_operation (GALGAS_string ("> ()\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 202)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 204)) ;
      const GALGAS_toManyPropertyGeneration temp_6 = object ;
      const GALGAS_toManyPropertyGeneration temp_7 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)).add_operation (GALGAS_string (" : ["), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)).add_operation (extensionGetter_swiftTypeName (temp_7.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)).add_operation (GALGAS_string ("] {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 205)) ;
      const GALGAS_toManyPropertyGeneration temp_8 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 206)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 206)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_toManyPropertyGeneration temp_10 = object ;
        test_9 = temp_10.getter_mOption (HERE).getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 207)).operator_not (SOURCE_FILE ("to-many-relationship.galgas", 207)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_toManyPropertyGeneration temp_11 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_11.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 208)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 208)) ;
        }
      }
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 210)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_toManyPropertyGeneration temp_13 = object ;
      test_12 = temp_13.getter_mInPreferences (HERE).boolEnum () ;
      if (kBoolTrue == test_12) {
        result_result = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 212)) ;
        const GALGAS_toManyPropertyGeneration temp_14 = object ;
        result_result.plusAssign_operation(GALGAS_string ("//   To many property: ").add_operation (temp_14.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 213)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 213)) ;
        result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 214)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 214)) ;
        const GALGAS_toManyPropertyGeneration temp_15 = object ;
        const GALGAS_toManyPropertyGeneration temp_16 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_15.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 215)).add_operation (GALGAS_string ("_property = PreferencesArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 215)).add_operation (extensionGetter_swiftTypeName (temp_16.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 215)) ;
        const GALGAS_toManyPropertyGeneration temp_17 = object ;
        result_result.plusAssign_operation(GALGAS_string (" (prefKey: Preferences_").add_operation (temp_17.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 216)).add_operation (GALGAS_string (")\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 216)) ;
        result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 217)) ;
        const GALGAS_toManyPropertyGeneration temp_18 = object ;
        const GALGAS_toManyPropertyGeneration temp_19 = object ;
        result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_18.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 218)).add_operation (GALGAS_string (" : ["), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 218)).add_operation (extensionGetter_swiftTypeName (temp_19.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 218)).add_operation (GALGAS_string ("] {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 218)) ;
        const GALGAS_toManyPropertyGeneration temp_20 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    get { return preferences_").add_operation (temp_20.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 219)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 219)) ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          const GALGAS_toManyPropertyGeneration temp_22 = object ;
          test_21 = temp_22.getter_mOption (HERE).getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 220)).operator_not (SOURCE_FILE ("to-many-relationship.galgas", 220)).boolEnum () ;
          if (kBoolTrue == test_21) {
            const GALGAS_toManyPropertyGeneration temp_23 = object ;
            result_result.plusAssign_operation(GALGAS_string ("    set { preferences_").add_operation (temp_23.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 221)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 221)) ;
          }
        }
        result_result.plusAssign_operation(GALGAS_string ("  }\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 223)) ;
      }
    }
    if (kBoolFalse == test_12) {
      result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 225)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 225)) ;
      const GALGAS_toManyPropertyGeneration temp_24 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (temp_24.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 226)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 227)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 227)) ;
      const GALGAS_toManyPropertyGeneration temp_25 = object ;
      const GALGAS_toManyPropertyGeneration temp_26 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_25.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 228)).add_operation (GALGAS_string ("_property = StoredArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 228)).add_operation (extensionGetter_swiftTypeName (temp_26.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 228)) ;
      const GALGAS_toManyPropertyGeneration temp_27 = object ;
      result_result.plusAssign_operation(GALGAS_string (" (usedForSignature: ").add_operation (temp_27.getter_mUsedForSignature (HERE).getter_cString (SOURCE_FILE ("to-many-relationship.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 229)).add_operation (GALGAS_string (")\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 229)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 231)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 231)) ;
      const GALGAS_toManyPropertyGeneration temp_28 = object ;
      const GALGAS_toManyPropertyGeneration temp_29 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_28.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 232)).add_operation (GALGAS_string (" : ["), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 232)).add_operation (extensionGetter_swiftTypeName (temp_29.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 232)).add_operation (GALGAS_string ("] {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 232)) ;
      const GALGAS_toManyPropertyGeneration temp_30 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_30.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 233)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 233)) ;
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        const GALGAS_toManyPropertyGeneration temp_32 = object ;
        test_31 = temp_32.getter_mOption (HERE).getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 234)).operator_not (SOURCE_FILE ("to-many-relationship.galgas", 234)).boolEnum () ;
        if (kBoolTrue == test_31) {
          const GALGAS_toManyPropertyGeneration temp_33 = object ;
          result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_33.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 235)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 235)) ;
        }
      }
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 237)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                extensionGetter_toManyPropertyGeneration_propertyDeclarationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_toManyPropertyGeneration_propertyDeclarationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_initCode (const cPtr_propertyGeneration * /* inObject */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_initCode (void) {
  enterExtensionGetter_initCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                 extensionGetter_toManyPropertyGeneration_initCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_initCode (defineExtensionGetter_toManyPropertyGeneration_initCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration prefKeyDefinitionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  const GALGAS_toManyPropertyGeneration temp_0 = object ;
  const GALGAS_toManyPropertyGeneration temp_1 = object ;
  result_result = GALGAS_string ("let Preferences_").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)).add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_prefKeyDefinitionCode (void) {
  enterExtensionGetter_prefKeyDefinitionCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                              extensionGetter_toManyPropertyGeneration_prefKeyDefinitionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_prefKeyDefinitionCode (defineExtensionGetter_toManyPropertyGeneration_prefKeyDefinitionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                 const GALGAS_bool constinArgument_inPreferences,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_11106 = temp_0 ;
  const GALGAS_toManyPropertyGeneration temp_2 = object ;
  switch (temp_2.getter_mOption (HERE).enumValue ()) {
  case GALGAS_toManyRelationshipOptionGeneration::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_none:
    {
      const GALGAS_toManyPropertyGeneration temp_3 = object ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 259)).add_operation (GALGAS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 259)) ;
      const GALGAS_toManyPropertyGeneration temp_4 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_11106, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 260)).add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 260)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 260)) ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasDependance:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasOpposite:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * extractPtr_12035 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) (temp_2.getter_mOption (HERE).unsafePointer ()) ;
      const GALGAS_string extractedValue_oppositeName = extractPtr_12035->mAssociatedValue0 ;
      const GALGAS_toManyPropertyGeneration temp_5 = object ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 264)).add_operation (GALGAS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 264)) ;
      const GALGAS_toManyPropertyGeneration temp_6 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_11106, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 265)).add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 265)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 265)) ;
      const GALGAS_toManyPropertyGeneration temp_7 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_11106, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 266)).add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 266)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 266)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_oppositeName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 267)).add_operation (GALGAS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 267)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_oppositeName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 268)).add_operation (GALGAS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 268)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 269)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                          extensionGetter_toManyPropertyGeneration_configurationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_configurationCode (defineExtensionGetter_toManyPropertyGeneration_configurationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = object ;
    test_0 = temp_1.getter_mOption (HERE).getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 276)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GALGAS_toManyPropertyGeneration temp_3 = object ;
      test_2 = temp_3.getter_mCustomStore (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_toManyPropertyGeneration temp_4 = object ;
        result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 279)).add_operation (GALGAS_string (" (Custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 279)) ;
        const GALGAS_toManyPropertyGeneration temp_5 = object ;
        const GALGAS_toManyPropertyGeneration temp_6 = object ;
        const GALGAS_toManyPropertyGeneration temp_7 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 280)).add_operation (GALGAS_string ("_property.setProp (customRead_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 280)).add_operation (extensionGetter_swiftTypeName (temp_6.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 280)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 280)).add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 280)).add_operation (GALGAS_string (" (from: inDictionary, with: self.ebUndoManager))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 280)) ;
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_toManyPropertyGeneration temp_8 = object ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 282)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 282)) ;
      const GALGAS_toManyPropertyGeneration temp_9 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_9.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 283)).add_operation (GALGAS_string ("_property.setProp (readEntityArrayFromDictionary (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 283)) ;
      const GALGAS_toManyPropertyGeneration temp_10 = object ;
      result_result.plusAssign_operation(GALGAS_string ("      inRelationshipName: \"").add_operation (temp_10.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 284)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 284)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 285)) ;
      result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 286)) ;
      const GALGAS_toManyPropertyGeneration temp_11 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    ) as! [").add_operation (extensionGetter_swiftTypeName (temp_11.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 287)).add_operation (GALGAS_string ("])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 287)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode (void) {
  enterExtensionGetter_setupRelationshipFromDictionaryCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                            extensionGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode (defineExtensionGetter_toManyPropertyGeneration_setupRelationshipFromDictionaryCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = object ;
    test_0 = temp_1.getter_mOption (HERE).getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 294)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GALGAS_toManyPropertyGeneration temp_3 = object ;
      test_2 = temp_3.getter_mCustomStore (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_toManyPropertyGeneration temp_4 = object ;
        result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 297)).add_operation (GALGAS_string (" (Custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 297)) ;
        const GALGAS_toManyPropertyGeneration temp_5 = object ;
        const GALGAS_toManyPropertyGeneration temp_6 = object ;
        const GALGAS_toManyPropertyGeneration temp_7 = object ;
        result_result.plusAssign_operation(GALGAS_string ("    customStore_").add_operation (extensionGetter_swiftTypeName (temp_5.getter_mRelationshipType (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 298)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 298)).add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 298)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 298)).add_operation (temp_7.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 298)).add_operation (GALGAS_string ("_property.propval, intoDictionary: ioDictionary)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 298)) ;
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_toManyPropertyGeneration temp_8 = object ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 300)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 300)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 301)) ;
      const GALGAS_toManyPropertyGeneration temp_9 = object ;
      result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: self.").add_operation (temp_9.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 302)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 302)) ;
      const GALGAS_toManyPropertyGeneration temp_10 = object ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (temp_10.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 303)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 303)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 304)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 305)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_saveIntoDictionaryCode (void) {
  enterExtensionGetter_saveIntoDictionaryCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                               extensionGetter_toManyPropertyGeneration_saveIntoDictionaryCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_saveIntoDictionaryCode (defineExtensionGetter_toManyPropertyGeneration_saveIntoDictionaryCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration objectAccessibilityCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_objectAccessibilityCode (const cPtr_propertyGeneration * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  const GALGAS_toManyPropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 312)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 312)) ;
  const GALGAS_toManyPropertyGeneration temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    for managedObject in self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 313)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 315)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_objectAccessibilityCode (void) {
  enterExtensionGetter_objectAccessibilityCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                extensionGetter_toManyPropertyGeneration_objectAccessibilityCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_objectAccessibilityCode (defineExtensionGetter_toManyPropertyGeneration_objectAccessibilityCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = object ;
    test_0 = temp_1.getter_mCustomStore (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_toManyPropertyGeneration temp_2 = object ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 321)).add_operation (GALGAS_string (" (custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 321)) ;
      const GALGAS_toManyPropertyGeneration temp_3 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    /* for managedObject in self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 322)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 322)) ;
      result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 323)) ;
      result_result.plusAssign_operation(GALGAS_string ("    } */\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 324)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_4 = object ;
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 326)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 326)) ;
    const GALGAS_toManyPropertyGeneration temp_5 = object ;
    result_result.plusAssign_operation(GALGAS_string ("    for managedObject in self.").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 327)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 327)) ;
    result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 328)) ;
    result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 329)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation (void) {
  enterExtensionGetter_objectAccessibilityCodeForSaveOperation (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                                extensionGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation (defineExtensionGetter_toManyPropertyGeneration_objectAccessibilityCodeForSaveOperation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = object ;
    test_0 = temp_1.getter_mOption (HERE).getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 336)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_2 = object ;
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 339)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 339)) ;
    const GALGAS_toManyPropertyGeneration temp_3 = object ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 340)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 340)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                extensionGetter_toManyPropertyGeneration_clearObjectExplorerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_clearObjectExplorerCode (defineExtensionGetter_toManyPropertyGeneration_clearObjectExplorerCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration resetToManyRelationships'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = object ;
    test_0 = temp_1.getter_mOption (HERE).getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 347)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_2 = object ;
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 350)) ;
    const GALGAS_toManyPropertyGeneration temp_3 = object ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 351)).add_operation (GALGAS_string ("_property.setProp ([])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 351)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_resetToManyRelationships (void) {
  enterExtensionGetter_resetToManyRelationships (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                                 extensionGetter_toManyPropertyGeneration_resetToManyRelationships) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_resetToManyRelationships (defineExtensionGetter_toManyPropertyGeneration_resetToManyRelationships, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_toManyPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                               const GALGAS_bool /* constinArgument_inPreferences */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  const GALGAS_toManyPropertyGeneration temp_0 = object ;
  switch (temp_0.getter_mOption (HERE).enumValue ()) {
  case GALGAS_toManyRelationshipOptionGeneration::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasDependance:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * extractPtr_16540 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) (temp_0.getter_mOption (HERE).unsafePointer ()) ;
      const GALGAS_string extractedValue_masterPropertyName = extractPtr_16540->mAssociatedValue0 ;
      const GALGAS_toManyPropertyGeneration temp_1 = object ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 359)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 359)) ;
      const GALGAS_toManyPropertyGeneration temp_2 = object ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (extractedValue_masterPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 360)).add_operation (GALGAS_string ("_property.removeEBObserver (self."), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 360)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 360)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 360)) ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_none:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasOpposite:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_toManyPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_toManyPropertyGeneration.mSlotID,
                                        extensionGetter_toManyPropertyGeneration_terminationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_toManyPropertyGeneration_terminationCode (defineExtensionGetter_toManyPropertyGeneration_terminationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'validationStubExtension actionGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
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

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateValidationRoutineStubs'
//
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildActionMap'
//
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@actionFileGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_actionFileGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                               const GALGAS_string constinArgument_inOutputDirectory,
                                                               GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_actionFileGeneration * object = (const cPtr_actionFileGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_actionFileGeneration) ;
  const GALGAS_actionFileGeneration temp_0 = object ;
  const GALGAS_actionFileGeneration temp_1 = object ;
  GALGAS_string var_s_2631 = GALGAS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, temp_0.getter_mClassName (HERE), temp_1.getter_mActionName (HERE) COMMA_SOURCE_FILE ("run-action.galgas", 67))) ;
  const GALGAS_actionFileGeneration temp_2 = object ;
  const GALGAS_actionFileGeneration temp_3 = object ;
  GALGAS_string var_fileName_2750 = GALGAS_string ("action-").add_operation (temp_2.getter_mClassName (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 71)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 71)).add_operation (temp_3.getter_mActionName (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 71)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 71)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_2750  COMMA_SOURCE_FILE ("run-action.galgas", 72)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2750, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), var_s_2631, GALGAS_string ("    ENTER USER CODE HERE\n"), GALGAS_string ("  }\n"
    "}\n"
    "\n"
    "//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("run-action.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 81)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 81)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.galgas", 73)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_actionFileGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_actionFileGeneration.mSlotID,
                                     extensionMethod_actionFileGeneration_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_actionFileGeneration_generateCode (defineExtensionMethod_actionFileGeneration_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'actionGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'actionGenerationTemplate actionGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (C_Compiler * /* inCompiler */,
                                                                             const GALGAS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                             const GALGAS_string & in_ACTION_5F_NAME
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
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

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_bool /* constinArgument_inPreferences */,
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
  const GALGAS_literalIntMultipleBindingExpressionAST temp_0 = object ;
  outArgument_outEnableExpression = GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (temp_0.getter_mValue (HERE).getter_uint (HERE)  COMMA_SOURCE_FILE ("multiple-binding.galgas", 247)) ;
  outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("multiple-binding.galgas", 248)) ;
  const GALGAS_literalIntMultipleBindingExpressionAST temp_1 = object ;
  outArgument_outErrorLocation = temp_1.getter_mValue (HERE).getter_location (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                  const GALGAS_bool constinArgument_inPreferences,
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
  GALGAS_propertyKind var_kind_11356 ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument_11424 ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_0 = object ;
  extensionMethod_analyzeObservableProperty (temp_0.getter_mProperty (HERE), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_kind_11356, var_swiftTypeStringForTransientFunctionArgument_11424, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 263)) ;
  switch (var_kind_11356.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_11488 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_11356.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_11488->mAssociatedValue0 ;
      outArgument_outType = extractedValue_type ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1.getter_mProperty (HERE), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 274)), GALGAS_string ("only an atomic property can be observed"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 274)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.getter_mProperty (HERE), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 276)), GALGAS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas", 276)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.getter_mProperty (HERE), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 278)), GALGAS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.galgas", 278)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.getter_mProperty (HERE), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 280)), GALGAS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.galgas", 280)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_9 = object ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string ("self.") ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (extensionGetter_modelStringForSelf (temp_9.getter_mProperty (HERE), temp_10, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 283))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 282)) ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_12 = object ;
  outArgument_outErrorLocation = extensionGetter_location (temp_12.getter_mProperty (HERE), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 285)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                           const GALGAS_bool constinArgument_inPreferences,
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_12960 ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.getter_mBinding (HERE).ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression_12960, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 299)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 308)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 308)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 309)) ;
    }
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression_12960  COMMA_SOURCE_FILE ("multiple-binding.galgas", 311)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_bool constinArgument_inPreferences,
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_13974 ;
  GALGAS_typeKind var_outLeftType_13995 ;
  GALGAS_location var_outLeftLocation_14020 ;
  const GALGAS_orBooleanMultipleBindingExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.getter_mLeftBinding (HERE).ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_13974, var_outLeftType_13995, var_outLeftLocation_14020, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 325)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_13995.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 334)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 334)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_14020, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 335)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_14395 ;
  GALGAS_typeKind var_outRightType_14417 ;
  GALGAS_location var_outRightLocation_14443 ;
  const GALGAS_orBooleanMultipleBindingExpressionAST temp_3 = object ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.getter_mRightBinding (HERE).ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_14395, var_outRightType_14417, var_outRightLocation_14443, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 337)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_14417.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 346)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 346)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_14443, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas", 347)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 349)) ;
  outArgument_outErrorLocation = var_outRightLocation_14443 ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_13974, var_rightExpression_14395  COMMA_SOURCE_FILE ("multiple-binding.galgas", 351)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_bool constinArgument_inPreferences,
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15508 ;
  GALGAS_typeKind var_outLeftType_15529 ;
  GALGAS_location var_outLeftLocation_15554 ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.getter_mLeftBinding (HERE).ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_15508, var_outLeftType_15529, var_outLeftLocation_15554, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 365)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_15529.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 374)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 374)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15554, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 375)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15929 ;
  GALGAS_typeKind var_outRightType_15951 ;
  GALGAS_location var_outRightLocation_15977 ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST temp_3 = object ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.getter_mRightBinding (HERE).ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_15929, var_outRightType_15951, var_outRightLocation_15977, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 377)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_15951.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 386)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 386)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_15977, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas", 387)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 389)) ;
  outArgument_outErrorLocation = var_outRightLocation_15977 ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_15508, var_rightExpression_15929  COMMA_SOURCE_FILE ("multiple-binding.galgas", 391)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_bool constinArgument_inPreferences,
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_17043 ;
  GALGAS_typeKind var_outLeftType_17064 ;
  GALGAS_location var_outLeftLocation_17089 ;
  const GALGAS_andBooleanMultipleBindingExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.getter_mLeftBinding (HERE).ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_17043, var_outLeftType_17064, var_outLeftLocation_17089, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 405)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_17064.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 414)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 414)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_17089, GALGAS_string ("cannot apply 'and': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 415)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17465 ;
  GALGAS_typeKind var_outRightType_17487 ;
  GALGAS_location var_outRightLocation_17513 ;
  const GALGAS_andBooleanMultipleBindingExpressionAST temp_3 = object ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.getter_mRightBinding (HERE).ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_17465, var_outRightType_17487, var_outRightLocation_17513, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 417)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_17487.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 426)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 426)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_17513, GALGAS_string ("cannot apply 'and': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas", 427)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 429)) ;
  outArgument_outErrorLocation = var_outRightLocation_17513 ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_17043, var_rightExpression_17465  COMMA_SOURCE_FILE ("multiple-binding.galgas", 431)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_bool constinArgument_inPreferences,
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18580 ;
  GALGAS_typeKind var_outLeftType_18601 ;
  GALGAS_location var_outLeftLocation_18626 ;
  const GALGAS_comparisonMultipleBindingExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.getter_mLeftBinding (HERE).ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_18580, var_outLeftType_18601, var_outLeftLocation_18626, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 445)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_18879 ;
  GALGAS_typeKind var_outRightType_18901 ;
  GALGAS_location var_outRightLocation_18927 ;
  const GALGAS_comparisonMultipleBindingExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_1.getter_mRightBinding (HERE).ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_18879, var_outRightType_18901, var_outRightLocation_18927, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 454)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = var_outLeftType_18601.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 463)) ;
    if (kBoolTrue != test_3.boolEnum ()) {
      test_3 = var_outLeftType_18601.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas", 463)) ;
    }
    test_2 = test_3.operator_not (SOURCE_FILE ("multiple-binding.galgas", 463)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outLeftLocation_18626, GALGAS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas", 464)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_outRightType_18901.objectCompare (var_outLeftType_18601)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (var_outRightLocation_18927, GALGAS_string ("cannot compare: right operand type is different than left operand type"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.galgas", 467)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 469)) ;
  outArgument_outErrorLocation = var_outRightLocation_18927 ;
  const GALGAS_comparisonMultipleBindingExpressionAST temp_7 = object ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_18580, temp_7.getter_mOperator (HERE), var_rightExpression_18879  COMMA_SOURCE_FILE ("multiple-binding.galgas", 471)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * object = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  const GALGAS_booleanMultipleBindingLiteralIntForGeneration temp_0 = object ;
  result_outExpressionString = GALGAS_string (".literalInt (").add_operation (temp_0.getter_mValue (HERE).getter_string (SOURCE_FILE ("multiple-binding.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 548)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 548)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                         extensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration temp_0 = object ;
  result_outExpressionString = GALGAS_string (".id (").add_operation (temp_0.getter_mObservedModelString (HERE), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 555)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 555)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  const GALGAS_negateBooleanMultipleBindingExpressionForGeneration temp_0 = object ;
  result_outExpressionString = GALGAS_string (".not (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.getter_mBinding (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 562)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 562)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration temp_0 = object ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration temp_1 = object ;
  result_outExpressionString = GALGAS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.getter_mLeftBinding (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 569)).add_operation (GALGAS_string (", .or, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 569)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.getter_mRightBinding (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 569)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 569)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration temp_0 = object ;
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration temp_1 = object ;
  result_outExpressionString = GALGAS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.getter_mLeftBinding (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 576)).add_operation (GALGAS_string (", .xor, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 576)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.getter_mRightBinding (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 576)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 576)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration temp_0 = object ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration temp_1 = object ;
  result_outExpressionString = GALGAS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.getter_mLeftBinding (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 583)).add_operation (GALGAS_string (", .and, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 583)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.getter_mRightBinding (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 583)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 583)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration temp_0 = object ;
  result_outExpressionString = GALGAS_string (".intcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.getter_mLeftBinding (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 590)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 590)) ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration temp_1 = object ;
  switch (temp_1.getter_mOperator (HERE).enumValue ()) {
  case GALGAS_multipleBindingComparisonAST::kNotBuilt:
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_equal:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".eq"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 592)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_notEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".neq"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 593)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lower:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".lt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 594)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lowerOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".le"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 595)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greater:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".gt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 596)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greaterOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (".ge"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 597)) ;
    }
    break ;
  }
  const GALGAS_comparisonMultipleBindingExpressionForGeneration temp_2 = object ;
  result_outExpressionString.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_2.getter_mRightBinding (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 599)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 599)) ;
//---
  return result_outExpressionString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  const GALGAS_arrayControllerDeclarationAST temp_0 = object ;
  const GALGAS_arrayControllerDeclarationAST temp_1 = object ;
  const GALGAS_arrayControllerDeclarationAST temp_2 = object ;
  GALGAS_lstring var_node_1162 = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 28)).add_operation (temp_1.getter_mControllerName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 28)), temp_2.getter_mControllerName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 28)) ;
  {
  const GALGAS_arrayControllerDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_1162, temp_3, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 29)) ;
  }
  {
  const GALGAS_arrayControllerDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_node_1162, temp_4.getter_mClassName (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 30)) ;
  }
  const GALGAS_arrayControllerDeclarationAST temp_5 = object ;
  switch (temp_5.getter_mModel (HERE).enumValue ()) {
  case GALGAS_arrayControllerBoundModelAST::kNotBuilt:
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * extractPtr_1601 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) (temp_5.getter_mModel (HERE).unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootEntityName = extractPtr_1601->mAssociatedValue0 ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, extractedValue_rootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          {
          const GALGAS_arrayControllerDeclarationAST temp_7 = object ;
          const GALGAS_arrayControllerDeclarationAST temp_8 = object ;
          ioArgument_ioGraph.setter_addEdge (var_node_1162, GALGAS_lstring::constructor_new (extractedValue_rootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 34)).add_operation (temp_7.getter_mToManyPropertyName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 34)), temp_8.getter_mToManyPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 34)) COMMA_SOURCE_FILE ("array-controller.galgas", 34)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_selfToManyRelationship:
    {
      {
      const GALGAS_arrayControllerDeclarationAST temp_9 = object ;
      const GALGAS_arrayControllerDeclarationAST temp_10 = object ;
      const GALGAS_arrayControllerDeclarationAST temp_11 = object ;
      ioArgument_ioGraph.setter_addEdge (var_node_1162, GALGAS_lstring::constructor_new (temp_9.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 37)).add_operation (temp_10.getter_mToManyPropertyName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 37)), temp_11.getter_mToManyPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 37)) COMMA_SOURCE_FILE ("array-controller.galgas", 37)) ;
      }
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                               extensionMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_arrayControllerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_arrayControllerDeclarationAST_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  const GALGAS_arrayControllerDeclarationAST temp_0 = object ;
  const GALGAS_arrayControllerDeclarationAST temp_1 = object ;
  const GALGAS_arrayControllerDeclarationAST temp_2 = object ;
  result_result = GALGAS_lstring::constructor_new (temp_0.getter_mClassName (HERE).getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 44)).add_operation (temp_1.getter_mControllerName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 44)), temp_2.getter_mControllerName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 44)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_arrayControllerDeclarationAST_nodeKey (void) {
  enterExtensionGetter_nodeKey (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                extensionGetter_arrayControllerDeclarationAST_nodeKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_arrayControllerDeclarationAST_nodeKey (defineExtensionGetter_arrayControllerDeclarationAST_nodeKey, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayControllerDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  const GALGAS_arrayControllerDeclarationAST temp_0 = object ;
  cMapElement_classMap * objectArray_4332 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.getter_mClassName (HERE), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("array-controller.galgas", 107)) ;
  if (NULL != objectArray_4332) {
    macroValidSharedObject (objectArray_4332, cMapElement_classMap) ;
    GALGAS_actionMap temp_1 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 110)) ;
    temp_1.addAssign_operation (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 110)) ;
    temp_1.addAssign_operation (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 110)) ;
    GALGAS_actionMap var_controllerActions_4452 = temp_1 ;
    const GALGAS_arrayControllerDeclarationAST temp_2 = object ;
    switch (temp_2.getter_mModel (HERE).enumValue ()) {
    case GALGAS_arrayControllerBoundModelAST::kNotBuilt:
      break ;
    case GALGAS_arrayControllerBoundModelAST::kEnum_rootToManyRelationship:
      {
        const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * extractPtr_5659 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) (temp_2.getter_mModel (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_rootEntityName = extractPtr_5659->mAssociatedValue0 ;
        GALGAS_propertyMap var_rootProperties_4662 ;
        GALGAS_classKind joker_4641 ; // Joker input parameter
        GALGAS_actionMap joker_4664_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4664_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_rootEntityName, joker_4641, var_rootProperties_4662, joker_4664_2, joker_4664_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 113)) ;
        GALGAS_propertyKind var_classKind_4740 ;
        const GALGAS_arrayControllerDeclarationAST temp_3 = object ;
        GALGAS_actionMap joker_4742_2 ; // Joker input parameter
        GALGAS_bool joker_4742_1 ; // Joker input parameter
        var_rootProperties_4662.method_searchKey (temp_3.getter_mToManyPropertyName (HERE), var_classKind_4740, joker_4742_2, joker_4742_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 114)) ;
        switch (var_classKind_4740.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_rootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 117)), GALGAS_string ("a toMany relationship is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas", 117)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_5338 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_4740.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_5338->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_graphic = extractPtr_5338->mAssociatedValue2 ;
            GALGAS_propertyKind var_kind_4927 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic  COMMA_SOURCE_FILE ("array-controller.galgas", 119)) ;
            {
            const GALGAS_arrayControllerDeclarationAST temp_5 = object ;
            objectArray_4332->mProperty_mPropertyMap.setter_insertKey (temp_5.getter_mControllerName (HERE), var_kind_4927, var_controllerActions_4452, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 123)) ;
            }
            const GALGAS_arrayControllerDeclarationAST temp_6 = object ;
            const GALGAS_arrayControllerDeclarationAST temp_7 = object ;
            const GALGAS_arrayControllerDeclarationAST temp_8 = object ;
            objectArray_4332->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (temp_6.getter_mControllerName (HERE).getter_string (HERE), GALGAS_string ("rootObject.").add_operation (temp_7.getter_mToManyPropertyName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 127)), temp_8.getter_mClassName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 128))  COMMA_SOURCE_FILE ("array-controller.galgas", 125))  COMMA_SOURCE_FILE ("array-controller.galgas", 125)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_rootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 131)), GALGAS_string ("a toMany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas", 131)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_rootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 133)), GALGAS_string ("a toMany relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas", 133)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_rootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 135)), GALGAS_string ("a toMany relationship is required here"), fixItArray11  COMMA_SOURCE_FILE ("array-controller.galgas", 135)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_arrayControllerBoundModelAST::kEnum_selfToManyRelationship:
      {
        GALGAS_propertyKind var_classKind_5764 ;
        const GALGAS_arrayControllerDeclarationAST temp_12 = object ;
        GALGAS_actionMap joker_5766_2 ; // Joker input parameter
        GALGAS_bool joker_5766_1 ; // Joker input parameter
        objectArray_4332->mProperty_mPropertyMap.method_searchKey (temp_12.getter_mToManyPropertyName (HERE), var_classKind_5764, joker_5766_2, joker_5766_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 138)) ;
        switch (var_classKind_5764.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            const GALGAS_arrayControllerDeclarationAST temp_13 = object ;
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.getter_mToManyPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 141)), GALGAS_string ("a toMany relationship is required here"), fixItArray14  COMMA_SOURCE_FILE ("array-controller.galgas", 141)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6356 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_5764.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_6356->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_graphic = extractPtr_6356->mAssociatedValue2 ;
            GALGAS_propertyKind var_kind_5961 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic  COMMA_SOURCE_FILE ("array-controller.galgas", 143)) ;
            {
            const GALGAS_arrayControllerDeclarationAST temp_15 = object ;
            objectArray_4332->mProperty_mPropertyMap.setter_insertKey (temp_15.getter_mControllerName (HERE), var_kind_5961, var_controllerActions_4452, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 147)) ;
            }
            const GALGAS_arrayControllerDeclarationAST temp_16 = object ;
            const GALGAS_arrayControllerDeclarationAST temp_17 = object ;
            const GALGAS_arrayControllerDeclarationAST temp_18 = object ;
            objectArray_4332->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (temp_16.getter_mControllerName (HERE).getter_string (HERE), temp_17.getter_mToManyPropertyName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 151)), temp_18.getter_mClassName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 152))  COMMA_SOURCE_FILE ("array-controller.galgas", 149))  COMMA_SOURCE_FILE ("array-controller.galgas", 149)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const GALGAS_arrayControllerDeclarationAST temp_19 = object ;
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (temp_19.getter_mToManyPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 155)), GALGAS_string ("a toMany relationship is required here"), fixItArray20  COMMA_SOURCE_FILE ("array-controller.galgas", 155)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const GALGAS_arrayControllerDeclarationAST temp_21 = object ;
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (temp_21.getter_mToManyPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 157)), GALGAS_string ("a toMany relationship is required here"), fixItArray22  COMMA_SOURCE_FILE ("array-controller.galgas", 157)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            const GALGAS_arrayControllerDeclarationAST temp_23 = object ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_23.getter_mToManyPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 159)), GALGAS_string ("a toMany relationship is required here"), fixItArray24  COMMA_SOURCE_FILE ("array-controller.galgas", 159)) ;
          }
          break ;
        }
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayControllerDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                           extensionMethod_arrayControllerDeclarationAST_firstAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayControllerDeclarationAST_firstAnalysisPhase (defineExtensionMethod_arrayControllerDeclarationAST_firstAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayControllerDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclarationAST * object = (const cPtr_arrayControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclarationAST) ;
  GALGAS_propertyMap var_boundModelPropertyMap_7182 ;
  const GALGAS_arrayControllerDeclarationAST temp_0 = object ;
  switch (temp_0.getter_mModel (HERE).enumValue ()) {
  case GALGAS_arrayControllerBoundModelAST::kNotBuilt:
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * extractPtr_7385 = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) (temp_0.getter_mModel (HERE).unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootEntityName = extractPtr_7385->mAssociatedValue0 ;
      GALGAS_classKind joker_7336 ; // Joker input parameter
      GALGAS_actionMap joker_7377_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_7377_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_rootEntityName, joker_7336, var_boundModelPropertyMap_7182, joker_7377_2, joker_7377_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 176)) ;
    }
    break ;
  case GALGAS_arrayControllerBoundModelAST::kEnum_selfToManyRelationship:
    {
      const GALGAS_arrayControllerDeclarationAST temp_1 = object ;
      GALGAS_classKind joker_7493 ; // Joker input parameter
      GALGAS_actionMap joker_7534_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_7534_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (temp_1.getter_mClassName (HERE), joker_7493, var_boundModelPropertyMap_7182, joker_7534_2, joker_7534_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 183)) ;
    }
    break ;
  }
  GALGAS_propertyKind var_boundModelClassKind_7647 ;
  const GALGAS_arrayControllerDeclarationAST temp_2 = object ;
  GALGAS_actionMap joker_7654_2 ; // Joker input parameter
  GALGAS_bool joker_7654_1 ; // Joker input parameter
  var_boundModelPropertyMap_7182.method_searchKey (temp_2.getter_mToManyPropertyName (HERE), var_boundModelClassKind_7647, joker_7654_2, joker_7654_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 190)) ;
  GALGAS_actionMap var_actionMap_7770 ;
  GALGAS_propertyMap var_propertyMap_7797 ;
  GALGAS_arrayControllerModelKind var_arrayControllerModelKind_7850 ;
  GALGAS_bool var_graphic_7866 ;
  GALGAS_string var_elementTypeName_7892 ;
  switch (var_boundModelClassKind_7647.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const GALGAS_arrayControllerDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mToManyPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 203)), GALGAS_string ("a toMany property is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas", 203)) ;
      var_graphic_7866.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7850.drop () ; // Release error dropped variable
      var_propertyMap_7797.drop () ; // Release error dropped variable
      var_actionMap_7770.drop () ; // Release error dropped variable
      var_elementTypeName_7892.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8420 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_boundModelClassKind_7647.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_8420->mAssociatedValue0 ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_8420->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isGraphic = extractPtr_8420->mAssociatedValue2 ;
      var_elementTypeName_7892 = extractedValue_typeName.getter_string (SOURCE_FILE ("array-controller.galgas", 207)) ;
      var_graphic_7866 = extractedValue_isGraphic ;
      GALGAS_arrayControllerModelKind temp_5 ;
      const enumGalgasBool test_6 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("array-controller.galgas", 209)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_arrayControllerModelKind::constructor_transientArray (SOURCE_FILE ("array-controller.galgas", 210)) ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_arrayControllerModelKind::constructor_entityArray (SOURCE_FILE ("array-controller.galgas", 211)) ;
      }
      var_arrayControllerModelKind_7850 = temp_5 ;
      GALGAS_classKind joker_8391 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_8418 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_8391, var_propertyMap_7797, var_actionMap_7770, joker_8418, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 213)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const GALGAS_arrayControllerDeclarationAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mToManyPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 215)), GALGAS_string ("a toMany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas", 215)) ;
      var_graphic_7866.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7850.drop () ; // Release error dropped variable
      var_propertyMap_7797.drop () ; // Release error dropped variable
      var_actionMap_7770.drop () ; // Release error dropped variable
      var_elementTypeName_7892.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const GALGAS_arrayControllerDeclarationAST temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.getter_mToManyPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 219)), GALGAS_string ("a toMany property is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas", 219)) ;
      var_graphic_7866.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7850.drop () ; // Release error dropped variable
      var_propertyMap_7797.drop () ; // Release error dropped variable
      var_actionMap_7770.drop () ; // Release error dropped variable
      var_elementTypeName_7892.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const GALGAS_arrayControllerDeclarationAST temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.getter_mToManyPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 223)), GALGAS_string ("a toMany property is required here"), fixItArray12  COMMA_SOURCE_FILE ("array-controller.galgas", 223)) ;
      var_graphic_7866.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7850.drop () ; // Release error dropped variable
      var_propertyMap_7797.drop () ; // Release error dropped variable
      var_actionMap_7770.drop () ; // Release error dropped variable
      var_elementTypeName_7892.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_arrayControllerDeclarationAST temp_13 = object ;
  const GALGAS_arrayControllerDeclarationAST temp_14 = object ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_arrayControllerGeneration::constructor_new (temp_13.getter_mClassName (HERE).getter_string (SOURCE_FILE ("array-controller.galgas", 229)), temp_14.getter_mControllerName (HERE), GALGAS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_7892, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 231)), var_arrayControllerModelKind_7850, var_elementTypeName_7892, var_graphic_7866  COMMA_SOURCE_FILE ("array-controller.galgas", 228))  COMMA_SOURCE_FILE ("array-controller.galgas", 228)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayControllerDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_arrayControllerDeclarationAST.mSlotID,
                                           extensionMethod_arrayControllerDeclarationAST_thirdAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayControllerDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_arrayControllerDeclarationAST_thirdAnalysisPhase, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                                                                const GALGAS_bool constinArgument_inPreferences,
                                                                                                const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 255)) ;
      const GALGAS_arrayControllerPropertyGeneration temp_1 = object ;
      result_result.plusAssign_operation(GALGAS_string ("//   Array controller: ").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 256)) ;
      result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 257)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 257)) ;
      const GALGAS_arrayControllerPropertyGeneration temp_2 = object ;
      const GALGAS_arrayControllerPropertyGeneration temp_3 = object ;
      const GALGAS_arrayControllerPropertyGeneration temp_4 = object ;
      result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 258)).add_operation (GALGAS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 258)).add_operation (temp_3.getter_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 258)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 258)).add_operation (temp_4.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 258)).add_operation (GALGAS_string (" ()\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 258)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 260)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 260)) ;
    const GALGAS_arrayControllerPropertyGeneration temp_5 = object ;
    result_result.plusAssign_operation(GALGAS_string ("  //   Array controller: ").add_operation (temp_5.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 261)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 262)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 262)) ;
    const GALGAS_arrayControllerPropertyGeneration temp_6 = object ;
    const GALGAS_arrayControllerPropertyGeneration temp_7 = object ;
    const GALGAS_arrayControllerPropertyGeneration temp_8 = object ;
    result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_6.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 263)).add_operation (GALGAS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 263)).add_operation (temp_7.getter_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 263)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 263)).add_operation (temp_8.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 263)).add_operation (GALGAS_string (" ()\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 263)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_arrayControllerPropertyGeneration_propertyDeclarationCode (void) {
  enterExtensionGetter_propertyDeclarationCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                                extensionGetter_arrayControllerPropertyGeneration_propertyDeclarationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_propertyDeclarationCode (defineExtensionGetter_arrayControllerPropertyGeneration_propertyDeclarationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_initCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_arrayControllerPropertyGeneration_initCode (void) {
  enterExtensionGetter_initCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                 extensionGetter_arrayControllerPropertyGeneration_initCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_initCode (defineExtensionGetter_arrayControllerPropertyGeneration_initCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                          const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  const GALGAS_arrayControllerPropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 276)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 276)) ;
  const GALGAS_arrayControllerPropertyGeneration temp_1 = object ;
  const GALGAS_arrayControllerPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 277)).add_operation (GALGAS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 277)).add_operation (temp_2.getter_mModelString (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 277)).add_operation (GALGAS_string ("_property, self.ebUndoManager)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 277)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_arrayControllerPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                          extensionGetter_arrayControllerPropertyGeneration_configurationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_configurationCode (defineExtensionGetter_arrayControllerPropertyGeneration_configurationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration populateExplorerWindowCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  const GALGAS_arrayControllerPropertyGeneration temp_0 = object ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (temp_0.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 283)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 283)) ;
  const GALGAS_arrayControllerPropertyGeneration temp_1 = object ;
  const GALGAS_arrayControllerPropertyGeneration temp_2 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 284)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 284)).add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 284)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 284)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode (void) {
  enterExtensionGetter_populateExplorerWindowCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                                   extensionGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode (defineExtensionGetter_arrayControllerPropertyGeneration_populateExplorerWindowCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_arrayControllerPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                        const GALGAS_bool constinArgument_inPreferences,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_11988 = temp_0 ;
  const GALGAS_arrayControllerPropertyGeneration temp_2 = object ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (temp_2.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 291)) ;
  const GALGAS_arrayControllerPropertyGeneration temp_3 = object ;
  result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_11988, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 292)).add_operation (temp_3.getter_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 292)).add_operation (GALGAS_string (".unbind_model ()\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 292)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_arrayControllerPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration.mSlotID,
                                        extensionGetter_arrayControllerPropertyGeneration_terminationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_arrayControllerPropertyGeneration_terminationCode (defineExtensionGetter_arrayControllerPropertyGeneration_terminationCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayControllerGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayControllerGenerationTemplate arrayControllerImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

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
  result << " : ReadOnlyAbstractGenericRelationshipProperty" ;
  const enumGalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ", EBGraphicViewControllerProtocol" ;
  }else if (kBoolFalse == test_0) {
  }
  result << ", HiddenEBProtocol {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  // Model\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mModel : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
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
      "      let deselectedSet = self.mPrivateSelectedSet.subtracting (newValue)\n"
      "      for object in deselectedSet {\n"
      "        object.selectionDisplay_property.removeEBObserver (self.mObjectSelectionObserver)\n"
      "      }\n"
      "      if deselectedSet.count > 0 {\n"
      "        self.mObjectSelectionObserver.postEvent () // Required, as removing observer does not post event\n"
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
    "      self.mInternalSelectedArrayProperty.setProp (Array (self.mPrivateSelectedSet))\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  // Selected Array\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private let mInternalSelectedArrayProperty = StandAloneArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedArrayDidChange_property : EBAbstractProperty { return self.mInternalSelectedArrayProperty } // EBGraphicViewControllerProtocol\n"
    "  var selectedArray_property : ReadOnlyArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " { return self.mInternalSelectedArrayProperty }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedArray : [" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "] { return self.selectedArray_property.propval }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   Init\n"
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
      "    self.canRotate90_property.mReadModelFunction = { [weak self] in\n"
      "      if let me = self {\n"
      "        return .single (me.canRotate90)\n"
      "      }else{\n"
      "        return .empty\n"
      "      }\n"
      "    }\n"
      "    self.selectedArray_property.addEBObserver (self.canRotate90_property)\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var objectCount : Int {\n"
    "    if let n = self.mModel\?.propval.count {\n"
    "      return n\n"
    "    }else{\n"
    "      return 0\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func bind_model (_ inModel : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ", _ inUndoManager : EBUndoManager\?) {\n"
    "    self.mModel = inModel\n"
    "    self.mUndoManager = inUndoManager\n"
    "    inModel.attachClient (self)\n" ;
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
    "  final func unbind_model () {\n" ;
  const enumGalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "    self.stopObservingObjectShape ()\n"
      "    self.stopObservingSelectionShape ()\n"
      "    self.inspectorViewManagerStopsObservingSelection ()\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "    self.mModel\?.detachClient (self)\n"
    "    self.selectedSet = Set ()\n"
    "    self.mModel = nil\n"
    "    self.mUndoManager = nil\n"
    " }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func notifyModelDidChange () {\n"
    "    super.notifyModelDidChange ()\n"
    "    let currentSelectedSet = self.selectedSet\n"
    "    let objectArray = self.objectArray\n"
    "    let newSelectedSet = currentSelectedSet.intersection (objectArray)\n"
    "    self.mInternalSelectedArrayProperty.setProp (Array (newSelectedSet))\n"
    "  }\n"
    "\n"
    "   //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "   var objectArray : [" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "] {\n"
    "     if let values = self.mModel\?.propval {\n"
    "       return values\n"
    "     }else{\n"
    "       return []\n"
    "     }\n"
    "   }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Undo manager\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mUndoManager : EBUndoManager\? = nil\n"
    "  var ebUndoManager : EBUndoManager\? { return self.mUndoManager }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   SELECTION\n"
    "  // MARK: -\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var selectedIndexesSet : Set <Int> {\n"
    "    var result = Set <Int> ()\n"
    "    var idx = 0\n"
    "    for object in self.objectArray {\n"
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
      "  //  Graphic view interface\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var selectedGraphicObjectSet : Set <EBGraphicManagedObject> {\n"
      "    return self.selectedArray_property.propset\n"
      "  }\n"
      "\n"
      "   //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "   var graphicObjectArray : [EBGraphicManagedObject] {\n"
      "     if let values = self.mModel\?.propval {\n"
      "       return values\n"
      "     }else{\n"
      "       return []\n"
      "     }\n"
      "   }\n"
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
      "    self.mObjectSelectionObserver.mEventCallBack = { self.computeSelectionShape () }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func computeSelectionShape () {\n"
      "    var selectionDisplayArray = [EBShape] ()\n"
      "    for object in self.objectArray {\n"
      "      if !self.selectedArray_property.propset.contains (object) {\n"
      "        selectionDisplayArray.append (EBShape ())\n"
      "      }else if let shape = object.selectionDisplay {\n"
      "        selectionDisplayArray.append (shape)\n"
      "      }else{\n"
      "        selectionDisplayArray.append (EBShape ())\n"
      "      }\n"
      "    }\n"
      "    for view in self.mEBGraphicViews {\n"
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
      "    for object in self.objectArray {\n"
      "      if let shape = object.objectDisplay {\n"
      "        displayArray.append (shape)\n"
      "      }else{\n"
      "        displayArray.append (EBShape ())\n"
      "      }\n"
      "    }\n"
      "    for view in self.mEBGraphicViews {\n"
      "      view.updateObjectDisplay (displayArray)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func alignmentPointSetArray () -> [Set<CanariPoint>] {\n"
      "    var result = [Set<CanariPoint>] ()\n"
      "    for object in self.objectArray {\n"
      "      result.append (object.alignmentPoints ().points)\n"
      "    }\n"
      "    return result\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  // EBGraphicViews\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  private var mEBGraphicViews = Set <EBGraphicView> ()\n"
      "  private var mPasteboardTypes = Set <NSPasteboard.PasteboardType> ()\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func addPasteBoardType (_ inType : NSPasteboard.PasteboardType) {\n"
      "    if !self.mPasteboardTypes.contains (inType) {\n"
      "      self.mPasteboardTypes.insert (inType)\n"
      "      for ebView in self.mEBGraphicViews {\n"
      "        ebView.ebRegister (draggedTypes: [inType])\n"
      "      }\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func boundViews () -> [EBGraphicView] {\n"
      "    return Array (self.mEBGraphicViews)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  final func setBackgroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n"
      "     for ebView in self.mEBGraphicViews {\n"
      "       ebView.mBackgroundImageAffineTransform = inAffineTransform\n"
      "     }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  final func bind_ebView (_ inEBView : EBGraphicView\?) {\n"
      "    if let ebView = inEBView {\n"
      "      ebView.ebRegister (draggedTypes: Array (self.mPasteboardTypes))\n"
      "      self.mEBGraphicViews.insert (ebView)\n"
      "      ebView.set (controller: self)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  final func bind_ebView (_ inView : EBEnclosingGraphicView\?) {\n"
      "    if let ebView = inView\?.mGraphicView {\n"
      "      self.mEBGraphicViews.insert (ebView)\n"
      "      ebView.set (controller: self)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  final func unbind_ebView (_ inEBView : EBGraphicView\?) {\n"
      "    if let ebView = inEBView {\n"
      "      ebView.updateObjectDisplay ([])\n"
      "      ebView.updateSelectionShape ([])\n"
      "      self.mEBGraphicViews.remove (ebView)\n"
      "    }\n"
      "  }\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  final func unbind_ebView (_ inView : EBEnclosingGraphicView\?) {\n"
      "    if let ebView = inView\?.mGraphicView {\n"
      "      ebView.updateObjectDisplay ([])\n"
      "      ebView.updateSelectionShape ([])\n"
      "      self.mEBGraphicViews.remove (ebView)\n"
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
    "    let modelObjects = self.objectArray\n"
    "    let selectedObjects = self.selectedArray_property.propset\n"
    "    let indexSet = NSMutableIndexSet ()\n"
    "    for object in selectedObjects {\n"
    "      if let index = modelObjects.firstIndex(of: object) {\n"
    "        indexSet.add (index)\n"
    "      }\n"
    "    }\n"
    "    return indexSet\n"
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
        "      switch model.selection {\n"
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
        "      switch model.selection {\n"
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
        "      switch model.selection {\n"
        "      case .empty, .multiple :\n"
        "        break\n"
        "      case .single (let model_prop) :\n"
        "      //------------- Find the object to be selected after selected object removing\n"
        "      //--- Dictionary of object sorted indexes\n"
        "        var sortedObjectDictionary = [" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " : Int] ()\n"
        "        for (index, object) in model_prop.enumerated () {\n"
        "          sortedObjectDictionary [object] = index\n"
        "        }\n"
        "        var indexArrayOfSelectedObjects = [Int] ()\n"
        "        for object in self.selectedArray_property.propset {\n"
        "          let index = sortedObjectDictionary [object]\n"
        "          if let idx = index {\n"
        "            indexArrayOfSelectedObjects.append (idx)\n"
        "          }\n"
        "        }\n"
        "      //--- Sort\n"
        "        indexArrayOfSelectedObjects.sort { $0 < $1 }\n"
        "      //--- Find the first index of a non selected object\n"
        "        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n"
        "        for index in indexArrayOfSelectedObjects {\n"
        "          if newSelectionIndex < index {\n"
        "            break\n"
        "          }else{\n"
        "            newSelectionIndex = index + 1\n"
        "          }\n"
        "        }\n"
        "        var newSelectedObject : " ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "\? = nil\n"
        "        if (newSelectionIndex >= 0) && (newSelectionIndex < model_prop.count) {\n"
        "          newSelectedObject = model_prop [newSelectionIndex]\n"
        "        }\n"
        "      //----------------------------------------- Remove selected object\n"
        "      //--- Dictionary of object absolute indexes\n"
        "        var objectDictionary = [" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << " : Int] ()\n"
        "        for (index, object) in model_prop.enumerated () {\n"
        "          objectDictionary [object] = index\n"
        "        }\n"
        "      //--- Build selected objects index array\n"
        "        var selectedObjectIndexArray = [Int] ()\n"
        "        for object in self.selectedArray_property.propset {\n"
        "          let index = objectDictionary [object]\n"
        "          if let idx = index {\n"
        "            selectedObjectIndexArray.append (idx)\n"
        "          }\n"
        "        }\n"
        "      //--- Sort in reverse order\n"
        "        selectedObjectIndexArray.sort { $1 < $0 }\n"
        "      //--- Remove objects, in reverse of order of their index\n"
        "        var newObjectArray = model_prop\n"
        "        for index in selectedObjectIndexArray {\n"
        "          newObjectArray.remove (at: index)\n"
        "        }\n"
        "      //----------------------------------------- Set new selection\n"
        "        var newSelectionSet = Set <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "> ()\n"
        "        if let object = newSelectedObject {\n"
        "          newSelectionSet.insert (object)\n"
        "        }\n"
        "        self.selectedSet = newSelectionSet\n"
        "      //----------------------------------------- Set new object array\n"
        "        model.setProp (newObjectArray)\n"
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
      "    let objects = self.objectArray\n"
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
      "      let objects = self.objectArray\n"
      "      var shape = EBShape ()\n"
      "      for idx in indexArray {\n"
      "        let object = objects [idx]\n"
      "        if let s = object.objectDisplay {\n"
      "          shape.add (s)\n"
      "        }\n"
      "      }\n"
      "      let pdfData = buildPDFimageData (frame: shape.boundingBox, shape: shape)\n"
      "      pb.setData (pdfData, forType: .pdf)\n"
      "   //--- Build private representation\n"
      "      var objectDictionaryArray = [NSDictionary] ()\n"
      "      var objectAdditionalDictionaryArray = [NSDictionary] ()\n"
      "      for idx in indexArray {\n"
      "        let object = objects [idx]\n"
      "        let dict = NSMutableDictionary ()\n"
      "        object.saveIntoDictionary (dict)\n"
      "        objectDictionaryArray.append (dict)\n"
      "        let additionalDict = NSMutableDictionary ()\n"
      "        object.saveIntoAdditionalDictionary (additionalDict)\n"
      "        objectAdditionalDictionaryArray.append (additionalDict)\n"
      "      }\n"
      "    //--- Copy private representation(s)\n"
      "      let dataDictionary : NSDictionary = [\n"
      "        OBJECT_DICTIONARY_KEY : objectDictionaryArray,\n"
      "        OBJECT_ADDITIONAL_DICTIONARY_KEY : objectAdditionalDictionaryArray,\n"
      "        X_KEY : pasteOffset.x,\n"
      "        Y_KEY : pasteOffset.y\n"
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
      "   func pasteFromPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, _ inWindow : NSWindow) {\n"
      "    let pb = NSPasteboard.general\n"
      "    if let pasteboardType = inPasteboardType,\n"
      "       pb.availableType (from: [pasteboardType]) != nil,\n"
      "       let dataDictionary = pb.propertyList (forType: pasteboardType) as\? NSDictionary,\n"
      "       let dictionaryArray = dataDictionary [OBJECT_DICTIONARY_KEY] as\? [NSDictionary],\n"
      "       let additionalDictionaryArray = dataDictionary [OBJECT_ADDITIONAL_DICTIONARY_KEY] as\? [NSDictionary],\n"
      "       let X = dataDictionary [X_KEY] as\? Int,\n"
      "       let Y = dataDictionary [Y_KEY] as\? Int {\n"
      "      var newObjects = [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "] ()\n"
      "      let userSet = ObjcObjectSet ()\n"
      "      var idx = 0\n"
      "      var errorMessage = \"\"\n"
      "      for dictionary in dictionaryArray {\n"
      "        if let object = makeManagedObjectFromDictionary (self.ebUndoManager, dictionary) as\? " ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << " {\n"
      "          if errorMessage == \"\" {\n"
      "            errorMessage = object.operationAfterPasting (additionalDictionary: additionalDictionaryArray [idx], objectArray: self.objectArray)\n"
      "          }\n"
      "          idx += 1\n"
      "          if errorMessage == \"\" {\n"
      "            object.translate (xBy: X, yBy: Y, userSet: userSet)\n"
      "            newObjects.append (object)\n"
      "          }\n"
      "        }\n"
      "      }\n"
      "      if errorMessage == \"\" {\n"
      "        var objects = self.objectArray\n"
      "        objects += newObjects\n"
      "        self.mModel\?.setProp (objects)\n"
      "        self.selectedSet = Set (newObjects)\n"
      "      }else{\n"
      "         let alert = NSAlert ()\n"
      "         alert.messageText = errorMessage\n"
      "         alert.addButton (withTitle: \"Ok\")\n"
      "         alert.beginSheetModal (for: inWindow) { (inReturnCode : NSApplication.ModalResponse) in }\n"
      "      }\n"
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
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func deleteSelectedObjects () {\n"
      "    if self.canDelete (), let model = self.mModel {\n"
      "    //--- Remove selected objects\n"
      "      let objectsToRemove = self.selectedArray_property.propset\n"
      "      for object in objectsToRemove {\n"
      "        object.operationBeforeRemoving ()\n"
      "        var objects = model.propval\n"
      "        if let idx = objects.firstIndex (of: object) {\n"
      "          objects.remove (at: idx)\n"
      "          model.setProp (objects)\n"
      "        }\n"
      "      }\n"
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
      "    let objects = self.objectArray\n"
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
      "    let objects = self.objectArray\n"
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
      "    var objects = self.objectArray\n"
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
      "    let objects = self.objectArray\n"
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
      "    var objects = self.objectArray\n"
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
      "    let objects = self.objectArray\n"
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
      "    var objects = self.objectArray\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    for idx in sortedIndexArray.reversed () {\n"
      "      let object = objects [idx]\n"
      "      objects.remove (at: idx)\n"
      "      objects.insert (object, at: idx-1)\n"
      "    }\n"
      "    self.mModel\?.setProp (objects)\n"
      "  }\n"
      "\n"
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
      "    var objects = self.objectArray\n"
      "    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n"
      "    var newObjectArray = [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "] ()\n"
      "    for idx in sortedIndexArray.reversed () {\n"
      "      let object = objects [idx]\n"
      "      objects.remove (at: idx)\n"
      "      newObjectArray.append (object)\n"
      "    }\n"
      "    newObjectArray.reverse ()\n"
      "    newObjectArray += objects\n"
      "    self.mModel\?.setProp (newObjectArray)\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canSendToBack : Bool {\n"
      "    let objects = self.objectArray\n"
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
      "  // ROTATE 90\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canRotate90_property = EBTransientProperty_Bool ()\n"
      "  private var mRotate90PointSet = ObjcCanariPointSet ()\n"
      "\n"
      " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var canRotate90 : Bool {\n"
      "    self.mRotate90PointSet.removeAll ()\n"
      "    if self.selectedArray.count == 0 {\n"
      "      return false\n"
      "    }else{\n"
      "      for object in self.selectedArray {\n"
      "        if !object.canRotate90 (accumulatedPoints: self.mRotate90PointSet) {\n"
      "          return false\n"
      "        }\n"
      "      }\n"
      "      return !self.mRotate90PointSet.isEmpty\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func rotate90Clockwise () {\n"
      "    let r = CanariRect (points: Array (self.mRotate90PointSet.points))\n"
      "    let userSet = ObjcObjectSet ()\n"
      "    for object in self.selectedArray {\n"
      "      object.rotate90Clockwise (from: ObjcCanariPoint (canariPoint: r.center), userSet: userSet)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func rotate90CounterClockwise () {\n"
      "    let r = CanariRect (points: Array (self.mRotate90PointSet.points))\n"
      "    let userSet = ObjcObjectSet ()\n"
      "    for object in self.selectedArray {\n"
      "      object.rotate90CounterClockwise (from: ObjcCanariPoint (canariPoint: r.center), userSet: userSet)\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  // MARK: -\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func addToSelection (objects inObjects : [" ;
    result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
    result << "]) {\n"
      "    if let objectSet = self.mModel\?.propset {\n"
      "      var newSelectedSet = self.selectedArray_property.propset\n"
      "      for object in inObjects {\n"
      "        if objectSet.contains (object) {\n"
      "          newSelectedSet.insert (object)\n"
      "        }\n"
      "      }\n"
      "      self.selectedSet = newSelectedSet\n"
      "    }\n"
      "  }\n"
      "\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func addToSelection (objectsWithIndex inIndexes : [Int]) {\n"
      "    let objects = self.objectArray\n"
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
      "    let objects = self.objectArray\n"
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
      "    let objects = self.objectArray\n"
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
    "  private var mInspectorDictionary = [ObjectIdentifier : NSView] ()\n"
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
    "  func register (inspectorView : NSView\?, for inEntity : EBGraphicManagedObject.Type) {\n"
    "    self.mInspectorDictionary [ObjectIdentifier (inEntity)] = inspectorView\n"
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
    "      if self.mViewIsHidden {\n"
    "        self.mCurrentAttachedView = nil\n"
    "      }else if self.selectedArray.count == 0 {\n"
    "        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n"
    "        inspectorView.addSubview (tf)\n"
    "        self.mCurrentAttachedView = tf\n"
    "      }else{\n"
    "        var selectionTypes = Set <ObjectIdentifier> ()\n"
    "        for object in self.selectedArray {\n"
    "          let T = ObjectIdentifier (type (of: object))\n"
    "          selectionTypes.insert (T)\n"
    "        }\n"
    "        if selectionTypes.count > 1 {\n"
    "          let tf = self.textField (\"Multiple Selection\", inspectorView.frame)\n"
    "          inspectorView.addSubview (tf)\n"
    "          self.mCurrentAttachedView = tf\n"
    "        }else if let selectionInspectorView = self.mInspectorDictionary [selectionTypes.first!] {\n"
    "          selectionInspectorView.autoresizingMask = [.width, .minYMargin]\n"
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
    "  private var mViewIsHidden = false {\n"
    "    didSet { self.updateInspectorViews () }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var isHidden : Bool {\n"
    "    get { return self.mViewIsHidden }\n"
    "    set { self.mViewIsHidden = newValue }\n"
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

