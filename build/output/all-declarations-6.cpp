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
  GALGAS_filewrapper var_w_6101 = GALGAS_filewrapper (gWrapperDirectory_0_outletClassGeneration) ;
  cEnumerator_stringset enumerator_6174 (constinArgument_inNeededOutletClasses, kENUMERATION_UP) ;
  while (enumerator_6174.hasCurrentObject ()) {
    GALGAS_string var_s_6187 = var_w_6101.getter_textFileContentsAtPath (GALGAS_string ("/").add_operation (enumerator_6174.current (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 185)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 185)) ;
    GALGAS_string var_fileName_6255 = enumerator_6174.current (HERE).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 186)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_6255  COMMA_SOURCE_FILE ("outlet-class.galgas", 187)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_6255, var_s_6187, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 188)) ;
    }
    enumerator_6174.gotoNextObject () ;
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
  cEnumerator_outletClassBindingSpecificationList enumerator_4598 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_4598.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4678 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 134)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4739 (enumerator_4598.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4739.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4739.current_mModelTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_4678.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("binding-specification.galgas", 138))  COMMA_SOURCE_FILE ("binding-specification.galgas", 138)), enumerator_4739.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 137)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_5051 ;
        GALGAS_propertyMap joker_5053_3 ; // Joker input parameter
        GALGAS_actionMap joker_5053_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5053_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (enumerator_4739.current_mModelTypeName (HERE), var_classKind_5051, joker_5053_3, joker_5053_2, joker_5053_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 141)) ;
        GALGAS_typeKind var_typeKind_5083 ;
        switch (var_classKind_5051.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
        case GALGAS_classKind::kEnum_simpleClass:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4739.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 145)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("binding-specification.galgas", 145)) ;
            var_typeKind_5083.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_5286 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5051.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_kind = extractPtr_5286->mAssociatedValue0 ;
            var_typeKind_5083 = extractedValue_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4739.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 149)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("binding-specification.galgas", 149)) ;
            var_typeKind_5083.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4739.current_mModelTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 151)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("binding-specification.galgas", 151)) ;
            var_typeKind_5083.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_4678.addAssign_operation (var_typeKind_5083, enumerator_4739.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 153)) ;
      }
      enumerator_4739.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5697 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 156)) ;
    cEnumerator_controllerBindingOptionList enumerator_5735 (enumerator_4598.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5735.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_5826 ;
      GALGAS_propertyMap joker_5828_3 ; // Joker input parameter
      GALGAS_actionMap joker_5828_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5828_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (enumerator_5735.current_mOptionTypeName (HERE), var_classKind_5826, joker_5828_3, joker_5828_2, joker_5828_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 158)) ;
      GALGAS_typeKind var_typeKind_5856 ;
      switch (var_classKind_5826.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
      case GALGAS_classKind::kEnum_simpleClass:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5735.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 162)), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("binding-specification.galgas", 162)) ;
          var_typeKind_5856.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_6050 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5826.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_kind = extractPtr_6050->mAssociatedValue0 ;
          var_typeKind_5856 = extractedValue_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5735.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 166)), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("binding-specification.galgas", 166)) ;
          var_typeKind_5856.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5735.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("binding-specification.galgas", 168)), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("binding-specification.galgas", 168)) ;
          var_typeKind_5856.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5697.addAssign_operation (var_typeKind_5856, enumerator_5735.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("binding-specification.galgas", 170)) ;
      enumerator_5735.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_6419 ;
    GALGAS_lstring var_outletSuperClassName_6453 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.getter_mBindingSpecificationMap (HERE).getter_hasKey (enumerator_4598.current_mOutletClassName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("binding-specification.galgas", 175)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4598.current_mOutletClassName (HERE), var_outletSuperClassName_6453, var_bindingMap_6419, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 176)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_6419 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("binding-specification.galgas", 178)) ;
      GALGAS_bool joker_6781_6 ; // Joker input parameter
      GALGAS_bool joker_6781_5 ; // Joker input parameter
      GALGAS_bool joker_6781_4 ; // Joker input parameter
      GALGAS_bool joker_6781_3 ; // Joker input parameter
      GALGAS_bool joker_6781_2 ; // Joker input parameter
      GALGAS_bool joker_6781_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mOutletClassMap (HERE).method_searchKey (enumerator_4598.current_mOutletClassName (HERE), var_outletSuperClassName_6453, joker_6781_6, joker_6781_5, joker_6781_4, joker_6781_3, joker_6781_2, joker_6781_1, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 179)) ;
    }
    {
    var_bindingMap_6419.setter_insertKey (enumerator_4598.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4678, var_controllerBindingOptionDecoratedList_5697, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 181)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4598.current_mOutletClassName (HERE), var_outletSuperClassName_6453, var_bindingMap_6419, inCompiler COMMA_SOURCE_FILE ("binding-specification.galgas", 186)) ;
    }
    enumerator_4598.gotoNextObject () ;
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
  cMapElement_classMap * objectArray_6187 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 142)) ;
  if (NULL != objectArray_6187) {
      macroValidSharedObject (objectArray_6187, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_6343 ;
    GALGAS_propertyMap joker_6345_3 ; // Joker input parameter
    GALGAS_actionMap joker_6345_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_6345_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mTransientTypeName, var_classKind_6343, joker_6345_3, joker_6345_2, joker_6345_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 145)) ;
    switch (var_classKind_6343.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 148)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("transient-property.galgas", 148)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_simpleClass:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 150)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("transient-property.galgas", 150)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_6750 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6343.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_kind = extractPtr_6750->mAssociatedValue0 ;
        {
        objectArray_6187->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mTransientName, GALGAS_propertyKind::constructor_property (extractedValue_kind, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (kIsEqual, object->mProperty_mDependencyList.getter_length (SOURCE_FILE ("transient-property.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U)))  COMMA_SOURCE_FILE ("transient-property.galgas", 154))  COMMA_SOURCE_FILE ("transient-property.galgas", 154)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 152)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 158)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 158)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 160)), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.galgas", 160)) ;
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
  GALGAS_classKind var_classKind_7461 ;
  GALGAS_propertyMap joker_7463_3 ; // Joker input parameter
  GALGAS_actionMap joker_7463_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_7463_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mTransientTypeName, var_classKind_7461, joker_7463_3, joker_7463_2, joker_7463_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 174)) ;
  GALGAS_typeKind var_typeKind_7503 ;
  switch (var_classKind_7461.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
  case GALGAS_classKind::kEnum_simpleClass:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 179)), GALGAS_string ("an atomic class is required here"), fixItArray0  COMMA_SOURCE_FILE ("transient-property.galgas", 179)) ;
      var_typeKind_7503.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_7679 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7461.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_kind = extractPtr_7679->mAssociatedValue0 ;
      var_typeKind_7503 = extractedValue_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 183)), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("transient-property.galgas", 183)) ;
      var_typeKind_7503.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTransientTypeName.getter_location (SOURCE_FILE ("transient-property.galgas", 185)), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas", 185)) ;
      var_typeKind_7503.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_7931 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_rootProperties_7931 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 190)) ;
    }
  }
  if (kBoolFalse == test_3) {
    GALGAS_classKind joker_8063 ; // Joker input parameter
    GALGAS_actionMap joker_8082_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8082_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_8063, var_rootProperties_7931, joker_8082_2, joker_8082_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 192)) ;
  }
  GALGAS_classKind var_currentClassKind_8196 ;
  GALGAS_propertyMap var_properties_8212 ;
  GALGAS_actionMap joker_8214_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8214_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, var_currentClassKind_8196, var_properties_8212, joker_8214_2, joker_8214_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 195)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_8301 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 197)) ;
  cEnumerator_observablePropertyList enumerator_8334 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_8334.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_8493 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_8556 ;
    extensionMethod_analyzeObservableProperty (enumerator_8334.current_mObservableProperty (HERE), var_rootProperties_7931, ioArgument_ioSemanticContext, var_properties_8212, var_dependencyKind_8493, var_swiftTypeStringForTransientFunctionArgument_8556, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 199)) ;
    switch (var_dependencyKind_8493.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8334.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 209)), GALGAS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.galgas", 209)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8334.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 211)), GALGAS_string ("only an atomic property can be observed"), fixItArray5  COMMA_SOURCE_FILE ("transient-property.galgas", 211)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8334.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 213)), GALGAS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.galgas", 213)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8334.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 215)), GALGAS_string ("only an atomic property can be observed"), fixItArray7  COMMA_SOURCE_FILE ("transient-property.galgas", 215)) ;
      }
      break ;
    }
    var_dependencies_8301.addAssign_operation (enumerator_8334.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8334.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 219)), var_swiftTypeStringForTransientFunctionArgument_8556  COMMA_SOURCE_FILE ("transient-property.galgas", 217)) ;
    enumerator_8334.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_ptransientRoutineGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("transient-property.galgas", 223)), object->mProperty_mTransientName.getter_string (HERE), var_typeKind_7503, var_dependencies_8301, object->mProperty_mExternFunctionName.getter_string (HERE)  COMMA_SOURCE_FILE ("transient-property.galgas", 222))  COMMA_SOURCE_FILE ("transient-property.galgas", 222)) ;
  cMapElement_classMap * objectArray_9435 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.galgas", 229)) ;
  if (NULL != objectArray_9435) {
      macroValidSharedObject (objectArray_9435, cMapElement_classMap) ;
    GALGAS_bool var_generate_9532 ;
    switch (var_currentClassKind_8196.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
    case GALGAS_classKind::kEnum_simpleClass:
      {
        var_generate_9532 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_9532 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_9532 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_9910 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_8196.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_9910->mAssociatedValue1 ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = extractedValue_graphic.boolEnum () ;
          if (kBoolTrue == test_8) {
            var_generate_9532 = GALGAS_bool (kIsNotEqual, object->mProperty_mTransientName.getter_string (HERE).objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mTransientName.getter_string (HERE).objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.galgas", 242)) ;
          }
        }
        if (kBoolFalse == test_8) {
          var_generate_9532 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    objectArray_9435->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_transientPropertyGeneration::constructor_new (object->mProperty_mTransientName.getter_string (HERE), object->mProperty_mClassName.getter_string (HERE), var_typeKind_7503, var_dependencies_8301, object->mProperty_mExternFunctionName.getter_string (HERE), var_generate_9532  COMMA_SOURCE_FILE ("transient-property.galgas", 247))  COMMA_SOURCE_FILE ("transient-property.galgas", 247)) ;
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
                                                                                  const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_transientPropertyGeneration * object = (const cPtr_transientPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyGeneration) ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mGenerate.operator_and (constinArgument_inOverriddenTransients.getter_hasKey (object->mProperty_mPropertyName COMMA_SOURCE_FILE ("transient-property.galgas", 280)).operator_not (SOURCE_FILE ("transient-property.galgas", 280)) COMMA_SOURCE_FILE ("transient-property.galgas", 280)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 281)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 282)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 282)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 283)) ;
      result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)).add_operation (GALGAS_string (" ()\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 284)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 285)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 285)) ;
      result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 286)).add_operation (GALGAS_string ("_property_selection : EBSelection <"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 286)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 286)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 286)) ;
      result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 287)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 288)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("transient-property.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 289)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 289)) ;
      result_result.plusAssign_operation(GALGAS_string ("    var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 290)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 290)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 290)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 290)) ;
      result_result.plusAssign_operation(GALGAS_string ("    switch self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 291)).add_operation (GALGAS_string ("_property_selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 291)) ;
      result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 292)) ;
      result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 293)) ;
      result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 294)) ;
      result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 295)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 296)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 297)) ;
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
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mDependencyList.getter_length (SOURCE_FILE ("transient-property.galgas", 305)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bool var_needs_5F_unwSelf_12549 = extensionGetter_needs_5F_unwSelf (object->mProperty_mDependencyList, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 306)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 307)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_needs_5F_unwSelf_12549.boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 309)).add_operation (GALGAS_string ("_property.readModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 309)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 310)) ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (object->mProperty_mDependencyList, object->mProperty_mClassName, object->mProperty_mPropertyName, object->mProperty_mExternFunctionName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 311)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 312)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 313)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 314)) ;
        }
      }
      if (kBoolFalse == test_1) {
        result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 316)).add_operation (GALGAS_string ("_property.readModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 316)) ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (object->mProperty_mDependencyList, object->mProperty_mClassName, object->mProperty_mPropertyName, object->mProperty_mExternFunctionName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 317)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 319)) ;
      cEnumerator_transientDependencyListForGeneration enumerator_13299 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
      while (enumerator_13299.hasCurrentObject ()) {
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_generateAddObserverCall (enumerator_13299.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 321)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 321)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 321)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 321)) ;
        enumerator_13299.gotoNextObject () ;
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
  cEnumerator_transientDependencyListForGeneration enumerator_13665 (object->mProperty_mDependencyList, kENUMERATION_UP) ;
  while (enumerator_13665.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_generateRemoveObserverCall (enumerator_13665.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 331)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 331)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 331)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 331)) ;
    enumerator_13665.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mDependencyList.getter_length (SOURCE_FILE ("transient-property.galgas", 517)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, object->mProperty_mExternFunctionName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("transient-property.galgas", 517)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_22602 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, object->mProperty_mOwnerName, object->mProperty_mTransientName, object->mProperty_mDependencyList, object->mProperty_mTransientType COMMA_SOURCE_FILE ("transient-property.galgas", 518))) ;
      GALGAS_string var_fileName_22776 = GALGAS_string ("transient-").add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 524)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 524)).add_operation (object->mProperty_mTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 524)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 524)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_22776  COMMA_SOURCE_FILE ("transient-property.galgas", 525)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_22776, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_s_22602, GALGAS_string ("\n"), GALGAS_string ("}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 526)) ;
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
                                                                               const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
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
      result_result.plusAssign_operation(GALGAS_string (", prefKey: Preferences_").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 175)) ;
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
  GALGAS_lstring var_node_766 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 16)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 16)), object->mProperty_mToOneRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 16)) ;
  {
  const GALGAS_toOneRelationshipAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_766, temp_0, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 17)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_766, object->mProperty_mClassName COMMA_SOURCE_FILE ("to-one-relationship.galgas", 18)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_766, object->mProperty_mDestinationEntityName COMMA_SOURCE_FILE ("to-one-relationship.galgas", 19)) ;
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
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 25)).add_operation (object->mProperty_mToOneRelationshipName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 25)), object->mProperty_mToOneRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 25)) ;
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
  cMapElement_classMap * objectArray_3577 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 95)) ;
  if (NULL != objectArray_3577) {
      macroValidSharedObject (objectArray_3577, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_3737 ;
    GALGAS_propertyMap var_destinationEntityPropertyMap_3771 ;
    GALGAS_actionMap joker_3773_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3773_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mDestinationEntityName, var_classKind_3737, var_destinationEntityPropertyMap_3771, joker_3773_2, joker_3773_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 98)) ;
    switch (var_classKind_3737.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 101)), GALGAS_string ("an entity is required here"), fixItArray0  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 101)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_simpleClass:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 103)), GALGAS_string ("an entity is required here"), fixItArray1  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 103)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 105)), GALGAS_string ("an entity is required here"), fixItArray2  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 105)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 107)), GALGAS_string ("an entity is required here"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 107)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_4695 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_3737.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_4695->mAssociatedValue1 ;
        GALGAS_propertyKind var_kind_4194 = GALGAS_propertyKind::constructor_toOne (object->mProperty_mDestinationEntityName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.galgas", 111)), extractedValue_graphic  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 109)) ;
        {
        objectArray_3577->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mToOneRelationshipName, var_kind_4194, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-one-relationship.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 114)) ;
        }
        objectArray_3577->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toOnePropertyGeneration::constructor_new (object->mProperty_mToOneRelationshipName.getter_string (HERE), object->mProperty_mClassName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 118)), var_kind_4194, object->mProperty_mOppositeRelationshipName.getter_string (SOURCE_FILE ("to-one-relationship.galgas", 120)), object->mProperty_mInverseRelationMultiplicity, var_destinationEntityPropertyMap_3771, object->mProperty_mCascading  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 116))  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 116)) ;
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
                                                                              const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toOnePropertyGeneration * object = (const cPtr_toOnePropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toOnePropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 151)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 151)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 152)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 153)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 153)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 154)).add_operation (GALGAS_string ("_property = ToOneRelationship_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 154)).add_operation (object->mProperty_mClassName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 154)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 154)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 155)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 154)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 156)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 156)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 157)).add_operation (GALGAS_string ("_property_selection : EBSelection <Bool> {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 157)) ;
  result_result.plusAssign_operation(GALGAS_string ("    return .single (self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 158)).add_operation (GALGAS_string ("_property.propval == nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 158)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 159)) ;
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
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 165)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 165)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 166)).add_operation (GALGAS_string ("_property.owner = self\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 166)) ;
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
    test_0 = object->mProperty_mInverseRelationMultiplicity.getter_isSingle (SOURCE_FILE ("to-one-relationship.galgas", 173)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)).add_operation (GALGAS_string ("_property.setProp (readEntityFromDictionary (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 175)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inRelationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 177)) ;
      result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 178)) ;
      result_result.plusAssign_operation(GALGAS_string ("    ) as\? ").add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 179)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 179)) ;
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
    test_0 = object->mProperty_mInverseRelationMultiplicity.getter_isSingle (SOURCE_FILE ("to-one-relationship.galgas", 187)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 188)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 188)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (managedObject:self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 189)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 189)) ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 190)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 190)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 191)) ;
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
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 198)) ;
  result_result.plusAssign_operation(GALGAS_string ("    if let managedObject = self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 199)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 199)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 200)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 201)) ;
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
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 207)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 208)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 208)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 209)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 209)) ;
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
  GALGAS_lstring var_node_941 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 23)).add_operation (object->mProperty_mToManyRelationshipName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 23)), object->mProperty_mToManyRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 23)) ;
  {
  const GALGAS_toManyRelationshipAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_941, temp_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 24)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_941, object->mProperty_mClassName COMMA_SOURCE_FILE ("to-many-relationship.galgas", 25)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_941, object->mProperty_mDestinationEntityName COMMA_SOURCE_FILE ("to-many-relationship.galgas", 26)) ;
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
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 32)).add_operation (object->mProperty_mToManyRelationshipName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 32)), object->mProperty_mToManyRelationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 32)) ;
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
  cMapElement_classMap * objectArray_4159 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 110)) ;
  if (NULL != objectArray_4159) {
      macroValidSharedObject (objectArray_4159, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4319 ;
    GALGAS_propertyMap joker_4321_3 ; // Joker input parameter
    GALGAS_actionMap joker_4321_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4321_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mDestinationEntityName, var_classKind_4319, joker_4321_3, joker_4321_2, joker_4321_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 113)) ;
    switch (var_classKind_4319.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 116)), GALGAS_string ("an entity is required here"), fixItArray0  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 116)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_simpleClass:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 118)), GALGAS_string ("an entity is required here"), fixItArray1  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 118)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 120)), GALGAS_string ("an entity is required here"), fixItArray2  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 120)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mDestinationEntityName.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 122)), GALGAS_string ("an entity is required here"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 122)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_5157 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4319.unsafePointer ()) ;
        const GALGAS_bool extractedValue_graphic = extractPtr_5157->mAssociatedValue1 ;
        GALGAS_propertyKind var_kind_4742 = GALGAS_propertyKind::constructor_toMany (object->mProperty_mDestinationEntityName, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-many-relationship.galgas", 126)), extractedValue_graphic, GALGAS_bool (true)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 124)) ;
        {
        objectArray_4159->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mToManyRelationshipName, var_kind_4742, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-many-relationship.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 130)) ;
        }
        objectArray_4159->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyPropertyGeneration::constructor_new (object->mProperty_mToManyRelationshipName.getter_string (HERE), var_kind_4742, object->mProperty_mOption, object->mProperty_mCascading  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 132))  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 132)) ;
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
                                                                               const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 159)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 159)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 160)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 160)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 161)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)).add_operation (GALGAS_string ("_property = TransientArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)).add_operation (GALGAS_string (" ()\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 163)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)).add_operation (GALGAS_string ("_property = StoredArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)).add_operation (GALGAS_string (" ()\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 165)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 167)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)).add_operation (GALGAS_string ("_property_selection : EBSelection < ["), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)).add_operation (GALGAS_string ("] > {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 168)) ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 169)).add_operation (GALGAS_string ("_property.prop\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 169)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 170)) ;
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
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 176)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 176)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 177)).add_operation (GALGAS_string ("_property.undoManager = self.undoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 177)) ;
  switch (object->mProperty_mOption.enumValue ()) {
  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
    {
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_7140 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (object->mProperty_mOption.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_7140->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_7477 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (object->mProperty_mOption.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_oppositeName = extractPtr_7477->mAssociatedValue0 ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 182)).add_operation (GALGAS_string ("_property.setOppositeRelationship ="), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 182)).add_operation (GALGAS_string (" { [weak self] (_ inManagedObject :"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 182)).add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 183)).add_operation (GALGAS_string ("\?) in\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 182)) ;
      result_result.plusAssign_operation(GALGAS_string ("      inManagedObject\?.").add_operation (extractedValue_oppositeName.getter_string (SOURCE_FILE ("to-many-relationship.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 184)).add_operation (GALGAS_string ("_property.setProp (self)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 184)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 185)) ;
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
//                   Overriding extension getter '@toManyPropertyGeneration setupFromDictionaryCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_toManyPropertyGeneration_setupFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_toManyPropertyGeneration * object = (const cPtr_toManyPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_toManyPropertyGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 192)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 195)) ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 196)).add_operation (GALGAS_string ("_property.setProp (readEntityArrayFromDictionary (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 196)) ;
    result_result.plusAssign_operation(GALGAS_string ("      inRelationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 197)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 197)) ;
    result_result.plusAssign_operation(GALGAS_string ("      inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 198)) ;
    result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 199)) ;
    result_result.plusAssign_operation(GALGAS_string ("    ) as! [").add_operation (extensionGetter_swiftTypeName (object->mProperty_mRelationshipType, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 200)).add_operation (GALGAS_string ("])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 200)) ;
  }
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
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 207)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.store (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 208)) ;
  result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 209)).add_operation (GALGAS_string ("_property.propval as NSArray,\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 210)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 210)) ;
  result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 211)) ;
  result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 212)) ;
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
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 218)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 218)) ;
  result_result.plusAssign_operation(GALGAS_string ("    for managedObject : EBManagedObject in self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 219)).add_operation (GALGAS_string ("_property.propval {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 219)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 220)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 221)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 227)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)) ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 231)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 231)) ;
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
    test_0 = object->mProperty_mOption.getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas", 238)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)) ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 242)).add_operation (GALGAS_string ("_property.setProp ([])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 242)) ;
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
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_10427 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (object->mProperty_mOption.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_10427->mAssociatedValue0 ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (extractedValue_masterPropertyName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 251)).add_operation (GALGAS_string ("_property.removeEBObserver (self."), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 251)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 251)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 251)) ;
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
                                                                            const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
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
  GALGAS_propertyKind var_kind_11247 ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument_11315 ;
  extensionMethod_analyzeObservableProperty (object->mProperty_mProperty, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_kind_11247, var_swiftTypeStringForTransientFunctionArgument_11315, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 260)) ;
  switch (var_kind_11247.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_11379 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_11247.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_11379->mAssociatedValue0 ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_12723 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression_12723, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 295)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 303)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 303)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 304)) ;
    }
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression_12723  COMMA_SOURCE_FILE ("multiple-binding.galgas", 306)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_13686 ;
  GALGAS_typeKind var_outLeftType_13707 ;
  GALGAS_location var_outLeftLocation_13732 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_13686, var_outLeftType_13707, var_outLeftLocation_13732, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 319)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_13707.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 327)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 327)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_13732, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 328)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_14083 ;
  GALGAS_typeKind var_outRightType_14105 ;
  GALGAS_location var_outRightLocation_14131 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_14083, var_outRightType_14105, var_outRightLocation_14131, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 330)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_14105.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 338)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 338)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_14131, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 339)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 341)) ;
  outArgument_outErrorLocation = var_outRightLocation_14131 ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_13686, var_rightExpression_14083  COMMA_SOURCE_FILE ("multiple-binding.galgas", 343)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15145 ;
  GALGAS_typeKind var_outLeftType_15166 ;
  GALGAS_location var_outLeftLocation_15191 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_15145, var_outLeftType_15166, var_outLeftLocation_15191, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 356)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_15166.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 364)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 364)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15191, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 365)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15542 ;
  GALGAS_typeKind var_outRightType_15564 ;
  GALGAS_location var_outRightLocation_15590 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_15542, var_outRightType_15564, var_outRightLocation_15590, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 367)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_15564.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 375)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 375)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_15590, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 376)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 378)) ;
  outArgument_outErrorLocation = var_outRightLocation_15590 ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_15145, var_rightExpression_15542  COMMA_SOURCE_FILE ("multiple-binding.galgas", 380)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16605 ;
  GALGAS_typeKind var_outLeftType_16626 ;
  GALGAS_location var_outLeftLocation_16651 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_16605, var_outLeftType_16626, var_outLeftLocation_16651, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 393)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_outLeftType_16626.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 401)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 401)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_outLeftLocation_16651, GALGAS_string ("cannot apply 'and': left operand is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("multiple-binding.galgas", 402)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17003 ;
  GALGAS_typeKind var_outRightType_17025 ;
  GALGAS_location var_outRightLocation_17051 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_17003, var_outRightType_17025, var_outRightLocation_17051, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 404)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_outRightType_17025.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 412)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 412)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_outRightLocation_17051, GALGAS_string ("cannot apply 'and': right operand is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("multiple-binding.galgas", 413)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 415)) ;
  outArgument_outErrorLocation = var_outRightLocation_17051 ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_16605, var_rightExpression_17003  COMMA_SOURCE_FILE ("multiple-binding.galgas", 417)) ;
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18067 ;
  GALGAS_typeKind var_outLeftType_18088 ;
  GALGAS_location var_outLeftLocation_18113 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_18067, var_outLeftType_18088, var_outLeftLocation_18113, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 430)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_18342 ;
  GALGAS_typeKind var_outRightType_18364 ;
  GALGAS_location var_outRightLocation_18390 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mProperty_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_18342, var_outRightType_18364, var_outRightLocation_18390, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 438)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = var_outLeftType_18088.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 446)) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = var_outLeftType_18088.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas", 446)) ;
    }
    test_0 = test_1.operator_not (SOURCE_FILE ("multiple-binding.galgas", 446)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_18113, GALGAS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas", 447)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_outRightType_18364.objectCompare (var_outLeftType_18088)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outRightLocation_18390, GALGAS_string ("cannot compare: right operand type is different than left operand type"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas", 450)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 452)) ;
  outArgument_outErrorLocation = var_outRightLocation_18390 ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_18067, object->mProperty_mOperator, var_rightExpression_18342  COMMA_SOURCE_FILE ("multiple-binding.galgas", 454)) ;
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
  GALGAS_lstring var_node_661 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 15)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 15)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 15)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 15)) ;
  {
  const GALGAS_arrayControllerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_661, temp_0, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 16)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_661, object->mProperty_mClassName COMMA_SOURCE_FILE ("array-controller.galgas", 17)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = object->mProperty_mIsRoot.operator_not (SOURCE_FILE ("array-controller.galgas", 18)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (var_node_661, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 19)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 19)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 19)) COMMA_SOURCE_FILE ("array-controller.galgas", 19)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        ioArgument_ioGraph.setter_addEdge (var_node_661, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 21)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 21)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 21)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 21)) COMMA_SOURCE_FILE ("array-controller.galgas", 21)) ;
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
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 28)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 28)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("array-controller.galgas", 28)) ;
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
  cMapElement_classMap * objectArray_3067 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("array-controller.galgas", 80)) ;
  if (NULL != objectArray_3067) {
      macroValidSharedObject (objectArray_3067, cMapElement_classMap) ;
    GALGAS_actionMap temp_0 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 83)) ;
    temp_0.addAssign_operation (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 83)) ;
    temp_0.addAssign_operation (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 83)) ;
    GALGAS_actionMap var_controllerActions_3182 = temp_0 ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = object->mProperty_mIsRoot.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_propertyMap var_rootProperties_3330 ;
        GALGAS_classKind joker_3309 ; // Joker input parameter
        GALGAS_actionMap joker_3332_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_3332_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_3309, var_rootProperties_3330, joker_3332_2, joker_3332_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 85)) ;
        GALGAS_propertyKind var_classKind_3403 ;
        GALGAS_actionMap joker_3405 ; // Joker input parameter
        var_rootProperties_3330.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_3403, joker_3405, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 86)) ;
        switch (var_classKind_3403.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 89)), GALGAS_string ("a tomany relationship is required here"), fixItArray2  COMMA_SOURCE_FILE ("array-controller.galgas", 89)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4025 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_3403.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_4025->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_graphic = extractPtr_4025->mAssociatedValue2 ;
            const GALGAS_bool extractedValue_isEntity = extractPtr_4025->mAssociatedValue3 ;
            GALGAS_propertyKind var_kind_3597 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 91)) ;
            {
            objectArray_3067->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_3597, var_controllerActions_3182, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 96)) ;
            }
            objectArray_3067->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), GALGAS_string ("rootObject.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 100)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 101)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("array-controller.galgas", 98))  COMMA_SOURCE_FILE ("array-controller.galgas", 98)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 105)), GALGAS_string ("a tomany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas", 105)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 107)), GALGAS_string ("a tomany relationship is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas", 107)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 109)), GALGAS_string ("a tomany relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("array-controller.galgas", 109)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_propertyKind var_classKind_4424 ;
      GALGAS_actionMap joker_4426 ; // Joker input parameter
      objectArray_3067->mProperty_mPropertyMap.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_4424, joker_4426, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 112)) ;
      switch (var_classKind_4424.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 115)), GALGAS_string ("a tomany relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("array-controller.galgas", 115)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_5034 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_4424.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_5034->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_graphic = extractPtr_5034->mAssociatedValue2 ;
          const GALGAS_bool extractedValue_isEntity = extractPtr_5034->mAssociatedValue3 ;
          GALGAS_propertyKind var_kind_4618 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 117)) ;
          {
          objectArray_3067->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_4618, var_controllerActions_3182, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 122)) ;
          }
          objectArray_3067->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_arrayControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 126)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 127)), extractedValue_isEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 124))  COMMA_SOURCE_FILE ("array-controller.galgas", 124)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 131)), GALGAS_string ("a tomany relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("array-controller.galgas", 131)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 133)), GALGAS_string ("a tomany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas", 133)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("array-controller.galgas", 135)), GALGAS_string ("a tomany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas", 135)) ;
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
  GALGAS_propertyMap var_boundModelPropertyMap_5834 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mIsRoot.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_classKind joker_5928 ; // Joker input parameter
      GALGAS_actionMap joker_5969_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5969_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_5928, var_boundModelPropertyMap_5834, joker_5969_2, joker_5969_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 151)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_classKind joker_6056 ; // Joker input parameter
    GALGAS_actionMap joker_6097_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_6097_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_6056, var_boundModelPropertyMap_5834, joker_6097_2, joker_6097_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 158)) ;
  }
  GALGAS_propertyKind var_boundModelClassKind_6219 ;
  GALGAS_actionMap joker_6226 ; // Joker input parameter
  var_boundModelPropertyMap_5834.method_searchKey (object->mProperty_mToManyPropertyName, var_boundModelClassKind_6219, joker_6226, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 165)) ;
  GALGAS_actionMap var_actionMap_6341 ;
  GALGAS_propertyMap var_propertyMap_6368 ;
  GALGAS_arrayControllerModelKind var_arrayControllerModelKind_6421 ;
  GALGAS_bool var_graphic_6437 ;
  GALGAS_string var_elementTypeName_6463 ;
  switch (var_boundModelClassKind_6219.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 178)), GALGAS_string ("a tomany property is required here"), fixItArray1  COMMA_SOURCE_FILE ("array-controller.galgas", 178)) ;
      var_graphic_6437.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_6421.drop () ; // Release error dropped variable
      var_propertyMap_6368.drop () ; // Release error dropped variable
      var_actionMap_6341.drop () ; // Release error dropped variable
      var_elementTypeName_6463.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_7031 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_boundModelClassKind_6219.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_7031->mAssociatedValue0 ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_7031->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isGraphic = extractPtr_7031->mAssociatedValue2 ;
      const GALGAS_bool extractedValue_isEntity = extractPtr_7031->mAssociatedValue3 ;
      var_elementTypeName_6463 = extractedValue_typeName.getter_string (SOURCE_FILE ("array-controller.galgas", 182)) ;
      var_graphic_6437 = extractedValue_isGraphic ;
      GALGAS_arrayControllerModelKind temp_2 ;
      const enumGalgasBool test_3 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("array-controller.galgas", 184)).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_arrayControllerModelKind::constructor_transientArray (SOURCE_FILE ("array-controller.galgas", 185)) ;
      }else if (kBoolFalse == test_3) {
        GALGAS_arrayControllerModelKind temp_4 ;
        const enumGalgasBool test_5 = extractedValue_isEntity.boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_arrayControllerModelKind::constructor_entityArray (SOURCE_FILE ("array-controller.galgas", 186)) ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_arrayControllerModelKind::constructor_classArray (SOURCE_FILE ("array-controller.galgas", 186)) ;
        }
        temp_2 = temp_4 ;
      }
      var_arrayControllerModelKind_6421 = temp_2 ;
      GALGAS_classKind joker_7002 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_7029 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_7002, var_propertyMap_6368, var_actionMap_6341, joker_7029, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 188)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 190)), GALGAS_string ("a tomany property is required here"), fixItArray6  COMMA_SOURCE_FILE ("array-controller.galgas", 190)) ;
      var_graphic_6437.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_6421.drop () ; // Release error dropped variable
      var_propertyMap_6368.drop () ; // Release error dropped variable
      var_actionMap_6341.drop () ; // Release error dropped variable
      var_elementTypeName_6463.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 194)), GALGAS_string ("a tomany property is required here"), fixItArray7  COMMA_SOURCE_FILE ("array-controller.galgas", 194)) ;
      var_graphic_6437.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_6421.drop () ; // Release error dropped variable
      var_propertyMap_6368.drop () ; // Release error dropped variable
      var_actionMap_6341.drop () ; // Release error dropped variable
      var_elementTypeName_6463.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("array-controller.galgas", 198)), GALGAS_string ("a tomany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas", 198)) ;
      var_graphic_6437.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_6421.drop () ; // Release error dropped variable
      var_propertyMap_6368.drop () ; // Release error dropped variable
      var_actionMap_6341.drop () ; // Release error dropped variable
      var_elementTypeName_6463.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_string temp_9 ;
  const enumGalgasBool test_10 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_string ("self.rootObject.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 203)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 203)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_string ("self.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 204)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 204)) ;
  }
  GALGAS_string var_modelString_7612 = temp_9 ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_arrayControllerGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("array-controller.galgas", 208)), object->mProperty_mControllerName, var_modelString_7612, GALGAS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_6463, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 211)), var_arrayControllerModelKind_6421, var_elementTypeName_6463, var_graphic_6437  COMMA_SOURCE_FILE ("array-controller.galgas", 207))  COMMA_SOURCE_FILE ("array-controller.galgas", 207)) ;
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
                                                                                        const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayControllerPropertyGeneration * object = (const cPtr_arrayControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 232)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Array controller: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 233)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 233)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("array-controller.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 234)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 234)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 235)).add_operation (GALGAS_string (" = ArrayController_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 235)).add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 235)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 235)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 235)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 235)) ;
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
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 241)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mUsesManagedObjectContext.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 243)).add_operation (GALGAS_string (".setManagedObjectContext (self.managedObjectContext)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 243)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 245)).add_operation (GALGAS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 245)).add_operation (object->mProperty_mModelString, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 245)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 245)) ;
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
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 251)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 252)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 252)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 252)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 252)) ;
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
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 258)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 258)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 259)).add_operation (GALGAS_string (".unbind_model ()\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 259)) ;
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
                                                                                                          const GALGAS_string & /* in_MODEL_5F_STRING */,
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
  result << " : EBObject" ;
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
    "      allowsEmptySelection: true,\n"
    "      allowsMultipleSelection: true,\n"
    "      sortedArray: self.objectArray_property\n"
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
    "    self.setSelectedArrayComputeFunction ()\n"
    "  //--- Install object array read function\n"
    "    self.objectArray_property.readModelFunction = { [weak self] in\n"
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
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Object Array\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  let objectArray_property = TransientArrayOf_" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " ()\n"
    "\n"
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
    "    inModel.addEBObserver (self.objectArray_property)\n"
    "    self.objectArray_property.addEBObserver (mSelectedSet)\n"
    "    mSelectedSet.addEBObserver (self.selectedArray_property)\n" ;
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
  result << "    self.mModel\?.removeEBObserver (self.objectArray_property)\n"
    "    self.objectArray_property.removeEBObserver (mSelectedSet)\n"
    "    self.mSelectedSet.removeEBObserver (self.selectedArray_property)\n"
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
      "   //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var objectArray : [EBGraphicManagedObject] {\n"
      "    return self.mModel\?.propval \?\? []\n"
      "  }\n"
      "\n"
      " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func computeSelectionShape () {\n"
      "    var selectionDisplayArray = [EBShape] ()\n"
      "    for object in self.mModel\?.propval \?\? [] {\n"
      "      if !mSelectedSet.mSet.contains (object) {\n"
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
    "        switch me.objectArray_property.prop {\n"
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
    "      for object in mSelectedSet.mSet {\n"
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
      result << " (managedObjectContext: managedObjectContext, file: #file, #line)\n"
        "        var array = v\n"
        "        array.append (newObject)\n"
        "      //--- New object is the selection\n"
        "        var newSelectedObjectSet = Set <" ;
      result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
      result << "> ()\n"
        "        newSelectedObjectSet.insert (newObject)\n"
        "        self.mSelectedSet.mSet = newSelectedObjectSet\n"
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
  const enumGalgasBool test_5 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_5) {
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
  }else if (kBoolFalse == test_5) {
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //  INSPECTOR\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func register (inspectorView : NSView\?) {\n"
    "    self.mSelectedSet.register (inspectorView: inspectorView)\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func register (inspectorView : NSView\?, forClass inClassName : String) {\n"
    "    self.mSelectedSet.register (inspectorView: inspectorView, forClass: inClassName)\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("SelectedSet_").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 797)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 797)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 797)).stringValue () ;
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
  const enumGalgasBool test_6 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "  private var mObserverOfSelectionLayerOfSelectedObjects = EBOutletEvent ()\n" ;
  }else if (kBoolFalse == test_6) {
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
  const enumGalgasBool test_7 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func set (callBack : @escaping () -> Void) {\n"
      "    self.mObserverOfSelectionLayerOfSelectedObjects.eventCallBack = callBack\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mPrivateSet = Set<" ;
  result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << "> () {\n"
    "    didSet {\n"
    "      if mPrivateSet != oldValue {\n"
    "        postEvent ()\n"
    "        self.updateInspectorViews ()\n" ;
  const enumGalgasBool test_8 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "        let addedSet = mPrivateSet.subtracting (oldValue)\n"
      "        for object in addedSet {\n"
      "          object.selectionDisplay_property.addEBObserver (self.mObserverOfSelectionLayerOfSelectedObjects)\n"
      "        }\n"
      "        let removedSet = oldValue.subtracting (mPrivateSet)\n"
      "        for object in removedSet {\n"
      "          object.selectionDisplay_property.removeEBObserver (self.mObserverOfSelectionLayerOfSelectedObjects)\n"
      "        }\n"
      "        self.mObserverOfSelectionLayerOfSelectedObjects.postEvent ()\n" ;
  }else if (kBoolFalse == test_8) {
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
    "        if !self.mAllowsEmptySelection && (newSelectedSet.count == 0) && (sortedArray.count > 0) {\n"
    "          newSelectedSet = Set (arrayLiteral: sortedArray [0])\n"
    "        }else if !mAllowsMultipleSelection && (newSelectedSet.count > 1) {\n"
    "          newSelectedSet = Set (arrayLiteral: newSelectedSet.first!)\n"
    "        }\n"
    "      }\n"
    "      self.mPrivateSet = newSelectedSet\n"
    "    }\n"
    "    get {\n"
    "      return mPrivateSet\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //  INSPECTOR VIEW\n"
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
    "    tf.stringValue = inString\n"
    "    tf.font = NSFont.boldSystemFont (ofSize: NSFont.systemFontSize * 1.25)\n"
    "    tf.textColor = NSColor.lightGray\n"
    "    return tf\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mInspectorView : NSView\? = nil\n"
    "  private var mCurrentAttachedView : NSView\? = nil\n"
    "  private var mInspectorDictionary = [String : NSView] ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func register (inspectorView : NSView\?) {\n"
    "    self.mInspectorView = inspectorView\n"
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
    "  private func updateInspectorViews () {\n"
    "    if let inspectorView = self.mInspectorView {\n"
    "    //--- Remove current attached view\n"
    "      self.mCurrentAttachedView\?.removeFromSuperview ()\n"
    "    //--- Add the new attached view\n"
    "      if self.mSet.count == 0 {\n"
    "        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n"
    "        inspectorView.addSubview (tf)\n"
    "        self.mCurrentAttachedView = tf\n"
    "      }else{\n"
    "        var classNames = Set <String> ()\n"
    "        for object in self.mSet {\n"
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
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
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
                                                                    GALGAS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerGeneration * object = (const cPtr_arrayControllerGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerGeneration) ;
  GALGAS_string var_s_12098 = GALGAS_string (filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, object->mProperty_mOwnerName, object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 311)), object->mProperty_mModelString, object->mProperty_mArrayControllerModelKind, object->mProperty_mModelTypeName, object->mProperty_mElementTypeName, object->mProperty_mElementTypeIsGraphic COMMA_SOURCE_FILE ("array-controller.galgas", 309))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, GALGAS_string ("arrayController-").add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 320)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 320)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("array-controller.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 320)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 320)), var_s_12098, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 318)) ;
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
//               Overriding extension method '@tableViewControllerDeclarationAST enterInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_tableViewControllerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                      GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tableViewControllerDeclarationAST * object = (const cPtr_tableViewControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_tableViewControllerDeclarationAST) ;
  GALGAS_lstring var_node_1764 = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 43)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 43)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 43)) ;
  {
  const GALGAS_tableViewControllerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_node_1764, temp_0, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 44)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_node_1764, object->mProperty_mClassName COMMA_SOURCE_FILE ("table-view-controller.galgas", 45)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = object->mProperty_mIsRoot.operator_not (SOURCE_FILE ("table-view-controller.galgas", 46)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1764, GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 47)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 47)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 47)) COMMA_SOURCE_FILE ("table-view-controller.galgas", 47)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mRootEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        ioArgument_ioGraph.setter_addEdge (var_node_1764, GALGAS_lstring::constructor_new (object->mProperty_mRootEntityName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 49)).add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 49)), object->mProperty_mToManyPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 49)) COMMA_SOURCE_FILE ("table-view-controller.galgas", 49)) ;
        }
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_tableViewControllerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST.mSlotID,
                                               extensionMethod_tableViewControllerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_tableViewControllerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_tableViewControllerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension getter '@tableViewControllerDeclarationAST lkey'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_tableViewControllerDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_tableViewControllerDeclarationAST * object = (const cPtr_tableViewControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_tableViewControllerDeclarationAST) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_mClassName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 56)).add_operation (object->mProperty_mControllerName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 56)), object->mProperty_mControllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 56)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_tableViewControllerDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST.mSlotID,
                             extensionGetter_tableViewControllerDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_tableViewControllerDeclarationAST_lkey (defineExtensionGetter_tableViewControllerDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@tableViewControllerDeclarationAST firstAnalysisPhase'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_tableViewControllerDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tableViewControllerDeclarationAST * object = (const cPtr_tableViewControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_tableViewControllerDeclarationAST) ;
  cMapElement_classMap * objectArray_7477 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mProperty_mClassName, kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("table-view-controller.galgas", 214)) ;
  if (NULL != objectArray_7477) {
      macroValidSharedObject (objectArray_7477, cMapElement_classMap) ;
    GALGAS_actionMap temp_0 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("table-view-controller.galgas", 217)) ;
    temp_0.addAssign_operation (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("table-view-controller.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 217)) ;
    temp_0.addAssign_operation (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("table-view-controller.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 217)) ;
    GALGAS_actionMap var_controllerActions_7592 = temp_0 ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = object->mProperty_mIsRoot.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_propertyMap var_rootProperties_7740 ;
        GALGAS_classKind joker_7719 ; // Joker input parameter
        GALGAS_actionMap joker_7742_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_7742_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_7719, var_rootProperties_7740, joker_7742_2, joker_7742_1, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 219)) ;
        GALGAS_propertyKind var_classKind_7813 ;
        GALGAS_actionMap joker_7815 ; // Joker input parameter
        var_rootProperties_7740.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_7813, joker_7815, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 220)) ;
        switch (var_classKind_7813.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 223)), GALGAS_string ("a tomany relationship is required here"), fixItArray2  COMMA_SOURCE_FILE ("table-view-controller.galgas", 223)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8439 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_7813.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_8439->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_graphic = extractPtr_8439->mAssociatedValue2 ;
            const GALGAS_bool extractedValue_isEntity = extractPtr_8439->mAssociatedValue3 ;
            GALGAS_propertyKind var_kind_8007 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("table-view-controller.galgas", 225)) ;
            {
            objectArray_7477->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_8007, var_controllerActions_7592, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 230)) ;
            }
            objectArray_7477->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_tableViewControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), GALGAS_string ("rootObject.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 234)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 235)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 232))  COMMA_SOURCE_FILE ("table-view-controller.galgas", 232)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 239)), GALGAS_string ("a tomany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("table-view-controller.galgas", 239)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 241)), GALGAS_string ("a tomany relationship is required here"), fixItArray4  COMMA_SOURCE_FILE ("table-view-controller.galgas", 241)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 243)), GALGAS_string ("a tomany relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("table-view-controller.galgas", 243)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_propertyKind var_classKind_8838 ;
      GALGAS_actionMap joker_8840 ; // Joker input parameter
      objectArray_7477->mProperty_mPropertyMap.method_searchKey (object->mProperty_mToManyPropertyName, var_classKind_8838, joker_8840, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 246)) ;
      switch (var_classKind_8838.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 249)), GALGAS_string ("a tomany relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("table-view-controller.galgas", 249)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_9452 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_classKind_8838.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_9452->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_graphic = extractPtr_9452->mAssociatedValue2 ;
          const GALGAS_bool extractedValue_isEntity = extractPtr_9452->mAssociatedValue3 ;
          GALGAS_propertyKind var_kind_9032 = GALGAS_propertyKind::constructor_arrayController (extractedValue_typeName, extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("table-view-controller.galgas", 251)) ;
          {
          objectArray_7477->mProperty_mPropertyMap.setter_insertKey (object->mProperty_mControllerName, var_kind_9032, var_controllerActions_7592, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 256)) ;
          }
          objectArray_7477->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_tableViewControllerPropertyGeneration::constructor_new (object->mProperty_mControllerName.getter_string (HERE), object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 260)), object->mProperty_mClassName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 261)), extractedValue_isEntity  COMMA_SOURCE_FILE ("table-view-controller.galgas", 258))  COMMA_SOURCE_FILE ("table-view-controller.galgas", 258)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 265)), GALGAS_string ("a tomany relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("table-view-controller.galgas", 265)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 267)), GALGAS_string ("a tomany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("table-view-controller.galgas", 267)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mRootEntityName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 269)), GALGAS_string ("a tomany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("table-view-controller.galgas", 269)) ;
        }
        break ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_tableViewControllerDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST.mSlotID,
                                           extensionMethod_tableViewControllerDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_tableViewControllerDeclarationAST_firstAnalysisPhase (defineExtensionMethod_tableViewControllerDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@tableViewControllerDeclarationAST secondAnalysisPhase'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_tableViewControllerDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tableViewControllerDeclarationAST * object = (const cPtr_tableViewControllerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_tableViewControllerDeclarationAST) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("table-view-controller.galgas", 284)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("table-view-controller.galgas", 284)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("table-view-controller.galgas", 284)) ;
  GALGAS_stringset var_attributes_10332 = temp_0 ;
  GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 285)) ;
  temp_1.addAssign_operation (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("table-view-controller.galgas", 285))  COMMA_SOURCE_FILE ("table-view-controller.galgas", 285)) ;
  GALGAS_typeKindList var_allowedTypes_10418 = temp_1 ;
  GALGAS_stringset var_definedAttributes_10478 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("table-view-controller.galgas", 286)) ;
  GALGAS__32_stringlist var_attributeListForGeneration_10525 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 287)) ;
  cEnumerator_tableViewControllerAttributListAST enumerator_10588 (object->mProperty_mTableViewControllerAttributListAST, kENUMERATION_UP) ;
  while (enumerator_10588.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_attributes_10332.getter_hasKey (enumerator_10588.current_mAttributeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("table-view-controller.galgas", 289)).operator_not (SOURCE_FILE ("table-view-controller.galgas", 289)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10588.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("table-view-controller.galgas", 290)), GALGAS_string ("unknown attribute"), fixItArray3  COMMA_SOURCE_FILE ("table-view-controller.galgas", 290)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_definedAttributes_10478.getter_hasKey (enumerator_10588.current_mAttributeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("table-view-controller.galgas", 291)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_10588.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("table-view-controller.galgas", 292)), GALGAS_string ("attribute multiply defined"), fixItArray5  COMMA_SOURCE_FILE ("table-view-controller.galgas", 292)) ;
        }
      }
      if (kBoolFalse == test_4) {
        var_definedAttributes_10478.addAssign_operation (enumerator_10588.current_mAttributeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 294)) ;
      }
    }
    GALGAS_string var_valueAsString_10907 ;
    callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_10588.current_mAttributeValue (HERE).ptr (), var_allowedTypes_10418, var_valueAsString_10907, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 296)) ;
    var_attributeListForGeneration_10525.addAssign_operation (enumerator_10588.current_mAttributeName (HERE).getter_string (HERE), var_valueAsString_10907  COMMA_SOURCE_FILE ("table-view-controller.galgas", 297)) ;
    enumerator_10588.gotoNextObject () ;
  }
  cEnumerator_stringset enumerator_10998 (var_attributes_10332, kENUMERATION_UP) ;
  while (enumerator_10998.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_definedAttributes_10478.getter_hasKey (enumerator_10998.current (HERE) COMMA_SOURCE_FILE ("table-view-controller.galgas", 300)).operator_not (SOURCE_FILE ("table-view-controller.galgas", 300)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mControllerName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 301)), GALGAS_string ("attribute '").add_operation (enumerator_10998.current (HERE), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 301)).add_operation (GALGAS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 301)), fixItArray7  COMMA_SOURCE_FILE ("table-view-controller.galgas", 301)) ;
      }
    }
    enumerator_10998.gotoNextObject () ;
  }
  GALGAS_propertyMap var_boundModelPropertyMap_11172 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = object->mProperty_mIsRoot.boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_classKind joker_11266 ; // Joker input parameter
      GALGAS_actionMap joker_11307_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_11307_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mRootEntityName, joker_11266, var_boundModelPropertyMap_11172, joker_11307_2, joker_11307_1, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 307)) ;
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_classKind joker_11394 ; // Joker input parameter
    GALGAS_actionMap joker_11435_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_11435_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_11394, var_boundModelPropertyMap_11172, joker_11435_2, joker_11435_1, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 314)) ;
  }
  GALGAS_propertyKind var_boundModelClassKind_11557 ;
  GALGAS_actionMap joker_11564 ; // Joker input parameter
  var_boundModelPropertyMap_11172.method_searchKey (object->mProperty_mToManyPropertyName, var_boundModelClassKind_11557, joker_11564, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 321)) ;
  GALGAS_actionMap var_actionMap_11679 ;
  GALGAS_propertyMap var_propertyMap_11706 ;
  GALGAS_tableViewControllerModelKind var_arrayControllerModelKind_11763 ;
  GALGAS_bool var_graphic_11779 ;
  GALGAS_string var_elementTypeName_11805 ;
  switch (var_boundModelClassKind_11557.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 334)), GALGAS_string ("a tomany property is required here"), fixItArray9  COMMA_SOURCE_FILE ("table-view-controller.galgas", 334)) ;
      var_graphic_11779.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_11763.drop () ; // Release error dropped variable
      var_propertyMap_11706.drop () ; // Release error dropped variable
      var_actionMap_11679.drop () ; // Release error dropped variable
      var_elementTypeName_11805.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_12373 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_boundModelClassKind_11557.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_12373->mAssociatedValue0 ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_12373->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isGraphic = extractPtr_12373->mAssociatedValue2 ;
      const GALGAS_bool extractedValue_isEntity = extractPtr_12373->mAssociatedValue3 ;
      var_elementTypeName_11805 = extractedValue_typeName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 338)) ;
      var_graphic_11779 = extractedValue_isGraphic ;
      GALGAS_tableViewControllerModelKind temp_10 ;
      const enumGalgasBool test_11 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("table-view-controller.galgas", 340)).boolEnum () ;
      if (kBoolTrue == test_11) {
        temp_10 = GALGAS_tableViewControllerModelKind::constructor_transientArray (SOURCE_FILE ("table-view-controller.galgas", 341)) ;
      }else if (kBoolFalse == test_11) {
        GALGAS_tableViewControllerModelKind temp_12 ;
        const enumGalgasBool test_13 = extractedValue_isEntity.boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = GALGAS_tableViewControllerModelKind::constructor_entityArray (SOURCE_FILE ("table-view-controller.galgas", 342)) ;
        }else if (kBoolFalse == test_13) {
          temp_12 = GALGAS_tableViewControllerModelKind::constructor_classArray (SOURCE_FILE ("table-view-controller.galgas", 342)) ;
        }
        temp_10 = temp_12 ;
      }
      var_arrayControllerModelKind_11763 = temp_10 ;
      GALGAS_classKind joker_12344 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_12371 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_12344, var_propertyMap_11706, var_actionMap_11679, joker_12371, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 344)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 346)), GALGAS_string ("a tomany property is required here"), fixItArray14  COMMA_SOURCE_FILE ("table-view-controller.galgas", 346)) ;
      var_graphic_11779.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_11763.drop () ; // Release error dropped variable
      var_propertyMap_11706.drop () ; // Release error dropped variable
      var_actionMap_11679.drop () ; // Release error dropped variable
      var_elementTypeName_11805.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 350)), GALGAS_string ("a tomany property is required here"), fixItArray15  COMMA_SOURCE_FILE ("table-view-controller.galgas", 350)) ;
      var_graphic_11779.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_11763.drop () ; // Release error dropped variable
      var_propertyMap_11706.drop () ; // Release error dropped variable
      var_actionMap_11679.drop () ; // Release error dropped variable
      var_elementTypeName_11805.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (object->mProperty_mToManyPropertyName.getter_location (SOURCE_FILE ("table-view-controller.galgas", 354)), GALGAS_string ("a tomany property is required here"), fixItArray16  COMMA_SOURCE_FILE ("table-view-controller.galgas", 354)) ;
      var_graphic_11779.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_11763.drop () ; // Release error dropped variable
      var_propertyMap_11706.drop () ; // Release error dropped variable
      var_actionMap_11679.drop () ; // Release error dropped variable
      var_elementTypeName_11805.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_tableViewControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_13031 = GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 358)) ;
  GALGAS_tableViewControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_13133 = GALGAS_tableViewControllerSortedColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 359)) ;
  cEnumerator_tableViewControllerBoundColumnListAST enumerator_13189 (object->mProperty_mTableViewControllerBoundColumnListAST, kENUMERATION_UP) ;
  while (enumerator_13189.hasCurrentObject ()) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (kIsNotEqual, enumerator_13189.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_17) {
        var_actionMap_11679.method_searchKey (enumerator_13189.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 363)) ;
      }
    }
    GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_13463 = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 366)) ;
    {
    routine_analyzeRegularBinding (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("table-view-controller.galgas", 368)), ioArgument_ioSemanticContext, var_propertyMap_11706, enumerator_13189.current_mColumnOutletTypeName (HERE), GALGAS_string ("<<not used>>"), enumerator_13189.current_mColumnBindingAST (HERE).getter_mRegularBindingList (HERE), GALGAS_string ("object"), var_regularBindingsGenerationList_13463, inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 367)) ;
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = GALGAS_bool (kIsNotEqual, enumerator_13189.current_mSortPropertyName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_propertyKind var_sortPropertyKind_13895 ;
        GALGAS_actionMap joker_13905 ; // Joker input parameter
        var_propertyMap_11706.method_searchKey (enumerator_13189.current_mSortPropertyName (HERE), var_sortPropertyKind_13895, joker_13905, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 379)) ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extensionGetter_isComparable (var_sortPropertyKind_13895, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 384)).operator_not (SOURCE_FILE ("table-view-controller.galgas", 384)).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_13189.current_mSortPropertyName (HERE).getter_location (SOURCE_FILE ("table-view-controller.galgas", 385)), GALGAS_string ("this property is not comparable"), fixItArray20  COMMA_SOURCE_FILE ("table-view-controller.galgas", 385)) ;
          }
        }
        var_arrayControllerSortedColumnListForGeneration_13133.addAssign_operation (enumerator_13189.current_mColumnName (HERE).getter_string (HERE), var_sortPropertyKind_13895, enumerator_13189.current_mSortPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 387)) ;
      }
    }
    var_arrayControllerBoundColumnListForGeneration_13031.addAssign_operation (enumerator_13189.current_mColumnName (HERE).getter_string (HERE), enumerator_13189.current_mColumnOutletTypeName (HERE).getter_string (HERE), enumerator_13189.current_mColumnBindingAST (HERE).getter_mRunActionName (HERE).getter_string (HERE), var_regularBindingsGenerationList_13463  COMMA_SOURCE_FILE ("table-view-controller.galgas", 393)) ;
    ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_13189.current_mColumnOutletTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 398)) ;
    enumerator_13189.gotoNextObject () ;
  }
  GALGAS_tableViewControllerFilterListForGeneration var_arrayControllerFilterListForGeneration_14673 = GALGAS_tableViewControllerFilterListForGeneration::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 401)) ;
  cEnumerator_lstringlist enumerator_14726 (object->mProperty_mFilterProperties, kENUMERATION_UP) ;
  while (enumerator_14726.hasCurrentObject ()) {
    GALGAS_propertyKind var_columnKind_14818 ;
    GALGAS_actionMap joker_14826 ; // Joker input parameter
    var_propertyMap_11706.method_searchKey (enumerator_14726.current_mValue (HERE), var_columnKind_14818, joker_14826, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 403)) ;
    var_arrayControllerFilterListForGeneration_14673.addAssign_operation (enumerator_14726.current_mValue (HERE).getter_string (HERE), var_columnKind_14818  COMMA_SOURCE_FILE ("table-view-controller.galgas", 408)) ;
    enumerator_14726.gotoNextObject () ;
  }
  GALGAS_string temp_21 ;
  const enumGalgasBool test_22 = object->mProperty_mIsRoot.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_string ("self.rootObject.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 411)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 411)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_string ("self.").add_operation (object->mProperty_mToManyPropertyName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 412)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 412)) ;
  }
  GALGAS_string var_modelString_14942 = temp_21 ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_tableViewControllerGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("table-view-controller.galgas", 416)), object->mProperty_mControllerName, var_arrayControllerFilterListForGeneration_14673, var_modelString_14942, var_arrayControllerBoundColumnListForGeneration_13031, var_arrayControllerSortedColumnListForGeneration_13133, GALGAS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_11805, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 422)), var_arrayControllerModelKind_11763, var_elementTypeName_11805, var_graphic_11779, var_attributeListForGeneration_10525  COMMA_SOURCE_FILE ("table-view-controller.galgas", 415))  COMMA_SOURCE_FILE ("table-view-controller.galgas", 415)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_tableViewControllerDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST.mSlotID,
                                            extensionMethod_tableViewControllerDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_tableViewControllerDeclarationAST_secondAnalysisPhase (defineExtensionMethod_tableViewControllerDeclarationAST_secondAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@tableViewControllerPropertyGeneration declarationCode'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_tableViewControllerPropertyGeneration_declarationCode (const cPtr_propertyGeneration * inObject,
                                                                                            const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_tableViewControllerPropertyGeneration * object = (const cPtr_tableViewControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_tableViewControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 444)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 444)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Array controller: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 445)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 445)), inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 445)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint ((uint32_t) 116U)  COMMA_SOURCE_FILE ("table-view-controller.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 446)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 446)) ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 447)).add_operation (GALGAS_string (" = ArrayController_"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 447)).add_operation (object->mProperty_mOwnerName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 447)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 447)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 447)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 447)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_tableViewControllerPropertyGeneration_declarationCode (void) {
  enterExtensionGetter_declarationCode (kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration.mSlotID,
                                        extensionGetter_tableViewControllerPropertyGeneration_declarationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_tableViewControllerPropertyGeneration_declarationCode (defineExtensionGetter_tableViewControllerPropertyGeneration_declarationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@tableViewControllerPropertyGeneration configurationCode'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_tableViewControllerPropertyGeneration_configurationCode (const cPtr_propertyGeneration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_tableViewControllerPropertyGeneration * object = (const cPtr_tableViewControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_tableViewControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 453)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 453)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mUsesManagedObjectContext.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 455)).add_operation (GALGAS_string (".setManagedObjectContext (self.managedObjectContext)\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 455)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 457)).add_operation (GALGAS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 457)).add_operation (object->mProperty_mModelString, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 457)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 457)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_tableViewControllerPropertyGeneration_configurationCode (void) {
  enterExtensionGetter_configurationCode (kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration.mSlotID,
                                          extensionGetter_tableViewControllerPropertyGeneration_configurationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_tableViewControllerPropertyGeneration_configurationCode (defineExtensionGetter_tableViewControllerPropertyGeneration_configurationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@tableViewControllerPropertyGeneration populateExplorerWindowCode'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_tableViewControllerPropertyGeneration_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_tableViewControllerPropertyGeneration * object = (const cPtr_tableViewControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_tableViewControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 463)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 463)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 464)).add_operation (GALGAS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 464)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 464)).add_operation (GALGAS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 464)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_tableViewControllerPropertyGeneration_populateExplorerWindowCode (void) {
  enterExtensionGetter_populateExplorerWindowCode (kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration.mSlotID,
                                                   extensionGetter_tableViewControllerPropertyGeneration_populateExplorerWindowCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_tableViewControllerPropertyGeneration_populateExplorerWindowCode (defineExtensionGetter_tableViewControllerPropertyGeneration_populateExplorerWindowCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@tableViewControllerPropertyGeneration terminationCode'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_tableViewControllerPropertyGeneration_terminationCode (const cPtr_propertyGeneration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_tableViewControllerPropertyGeneration * object = (const cPtr_tableViewControllerPropertyGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_tableViewControllerPropertyGeneration) ;
  result_result = GALGAS_string ("  //--- Array controller property: ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 470)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 470)) ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 471)).add_operation (GALGAS_string (".unbind_model ()\n"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 471)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_tableViewControllerPropertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration.mSlotID,
                                        extensionGetter_tableViewControllerPropertyGeneration_terminationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_tableViewControllerPropertyGeneration_terminationCode (defineExtensionGetter_tableViewControllerPropertyGeneration_terminationCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Filewrapper 'tableViewControllerGenerationTemplate'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_tableViewControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_tableViewControllerGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_tableViewControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_tableViewControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_tableViewControllerGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Filewrapper template 'tableViewControllerGenerationTemplate tableViewControllerImplementationInSwift'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_tableViewControllerGenerationTemplate_tableViewControllerImplementationInSwift (C_Compiler * inCompiler,
                                                                                                                  const GALGAS_string & in_OWNER_5F_NAME,
                                                                                                                  const GALGAS_string & in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME,
                                                                                                                  const GALGAS_tableViewControllerFilterListForGeneration & in_FILTER_5F_PROPERTIES,
                                                                                                                  const GALGAS_string & /* in_MODEL_5F_STRING */,
                                                                                                                  const GALGAS_tableViewControllerModelKind & in_MODEL_5F_KIND,
                                                                                                                  const GALGAS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                                  const GALGAS_tableViewControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                                  const GALGAS_tableViewControllerSortedColumnListForGeneration & in_SORTED_5F_COLUMNS,
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
  result << GALGAS_string ("ArrayController_").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 12)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 12)).add_operation (in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 12)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "final class ArrayController_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue () ;
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
  result << in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue () ;
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
    "    self.setSelectedArrayComputeFunction ()\n"
    "  //--- Set sorted array compute function\n"
    "    self.setFilterAndSortFunction ()\n"
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
    "          if let column = tableView.tableColumn (withIdentifier: NSUserInterfaceItemIdentifier (rawValue: key)) {\n"
    "            tableView.setIndicatorImage (\n"
    "              first \? (ascending \? NSImage (named: NSImage.Name (\"NSAscendingSortIndicator\"))! : NSImage (named: NSImage.Name (\"NSDescendingSortIndica"
    "tor\"))!) : nil,\n"
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
  GALGAS_uint index_4501_ (0) ;
  if (in_ATTRIBUTE_5F_VALUES.isValid ()) {
    cEnumerator__32_stringlist enumerator_4501 (in_ATTRIBUTE_5F_VALUES, kENUMERATION_UP) ;
    while (enumerator_4501.hasCurrentObject ()) {
      result << "  private let " ;
      result << enumerator_4501.current_mValue_30_ (HERE).stringValue () ;
      result << " = " ;
      result << enumerator_4501.current_mValue_31_ (HERE).stringValue () ;
      result << "\n" ;
      index_4501_.increment () ;
      enumerator_4501.gotoNextObject () ;
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
  GALGAS_uint index_5569_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING.isValid ()) {
    cEnumerator_stringset enumerator_5569 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING, kENUMERATION_UP) ;
    while (enumerator_5569.hasCurrentObject ()) {
      result << "    inModel.addEBObserverOf_" ;
      result << enumerator_5569.current_key (HERE).stringValue () ;
      result << " (self.sortedArray_property)\n" ;
      index_5569_.increment () ;
      enumerator_5569.gotoNextObject () ;
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
  GALGAS_uint index_6447_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING.isValid ()) {
    cEnumerator_stringset enumerator_6447 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING_5F_AND_5F_FILERING, kENUMERATION_UP) ;
    while (enumerator_6447.hasCurrentObject ()) {
      result << "//    mModel\?.removeEBObserverOf_" ;
      result << enumerator_6447.current_key (HERE).stringValue () ;
      result << " (self.sortedArray_property)\n" ;
      index_6447_.increment () ;
      enumerator_6447.gotoNextObject () ;
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
    "  private weak var mManagedObjectContext : EBManagedObjectContext\? = nil // SOULD BE WEAK\n"
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
  result << in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue () ;
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
      "   //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  var objectArray : [EBGraphicManagedObject] {\n"
      "    return self.mModel\?.propval \?\? []\n"
      "  }\n"
      "\n"
      " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  func computeSelectionShape () {\n"
      "    var selectionDisplayArray = [EBShape] ()\n"
      "    for object in self.mModel\?.propval \?\? [] {\n"
      "      if !mSelectedSet.mSet.contains (object) {\n"
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
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_SORTED_5F_COLUMNS.getter_length (SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 315)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    GALGAS_uint index_12727_ (0) ;
    if (in_SORTED_5F_COLUMNS.isValid ()) {
      cEnumerator_tableViewControllerSortedColumnListForGeneration enumerator_12727 (in_SORTED_5F_COLUMNS, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_12727 = enumerator_12727.hasCurrentObject () ;
      if (nonEmpty_enumerator_12727) {
        result << "      " ;
      }
      while (enumerator_12727.hasCurrentObject ()) {
        result << "if column == \"" ;
        result << enumerator_12727.current_mColumnName (HERE).stringValue () ;
        result << "\" {\n"
          "        order = compare_" ;
        result << extensionGetter_swiftTypeName (enumerator_12727.current_mSortPropertyKind (HERE), inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 326)).stringValue () ;
        result << " (left: left." ;
        result << enumerator_12727.current_mObservablePropertyForSorting (HERE).stringValue () ;
        result << "_property, right:right." ;
        result << enumerator_12727.current_mObservablePropertyForSorting (HERE).stringValue () ;
        result << "_property)\n" ;
        if (enumerator_12727.hasNextObject ()) {
          result << "      }else " ;
        }
        index_12727_.increment () ;
        enumerator_12727.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_12727) {
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
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, in_FILTER_5F_PROPERTIES.getter_length (SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 359)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_SORTED_5F_COLUMNS.getter_length (SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 360)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    result << extensionGetter_filterCode (in_FILTER_5F_PROPERTIES, GALGAS_string ("arrayControllerFilter_").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 370)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 370)).add_operation (in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 370)), inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 370)).stringValue () ;
    result << "          }\n"
      "          if isMultiple {\n"
      "            return .multiple\n"
      "          }else{\n" ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_SORTED_5F_COLUMNS.getter_length (SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 375)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  GALGAS_uint index_16808_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    cEnumerator_tableViewControllerBoundColumnListForGeneration enumerator_16808 (in_BOUND_5F_COLUMNS, kENUMERATION_UP) ;
    while (enumerator_16808.hasCurrentObject ()) {
      result << "    //--- Check '" ;
      result << enumerator_16808.current_mColumnName (HERE).stringValue () ;
      result << "' column\n"
        "      if let column : NSTableColumn = tableView.tableColumn (withIdentifier: NSUserInterfaceItemIdentifier (rawValue: \"" ;
      result << enumerator_16808.current_mColumnName (HERE).stringValue () ;
      result << "\")) {\n"
        "        column.sortDescriptorPrototype = nil\n"
        "      }else{\n"
        "        presentErrorWindow (file: file, line: line, errorMessage:\"\\\"" ;
      result << enumerator_16808.current_mColumnName (HERE).stringValue () ;
      result << "\\\" column view unknown\")\n"
        "      }\n" ;
      index_16808_.increment () ;
      enumerator_16808.gotoNextObject () ;
    }
  }
  result << "    //--- Set descriptors from first column of table view\n"
    "      var newSortDescriptorArray = [(String, Bool)] ()\n"
    "      for column in tableView.tableColumns {\n"
    "        newSortDescriptorArray.append ((column.identifier.rawValue, true)) // Ascending\n"
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
    "      if inTableColumn.identifier == NSUserInterfaceItemIdentifier (columnName) {\n"
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
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_BOUND_5F_COLUMNS.getter_length (SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 543)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "    return nil \n" ;
  }else if (kBoolFalse == test_9) {
    result << "    switch self.sortedArray_property.prop {\n"
      "    case .empty, .multiple :\n"
      "      return nil\n"
      "    case .single (let v) :\n"
      "      let result : NSTableCellView = tableView.makeView (withIdentifier: (inTableColumn\?.identifier)!, owner:self) as! NSTableCellView\n"
      "      if !reuseTableViewCells () {\n"
      "        result.identifier = nil // So result cannot be reused, will be freed\n"
      "      }\n"
      "      let object = v.objectAtIndex (inRowIndex, file: #file, line: #line)\n"
      "      " ;
    GALGAS_uint index_22318_ (0) ;
    if (in_BOUND_5F_COLUMNS.isValid ()) {
      cEnumerator_tableViewControllerBoundColumnListForGeneration enumerator_22318 (in_BOUND_5F_COLUMNS, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_22318 = enumerator_22318.hasCurrentObject () ;
      while (enumerator_22318.hasCurrentObject ()) {
        result << "if inTableColumn\?.identifier == NSUserInterfaceItemIdentifier (\"" ;
        result << enumerator_22318.current_mColumnName (HERE).stringValue () ;
        result << "\") {\n"
          "        if let cell : " ;
        result << enumerator_22318.current_mColumnOutletTypeName (HERE).stringValue () ;
        result << "_TableViewCell = result as\? " ;
        result << enumerator_22318.current_mColumnOutletTypeName (HERE).stringValue () ;
        result << "_TableViewCell {\n"
          "          cell.mUnbindFunction = { [weak cell] in\n" ;
        const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_22318.current_mRunAction (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_10) {
          result << "            cell\?.mCellOutlet\?.target = nil\n"
            "            cell\?.mCellOutlet\?.action = nil\n" ;
        }else if (kBoolFalse == test_10) {
        }
        GALGAS_uint index_22779_ (0) ;
        if (enumerator_22318.current_mRegularBindingsGenerationList (HERE).isValid ()) {
          cEnumerator_regularBindingsGenerationList enumerator_22779 (enumerator_22318.current_mRegularBindingsGenerationList (HERE), kENUMERATION_UP) ;
          while (enumerator_22779.hasCurrentObject ()) {
            result << "            cell\?.mCellOutlet\?.unbind_" ;
            result << enumerator_22779.current_mBindingName (HERE).stringValue () ;
            result << " ()\n" ;
            index_22779_.increment () ;
            enumerator_22779.gotoNextObject () ;
          }
        }
        result << "          }\n"
          "          cell.mUnbindFunction\? ()\n" ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_22318.current_mRunAction (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          result << "          cell.mCellOutlet\?.target = object\n"
            "          cell.mCellOutlet\?.action = #selector (" ;
          result << in_ELEMENT_5F_TYPE_5F_NAME.stringValue () ;
          result << "." ;
          result << enumerator_22318.current_mRunAction (HERE).stringValue () ;
          result << "(_:))\n" ;
        }else if (kBoolFalse == test_11) {
        }
        GALGAS_uint index_23148_ (0) ;
        if (enumerator_22318.current_mRegularBindingsGenerationList (HERE).isValid ()) {
          cEnumerator_regularBindingsGenerationList enumerator_23148 (enumerator_22318.current_mRegularBindingsGenerationList (HERE), kENUMERATION_UP) ;
          while (enumerator_23148.hasCurrentObject ()) {
            result << "          cell.mCellOutlet\?.bind_" ;
            result << enumerator_23148.current_mBindingName (HERE).stringValue () ;
            result << " (" ;
            GALGAS_uint index_23241_ (0) ;
            if (enumerator_23148.current_mBoundObjectList (HERE).isValid ()) {
              cEnumerator_boundObjectList enumerator_23241 (enumerator_23148.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
              while (enumerator_23241.hasCurrentObject ()) {
                result << enumerator_23241.current_mBoundObjectString (HERE).stringValue () ;
                result << ", " ;
                index_23241_.increment () ;
                enumerator_23241.gotoNextObject () ;
              }
            }
            result << "file: #file, line: #line" ;
            result << enumerator_23148.current_mBindingOptionsString (HERE).stringValue () ;
            result << ")\n" ;
            index_23148_.increment () ;
            enumerator_23148.gotoNextObject () ;
          }
        }
        result << "        }\n"
          "      " ;
        if (enumerator_22318.hasNextObject ()) {
          result << "}else " ;
        }
        index_22318_.increment () ;
        enumerator_22318.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_22318) {
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
  case GALGAS_tableViewControllerModelKind::kNotBuilt :
    break ;
  case GALGAS_tableViewControllerModelKind::kEnum_transientArray :
    {
    }
    break ;
  case GALGAS_tableViewControllerModelKind::kEnum_classArray :
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
  case GALGAS_tableViewControllerModelKind::kEnum_entityArray :
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
      result << " (managedObjectContext: managedObjectContext, file: #file, #line)\n"
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
  result << GALGAS_string ("SelectedSet_").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 1068)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 1068)).add_operation (in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("table-view-controller.swift.galgasTemplate", 1068)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "final class SelectedSet_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue () ;
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
//                     Filewrapper template 'tableViewControllerGenerationTemplate filterFunction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_tableViewControllerGenerationTemplate_filterFunction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & in_OWNER_5F_NAME,
                                                                                        const GALGAS_string & in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME,
                                                                                        const GALGAS_tableViewControllerFilterListForGeneration & in_FILTER_5F_PROPERTIES
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
  result << in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_546_ (0) ;
  if (in_FILTER_5F_PROPERTIES.isValid ()) {
    cEnumerator_tableViewControllerFilterListForGeneration enumerator_546 (in_FILTER_5F_PROPERTIES, kENUMERATION_UP) ;
    while (enumerator_546.hasCurrentObject ()) {
      result << "_ " ;
      result << enumerator_546.current_mFilterPropertyName (HERE).stringValue () ;
      result << ": " ;
      result << extensionGetter_swiftTypeName (enumerator_546.current_mFilterPropertyKind (HERE), inCompiler COMMA_SOURCE_FILE ("table-view-controller-filter-function.swift.galgasTemplate", 11)).stringValue () ;
      if (enumerator_546.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_546_.increment () ;
      enumerator_546.gotoNextObject () ;
    }
  }
  result << ") -> Bool {\n"
    "\n" ;
  return GALGAS_string (result) ;
}

